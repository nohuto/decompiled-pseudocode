/*
 * XREFs of ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801EA778
 * Callers:
 *     ?NotifyInvalidResource@CCaptureRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801C2900 (-NotifyInvalidResource@CCaptureRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801E92B0 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801E9CA4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x1801EA480 (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x1801EA4E8 (-ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTAR.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801EA728 (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x1801EB4F8 (-ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRT.c)
 *     ?ProcessBoundsInMonitor@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BOUNDSINMONITOR@@@Z @ 0x1801EB640 (-ProcessBoundsInMonitor@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILC.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAXPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x1801BB0F8 (--$_Destroy_range@V-$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801EB094 (-clear@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801EB0C0 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 */

void __fastcall CCaptureRenderTarget::ReleaseRenderingResources(CCaptureRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  CD3DDevice *v7; // rcx

  (*(void (__fastcall **)(CCaptureRenderTarget *))(*(_QWORD *)this + 272LL))(this);
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 2040);
  if ( *((_QWORD *)this + 246) )
  {
    v2 = 0;
    if ( (__int64)(*((_QWORD *)this + 250) - *((_QWORD *)this + 249)) >> 3 )
    {
      v3 = 0LL;
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 246) + 56LL))(
          *((_QWORD *)this + 246),
          *(_QWORD *)(*((_QWORD *)this + 252) + 8 * v3));
        v3 = ++v2;
      }
      while ( v2 < (unsigned __int64)((__int64)(*((_QWORD *)this + 250) - *((_QWORD *)this + 249)) >> 3) );
    }
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::clear((char *)this + 1992);
  v4 = *((_QWORD *)this + 239);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)this + 240) - v4) >> 3) )
  {
    v5 = *(_QWORD *)(v4 + 8) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 8LL) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 48LL))(v5, (char *)this + 1864);
    std::_Destroy_range<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(
      *((_QWORD *)this + 239),
      *((_QWORD *)this + 240));
    *((_QWORD *)this + 240) = *((_QWORD *)this + 239);
  }
  *((_DWORD *)this + 484) = -1;
  v6 = *((_QWORD *)this + 243);
  *((_QWORD *)this + 243) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 244) = 0LL;
  v7 = (CD3DDevice *)*((_QWORD *)this + 234);
  *((_QWORD *)this + 234) = 0LL;
  if ( v7 )
    CD3DDevice::Release(v7);
}
