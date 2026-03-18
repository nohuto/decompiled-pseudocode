/*
 * XREFs of ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1C021EC48
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C01591BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall TraceLoggingPenHotkey(char a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r10d
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  if ( (a1 & 0xA) == 0xA && (unsigned int)(a2 - 130) <= 1 && (unsigned int)dword_1C03263F8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
    {
      v6 = v4;
      v7 = v5;
      v8 = 2048LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v2,
        byte_1C02F0292,
        v3,
        v4,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6);
    }
  }
}
