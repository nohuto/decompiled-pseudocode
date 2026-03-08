/*
 * XREFs of ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x18029ED80
 * Callers:
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18029E67C (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CLegacySwapChain@@MEAAJXZ @ 0x1800EC4F0 (-Initialize@CLegacySwapChain@@MEAAJXZ.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x18029E818 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CConversionSwapChain::Initialize(CConversionSwapChain *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v2 = CLegacySwapChain::Initialize(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x5Du, 0LL);
  }
  else
  {
    v5 = CConversionSwapChain::EnsureTargetBitmap(this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x5Fu, 0LL);
  }
  return v4;
}
