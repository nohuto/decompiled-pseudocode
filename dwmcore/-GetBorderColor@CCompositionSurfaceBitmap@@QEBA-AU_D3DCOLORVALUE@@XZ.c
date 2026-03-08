/*
 * XREFs of ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x18012E2F4
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000CC70 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x18012FD7A (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     ?GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ @ 0x18000D23C (-GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _D3DCOLORVALUE *__fastcall CCompositionSurfaceBitmap::GetBorderColor(
        CCompositionSurfaceBitmap *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct ISwapChainRealization *SwapChainRenderingRealization; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  *(_OWORD *)&retstr->r = 0LL;
  SwapChainRenderingRealization = CCompositionSurfaceBitmap::GetSwapChainRenderingRealization(this);
  if ( SwapChainRenderingRealization )
    *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _BYTE *))(*(_QWORD *)SwapChainRenderingRealization + 24LL))(
                                                                       SwapChainRenderingRealization,
                                                                       v5);
  return retstr;
}
