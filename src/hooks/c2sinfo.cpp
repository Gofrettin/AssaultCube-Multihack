#include <pch.h>
#include <base.h>

void Base::Hooks::c2sinfo(playerent* d)
{
	Hacks::Teleport();
	Hacks::Speedhack();
	return Data::o_c2sinfo(d);
}