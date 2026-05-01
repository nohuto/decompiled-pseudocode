/*
 * XREFs of ??1?$ComPtr@VCVirtualTouchpadExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802518CC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualTouchpadExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x180250FFA (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualTouchpadExperienceManager_IInsp_ea_180250FFA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIApplicationFrameEventHandler@@UIScaleChangeSink@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180254040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVir_ea_180254040.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualTouchpadExperienceManager>::~ComPtr<CVirtualTouchpadExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
