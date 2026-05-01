/*
 * XREFs of ??1?$ComPtr@VCortanaSharedExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802268BC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CortanaSharedExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$1 @ 0x180225E42 (_Microsoft--WRL--Details--MakeAndInitialize_CortanaSharedExperienceManager_IInspect_ea_180225E42.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SearchAppExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$1 @ 0x180264A7A (_Microsoft--WRL--Details--MakeAndInitialize_SearchAppExperienceManager_IInspectable_ea_180264A7A.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180089850 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienc.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CortanaSharedExperienceManager>::~ComPtr<CortanaSharedExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release(result);
  }
  return result;
}
