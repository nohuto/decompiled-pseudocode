/*
 * XREFs of CcNotifyWriteBehind @ 0x1405345B8
 * Callers:
 *     MiShutdownSystem @ 0x140AA8A00 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 * Callees:
 *     CcForEachPartition @ 0x140305240 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition(
           (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcNotifyWriteBehindHelper,
           2LL,
           0,
           0);
}
