/*
 * XREFs of VfPacketReleaseLock @ 0x140A9C190
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x140601CA0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AA5BCC (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPacketReleaseLock(__int64 a1)
{
  return VfIrpDatabaseEntryReleaseLock(a1);
}
