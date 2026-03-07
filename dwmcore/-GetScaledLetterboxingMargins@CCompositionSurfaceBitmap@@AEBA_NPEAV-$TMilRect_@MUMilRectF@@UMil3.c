char __fastcall CCompositionSurfaceBitmap::GetScaledLetterboxingMargins(CCompositionSurfaceBitmap *a1, __int64 a2)
{
  char v3; // bl
  struct ISwapChainRealization *SwapChainRenderingRealization; // rax

  v3 = 0;
  SwapChainRenderingRealization = CCompositionSurfaceBitmap::GetSwapChainRenderingRealization(a1);
  if ( SwapChainRenderingRealization )
    return (*(__int64 (__fastcall **)(struct ISwapChainRealization *, __int64))(*(_QWORD *)SwapChainRenderingRealization
                                                                              + 168LL))(
             SwapChainRenderingRealization,
             a2);
  return v3;
}
