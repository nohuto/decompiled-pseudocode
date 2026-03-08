/*
 * XREFs of ?Release@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ @ 0x18011A6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::Release(__int64 a1)
{
  return CSystemMemoryBitmap::Release((CSystemMemoryBitmap *)(a1 - *(int *)(a1 - 4) - 160));
}
