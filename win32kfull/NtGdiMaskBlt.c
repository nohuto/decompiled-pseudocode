/*
 * XREFs of NtGdiMaskBlt @ 0x1C007F5D0
 * Callers:
 *     <none>
 * Callees:
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 */

__int64 __fastcall NtGdiMaskBlt(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  return GreMaskBlt(a1, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
