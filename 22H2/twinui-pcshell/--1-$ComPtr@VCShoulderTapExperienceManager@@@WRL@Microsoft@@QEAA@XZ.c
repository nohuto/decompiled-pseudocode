/*
 * XREFs of ??1?$ComPtr@VCShoulderTapExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18023F658
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CShoulderTapExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x18023EE96 (_Microsoft--WRL--Details--MakeAndInitialize_CShoulderTapExperienceManager_IInspecta_ea_18023EE96.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007E5C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CShoulderTapExperienceManager>::~ComPtr<CShoulderTapExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(result);
  }
  return result;
}
