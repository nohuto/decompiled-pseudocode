/*
 * XREFs of VfPacketFindAndLock @ 0x140ADA0EC
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1405CFB10 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140ADE768 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPacketFindAndLock(__int64 a1)
{
  return VfIrpDatabaseEntryFindAndLock(a1);
}
