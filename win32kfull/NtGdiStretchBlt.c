/*
 * XREFs of NtGdiStretchBlt @ 0x1C00CC010
 * Callers:
 *     <none>
 * Callees:
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 */

__int64 __fastcall NtGdiStretchBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return GreStretchBltInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, 0);
}
