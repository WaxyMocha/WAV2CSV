
# GetMic
Program that get microphone input and saves data in to audio file and, after processing to spectrum, to .csv file

How to use:

getmic arguments --audio path --csv path

-w, --wav; Output folder for audio files, if not specified, no audio files will be written

-c, --csv; Output folder for csv files, if not specified, no csv files will be written

-o, --opus; Output folder for opus files, if not specified, no opus files will be written

-q, --quiet; Do not output any information about progress

-d, --debug; Enable debug informaton

-C, --continue; Start saving files from the last one

-Cf, --continue_from; Start from specified file (number)

-E, --end_on; Stop on this file (number)

-D, --differential; Proceed only if average amplitude changed more than specified percent 

-p, --prefix; Set file prefix

-s, --sufix; Set file sufix

For linux users:

In source directory is the Makefile which let you compile program, executable will be in also in source dir

# Examples

getmic -w audio -c data ;Saves .wav files to "audio" folder and .csv to "data" folder

getmic -C --csv .\output\data ;Saves .csv files to ".\output\data" and continue from last saved file

getmic -Cf 101 -E 200 --opus .\audio -p "Audio file Nr. " -s " of 1000" ;Saves audio from "Audio file Nr. 101 of 1000" to ""Audio file Nr. 200 of 1000"

getmic -D 30 -c data ;Saves .csv to "data" only if sample different from previous more than 30% (in amplitude)
