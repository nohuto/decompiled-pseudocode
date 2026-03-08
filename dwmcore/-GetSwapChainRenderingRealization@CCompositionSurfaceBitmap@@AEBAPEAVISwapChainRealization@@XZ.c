/*
 * XREFs of ?GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ @ 0x18000D23C
 * Callers:
 *     ?GetLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAUMilRectF@@@Z @ 0x18000C7C8 (-GetLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAUMilRectF@@@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x18000D1AC (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D1EC (-GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x18012E2F4 (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x18000D2A8 (-TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct ISwapChainRealization *__fastcall CCompositionSurfaceBitmap::GetSwapChainRenderingRealization(
        CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rbx
  struct IBitmapRealization *RenderingRealization; // rax
  struct IBitmapRealization *v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  RenderingRealization = CCompositionSurfaceBitmap::TryGetRenderingRealization(this);
  if ( RenderingRealization )
  {
    v3 = (struct IBitmapRealization *)((char *)RenderingRealization
                                     + *(int *)(*((_QWORD *)RenderingRealization + 1) + 4LL)
                                     + 8);
    v5 = 0LL;
    (**(void (__fastcall ***)(struct IBitmapRealization *, GUID *, __int64 *))v3)(
      v3,
      &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
      &v5);
    v1 = v5;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v5);
  }
  return (struct ISwapChainRealization *)v1;
}
