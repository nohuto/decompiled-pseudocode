/*
 * XREFs of ?InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z @ 0x1C022E3D0
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C022E28C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1C022A264 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapperByVal@$01@@.c)
 */

void __fastcall InputTraceLogging::Mouse::InformUMObservers(const struct _MIT_MOUSE_INPUT_OBSERVER_PACKET *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // [rsp+60h] [rbp-20h] BYREF
  int v4; // [rsp+64h] [rbp-1Ch] BYREF
  int v5; // [rsp+68h] [rbp-18h] BYREF
  __int64 v6; // [rsp+70h] [rbp-10h] BYREF
  __int16 v7; // [rsp+98h] [rbp+18h] BYREF
  int v8; // [rsp+A0h] [rbp+20h] BYREF
  int v9; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    v7 = *(_WORD *)(v1 + 56);
    v8 = *(_DWORD *)(v1 + 64);
    v9 = *(_DWORD *)(v1 + 60);
    v3 = *(_DWORD *)(v1 + 28);
    v4 = *(_DWORD *)(v1 + 24);
    v5 = *(_DWORD *)(v1 + 32);
    v6 = *(_QWORD *)(v1 + 8);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029DBC7,
      v1,
      v2,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v3,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
}
