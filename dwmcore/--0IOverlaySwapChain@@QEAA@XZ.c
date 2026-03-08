/*
 * XREFs of ??0IOverlaySwapChain@@QEAA@XZ @ 0x1800CA948
 * Callers:
 *     ??0COverlaySwapChainBase@@IEAA@PEAVCD3DDevice@@AEBVRenderTargetInfo@@IIU_LUID@@@Z @ 0x1800CA4FC (--0COverlaySwapChainBase@@IEAA@PEAVCD3DDevice@@AEBVRenderTargetInfo@@IIU_LUID@@@Z.c)
 *     ??0ILegacySwapChain@@QEAA@XZ @ 0x1800CA8E4 (--0ILegacySwapChain@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

IOverlaySwapChain *__fastcall IOverlaySwapChain::IOverlaySwapChain(IOverlaySwapChain *this)
{
  *(_QWORD *)this = &IBitmapLock::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &IOverlaySwapChain::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  return this;
}
