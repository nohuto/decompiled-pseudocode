/*
 * XREFs of TraceLoggingPTPWarpBack @ 0x1C02056C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C0204074 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall TraceLoggingPTPWarpBack(int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // r11
  int v6; // [rsp+50h] [rbp-28h] BYREF
  int v7; // [rsp+54h] [rbp-24h] BYREF
  int v8; // [rsp+58h] [rbp-20h] BYREF
  int v9; // [rsp+5Ch] [rbp-1Ch] BYREF
  __int64 v10[3]; // [rsp+60h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000000LL) )
    {
      v6 = a1;
      v7 = v3;
      v9 = v4 - v5;
      v8 = HIDWORD(v4) - HIDWORD(v5);
      v10[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        HIDWORD(v5),
        byte_1C031E46E,
        v2,
        v3,
        (__int64)v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6);
    }
  }
}
