/*
 * Multijoin.h
 *
 * Alex Lee, pumpkin studios,
 * multijoin caters for all the player comings and goings of each player
 */

#include "lib/netplay/netplay.h"

extern BOOL sendVersionCheck			(void);
extern BOOL recvVersionCheck			(NETMSG *pMsg);
extern BOOL intDisplayMultiJoiningStatus(UBYTE joinCount);
extern BOOL MultiPlayerLeave			(UDWORD dp);						// A player has left the game.
extern BOOL MultiPlayerJoin				(UDWORD dp);						// A Player has joined the game.
extern void setupNewPlayer				(UDWORD dpid, UDWORD player);		// stuff to do when player joins.
//extern BOOL UpdateClient				(DPID dest, UDWORD playerToSend);// send info about another player
extern void clearPlayer					(UDWORD player, BOOL quietly, BOOL removeOil);// wipe a player off the face of the earth.
//extern BOOL ProcessDroidOrders			(void);
//extern BOOL recvFeatures				(NETMSG *pMsg);
//extern UDWORD							arenaPlayersReceived;

typedef struct {
	DROID *psDroid;
	void  *psNext;
}DROIDSTORE, *LPDROIDSTORE;

extern DROIDSTORE *tempDroidList;
