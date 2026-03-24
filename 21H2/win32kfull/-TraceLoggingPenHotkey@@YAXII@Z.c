/*
 * XREFs of ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1C02253E0
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C01052A0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0224510 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall TraceLoggingPenHotkey(__int64 a1, int a2, __int64 a3)
{
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  if ( (a1 & 0xA) == 0xA
    && (unsigned int)(a2 - 130) <= 1
    && (unsigned int)dword_1C032B3D8 > 5
    && (qword_1C032B3E8 & 0x400000000000LL) != 0
    && (qword_1C032B3F0 & 0x400000000000LL) == qword_1C032B3F0 )
  {
    v3 = a2;
    v4 = a1;
    v5 = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a1,
      byte_1C02F30AC,
      a3,
      0x400000000000LL,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v3);
  }
}
