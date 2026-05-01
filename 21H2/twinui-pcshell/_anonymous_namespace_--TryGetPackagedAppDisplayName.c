/*
 * XREFs of _anonymous_namespace_::TryGetPackagedAppDisplayName @ 0x180143408
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143C20 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$call@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@?$factory_cache_entry@UAppInfo@ApplicationModel@Windows@winrt@@UIAppInfoStatics@234@@impl@winrt@@QEAA?AUAppInfo@ApplicationModel@Windows@2@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@Z @ 0x1804D6850 (--$call@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@-$factory_cache_entry@UAppInfo@Applicati.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
HSTRING **__fastcall anonymous_namespace_::TryGetPackagedAppDisplayName(HSTRING **a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  HSTRING string[4]; // [rsp+38h] [rbp-40h] BYREF
  HSTRING *v10; // [rsp+58h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h] BYREF

  v7[1] = (__int64)a1;
  winrt::param::hstring::hstring(string, a2);
  v10 = string;
  winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>::call<_lambda_38c729b784d0ceaabb1b176d3af54f15_ &>(
    v3,
    v7,
    &v10);
  v11 = 0LL;
  v4 = (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7[0] + 64LL))(v7[0], &v11);
  winrt::check_hresult(v4);
  v8 = v11;
  v10 = 0LL;
  v5 = (*(unsigned int (__fastcall **)(__int64, HSTRING **))(*(_QWORD *)v11 + 48LL))(v11, &v10);
  winrt::check_hresult(v5);
  *a1 = v10;
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v8);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v7);
  return a1;
}
