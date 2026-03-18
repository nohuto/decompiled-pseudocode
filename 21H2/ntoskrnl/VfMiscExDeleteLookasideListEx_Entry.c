/*
 * XREFs of VfMiscExDeleteLookasideListEx_Entry @ 0x140AA3C20
 * Callers:
 *     <none>
 * Callees:
 *     VfLookasideDelete @ 0x140A9F1DC (VfLookasideDelete.c)
 */

void __fastcall VfMiscExDeleteLookasideListEx_Entry(__int64 a1)
{
  VfLookasideDelete(*(_QWORD *)(a1 + 8));
}
