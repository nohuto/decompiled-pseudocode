/*
 * XREFs of VfMiscExInitializePagedLookasideList_Exit @ 0x140AE0B60
 * Callers:
 *     <none>
 * Callees:
 *     VfLookasideAdd @ 0x140AE3240 (VfLookasideAdd.c)
 */

__int64 __fastcall VfMiscExInitializePagedLookasideList_Exit(__int64 a1)
{
  return VfLookasideAdd(*(_QWORD *)(a1 + 56));
}
