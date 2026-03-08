/*
 * XREFs of ?HasSwapChainContent@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x18024F4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSwapChain@CBitmapRenderStrategy@@SAJPEBVCSurfaceBrush@@PEAPEAVISwapChainRealization@@@Z @ 0x1800771D4 (-GetSwapChain@CBitmapRenderStrategy@@SAJPEBVCSurfaceBrush@@PEAPEAVISwapChainRealization@@@Z.c)
 */

bool __fastcall CBitmapRenderStrategy::HasSwapChainContent(CBitmapRenderStrategy *this, const struct CSurfaceBrush *a2)
{
  bool v2; // bl
  struct ISwapChainRealization *v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v2 = (int)CBitmapRenderStrategy::GetSwapChain(a2, &v4) >= 0;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v4);
  return v2;
}
