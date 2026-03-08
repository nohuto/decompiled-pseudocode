/*
 * XREFs of VfPacketReleaseLock @ 0x140ADA158
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1405CFB10 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140ADE8EC (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPacketReleaseLock(__int64 a1)
{
  return VfIrpDatabaseEntryReleaseLock(a1);
}
