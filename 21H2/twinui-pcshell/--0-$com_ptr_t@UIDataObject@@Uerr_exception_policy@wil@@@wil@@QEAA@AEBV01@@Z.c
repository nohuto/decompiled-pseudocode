/*
 * XREFs of ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008ABA8
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180030320 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x180078C9C (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18007C6A0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180085BAC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ??$AsWeak@VShellFeedsExperienceManagerImpl@@@WRL@Microsoft@@YAJPEAVShellFeedsExperienceManagerImpl@@PEAVWeakRef@01@@Z @ 0x1800AFB20 (--$AsWeak@VShellFeedsExperienceManagerImpl@@@WRL@Microsoft@@YAJPEAVShellFeedsExperienceManagerIm.c)
 *     ??$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVShellFeedsExperienceManagerImpl@@P84@EAAJI_K_J@Z@Z @ 0x1800B0380 (--$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotification.c)
 *     ?__clone@?$__func@V_lambda_66f8cb2e4a745a42959e69ed39c49775_@@$$A6AJI_K_J@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJI_K_J@Z@23@@Z @ 0x1800B9E20 (-__clone@-$__func@V_lambda_66f8cb2e4a745a42959e69ed39c49775_@@$$A6AJI_K_J@Z@__function@wistd@@UE.c)
 *     std::_Func_impl_no_alloc__lambda_b2aba72d894720c5d602d9e6e4035ef3__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy @ 0x1800CB2A0 (std--_Func_impl_no_alloc__lambda_b2aba72d894720c5d602d9e6e4035ef3__wil--com_ptr_t_W_ea_1800CB2A0.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_8a554fbb7eeadbc5b1f812b57a7003ed___ @ 0x1800CCEBC (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Internal--Composable.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__lambda_d6b8a9b1aa1c57c7c343e283d3e0fd07___ @ 0x1800CCFAC (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_1800CCFAC.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_bad564a0731865a81e67c1ef81fa054c___ @ 0x1800CD09C (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_1800CD09C.c)
 *     _lambda_13e7c7d1bbe76ddb28a4a415717d5504_::_lambda_13e7c7d1bbe76ddb28a4a415717d5504_ @ 0x1800CE728 (_lambda_13e7c7d1bbe76ddb28a4a415717d5504_--_lambda_13e7c7d1bbe76ddb28a4a415717d5504_.c)
 *     _lambda_43e2ea7707e3cc3476f49dcfffc6812f_::_lambda_43e2ea7707e3cc3476f49dcfffc6812f_ @ 0x1800CE794 (_lambda_43e2ea7707e3cc3476f49dcfffc6812f_--_lambda_43e2ea7707e3cc3476f49dcfffc6812f_.c)
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::_lambda_4d10a89d0d66f2982df1f6a73309b1fb_ @ 0x1800CE7EC (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--_lambda_4d10a89d0d66f2982df1f6a73309b1fb_.c)
 *     _lambda_536d29ca497f1a4a88268fb5f9ff4d76_::_lambda_536d29ca497f1a4a88268fb5f9ff4d76_ @ 0x1800CE84C (_lambda_536d29ca497f1a4a88268fb5f9ff4d76_--_lambda_536d29ca497f1a4a88268fb5f9ff4d76_.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$2 @ 0x1800DD0F0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800DD0F0.c)
 *     _lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_ @ 0x18014EC50 (_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_--_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_.c)
 *     _lambda_a133ffc3bd012faec39012c4437de407_::operator() @ 0x18014F0B8 (_lambda_a133ffc3bd012faec39012c4437de407_--operator().c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180322FC0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180323520 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803238E0 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803BCCA0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1803BCE50 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1803BD98C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803BDE30 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x180401010 (-RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewC.c)
 *     ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x1804E4744 (-RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
