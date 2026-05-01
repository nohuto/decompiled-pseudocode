/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___ @ 0x18014EB40
 * Callers:
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6___ @ 0x18014E830 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18014E830.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180015864 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18001A9F0 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::___Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 2;
  *(_QWORD *)(a1 + 24) = a2[1];
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)(a1 + 32) != a2 + 2 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 40),
    (__int64)(a2 + 3));
  *(_QWORD *)(a1 + 40) = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  *(_QWORD *)a1 = off_180508F80;
  return a1;
}
