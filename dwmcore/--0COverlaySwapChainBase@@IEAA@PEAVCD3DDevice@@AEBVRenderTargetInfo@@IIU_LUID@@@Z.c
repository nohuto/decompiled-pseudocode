/*
 * XREFs of ??0COverlaySwapChainBase@@IEAA@PEAVCD3DDevice@@AEBVRenderTargetInfo@@IIU_LUID@@@Z @ 0x1800CA4FC
 * Callers:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIAEBUDXGI_RATIONAL@@_K6IW4Enum@FrontBufferRender@@@Z @ 0x1800CA640 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@2@AEAUDDisplayTaskPoolResources@@AEAUDDisplayTargetResources@@AEAV?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18028E800 (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Win.c)
 * Callees:
 *     ??0CDeviceResource@@IEAA@XZ @ 0x18003C414 (--0CDeviceResource@@IEAA@XZ.c)
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x1800CA614 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     ??0IOverlaySwapChain@@QEAA@XZ @ 0x1800CA948 (--0IOverlaySwapChain@@QEAA@XZ.c)
 */

COverlaySwapChainBase *__fastcall COverlaySwapChainBase::COverlaySwapChainBase(
        COverlaySwapChainBase *this,
        struct CD3DDevice *a2,
        const struct RenderTargetInfo *a3,
        int a4,
        unsigned int a5,
        struct _LUID a6)
{
  __int64 v9; // r11
  __int64 v10; // xmm1_8
  COverlaySwapChainBase *result; // rax

  IOverlaySwapChain::IOverlaySwapChain(this);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = &IBitmapUnlock::`vftable';
  *((_DWORD *)this + 6) = 0;
  CDeviceResource::CDeviceResource((COverlaySwapChainBase *)((char *)this + 40));
  *((_QWORD *)this + 2) = &COverlaySwapChainBase::`vftable'{for `CMILCOMBaseWeakRef'};
  *(_QWORD *)this = &COverlaySwapChainBase::`vftable'{for `IOverlaySwapChain'};
  *((_QWORD *)this + 5) = &COverlaySwapChainBase::`vftable'{for `CDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IDeviceResource'};
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 4) = *(_DWORD *)(*((_QWORD *)this + 1) + 12LL)
                                                                         - 240;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
    (char *)this + 80,
    v9);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)a3;
  v10 = *((_QWORD *)a3 + 2);
  *(struct _LUID *)((char *)this + 116) = a6;
  *((_DWORD *)this + 31) = a5;
  *((_QWORD *)this + 13) = v10;
  *((_DWORD *)this + 28) = a4;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = (char *)this + 144;
  *((_DWORD *)this + 36) = 0;
  result = this;
  *((_DWORD *)this + 52) = 0;
  return result;
}
