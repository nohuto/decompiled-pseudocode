/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x140318FC0
 * Callers:
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x140318C48 (KiAbSetMinimumThreadPriority.c)
 *     KiAbForceProcessLockEntry @ 0x1403CC428 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1403190CC (KiAbOwnerComputeCpuPriorityKey.c)
 */

char __fastcall KiAbEntryGetCpuPriorityKey(unsigned __int8 *a1)
{
  char result; // al

  if ( (a1[19] & 1) == 0 )
    return a1[48];
  if ( !a1[17] )
    return KiAbOwnerComputeCpuPriorityKey(a1);
  result = a1[-96 * a1[16] - 1501];
  if ( result > 30 )
    return 30;
  return result;
}
