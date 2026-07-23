/*
 * XREFs of VmpVaRangeNumberOfGpaRanges @ 0x1405A5800
 * Callers:
 *     VmpMergeMemoryRanges @ 0x1405A4570 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x1405A5084 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405A5374 (VmpSplitMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpVaRangeNumberOfGpaRanges(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax
  _QWORD *v3; // rcx

  v1 = (_QWORD *)(a1 + 40);
  result = 0LL;
  v3 = *(_QWORD **)(a1 + 40);
  while ( v3 != v1 )
  {
    v3 = (_QWORD *)*v3;
    ++result;
  }
  return result;
}
