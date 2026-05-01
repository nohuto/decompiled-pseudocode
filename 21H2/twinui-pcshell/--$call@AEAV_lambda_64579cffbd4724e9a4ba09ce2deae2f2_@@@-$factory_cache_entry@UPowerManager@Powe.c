/*
 * XREFs of ??$call@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@?$factory_cache_entry@UPowerManager@Power@System@Windows@winrt@@UIPowerManagerStatics@2345@@impl@winrt@@QEAA?AW4EnergySaverStatus@Power@System@Windows@2@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@Z @ 0x1800B0BC4
 * Callers:
 *     ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x1800B1DE4 (-CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA-B_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UIPowerManagerStatics@Power@System@Windows@winrt@@@winrt@@YA?AUIPowerManagerStatics@Power@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1800B0EAC (--$get_activation_factory@UIPowerManagerStatics@Power@System@Windows@winrt@@@winrt@@YA-AUIPowerM.c)
 *     ?EnergySaverStatus@?$consume_Windows_System_Power_IPowerManagerStatics@UIPowerManagerStatics@Power@System@Windows@winrt@@@impl@winrt@@QEBA?AW40Power@System@Windows@3@XZ @ 0x1800B2640 (-EnergySaverStatus@-$consume_Windows_System_Power_IPowerManagerStatics@UIPowerManagerStatics@Pow.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

__int64 winrt::impl::factory_cache_entry<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>::call<_lambda_64579cffbd4724e9a4ba09ce2deae2f2_ &>()
{
  __int64 result; // rax
  __int64 v1; // rbx
  unsigned int v2; // ebx
  __int64 v3; // [rsp+20h] [rbp-60h] BYREF
  __int64 v4; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v5[2] = &qword_180650218;
  _InterlockedIncrement64(&qword_180650218);
  if ( `winrt::impl::call_factory<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_64579cffbd4724e9a4ba09ce2deae2f2_>'::`2'::factory )
  {
    result = winrt::impl::consume_Windows_System_Power_IPowerManagerStatics<winrt::Windows::System::Power::IPowerManagerStatics>::EnergySaverStatus(&`winrt::impl::call_factory<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_64579cffbd4724e9a4ba09ce2deae2f2_>'::`2'::factory);
    _InterlockedDecrement64(&qword_180650218);
  }
  else
  {
    _InterlockedDecrement64(&qword_180650218);
    v5[0] = L"Windows.System.Power.PowerManager";
    v5[1] = 33LL;
    winrt::param::hstring::hstring(string, (__int64)v5);
    winrt::get_activation_factory<winrt::Windows::System::Power::IPowerManagerStatics>(&v3, string);
    v1 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v3, &v4);
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
    if ( v1 )
    {
      v5[3] = &qword_180650218;
      _InterlockedIncrement64(&qword_180650218);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_64579cffbd4724e9a4ba09ce2deae2f2_>'::`2'::factory,
              v3,
              0LL) )
      {
        v3 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180650220);
      }
      v2 = winrt::impl::consume_Windows_System_Power_IPowerManagerStatics<winrt::Windows::System::Power::IPowerManagerStatics>::EnergySaverStatus(&`winrt::impl::call_factory<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_64579cffbd4724e9a4ba09ce2deae2f2_>'::`2'::factory);
      _InterlockedDecrement64(&qword_180650218);
    }
    else
    {
      v2 = winrt::impl::consume_Windows_System_Power_IPowerManagerStatics<winrt::Windows::System::Power::IPowerManagerStatics>::EnergySaverStatus(&v3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v3);
    return v2;
  }
  return result;
}
