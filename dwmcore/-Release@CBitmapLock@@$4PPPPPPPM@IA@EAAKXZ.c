/*
 * XREFs of ?Release@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ @ 0x18011A850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::Release(__int64 a1)
{
  return CBitmapLock::Release((CBitmapLock *)(a1 - *(int *)(a1 - 4) - 128));
}
