/*
 * XREFs of ??0?$IReference@_N@Foundation@Windows@winrt@@QEAA@AEB_N@Z @ 0x180147928
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?AUIInspectable@Foundation@Windows@2@AEAV_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@@Z @ 0x180146DE8 (--$call@AEAV_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall winrt::Windows::Foundation::IReference<bool>::IReference<bool>(char **a1, char *a2)
{
  unsigned int v3; // eax
  char **v5; // [rsp+20h] [rbp-28h] BYREF
  char *v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h] BYREF

  v5 = a1;
  v7 = *a2;
  v6 = &v7;
  winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_6b01e8b3243de8eafca067c27e1d6a44_ &>(
    (__int64)a1,
    (__int64)&v5,
    &v6);
  if ( v5 )
  {
    v6 = 0LL;
    v3 = (*(__int64 (__fastcall **)(char **, void *, char **))*v5)(
           v5,
           &winrt::impl::guid_storage<winrt::Windows::Foundation::IReference<bool>>::value,
           &v6);
    winrt::check_hresult(v3);
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v5);
  return a1;
}
