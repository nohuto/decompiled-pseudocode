/*
 * XREFs of ??1?$ComPtr@VCortanaExperienceManagerNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B1400
 * Callers:
 *     _ShellFeedsExperienceManagerImpl::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800B78C0 (_ShellFeedsExperienceManagerImpl--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18022A318 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CQuickConnectExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x18024AE4C (_Microsoft--WRL--Details--MakeAndInitialize_CQuickConnectExperienceManager_IInspect_ea_18024AE4C.c)
 *     _SearchAppExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180265DE0 (_SearchAppExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B6C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1800B6C20.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CortanaExperienceManagerNotification>::~ComPtr<CortanaExperienceManagerNotification>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
