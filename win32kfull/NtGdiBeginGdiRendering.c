/*
 * XREFs of NtGdiBeginGdiRendering @ 0x1C0009450
 * Callers:
 *     <none>
 * Callees:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0009468 (GreBeginGdiRenderingToDxSurface.c)
 */

__int64 NtGdiBeginGdiRendering()
{
  return GreBeginGdiRenderingToDxSurface();
}
