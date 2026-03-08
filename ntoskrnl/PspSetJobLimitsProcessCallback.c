/*
 * XREFs of PspSetJobLimitsProcessCallback @ 0x1409AFC30
 * Callers:
 *     <none>
 * Callees:
 *     PspApplyJobLimitsToProcess @ 0x1406FF17C (PspApplyJobLimitsToProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409AEE48 (PspAddProcessToWorkingSetChangeList.c)
 */

__int64 __fastcall PspSetJobLimitsProcessCallback(struct _KPROCESS *Object, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( (Object[1].DirectoryTableBase & 1) == 0 )
  {
    PspApplyJobLimitsToProcess((__int64)Object, *(_DWORD *)(a2 + 8));
    if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != Object[1].Affinity.StaticBitmap[16] )
      PspAddProcessToWorkingSetChangeList(Object, v4, v5, v6);
  }
  return 0LL;
}
