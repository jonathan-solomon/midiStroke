/* MyController */

#import <Cocoa/Cocoa.h>
#import <CoreMIDI/CoreMIDI.h>
#import <ApplicationServices/ApplicationServices.h>
#import "StartNote.h"
#import "EndNote.h"

typedef enum MidiEventType {
    noteOn = 0,
    noteOff,
    cc,
    pb,
    as,
    pgm
} MidiEventType;

@interface MyController : NSObject <NSApplicationDelegate>
{
    NSMutableArray * _startNotes;
    IBOutlet id displayLabel;
}

- (NSString *) pathForDataFile;
- (void) saveDataToDisk;
- (void) loadDataFromDisk;
- (int) keyCodeForKeyString:(const char *)keyString;
- (void) midiConvert: (MIDIPacket *)packet endpoint:(MIDIPortRef *)ep;

@end

