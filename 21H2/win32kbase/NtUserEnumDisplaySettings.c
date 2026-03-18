/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C006F4E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C006F5C4 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$03@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0071E9C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C015322C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        struct _devicemodeW *a3,
        unsigned int a4)
{
  int v8; // ecx
  int v9; // r8d
  int v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL) )
  {
    v11 = 0;
    v12 = 1LL;
    v13 = a4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v8,
      (unsigned int)&unk_1C025B473,
      v9,
      (unsigned int)&v11,
      (__int64)&v13,
      (__int64)&v12);
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_EnumDisplaySettings_UseSharedLockWhenPossible__private_reporting,
    31058687LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  if ( a2 < 0xFFFFFFFD )
    return NtUserEnumDisplaySettingsExclusive(a1, a2, a3, a4);
  else
    return NtUserEnumDisplaySettingsShared(a1, a2, a3, a4);
}
