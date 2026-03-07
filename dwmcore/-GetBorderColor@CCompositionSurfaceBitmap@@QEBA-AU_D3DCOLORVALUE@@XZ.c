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
