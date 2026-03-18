/*
 * XREFs of NtGdiBeginGdiRendering @ 0x1C0100F10
 * Callers:
 *     <none>
 * Callees:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0100F28 (GreBeginGdiRenderingToDxSurface.c)
 */

__int64 __fastcall NtGdiBeginGdiRendering(HSURF a1)
{
  return GreBeginGdiRenderingToDxSurface(a1);
}
