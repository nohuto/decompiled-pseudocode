/*
 * XREFs of ??1?$ComPtr@VCPerMonitorDesktopVisibilityService@@@WRL@Microsoft@@QEAA@XZ @ 0x18043CC9C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPerMonitorDesktopVisibilityService_IUnknown__::_1_::dtor$2 @ 0x18043CA1C (_Microsoft--WRL--Details--MakeAndInitialize_CPerMonitorDesktopVisibilityService_IUn_ea_18043CA1C.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIAppLayoutCacheInternal@@UIAppLayoutCache@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180079E30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180079E30.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPerMonitorDesktopVisibilityService>::~ComPtr<CPerMonitorDesktopVisibilityService>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
