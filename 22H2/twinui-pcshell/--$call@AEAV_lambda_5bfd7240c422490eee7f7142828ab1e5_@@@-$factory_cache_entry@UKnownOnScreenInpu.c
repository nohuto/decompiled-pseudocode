/*
 * XREFs of ??$call@AEAV_lambda_5bfd7240c422490eee7f7142828ab1e5_@@@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_5bfd7240c422490eee7f7142828ab1e5_@@@Z @ 0x1803B53E0
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x1803BA6DC (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952D9 (WINRT_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Symbols@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x180262014 (-Symbols@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatic.c)
 *     ??$get_activation_factory@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1803B5F08 (--$get_activation_factory@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@W.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::call<_lambda_5bfd7240c422490eee7f7142828ab1e5_ &>(
        __int64 a1,
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v4; // rax
  char v5; // si
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-58h] BYREF
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string[4]; // [rsp+58h] [rbp-28h] BYREF

  v8 = a2;
  v10[2] = &qword_180651C48;
  _InterlockedIncrement64(&qword_180651C48);
  if ( `winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics,_lambda_5bfd7240c422490eee7f7142828ab1e5_>'::`2'::factory )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Symbols(
      &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics,_lambda_5bfd7240c422490eee7f7142828ab1e5_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_180651C48);
    return a2;
  }
  _InterlockedDecrement64(&qword_180651C48);
  v10[0] = L"WindowsUdk.ApplicationModel.OnScreenInput.KnownOnScreenInputUriSchemes";
  v10[1] = 70LL;
  winrt::param::hstring::hstring(string, (__int64)v10);
  winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>(
    &v7,
    string);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
  if ( v7 )
  {
    v9 = 0LL;
    (**v7)(v7, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, &v9);
    v4 = v9;
    v8 = (_QWORD *)v9;
    if ( v9 )
    {
      v5 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v4 = 0LL;
    v8 = 0LL;
  }
  v5 = 0;
LABEL_6:
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  if ( v5 )
  {
    v10[3] = &qword_180651C48;
    _InterlockedIncrement64(&qword_180651C48);
    v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
    if ( !_InterlockedCompareExchange64(
            &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics,_lambda_5bfd7240c422490eee7f7142828ab1e5_>'::`2'::factory,
            (signed __int64)v7,
            0LL) )
    {
      v7 = 0LL;
      WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180651C50);
      v3 = 0LL;
    }
    winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Symbols(
      &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics,_lambda_5bfd7240c422490eee7f7142828ab1e5_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_180651C48);
  }
  else
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Symbols(
      (__int64 *)&v7,
      a2);
  }
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v7);
  return a2;
}
