/*
 * XREFs of NtGdiCreateBitmapFromDxSurface2 @ 0x1C0013360
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateBitmapFromDxSurface @ 0x1C0013394 (GreCreateBitmapFromDxSurface.c)
 */

__int64 __fastcall NtGdiCreateBitmapFromDxSurface2(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7)
{
  return GreCreateBitmapFromDxSurface(a1, a5, a6, a7);
}
