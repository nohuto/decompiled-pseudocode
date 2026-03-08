/*
 * XREFs of ??0ILegacyRemotingSwapChain@@QEAA@XZ @ 0x18010922C
 * Callers:
 *     ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z @ 0x1801090B8 (--0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@.c)
 *     ??0CDummyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGIOutputDWM@@IU_UNSIGNED_RATIO@@PEAUHINSTANCE__@@@Z @ 0x18029584C (--0CDummyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGIOutputDWM@@IU_UNSIGNED_RATIO@@PEAUHINS.c)
 * Callees:
 *     <none>
 */

ILegacyRemotingSwapChain *__fastcall ILegacyRemotingSwapChain::ILegacyRemotingSwapChain(ILegacyRemotingSwapChain *this)
{
  *(_QWORD *)this = &IBitmapLock::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &ILegacyRemotingSwapChain::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  return this;
}
