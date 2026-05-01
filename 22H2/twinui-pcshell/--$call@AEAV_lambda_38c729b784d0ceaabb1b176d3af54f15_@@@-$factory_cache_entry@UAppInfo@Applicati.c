/*
 * XREFs of ??$call@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@?$factory_cache_entry@UAppInfo@ApplicationModel@Windows@winrt@@UIAppInfoStatics@234@@impl@winrt@@QEAA?AUAppInfo@ApplicationModel@Windows@2@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@Z @ 0x1804D64C0
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppDisplayName @ 0x180143298 (_anonymous_namespace_--TryGetPackagedAppDisplayName.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952D9 (WINRT_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIAppInfoStatics@ApplicationModel@Windows@winrt@@@winrt@@YA?AUIAppInfoStatics@ApplicationModel@Windows@0@AEBUhstring@param@0@@Z @ 0x1804D6680 (--$get_activation_factory@UIAppInfoStatics@ApplicationModel@Windows@winrt@@@winrt@@YA-AUIAppInfo.c)
 *     ?GetFromAppUserModelId@?$consume_Windows_ApplicationModel_IAppInfoStatics@UIAppInfoStatics@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUAppInfo@ApplicationModel@Windows@3@AEBUhstring@param@3@@Z @ 0x1804D671C (-GetFromAppUserModelId@-$consume_Windows_ApplicationModel_IAppInfoStatics@UIAppInfoStatics@Appli.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>::call<_lambda_38c729b784d0ceaabb1b176d3af54f15_ &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  char v6; // di
  bool v7; // zf
  void (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v12[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF
  void (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp-10h] BYREF

  v10 = a2;
  v12[2] = &qword_180651198;
  _InterlockedIncrement64(&qword_180651198);
  if ( `winrt::impl::call_factory<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics,_lambda_38c729b784d0ceaabb1b176d3af54f15_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_ApplicationModel_IAppInfoStatics<winrt::Windows::ApplicationModel::IAppInfoStatics>::GetFromAppUserModelId(
      &`winrt::impl::call_factory<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics,_lambda_38c729b784d0ceaabb1b176d3af54f15_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180651198);
    return a2;
  }
  _InterlockedDecrement64(&qword_180651198);
  v12[0] = L"Windows.ApplicationModel.AppInfo";
  v12[1] = 32LL;
  winrt::param::hstring::hstring(string, (__int64)v12);
  winrt::get_activation_factory<winrt::Windows::ApplicationModel::IAppInfoStatics>(&v14, string);
  if ( v14 )
  {
    v11 = 0LL;
    (**v14)(v14, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, &v11);
    v5 = v11;
    v10 = v11;
    if ( v11 )
    {
      v6 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v5 = 0LL;
    v10 = 0LL;
  }
  v6 = 0;
LABEL_6:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  if ( v6 )
  {
    v12[3] = &qword_180651198;
    _InterlockedIncrement64(&qword_180651198);
    v8 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v14;
    if ( !_InterlockedCompareExchange64(
            &`winrt::impl::call_factory<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics,_lambda_38c729b784d0ceaabb1b176d3af54f15_>'::`2'::factory,
            (signed __int64)v14,
            0LL) )
    {
      v14 = 0LL;
      WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1806511A0);
      v8 = 0LL;
    }
    winrt::impl::consume_Windows_ApplicationModel_IAppInfoStatics<winrt::Windows::ApplicationModel::IAppInfoStatics>::GetFromAppUserModelId(
      &`winrt::impl::call_factory<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics,_lambda_38c729b784d0ceaabb1b176d3af54f15_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180651198);
    v7 = v8 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_ApplicationModel_IAppInfoStatics<winrt::Windows::ApplicationModel::IAppInfoStatics>::GetFromAppUserModelId(
      &v14,
      a2,
      *a3);
    v7 = v14 == 0LL;
  }
  if ( !v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v14);
  return a2;
}
