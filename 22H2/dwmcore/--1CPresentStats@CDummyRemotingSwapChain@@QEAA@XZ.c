/*
 * XREFs of ??1CPresentStats@CDummyRemotingSwapChain@@QEAA@XZ @ 0x1801B3CC0
 * Callers:
 *     ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x180018D30 (-SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z.c)
 *     ?CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z @ 0x1801CEFC0 (-CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z.c)
 *     ?WindowNodeSetCompositionSurface@CChannel@@UEAAJIPEAX@Z @ 0x1801D1470 (-WindowNodeSetCompositionSurface@CChannel@@UEAAJIPEAX@Z.c)
 *     ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z @ 0x180202E54 (-CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x180203460 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 *     ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z @ 0x18026DC68 (-Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z.c)
 *     ?ShareToD3D12@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z @ 0x18028E6B8 (-ShareToD3D12@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDummyRemotingSwapChain::CPresentStats::~CPresentStats(void **this)
{
  char *v1; // rcx

  v1 = (char *)*this;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v1);
}
