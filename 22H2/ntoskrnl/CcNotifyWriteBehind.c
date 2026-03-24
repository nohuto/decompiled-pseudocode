/*
 * XREFs of CcNotifyWriteBehind @ 0x140382700
 * Callers:
 *     MmDuplicateMemory @ 0x1409907AC (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1409AFEF8 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140279290 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
