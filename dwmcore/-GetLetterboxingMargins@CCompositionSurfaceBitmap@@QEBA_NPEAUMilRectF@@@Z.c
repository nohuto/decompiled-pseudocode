/*
 * XREFs of ?GetLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAUMilRectF@@@Z @ 0x18000C7C8
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x18000C820 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ @ 0x18000D23C (-GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::GetLetterboxingMargins(CCompositionSurfaceBitmap *this, struct MilRectF *a2)
{
  char v3; // bl
  struct ISwapChainRealization *SwapChainRenderingRealization; // rax

  v3 = 0;
  SwapChainRenderingRealization = CCompositionSurfaceBitmap::GetSwapChainRenderingRealization(this);
  if ( SwapChainRenderingRealization )
    return (*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct MilRectF *))(*(_QWORD *)SwapChainRenderingRealization
                                                                                        + 160LL))(
             SwapChainRenderingRealization,
             a2);
  return v3;
}
