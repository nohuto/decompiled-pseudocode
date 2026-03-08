/*
 * XREFs of ?Release@CBitmap@@$4PPPPPPPM@HI@EAAKXZ @ 0x18011A710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::Release(__int64 a1)
{
  return CSystemMemoryBitmap::Release((CSystemMemoryBitmap *)(a1 - *(int *)(a1 - 4) - 120));
}
