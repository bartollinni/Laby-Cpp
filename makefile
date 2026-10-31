CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -02

TARGET = jp.exe
SOURCE = jp4.cpp

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

clean:
	rm -f $(TARGET)


