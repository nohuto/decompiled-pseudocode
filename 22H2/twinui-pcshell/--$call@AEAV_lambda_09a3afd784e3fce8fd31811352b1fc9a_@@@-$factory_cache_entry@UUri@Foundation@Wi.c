/*
 * XREFs of ??$call@AEAV_lambda_09a3afd784e3fce8fd31811352b1fc9a_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?AUUri@Foundation@Windows@2@AEAV_lambda_09a3afd784e3fce8fd31811352b1fc9a_@@@Z @ 0x18009DFEC
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FD8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952D9 (WINRT_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIUriRuntimeClassFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18009E990 (--$get_activation_factory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIUriRu.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?CreateUri@?$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUri@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x1800A2E64 (-CreateUri@-$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundat.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D034 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_09a3afd784e3fce8fd31811352b1fc9a_ &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  signed __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v8 = a2;
  v9[2] = &qword_180650838;
  _InterlockedIncrement64(&qword_180650838);
  if ( `winrt::impl::call_factory<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory,_lambda_09a3afd784e3fce8fd31811352b1fc9a_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
      &`winrt::impl::call_factory<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory,_lambda_09a3afd784e3fce8fd31811352b1fc9a_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180650838);
  }
  else
  {
    _InterlockedDecrement64(&qword_180650838);
    v9[0] = L"Windows.Foundation.Uri";
    v9[1] = 22LL;
    winrt::param::hstring::hstring(string, (__int64)v9);
    winrt::get_activation_factory<winrt::Windows::Foundation::IUriRuntimeClassFactory>(&v7, string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v7, &v8);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    if ( v5 )
    {
      v9[3] = &qword_180650838;
      _InterlockedIncrement64(&qword_180650838);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory,_lambda_09a3afd784e3fce8fd31811352b1fc9a_>'::`2'::factory,
              v7,
              0LL) )
      {
        v7 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180650840);
      }
      winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
        &`winrt::impl::call_factory<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory,_lambda_09a3afd784e3fce8fd31811352b1fc9a_>'::`2'::factory,
        a2,
        *a3);
      _InterlockedDecrement64(&qword_180650838);
    }
    else
    {
      winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
        &v7,
        a2,
        *a3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v7);
  }
  return a2;
}
