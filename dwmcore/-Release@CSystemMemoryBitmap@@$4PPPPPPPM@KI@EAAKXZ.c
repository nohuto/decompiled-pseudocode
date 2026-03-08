/*
 * XREFs of ?Release@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ @ 0x180119230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::Release(__int64 a1)
{
  return CSystemMemoryBitmap::Release((CSystemMemoryBitmap *)(a1 - *(int *)(a1 - 4) - 168));
}
