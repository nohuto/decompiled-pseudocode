/*
 * XREFs of VfPacketReleaseLock @ 0x140ADE158
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1405D1FC0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AE28EC (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPacketReleaseLock(__int64 a1)
{
  return VfIrpDatabaseEntryReleaseLock(a1);
}
