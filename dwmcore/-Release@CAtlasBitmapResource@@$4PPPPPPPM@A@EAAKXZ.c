/*
 * XREFs of ?Release@CAtlasBitmapResource@@$4PPPPPPPM@A@EAAKXZ @ 0x18011A570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasBitmapResource::Release(__int64 a1)
{
  return CAtlasBitmapResource::Release((CAtlasBitmapResource *)(a1 - *(int *)(a1 - 4)));
}
