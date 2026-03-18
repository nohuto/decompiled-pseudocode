/*
 * XREFs of RtlFreeRangeList @ 0x1408397E0
 * Callers:
 *     ArbCommitAllocation @ 0x140839460 (ArbCommitAllocation.c)
 *     ArbTestAllocation @ 0x140839900 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x140839BE0 (ArbBootAllocation.c)
 *     RtlCopyRangeList @ 0x14083A400 (RtlCopyRangeList.c)
 *     ArbInitializeRangeList @ 0x14090B3B0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x14090B4C0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x14090B860 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x14090BA30 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x14090BA50 (ArbStartArbiter.c)
 *     KiTpBuildExcludedKernelTracepointRangeList @ 0x140962930 (KiTpBuildExcludedKernelTracepointRangeList.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x140962A18 (KiTpIsExcludedKernelTracepointLocation.c)
 *     RtlMergeRangeLists @ 0x1409B59D0 (RtlMergeRangeLists.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x14083984C (RtlpDeleteRangeListEntry.c)
 */

_QWORD *__fastcall RtlFreeRangeList(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rbx
  _QWORD *i; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // r8
  _QWORD *v7; // rdx

  *(_DWORD *)(a1 + 16) = 0;
  result = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 20) = 0;
  v3 = *result;
  for ( i = result - 5; ; result = i + 5 )
  {
    v5 = (_QWORD *)(v3 - 40);
    if ( (_QWORD *)a1 == result )
      break;
    v6 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result || (v7 = (_QWORD *)result[1], (_QWORD *)*v7 != result) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    RtlpDeleteRangeListEntry(i);
    i = v5;
    v3 = v5[5];
  }
  return result;
}
