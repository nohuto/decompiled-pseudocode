/*
 * XREFs of EditionBaseDriverUnloadUninitialize @ 0x1C0111F50
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     UnloadWin32kCall @ 0x1C01126F0 (UnloadWin32kCall.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C0121754 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C0122BD0 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333@Z @ 0x1C021D62C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 *     ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C0377008 (-wil_UninitializeFeatureStaging@@YAXXZ.c)
 */

__int64 EditionBaseDriverUnloadUninitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v7; // [rsp+70h] [rbp+27h] BYREF
  __int64 v8; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v9; // [rsp+80h] [rbp+37h] BYREF
  __int64 v10; // [rsp+88h] [rbp+3Fh] BYREF
  __int64 v11; // [rsp+90h] [rbp+47h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+67h] BYREF
  __int64 v13; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+7Fh] BYREF

  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  CRapidHpdInfo::Delete(3LL, v0, v1, v2);
  if ( (unsigned int)dword_1C03263F8 > 5 && tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
  {
    v12 = qword_1C0336228;
    v13 = qword_1C0336220;
    v14 = qword_1C0336218;
    v15 = qword_1C0336210;
    v7 = qword_1C0336208;
    v8 = qword_1C0336200;
    v9 = qword_1C03361F8;
    v10 = qword_1C03361F0;
    v11 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v3,
      (unsigned int)&unk_1C02EFE4B,
      v4,
      v5,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
  UnloadWin32kCall();
  wil_UninitializeFeatureStaging();
  return 0LL;
}
