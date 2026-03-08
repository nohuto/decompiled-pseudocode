/*
 * XREFs of ??0ILegacySwapChain@@QEAA@XZ @ 0x1800CA8E4
 * Callers:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIAEBUDXGI_RATIONAL@@_K6IW4Enum@FrontBufferRender@@@Z @ 0x1800CA640 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ??0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIUDXGI_RATIONAL@@@Z @ 0x18029C6CC (--0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEB.c)
 *     ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIUDXGI_RATIONAL@@@Z @ 0x18029D1A0 (--0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVR.c)
 * Callees:
 *     ??0IOverlaySwapChain@@QEAA@XZ @ 0x1800CA948 (--0IOverlaySwapChain@@QEAA@XZ.c)
 */

ILegacySwapChain *__fastcall ILegacySwapChain::ILegacySwapChain(ILegacySwapChain *this)
{
  ILegacySwapChain *v1; // r9
  __int64 v2; // rax

  IOverlaySwapChain::IOverlaySwapChain(this);
  v2 = *((_QWORD *)v1 + 1);
  *(_QWORD *)v1 = &ILegacySwapChain::`vftable';
  *(_QWORD *)((char *)v1 + *(int *)(v2 + 4) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 1) + 12LL) + 8) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  return v1;
}
