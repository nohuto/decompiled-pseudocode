/*
 * XREFs of PspSetJobLimitsProcessCallback @ 0x1406E7D70
 * Callers:
 *     <none>
 * Callees:
 *     PspApplyJobLimitsToProcess @ 0x140683890 (PspApplyJobLimitsToProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409AFDD8 (PspAddProcessToWorkingSetChangeList.c)
 */

__int64 __fastcall PspSetJobLimitsProcessCallback(PVOID Object, __int64 a2)
{
  if ( (*((_DWORD *)Object + 280) & 1) == 0 )
  {
    PspApplyJobLimitsToProcess((__int64)Object, *(_DWORD *)(a2 + 8));
    if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != *((_QWORD *)Object + 162) )
      PspAddProcessToWorkingSetChangeList(Object);
  }
  return 0LL;
}
