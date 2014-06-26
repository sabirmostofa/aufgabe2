#coding: utf8 
#env=Environment()
#env.Program( source= ['aufgabe1.c','eingabe_funk.c','funks.c','ausgabe_funk.c'], CCFLAGS='-std=c99  -Wall -Wextra -Werror' )


# Teil 1: Optionen
include_dateien = [ # wo wird nach .h Dateien gesucht?
 '.' # im lokalen Verzeichnis
]
c_standard = [ # Angaben zum Standard
 '-std=c99', # C99
 '-pedantic' # keine Erweiterungen zulaessig
]
warnungen = [ # Einstellungen zu Warnungen
 '-Wall', # viel meckern
 '-Wextra', # extra viel meckern
 '-Werror' # Warnungen sind Fehler
] 
# Teil 2: Definition des Environments
std = Environment(
 CCFLAGS = c_standard + warnungen,
 CPPPATH = include_dateien
) 
# Teil 3: Programm bauen
c_dateien = [ # hier C-Dateien einfuegen
  'main.c', #Datei enthält main
  'funks.c'
]
programm_name = 'aufgabe2' # hier Programmnamen festlegen 
std.Program(programm_name, c_dateien) # Programm bauen
