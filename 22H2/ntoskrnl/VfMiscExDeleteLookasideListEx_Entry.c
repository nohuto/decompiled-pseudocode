/*
 * XREFs of VfMiscExDeleteLookasideListEx_Entry @ 0x140AE0A90
 * Callers:
 *     <none>
 * Callees:
 *     VfLookasideDelete @ 0x140AE335C (VfLookasideDelete.c)
 */

__int64 __fastcall VfMiscExDeleteLookasideListEx_Entry(__int64 a1)
{
  return VfLookasideDelete(*(_QWORD *)(a1 + 8));
}
