/*
 * XREFs of ??1?$ComPtr@VCControlCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180222948
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CControlCenterExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x18022264A (_Microsoft--WRL--Details--MakeAndInitialize_CControlCenterExperienceManager_IInspec_ea_18022264A.c)
 *     _Microsoft::WRL::Details::Make_CStartExperienceManager_bool__::_1_::dtor$0 @ 0x18024171E (_Microsoft--WRL--Details--Make_CStartExperienceManager_bool__--_1_--dtor$0.c)
 *     _StartExperienceManagerFactory::GetExperienceManager_::_1_::dtor$0 @ 0x180242B17 (_StartExperienceManagerFactory--GetExperienceManager_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_ViewGroupManager_ITitleBarController___&_ITabViewManager___&__::_1_::dtor$0 @ 0x1802FA86E (_Microsoft--WRL--Details--Make_ViewGroupManager_ITitleBarController___-_ITabViewManager___-__--_.c)
 *     _wil::MakeOrThrow_ViewGroupManager_ITitleBarController___&_ITabViewManager___&__::_1_::dtor$0 @ 0x1802FA90A (_wil--MakeOrThrow_ViewGroupManager_ITitleBarController___-_ITabViewManager___-__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007D0B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CControlCenterExperienceManager>::~ComPtr<CControlCenterExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
