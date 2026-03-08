/*
 * XREFs of ?InternalRelease@CMILCOMBaseWeakRef@@IEAAKXZ @ 0x180102C1C
 * Callers:
 *     ?Release@CConversionSwapChain@@UEAAKXZ @ 0x180102C10 (-Release@CConversionSwapChain@@UEAAKXZ.c)
 *     ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x1801BEB48 (--1CDDisplayRenderTarget@@UEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E65B4 (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802904A8 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18029E67C (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@@@IEAAKXZ @ 0x180102C6C (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBaseWeakRef::InternalRelease(CMILCOMBaseWeakRef *this)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 2));
    v3 = v1 + 16;
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 16));
  }
  else
  {
    v3 = 16LL;
  }
  v4 = CMILRefCountBaseT<IUnknownWeakRefSource>::InternalRelease(this);
  if ( v1 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return v4;
}
