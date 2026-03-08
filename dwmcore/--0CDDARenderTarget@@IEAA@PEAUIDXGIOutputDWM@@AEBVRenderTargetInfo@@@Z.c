/*
 * XREFs of ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1801F600C
 * Callers:
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1801F627C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 * Callees:
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180033754 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18003904C (--0COcclusionContext@@QEAA@XZ.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x1800C7B10 (--0CMonitorTransform@@QEAA@XZ.c)
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800C7B7C (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$com_ptr_t@UIDXGIOutputDWM@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIOutputDWM@@@Z @ 0x1801F5FD0 (--0-$com_ptr_t@UIDXGIOutputDWM@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIOutputDWM@@@Z.c)
 */

CDDARenderTarget *__fastcall CDDARenderTarget::CDDARenderTarget(
        CDDARenderTarget *this,
        struct IDXGIOutputDWM *a2,
        const struct RenderTargetInfo *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r10
  bool IsHDR; // al
  BOOL v9; // edx
  bool v10; // cf
  CDDARenderTarget *result; // rax

  *((_QWORD *)this + 10) = &CDDARenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 265) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 268) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 267) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 268) + 4LL) + 2144) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, g_pComposition);
  *(_QWORD *)this = &CDDARenderTarget::`vftable'{for `CRenderTarget'};
  *((_QWORD *)this + 9) = &CDDARenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 18) = &CDDARenderTarget::`vftable'{for `IDDATarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CDDARenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CDDARenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CDDARenderTarget::`vftable'{for `IRenderTarget'};
  v5 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v5 + 76) = v5 - 2016;
  v6 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v6 + 76) = v6 - 2032;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 76) = *(_DWORD *)(*((_QWORD *)this + 10) + 12LL)
                                                                           - 2056;
  wil::com_ptr_t<IDXGIOutputDWM,wil::err_returncode_policy>::com_ptr_t<IDXGIOutputDWM,wil::err_returncode_policy>(
    (_QWORD *)this + 19,
    v7);
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_OWORD *)this + 11) = *(_OWORD *)a3;
  *((_QWORD *)this + 24) = *((_QWORD *)a3 + 2);
  CMonitorTransform::CMonitorTransform((CDDARenderTarget *)((char *)this + 200));
  COcclusionContext::COcclusionContext((CDDARenderTarget *)((char *)this + 456));
  *((_QWORD *)this + 251) = (char *)this + 2016;
  *((_DWORD *)this + 504) = 0;
  *((_WORD *)this + 1040) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_BYTE *)this + 196) = 0;
  IsHDR = RenderTargetInfo::IsHDR((CDDARenderTarget *)((char *)this + 176));
  v9 = IsHDR;
  v10 = IsHDR;
  result = this;
  *((_DWORD *)this + 28) = v10 ? 10 : 87;
  *((_DWORD *)this + 30) = v9;
  *((_DWORD *)this + 29) = 3;
  return result;
}
