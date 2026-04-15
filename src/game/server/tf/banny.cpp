#include "cbase.h"
#include "tf_player.h"
#include "util.h"
#include "convar.h"

CON_COMMAND( banny, "forces respawn" )
{
	CTFPlayer *player = ToTFPlayer( UTIL_GetCommandClient() );
	if ( !player )
		return;

	Msg( "BANNYING MY BIND\n" );
	player->CheckInstantLoadoutRespawn( true );
}
