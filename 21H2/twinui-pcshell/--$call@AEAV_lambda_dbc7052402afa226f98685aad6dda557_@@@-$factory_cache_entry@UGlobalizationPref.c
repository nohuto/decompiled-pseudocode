/*
 * XREFs of ??$call@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@?$factory_cache_entry@UGlobalizationPreferences@UserProfile@System@Windows@winrt@@UIGlobalizationPreferencesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@Z @ 0x180108CAC
 * Callers:
 *     ?GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV23@@Z @ 0x180109D34 (-GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_traits@G@st.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?HomeGeographicRegion@?$consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800ECAD8 (-HomeGeographicRegion@-$consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics@UIGl.c)
 *     ??$get_activation_factory@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@winrt@@YA?AUIGlobalizationPreferencesStatics@UserProfile@System@Windows@0@AEBUhstring@param@0@@Z @ 0x180108E24 (--$get_activation_factory@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@w.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::call<_lambda_dbc7052402afa226f98685aad6dda557_ &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v6; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v7[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v6 = a2;
  v7[2] = &qword_1806502C8;
  _InterlockedIncrement64(&qword_1806502C8);
  if ( `winrt::impl::call_factory<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics,_lambda_dbc7052402afa226f98685aad6dda557_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::HomeGeographicRegion(
      &`winrt::impl::call_factory<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics,_lambda_dbc7052402afa226f98685aad6dda557_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_1806502C8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1806502C8);
    v7[0] = L"Windows.System.UserProfile.GlobalizationPreferences";
    v7[1] = 51LL;
    winrt::param::hstring::hstring(string, (__int64)v7);
    winrt::get_activation_factory<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>(&v5, string);
    v3 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v5, &v6);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v6);
    if ( v3 )
    {
      v7[3] = &qword_1806502C8;
      _InterlockedIncrement64(&qword_1806502C8);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics,_lambda_dbc7052402afa226f98685aad6dda557_>'::`2'::factory,
              v5,
              0LL) )
      {
        v5 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1806502D0);
      }
      winrt::impl::consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::HomeGeographicRegion(
        &`winrt::impl::call_factory<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics,_lambda_dbc7052402afa226f98685aad6dda557_>'::`2'::factory,
        a2);
      _InterlockedDecrement64(&qword_1806502C8);
    }
    else
    {
      winrt::impl::consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::HomeGeographicRegion(
        &v5,
        a2);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v5);
  }
  return a2;
}
