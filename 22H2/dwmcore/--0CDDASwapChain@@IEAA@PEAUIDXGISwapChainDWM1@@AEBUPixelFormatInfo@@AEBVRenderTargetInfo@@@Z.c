/*
 * XREFs of ??0CDDASwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18024FF1C
 * Callers:
 *     ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x180250168 (-Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x180025A30 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 */

CDDASwapChain *__fastcall CDDASwapChain::CDDASwapChain(
        CDDASwapChain *this,
        struct IDXGISwapChainDWM1 *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = &CDDASwapChain::`vbtable'{for `ISwapChain'};
  *((_QWORD *)this + 24) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 27) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  *((_QWORD *)this + 2) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 2) = &ILegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &ILegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &CDDASwapChain::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDDASwapChain::`vftable'{for `IDDASwapChain'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CColorKeyBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CDDASwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CDDASwapChain::`vftable'{for `IDeviceResource'};
  v7 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v7 + 20) = v7 - 144;
  v8 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v8 + 20) = v8 - 160;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 20) = *(_DWORD *)(*((_QWORD *)this + 3) + 12LL)
                                                                          - 184;
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (_QWORD *)this + 4,
    (__int64)a2);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = *(_QWORD *)a3;
  *((_DWORD *)this + 14) = *((_DWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 60) = *(_OWORD *)a4;
  *(_QWORD *)((char *)this + 76) = *((_QWORD *)a4 + 2);
  *((_QWORD *)this + 11) = (char *)this + 96;
  *((_DWORD *)this + 24) = 0;
  return this;
}
