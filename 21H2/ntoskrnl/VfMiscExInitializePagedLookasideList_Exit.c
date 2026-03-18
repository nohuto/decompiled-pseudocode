/*
 * XREFs of VfMiscExInitializePagedLookasideList_Exit @ 0x140AA3CF0
 * Callers:
 *     <none>
 * Callees:
 *     VfLookasideAdd @ 0x140A9F0C0 (VfLookasideAdd.c)
 */

void __fastcall VfMiscExInitializePagedLookasideList_Exit(__int64 a1)
{
  VfLookasideAdd(*(_QWORD *)(a1 + 56));
}
