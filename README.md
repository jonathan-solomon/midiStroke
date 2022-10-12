# midiStroke
MIDI to Keystroke Macro convertor for OS X

This is a fork of Charlie Roberts' work that makes some changes to suit my needs better.

Changes from original:
- Note On/Off messages are translated separately to key down/up events
  - This means that keys will be held down as long as you hold the MIDI note down
  - CC events are also done this way, with a value of 0 being off and whatever value you enter being on
  - This was done to make this tool suitable for use with rhythm games such as Clone Hero.
- Added a display to the main window that shows the last MIDI message that was recieved, to aid with setting up translations
- Incorporated a few bug fixes that are currently open pull request on the original
- Added a button to manually save the configuration, so you don't need to worry about the app crashing without saving
- Builds on macOS 12 Monteray with no warnings or errors
