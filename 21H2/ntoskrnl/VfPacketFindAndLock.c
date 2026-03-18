/*
 * XREFs of VfPacketFindAndLock @ 0x140A9C124
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x140601CA0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AA5A48 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPacketFindAndLock(__int64 a1)
{
  return VfIrpDatabaseEntryFindAndLock(a1);
}
