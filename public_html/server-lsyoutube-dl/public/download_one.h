#!/bin/bash
if [ $2 = 'SI' ]; then
    cd /videos
    youtube-dl -x --audio-format mp3 $1
    
else
    if [ $3 = 0 ]; then
       cd /videos
       youtube-dl $1 
    else
       cd /videos
       youtube-dl $1 -f $3
    fi
fi
