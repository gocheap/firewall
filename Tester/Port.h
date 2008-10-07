#pragma once

class Port
{
public:
	Port();
	Port(int Port, int State);
	Port(const Port &other);
	~Port();
	bool operator==(const Port &other)const;
	bool operator<(const Port &other)const;
	const int GetPort()const;
private:
	int port;
	int *usage;
	int *state;
};

typedef std::vector<Port> Ports;
typedef std::vector<Port>::iterator PortsIterator;