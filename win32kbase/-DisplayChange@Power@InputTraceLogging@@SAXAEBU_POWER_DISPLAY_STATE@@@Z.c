/*
 * XREFs of ?DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z @ 0x1C00DD828
 * Callers:
 *     EtwTraceDisplayChange @ 0x1C0161E80 (EtwTraceDisplayChange.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00010D8 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?MonitorDisplayStateToString@InputTraceLogging@@CAPEBDW4_MONITOR_DISPLAY_STATE@@@Z @ 0x1C00DCE60 (-MonitorDisplayStateToString@InputTraceLogging@@CAPEBDW4_MONITOR_DISPLAY_STATE@@@Z.c)
 */

void __fastcall InputTraceLogging::Power::DisplayChange(const struct _POWER_DISPLAY_STATE *a1)
{
  bool v1; // al
  __int64 v2; // r8
  int v3; // edx
  enum _MONITOR_DISPLAY_STATE v4; // ecx
  const char *v5; // rax
  __int64 v6; // r8
  enum _MONITOR_DISPLAY_STATE v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 )
  {
    v1 = tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL);
    v3 = 0;
    if ( v1 )
    {
      v4 = *(_DWORD *)(v2 + 60);
      LOBYTE(v3) = *(_WORD *)(v2 + 68) != 0;
      LODWORD(v12) = *(_DWORD *)v2;
      LODWORD(v11) = v3;
      v5 = InputTraceLogging::MonitorDisplayStateToString(v4);
      v7 = *(_DWORD *)(v6 + 64);
      v13 = (__int64)v5;
      v10 = (__int64)InputTraceLogging::MonitorDisplayStateToString(v7);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C02CA7E0,
        (int)&dword_1C0294A20,
        v8,
        v9,
        (void **)&v10,
        (void **)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
