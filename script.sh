#!/bin/sh

#提取ip
/sbin/ifconfig | awk '$0~/inet /&&$0!~/127.0.0.1/{print $2}' | grep -o -E "[0-9]+\.[0-9]+\.[0-9]+\.[0-9]+"
