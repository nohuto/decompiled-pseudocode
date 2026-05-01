/*
 * XREFs of _lambda_e3d1dbb9eeb8ba237d63926ec8c2eed5_::operator() @ 0x1801070A0
 * Callers:
 *     wistd::__function::__func__lambda_e3d1dbb9eeb8ba237d63926ec8c2eed5__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180107210 (wistd--__function--__func__lambda_e3d1dbb9eeb8ba237d63926ec8c2eed5__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001E264 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$ShellFeedsLauncher_FailedToSetFeedsAvailability@AEAJAEAE@ShellFeedsTelemetry@@SAXAEAJAEAE@Z @ 0x180106D80 (--$ShellFeedsLauncher_FailedToSetFeedsAvailability@AEAJAEAE@ShellFeedsTelemetry@@SAXAEAJAEAE@Z.c)
 *     ??$ShellFeedsLauncher_FeedsAvailabilityChangeByEdgeInstallationChange@AEAEPEBG@ShellFeedsTelemetry@@SAXAEAE$$QEAPEBG@Z @ 0x180106E04 (--$ShellFeedsLauncher_FeedsAvailabilityChangeByEdgeInstallationChange@AEAEPEBG@ShellFeedsTelemet.c)
 *     ?CheckEdgeAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180107220 (-CheckEdgeAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x180108180 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?SetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBG0K@Z @ 0x1801081C8 (-SetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBG0K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e3d1dbb9eeb8ba237d63926ec8c2eed5_::operator()(__int64 a1, int a2)
{
  const struct _tlgProvider_t *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  char v8; // bl
  const unsigned __int16 *v9; // r8
  unsigned int v10; // r9d
  BYTE *v11; // rdx
  BYTE **v12; // rax
  _BYTE v14[4]; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  BYTE *lpData[2]; // [rsp+40h] [rbp-30h] BYREF
  __m128i si128; // [rsp+50h] [rbp-20h]

  v3 = FeedsMicrosoftTelemetryProvider::Provider(a1);
  if ( *(_DWORD *)v3 > 5u && tlgKeywordOn((__int64)v3, 0x400000000000LL) )
  {
    v16 = 0x1000000LL;
    v15 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v4,
      byte_18059FEB3,
      0LL,
      v5,
      (__int64)&v15,
      (__int64)&v16);
  }
  v14[0] = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(lpData[0]) = 0;
  if ( (int)ShellFeedsAvailability::CheckEdgeAvailability(v14, lpData) >= 0 )
  {
    v8 = v14[0];
    if ( v14[0] != byte_180650138 )
    {
      v15 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(
              (ShellFeedsExperienceHelpers *)L"IsFeedsAvailable",
              (const unsigned __int16 *)v14[0],
              v6,
              v7);
      if ( v15 < 0 )
      {
        ShellFeedsTelemetry::ShellFeedsLauncher_FailedToSetFeedsAvailability<long &,unsigned char &>(&v15, v14);
      }
      else
      {
        v11 = (BYTE *)lpData;
        if ( si128.m128i_i64[1] >= 8uLL )
          v11 = lpData[0];
        ShellFeedsRegistryHelper::SetShellFeedsRegKey(L"DisabledReason", v11, v9, v10);
        byte_180650138 = v8;
        SendNotifyMessageW(HWND_BROADCAST, 0x1Au, 0LL, (LPARAM)L"TraySettings");
        v12 = lpData;
        if ( si128.m128i_i64[1] >= 8uLL )
          v12 = (BYTE **)lpData[0];
        v16 = (__int64)v12;
        ShellFeedsTelemetry::ShellFeedsLauncher_FeedsAvailabilityChangeByEdgeInstallationChange<unsigned char &,unsigned short const *>(
          v14,
          &v16);
      }
    }
  }
  return std::wstring::_Tidy_deallocate(lpData);
}
