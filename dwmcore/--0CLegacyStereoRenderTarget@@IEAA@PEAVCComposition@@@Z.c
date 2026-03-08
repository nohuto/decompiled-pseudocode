/*
 * XREFs of ??0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801BDDB4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800C7868 (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CLegacyStereoRenderTarget *__fastcall CLegacyStereoRenderTarget::CLegacyStereoRenderTarget(
        CLegacyStereoRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CLegacyStereoRenderTarget *result; // rax

  *((_QWORD *)this + 10) = &CLegacyStereoRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 19) = &CLegacyStereoRenderTarget::`vbtable'{for `IMonitorTarget'};
  *((_QWORD *)this + 20) = &CLegacyStereoRenderTarget::`vbtable'{for `ICapabilitiesContributorTarget'};
  *((_QWORD *)this + 2344) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 2347) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 2346) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2347) + 4LL) + 18776) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CLegacyRenderTarget::CLegacyRenderTarget(this, a2, 0);
  *(_QWORD *)this = &CLegacyStereoRenderTarget::`vftable'{for `CRenderTarget'};
  *((_QWORD *)this + 9) = &CLegacyStereoRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 18) = &CLegacyStereoRenderTarget::`vftable'{for `IOverlayMonitorTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CLegacyStereoRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CLegacyStereoRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 18648;
  v4 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 18664;
  v5 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  result = this;
  *(_DWORD *)((char *)this + v5 + 76) = v5 - 18688;
  *((_QWORD *)this + 2338) = 0LL;
  *((_BYTE *)this + 18712) = 0;
  return result;
}
