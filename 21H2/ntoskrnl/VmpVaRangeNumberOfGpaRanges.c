/*
 * XREFs of VmpVaRangeNumberOfGpaRanges @ 0x1405A55D0
 * Callers:
 *     VmpMergeMemoryRanges @ 0x1405A4340 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x1405A4E54 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405A5144 (VmpSplitMemoryRange.c)
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
