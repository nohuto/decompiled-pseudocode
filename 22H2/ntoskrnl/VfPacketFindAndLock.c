/*
 * XREFs of VfPacketFindAndLock @ 0x140ADE0EC
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1405D1FC0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AE2768 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPacketFindAndLock(__int64 a1)
{
  return VfIrpDatabaseEntryFindAndLock(a1);
}
