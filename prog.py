import csv
import os
from realproj import *

while True:
    usr_choose=input('Would you like to (A)dd an user, (L)ist the current users, (D)elete an user or (F)ind an user? (Press Q then Enter to escape):')
    if usr_choose=='F':
        finduser()
    if usr_choose=='A':
        useradd()
    if usr_choose=='L':
        listusers()
    if usr_choose=='D':
        userdel()
    elif usr_choose=='Q':
        break