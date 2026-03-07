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
