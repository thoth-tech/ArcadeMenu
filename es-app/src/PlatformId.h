#pragma once
#ifndef ES_APP_PLATFORM_ID_H
#define ES_APP_PLATFORM_ID_H

namespace PlatformIds
{
	enum PlatformId : unsigned int
	{
		PLATFORM_UNKNOWN = 0,

		THREEDO, // name can't start with a constant
		AMIGA,
		AMSTRAD_CPC,
		APPLE_II,
		ARCADE,
		ATARI_800,
		ATARI_2600,
		ATARI_5200,
		ATARI_7800,
		ATARI_LYNX,
		ATARI_ST, // Atari ST/STE/Falcon
		ATARI_JAGUAR,
		ATARI_JAGUAR_CD,
		ATARI_XE,
		BBC_MICRO,
		COLECOVISION,
		COMMODORE_64,
		DAPHNE,
		INTELLIVISION,
		MAC_OS,
		XBOX,
		XBOX_360,
		MSX,
		NEOGEO,
		NEOGEO_CD,
		NEOGEO_POCKET,
		NEOGEO_POCKET_COLOR,
		NINTENDO_3DS,
		NINTENDO_64,
		NINTENDO_DS,
		FAMICOM_DISK_SYSTEM,
		NINTENDO_ENTERTAINMENT_SYSTEM,
		NINTENDO_POKEMON_MINI,
		FAIRCHILD_CHANNELF,
		GAME_BOY,
		GAME_BOY_ADVANCE,
		GAME_BOY_COLOR,
		NINTENDO_GAMECUBE,
		NINTENDO_WII,
		NINTENDO_WII_U,
		NINTENDO_VIRTUAL_BOY,
		NINTENDO_GAME_AND_WATCH,
		NINTENDO_SWITCH,
		OPENBOR,
		PC,
		SEGA_32X,
		SEGA_CD,
		SEGA_DREAMCAST,
		SEGA_GAME_GEAR,
		SEGA_GENESIS,
		SEGA_MASTER_SYSTEM,
		SEGA_MEGA_DRIVE,
		SEGA_SATURN,
		SEGA_SG1000,
		SAM_COUPE,
		PLAYSTATION,
		PLAYSTATION_2,
		PLAYSTATION_3,
		PLAYSTATION_4,
		PLAYSTATION_VITA,
		PLAYSTATION_PORTABLE,
		SUPER_NINTENDO,
		SCUMMVM,
		SHARP_X1,
		SHARP_X6800,
		SOLARUS,
		PICO_8,
		TIC_80,
		THOMSON_MOTO,
		NEC_PC_8801,
		NEC_PC_9801,
		TURBOGRAFX_16, // (aka PC Engine) HuCards only
		TURBOGRAFX_CD, // (aka PC Engine) CD-ROMs only
		NEC_PCFX,
		WONDERSWAN,
		WONDERSWAN_COLOR,
		ZX_SPECTRUM,
		ZX81_SINCLAR,
		VIDEOPAC_ODYSSEY2,
		VECTREX,
		TRS80_COLOR_COMPUTER,
		TANDY,
		ZMACHINE,

		PLATFORM_IGNORE, // do not allow scraping for this system
		PLATFORM_COUNT
	};

	PlatformId getPlatformId(const char* str);
	const char* getPlatformName(PlatformId id);
}

#endif // ES_APP_PLATFORM_ID_H
