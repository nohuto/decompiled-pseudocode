/*
 * XREFs of NtGdiExtSelectClipRgn @ 0x1C011A2D0
 * Callers:
 *     <none>
 * Callees:
 *     GreExtSelectClipRgnInternal @ 0x1C011A2F0 (GreExtSelectClipRgnInternal.c)
 */

__int64 __fastcall NtGdiExtSelectClipRgn(__int64 a1, __int64 a2, __int64 a3)
{
  return GreExtSelectClipRgnInternal(a1, a2, a3);
}
