/*
 * XREFs of ??1?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180321764
 * Callers:
 *     _wil::MakeOrThrow_WindowWrapper_WindowEventDispatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppView___Windows::Internal::ApplicationModel::WindowManagement::IAppModel___enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType__::_1_::dtor$0 @ 0x1800CA3BC (_wil--MakeOrThrow_WindowWrapper_WindowEventDispatcher___Windows--Internal--ApplicationModel--Win.c)
 *     _Microsoft::WRL::Details::Make_WindowWrapper_WindowEventDispatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppView___Windows::Internal::ApplicationModel::WindowManagement::IAppModel___enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType__::_1_::dtor$0 @ 0x180172F86 (_Microsoft--WRL--Details--Make_WindowWrapper_WindowEventDispatcher___Windows--Internal--Applicat.c)
 *     _wil::MakeOrThrow_WindowWrapper_WindowEventDispatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppView___Windows::Internal::ApplicationModel::WindowManagement::IAppModel___enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___&_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const_(&)[53]_enum_WindowCreatedType_&__::_1_::dtor$0 @ 0x180176FA8 (_wil--MakeOrThrow_WindowWrapper_WindowEventDispatcher___Windows--Internal--Applicat_ea_180176FA8.c)
 *     _Microsoft::WRL::Details::Make_WindowWrapper_WindowEventDispatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppView___Windows::Internal::ApplicationModel::WindowManagement::IAppModel___enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___&_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const_(&)[53]_enum_WindowCreatedType_&__::_1_::dtor$0 @ 0x180176FD5 (_Microsoft--WRL--Details--Make_WindowWrapper_WindowEventDispatcher___Windows--Inter_ea_180176FD5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005B5C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WindowWrapper>::~ComPtr<WindowWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(result);
  }
  return result;
}
