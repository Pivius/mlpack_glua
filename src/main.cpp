#include <GarrysMod/Lua/Interface.h>

using namespace GarrysMod::Lua;

static const char *TABLE_NAME = "mlpack";

GMOD_MODULE_OPEN() {
	LUA->CreateTable();
	LUA->SetField(INDEX_GLOBAL, TABLE_NAME);

	return 0;
}

GMOD_MODULE_CLOSE() {
	return 0;
}