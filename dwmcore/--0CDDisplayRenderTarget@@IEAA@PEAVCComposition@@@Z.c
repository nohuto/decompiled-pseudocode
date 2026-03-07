CDDisplayRenderTarget *__fastcall CDDisplayRenderTarget::CDDisplayRenderTarget(
        CDDisplayRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // r11
  _QWORD *v3; // r11
  unsigned __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // r11
  unsigned int v10; // eax
  __int64 v11; // r9
  bool v12; // zf
  unsigned int v13; // eax
  CDDisplayRenderTarget *result; // rax

  *((_QWORD *)this + 10) = &CDDisplayRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 19) = &CDDisplayRenderTarget::`vbtable'{for `IMonitorTarget'};
  *((_QWORD *)this + 20) = &CDDisplayRenderTarget::`vbtable'{for `ICapabilitiesContributorTarget'};
  *((_QWORD *)this + 2338) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 2341) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 2340) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2341) + 4LL) + 18728) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  IOverlayMonitorTarget::IOverlayMonitorTarget((IOverlayMonitorTarget *)(v2 + 144));
  *(_QWORD *)((char *)v3 + *(int *)(v3[20] + 4LL) + 160) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v3 + *(int *)(v3[20] + 8LL) + 160) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *v3 = &CDDisplayRenderTarget::`vftable'{for `CRenderTarget'};
  v3[9] = &CDDisplayRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)v4 = &CDDisplayRenderTarget::`vftable'{for `IOverlayMonitorTarget'};
  *(_QWORD *)((char *)v3 + *(int *)(v3[10] + 4LL) + 80) = &CDDisplayRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v3 + *(int *)(v3[10] + 8LL) + 80) = &CDDisplayRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)v3 + *(int *)(v3[10] + 12LL) + 80) = &CDDisplayRenderTarget::`vftable'{for `IRenderTarget'};
  v5 = *(int *)(v3[10] + 4LL);
  *(_DWORD *)((char *)v3 + v5 + 76) = v5 - 18600;
  v6 = *(int *)(v3[10] + 8LL);
  *(_DWORD *)((char *)v3 + v6 + 76) = v6 - 18616;
  v7 = *(int *)(v3[10] + 12LL);
  *(_DWORD *)((char *)v3 + v7 + 76) = v7 - 18640;
  v3[21] = 0LL;
  v3[22] = 0LL;
  v3[23] = 0LL;
  COverlayContext::COverlayContext(
    (COverlayContext *)(v3 + 24),
    (struct IOverlayMonitorTarget *)(v4 & -(__int64)(v3 != 0LL)));
  CMonitorTransform::CMonitorTransform((CMonitorTransform *)(v8 + 18160));
  *(_QWORD *)(v9 + 18416) = 0LL;
  *(_QWORD *)(v9 + 18424) = 0LL;
  *(_QWORD *)(v9 + 18432) = 0LL;
  *(_QWORD *)(v9 + 18456) = 0LL;
  *(_QWORD *)(v9 + 18464) = 0LL;
  *(_QWORD *)(v9 + 18444) = 0LL;
  *(_DWORD *)(v9 + 18452) = 0;
  *(_QWORD *)(v9 + 18480) = 0LL;
  *(_QWORD *)(v9 + 18488) = 0LL;
  *(_QWORD *)(v9 + 18496) = 0LL;
  *(_QWORD *)(v9 + 18504) = 0LL;
  *(_QWORD *)(v9 + 18512) = 0LL;
  *(_QWORD *)(v9 + 18520) = 0LL;
  *(_QWORD *)(v9 + 18528) = 0LL;
  *(_QWORD *)(v9 + 18536) = 0LL;
  *(_QWORD *)(v9 + 18544) = 0LL;
  *(_BYTE *)(v9 + 18552) = 0;
  *(_DWORD *)(v9 + 18472) = 3;
  *(_QWORD *)(v9 + 18560) = v9 + 18568;
  *(_DWORD *)(v9 + 18568) = 0;
  v10 = CDDisplayRenderTarget::s_uniqueId;
  *(_QWORD *)(v9 + 18632) = v11;
  v12 = v10 == -1;
  v13 = v10 + 1;
  *(_WORD *)(v9 + 18640) = 0;
  *(_QWORD *)(v9 + 18648) = 0LL;
  if ( v12 )
    v13 = 1;
  *(_QWORD *)(v9 + 18656) = 0LL;
  CDDisplayRenderTarget::s_uniqueId = v13;
  *(_DWORD *)(v9 + 18440) = v13;
  result = (CDDisplayRenderTarget *)v9;
  *(_WORD *)(v9 + 18664) = 0;
  *(_BYTE *)(v9 + 18666) = 0;
  *(_DWORD *)(v9 + 112) = 87;
  *(_QWORD *)(v9 + 116) = 3LL;
  return result;
}
