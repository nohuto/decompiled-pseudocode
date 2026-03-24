/*
 * XREFs of RtlFreeRangeList @ 0x140761590
 * Callers:
 *     ArbTestAllocation @ 0x140760F20 (ArbTestAllocation.c)
 *     RtlCopyRangeList @ 0x140761200 (RtlCopyRangeList.c)
 *     ArbCommitAllocation @ 0x1407613A0 (ArbCommitAllocation.c)
 *     ArbBootAllocation @ 0x1407B3E70 (ArbBootAllocation.c)
 *     ArbInitializeRangeList @ 0x1408670B0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1408671C0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140867550 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x140867720 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x140867740 (ArbStartArbiter.c)
 *     KiTpBuildExcludedKernelTracepointRangeList @ 0x1408BC974 (KiTpBuildExcludedKernelTracepointRangeList.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1408BCA5C (KiTpIsExcludedKernelTracepointLocation.c)
 *     RtlMergeRangeLists @ 0x14090FDF0 (RtlMergeRangeLists.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x140761608 (RtlpDeleteRangeListEntry.c)
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
