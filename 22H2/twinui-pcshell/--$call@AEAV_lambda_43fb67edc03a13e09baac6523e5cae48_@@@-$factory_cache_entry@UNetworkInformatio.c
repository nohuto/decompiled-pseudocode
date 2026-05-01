/*
 * XREFs of ??$call@AEAV_lambda_43fb67edc03a13e09baac6523e5cae48_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAAXAEAV_lambda_43fb67edc03a13e09baac6523e5cae48_@@@Z @ 0x180101F60
 * Callers:
 *     ??1ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18010240C (--1ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@AEBUevent_token@5@@Z @ 0x180102788 (-NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@AEBUevent_tok.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952D9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@winrt@@YA?AUINetworkInformationStatics@Connectivity@Networking@Windows@0@AEBUhstring@param@0@@Z @ 0x180102168 (--$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@wi.c)
 *     ?NetworkStatusChanged@?$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBAXAEBUevent_token@3@@Z @ 0x180102744 (-NetworkStatusChanged@-$consume_Windows_Networking_Connectivity_INetworkInformation_ea_180102744.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D034 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::call<_lambda_43fb67edc03a13e09baac6523e5cae48_ &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string[4]; // [rsp+40h] [rbp-30h] BYREF

  _InterlockedIncrement64(&qword_180651038);
  if ( `winrt::impl::call_factory<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics,_lambda_43fb67edc03a13e09baac6523e5cae48_>'::`2'::factory )
  {
    result = winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::NetworkStatusChanged(
               &`winrt::impl::call_factory<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics,_lambda_43fb67edc03a13e09baac6523e5cae48_>'::`2'::factory,
               *a2);
    _InterlockedDecrement64(&qword_180651038);
  }
  else
  {
    _InterlockedDecrement64(&qword_180651038);
    v7[0] = L"Windows.Networking.Connectivity.NetworkInformation";
    v7[1] = 50LL;
    winrt::param::hstring::hstring(string, (__int64)v7);
    winrt::get_activation_factory<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>(&v5, string);
    v4 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v5, &v6);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
    if ( v4 )
    {
      _InterlockedIncrement64(&qword_180651038);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics,_lambda_43fb67edc03a13e09baac6523e5cae48_>'::`2'::factory,
              v5,
              0LL) )
      {
        v5 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180651040);
      }
      winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::NetworkStatusChanged(
        &`winrt::impl::call_factory<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics,_lambda_43fb67edc03a13e09baac6523e5cae48_>'::`2'::factory,
        *a2);
      _InterlockedDecrement64(&qword_180651038);
    }
    else
    {
      winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::NetworkStatusChanged(
        &v5,
        *a2);
    }
    return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v5);
  }
  return result;
}
