/*
 * XREFs of ??0IOverlayMonitorTarget@@QEAA@XZ @ 0x1800C7C0C
 * Callers:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800C7868 (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801BD55C (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

IOverlayMonitorTarget *__fastcall IOverlayMonitorTarget::IOverlayMonitorTarget(IOverlayMonitorTarget *this)
{
  *(_QWORD *)this = &IMonitorTarget::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)this = &IOverlayMonitorTarget::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  return this;
}
