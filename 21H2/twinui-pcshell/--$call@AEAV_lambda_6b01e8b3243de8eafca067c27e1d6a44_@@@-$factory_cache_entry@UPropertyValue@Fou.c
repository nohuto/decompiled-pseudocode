/*
 * XREFs of ??$call@AEAV_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?AUIInspectable@Foundation@Windows@2@AEAV_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@@Z @ 0x180146DE8
 * Callers:
 *     ??0?$IReference@_N@Foundation@Windows@winrt@@QEAA@AEB_N@Z @ 0x180147928 (--0-$IReference@_N@Foundation@Windows@winrt@@QEAA@AEB_N@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$?RAEBUIPropertyValueStatics@Foundation@Windows@winrt@@@_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@QEBA?AUIInspectable@Foundation@Windows@winrt@@AEBUIPropertyValueStatics@234@@Z @ 0x180146C98 (--$-RAEBUIPropertyValueStatics@Foundation@Windows@winrt@@@_lambda_6b01e8b3243de8eafca067c27e1d6a.c)
 *     ??$get_activation_factory@UIPropertyValueStatics@Foundation@Windows@winrt@@@winrt@@YA?AUIPropertyValueStatics@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1801473E0 (--$get_activation_factory@UIPropertyValueStatics@Foundation@Windows@winrt@@@winrt@@YA-AUIPropert.c)
 *     ?CreateBoolean@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@_N@Z @ 0x180148354 (-CreateBoolean@-$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundat.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_6b01e8b3243de8eafca067c27e1d6a44_ &>(
        __int64 a1,
        __int64 a2,
        _BYTE **a3)
{
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v8; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING string[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+68h] [rbp-18h] BYREF

  v8 = a2;
  v9[2] = &qword_180650368;
  _InterlockedIncrement64(&qword_180650368);
  if ( `winrt::impl::call_factory<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics,_lambda_6b01e8b3243de8eafca067c27e1d6a44_>'::`2'::factory )
  {
    _lambda_6b01e8b3243de8eafca067c27e1d6a44_::operator()<winrt::Windows::Foundation::IPropertyValueStatics const &>(
      a3,
      a2,
      (__int64)a3);
    _InterlockedDecrement64(&qword_180650368);
  }
  else
  {
    _InterlockedDecrement64(&qword_180650368);
    v9[0] = L"Windows.Foundation.PropertyValue";
    v9[1] = 32LL;
    winrt::param::hstring::hstring(string, (__int64)v9);
    winrt::get_activation_factory<winrt::Windows::Foundation::IPropertyValueStatics>(&v11, string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v11, &v8);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    if ( v5 )
    {
      v9[3] = &qword_180650368;
      _InterlockedIncrement64(&qword_180650368);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics,_lambda_6b01e8b3243de8eafca067c27e1d6a44_>'::`2'::factory,
              v11,
              0LL) )
      {
        v11 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180650370);
      }
      _lambda_6b01e8b3243de8eafca067c27e1d6a44_::operator()<winrt::Windows::Foundation::IPropertyValueStatics const &>(
        a3,
        a2,
        v6);
      _InterlockedDecrement64(&qword_180650368);
    }
    else
    {
      LOBYTE(v6) = **a3;
      winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateBoolean(
        &v11,
        a2,
        v6);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v11);
  }
  return a2;
}
