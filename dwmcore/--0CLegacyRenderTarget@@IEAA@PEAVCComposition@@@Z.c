/*
 * XREFs of ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800C7868
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801BDDB4 (--0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x1800C7B10 (--0CMonitorTransform@@QEAA@XZ.c)
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800C7B7C (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0IOverlayMonitorTarget@@QEAA@XZ @ 0x1800C7C0C (--0IOverlayMonitorTarget@@QEAA@XZ.c)
 *     ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x1800C7CA8 (--0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@@Z.c)
 */

CLegacyRenderTarget *__fastcall CLegacyRenderTarget::CLegacyRenderTarget(
        CLegacyRenderTarget *this,
        struct CComposition *a2,
        int a3)
{
  char *v3; // rbx
  char *v4; // rdi
  __int64 v5; // r11
  _QWORD *v6; // r11
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r11
  CLegacyRenderTarget *result; // rax
  __int64 v11; // r9

  v3 = (char *)this + 80;
  v4 = (char *)this + 160;
  if ( a3 )
  {
    *(_QWORD *)v3 = &CLegacyRenderTarget::`vbtable'{for `IVisualTreeClient'};
    *((_QWORD *)this + 19) = &CLegacyRenderTarget::`vbtable'{for `IMonitorTarget'};
    *(_QWORD *)v4 = &CLegacyRenderTarget::`vbtable'{for `ICapabilitiesContributorTarget'};
    *((_QWORD *)this + 2342) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 2345) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 2344) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
    *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2345) + 4LL) + 18760) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  }
  CRenderTarget::CRenderTarget(this, a2);
  IOverlayMonitorTarget::IOverlayMonitorTarget((IOverlayMonitorTarget *)(v5 + 144));
  *(_QWORD *)&v4[*(int *)(*(_QWORD *)v4 + 4LL)] = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)&v4[*(int *)(*(_QWORD *)v4 + 8LL)] = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *v6 = &CLegacyRenderTarget::`vftable'{for `CRenderTarget'};
  v6[9] = &CLegacyRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)v7 = &CLegacyRenderTarget::`vftable'{for `IOverlayMonitorTarget'};
  *(_QWORD *)((char *)v6 + *(int *)(*(_QWORD *)v3 + 4LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v6 + *(int *)(*(_QWORD *)v3 + 8LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)v6 + *(int *)(*(_QWORD *)v3 + 12LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IRenderTarget'};
  *(_DWORD *)((char *)v6 + *(int *)(*(_QWORD *)v3 + 4LL) + 76) = *(_DWORD *)(*(_QWORD *)v3 + 4LL) - 18632;
  *(_DWORD *)((char *)v6 + *(int *)(*(_QWORD *)v3 + 8LL) + 76) = *(_DWORD *)(*(_QWORD *)v3 + 8LL) - 18648;
  *(_DWORD *)((char *)v6 + *(int *)(*(_QWORD *)v3 + 12LL) + 76) = *(_DWORD *)(*(_QWORD *)v3 + 12LL) - 18672;
  v6[21] = 0LL;
  v6[22] = 0LL;
  v6[23] = 0LL;
  v6[24] = 0LL;
  COverlayContext::COverlayContext(
    (COverlayContext *)(v6 + 25),
    (struct IOverlayMonitorTarget *)(v7 & -(__int64)(v6 != 0LL)));
  CMonitorTransform::CMonitorTransform((CMonitorTransform *)(v8 + 18168));
  *(_DWORD *)(v9 + 18424) = 0;
  *(_DWORD *)(v9 + 18428) = 3;
  *(_OWORD *)(v9 + 18432) = 0LL;
  *(_QWORD *)(v9 + 18448) = 0LL;
  *(_DWORD *)(v9 + 18456) = 0;
  *(_QWORD *)(v9 + 18472) = 0LL;
  *(_DWORD *)(v9 + 18480) = 0;
  *(_QWORD *)(v9 + 18460) = 0LL;
  *(_DWORD *)(v9 + 18468) = 0;
  *(_QWORD *)(v9 + 18488) = 0LL;
  *(_QWORD *)(v9 + 18496) = 0LL;
  *(_QWORD *)(v9 + 18504) = 0LL;
  *(_QWORD *)(v9 + 18512) = 0LL;
  *(_QWORD *)(v9 + 18520) = 0LL;
  *(_QWORD *)(v9 + 18528) = 0LL;
  *(_QWORD *)(v9 + 18536) = 0LL;
  *(_QWORD *)(v9 + 18544) = 0LL;
  *(_QWORD *)(v9 + 18552) = 0LL;
  *(_BYTE *)(v9 + 18560) = 0;
  *(_QWORD *)(v9 + 18568) = 0LL;
  *(_QWORD *)(v9 + 18576) = 0LL;
  *(_QWORD *)(v9 + 18584) = v9 + 18592;
  *(_DWORD *)(v9 + 18592) = 0;
  result = (CLegacyRenderTarget *)v9;
  *(_QWORD *)(v9 + 18656) = 0LL;
  *(_WORD *)(v9 + 18672) = 0;
  *(_QWORD *)(v9 + 18680) = 0LL;
  *(_QWORD *)(v9 + 18688) = 0LL;
  *(_QWORD *)(v9 + 18664) = v11;
  *(_WORD *)(v9 + 18700) = 0;
  *(_BYTE *)(v9 + 18702) = 0;
  *(_DWORD *)(v9 + 18696) = 0x10000;
  *(_DWORD *)(v9 + 136) = 1065353216;
  return result;
}
