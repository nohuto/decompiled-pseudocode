/*
 * XREFs of ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800D106C
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x1800762D4 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x1800CC2A8 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1800EE1EC (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x18028293C (-TrimAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacySwapChain@@@Z @ 0x18028C284 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z @ 0x18028C8C4 (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 *     ?SetSize@CCompSwapChain@@UEAAJAEBUD2D_SIZE_U@@I@Z @ 0x18029B920 (-SetSize@CCompSwapChain@@UEAAJAEBUD2D_SIZE_U@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800D0FEC (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1800EE404 (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DDevice::Trim(CD3DDevice *this)
{
  char *v1; // rdi
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = (char *)this + 464;
  v2 = 0LL;
  if ( *((_DWORD *)this + 122) )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)v1 + 8 * v2);
      *(_BYTE *)(v6 + 176) = 0;
      CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v6);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)v1 + 6) );
  }
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v1, 8LL);
  CD2DContext::ReleaseCachedD2DTarget((CD3DDevice *)((char *)this + 16));
  CD3DResourceManager::DestroyReleasedResources((CD3DDevice *)((char *)this + 1104));
  v4 = *((_QWORD *)this + 70);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 880LL))(v4);
  v5 = *((_QWORD *)this + 67);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5);
  *((_BYTE *)this + 1508) = 0;
}
