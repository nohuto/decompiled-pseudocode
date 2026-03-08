/*
 * XREFs of ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x18000D2A8
 * Callers:
 *     ?GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ @ 0x18000D23C (-GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ.c)
 *     ?IsProtected@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801115E0 (-IsProtected@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801C13B0 (-GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct IBitmapRealization *__fastcall CCompositionSurfaceBitmap::TryGetRenderingRealization(
        CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  struct IBitmapRealization *result; // rax

  v1 = *((_QWORD *)this + 13);
  result = 0LL;
  if ( v1 )
    return (struct IBitmapRealization *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
  return result;
}
