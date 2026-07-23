/*
 * XREFs of RtlFreeRangeList @ 0x140761750
 * Callers:
 *     ArbTestAllocation @ 0x1407610E0 (ArbTestAllocation.c)
 *     RtlCopyRangeList @ 0x1407613C0 (RtlCopyRangeList.c)
 *     ArbCommitAllocation @ 0x140761560 (ArbCommitAllocation.c)
 *     ArbBootAllocation @ 0x1407B4010 (ArbBootAllocation.c)
 *     ArbInitializeRangeList @ 0x140867210 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x140867320 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1408676B0 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x140867880 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x1408678A0 (ArbStartArbiter.c)
 *     KiTpBuildExcludedKernelTracepointRangeList @ 0x1408BCAD4 (KiTpBuildExcludedKernelTracepointRangeList.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1408BCBBC (KiTpIsExcludedKernelTracepointLocation.c)
 *     RtlMergeRangeLists @ 0x14090FF50 (RtlMergeRangeLists.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x1407617C8 (RtlpDeleteRangeListEntry.c)
 */

_QWORD *__fastcall RtlFreeRangeList(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r8
  _QWORD *v6; // rdx

  result = (_QWORD *)*a1;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  v3 = result - 5;
  v4 = *result - 40LL;
  if ( a1 != result )
  {
    do
    {
      v5 = *result;
      if ( *(_QWORD **)(*result + 8LL) != result || (v6 = (_QWORD *)result[1], (_QWORD *)*v6 != result) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      RtlpDeleteRangeListEntry(v3);
      v3 = (_QWORD *)v4;
      v4 = *(_QWORD *)(v4 + 40) - 40LL;
      result = v3 + 5;
    }
    while ( a1 != v3 + 5 );
  }
  return result;
}
