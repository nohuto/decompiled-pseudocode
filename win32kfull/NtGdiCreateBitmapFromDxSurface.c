/*
 * XREFs of NtGdiCreateBitmapFromDxSurface @ 0x1C02C48F0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateBitmapFromDxSurface @ 0x1C0013394 (GreCreateBitmapFromDxSurface.c)
 */

__int64 __fastcall NtGdiCreateBitmapFromDxSurface(HDC a1, unsigned int a2, unsigned int a3, int a4, __int64 a5)
{
  return GreCreateBitmapFromDxSurface(a1, a2, a3, a4, 0, 0, a5);
}
