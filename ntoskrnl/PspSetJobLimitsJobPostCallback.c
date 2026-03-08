/*
 * XREFs of PspSetJobLimitsJobPostCallback @ 0x14079A760
 * Callers:
 *     <none>
 * Callees:
 *     PspApplyWorkingSetLimits @ 0x1409AEF10 (PspApplyWorkingSetLimits.c)
 */

__int64 __fastcall PspSetJobLimitsJobPostCallback(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
    PspApplyWorkingSetLimits(a1);
  return 0LL;
}
