Project (Duplo)
cmake_minimum_required (VERSION 2.6)

Set (PACKAGE "Duplo")
Set (VERSION "0.2.0+")

Set (DUPLO_SOURCES
	./src/StringUtil.cpp
	./src/HashUtil.cpp
	./src/ArgumentParser.cpp
	./src/TextFile.cpp
	./src/SourceFile.cpp
	./src/SourceLine.cpp
	./src/Duplo.cpp
	./src/FileType.cpp
)

Add_Executable (duplo ${DUPLO_SOURCES})
