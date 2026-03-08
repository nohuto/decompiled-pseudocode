/*
 * XREFs of NtGdiExtSelectClipRgn @ 0x1C004D220
 * Callers:
 *     <none>
 * Callees:
 *     GreExtSelectClipRgnInternal @ 0x1C004D240 (GreExtSelectClipRgnInternal.c)
 */

__int64 __fastcall NtGdiExtSelectClipRgn(__int64 a1, __int64 a2, __int64 a3)
{
  return GreExtSelectClipRgnInternal(a1, a2, a3);
}
