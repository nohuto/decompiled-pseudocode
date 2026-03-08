/*
 * XREFs of RIMSetDeviceTerminalId @ 0x1C01BFC18
 * Callers:
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C01E25C0 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00EF92A (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RIMSetDeviceTerminalId(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 336);
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v9 = a2;
    v8 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0296F3A,
      v5,
      v6,
      (__int64)&v8,
      (__int64)&v9);
  }
  RIMLockExclusive(v3 + 104);
  if ( *(_DWORD *)(a1 + 1316) != a2 )
    *(_DWORD *)(a1 + 1316) = a2;
  *(_QWORD *)(v3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
