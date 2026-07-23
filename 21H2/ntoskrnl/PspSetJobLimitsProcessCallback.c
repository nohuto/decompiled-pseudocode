/*
 * XREFs of PspSetJobLimitsProcessCallback @ 0x140621B90
 * Callers:
 *     <none>
 * Callees:
 *     PspApplyJobLimitsToProcess @ 0x1406F509C (PspApplyJobLimitsToProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140908B20 (PspAddProcessToWorkingSetChangeList.c)
 */

__int64 __fastcall PspSetJobLimitsProcessCallback(PVOID Object, __int64 a2)
{
  if ( (*((_DWORD *)Object + 280) & 1) == 0 )
  {
    PspApplyJobLimitsToProcess(Object, *(unsigned int *)(a2 + 8));
    if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != *((_QWORD *)Object + 162) )
      PspAddProcessToWorkingSetChangeList(Object);
  }
  return 0LL;
}
