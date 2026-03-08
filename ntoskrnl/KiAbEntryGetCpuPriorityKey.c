/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x14035822C
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiAbSetMinimumThreadPriority @ 0x140357EB4 (KiAbSetMinimumThreadPriority.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140358338 (KiAbOwnerComputeCpuPriorityKey.c)
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
