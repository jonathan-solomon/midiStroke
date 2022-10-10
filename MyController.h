/* MyController */

#import <Cocoa/Cocoa.h>
#import <CoreMIDI/CoreMIDI.h>
#import <ApplicationServices/ApplicationServices.h>
#import "StartNote.h"
#import "EndNote.h"

@interface MyController : NSObject <NSApplicationDelegate>
{
    NSMutableArray * _startNotes;
}

- (NSString *) pathForDataFile;
- (void) saveDataToDisk;
- (void) loadDataFromDisk;
- (int) keyCodeForKeyString:(const char *)keyString;
- (void) midiConvert: (MIDIPacket *)packet endpoint:(MIDIPortRef *)ep;

@end

