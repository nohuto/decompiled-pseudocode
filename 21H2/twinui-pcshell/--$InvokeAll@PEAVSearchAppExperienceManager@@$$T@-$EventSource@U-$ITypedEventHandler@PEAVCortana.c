/*
 * XREFs of ??$InvokeAll@PEAVSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVSearchAppExperienceManager@@$$T@Z @ 0x180051368
 * Callers:
 *     ?OnSuggestionsHidden@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18008BD40 (-OnSuggestionsHidden@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsShown@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18008BD70 (-OnSuggestionsShown@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnHidden@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18008BDA0 (-OnHidden@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedTransition@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18008BDD0 (-OnAppRequestedTransition@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedDismiss@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18008BE00 (-OnAppRequestedDismiss@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppTransitionCompleted@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x180265900 (-OnAppTransitionCompleted@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnDeviceLocked@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x180265930 (-OnDeviceLocked@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnDeviceUnlocked@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x180265960 (-OnDeviceUnlocked@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSetForegroundFailed@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x180265A70 (-OnSetForegroundFailed@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnStartAndCortanaDismissRequested@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x180265AA0 (-OnStartAndCortanaDismissRequested@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ @ 0x180266828 (-_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$DoInvoke@V_lambda_68949f556153738f7c1e1d8e42eb57ef_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_68949f556153738f7c1e1d8e42eb57ef_@@@Z @ 0x1800513A0 (--$DoInvoke@V_lambda_68949f556153738f7c1e1d8e42eb57ef_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<SearchAppExperienceManager *,std::nullptr_t>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3 = 0LL;
  v4[0] = &v5;
  v4[1] = &v3;
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_68949f556153738f7c1e1d8e42eb57ef_>(
           a1,
           v4);
}
