/*
 * XREFs of ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x180102A78
 * Callers:
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x180102A30 (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x180252660 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180091250 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

float __fastcall ValidateSDRBoost(float a1, const struct PixelFormatInfo *a2)
{
  if ( IsDXGIColorSpaceHDR(*((_DWORD *)a2 + 2)) )
    return fmaxf(1.0, a1);
  else
    return 0.0;
}
