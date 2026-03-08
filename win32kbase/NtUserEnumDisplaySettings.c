/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C003AA60
 * Callers:
 *     <none>
 * Callees:
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C003AB18 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$03@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C003AB94 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C0169140 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        struct _devicemodeW *a3,
        unsigned int a4)
{
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
  {
    v12 = 0;
    v14 = v10;
    v13 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v8,
      (unsigned int)&unk_1C02944AE,
      v9,
      (unsigned int)&v12,
      (__int64)&v14,
      (__int64)&v13);
  }
  if ( a2 == -1 || a2 == -3 || a2 == -2 )
    return NtUserEnumDisplaySettingsShared(a1, a2, a3, a4);
  else
    return NtUserEnumDisplaySettingsExclusive(a1, a2, a3, a4);
}
