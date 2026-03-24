/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x140272D70
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140271744 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x140272404 (KiAbSetMinimumThreadPriority.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x14038F384 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140272EAC (KiAbOwnerComputeCpuPriorityKey.c)
 */

char __fastcall KiAbEntryGetCpuPriorityKey(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  char result; // al

  if ( (a1[27] & 1) == 0 )
    return a1[48];
  if ( (a1[25] & 1) == 0 )
    return KiAbOwnerComputeCpuPriorityKey(a1, a2, a3);
  result = a1[-16 * a1[24] + 195];
  if ( result > 15 )
    return 15;
  return result;
}
