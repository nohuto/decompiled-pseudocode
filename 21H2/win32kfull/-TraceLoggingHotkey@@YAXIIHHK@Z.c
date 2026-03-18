/*
 * XREFs of ?TraceLoggingHotkey@@YAXIIHHK@Z @ 0x1C0004D4C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4444@Z @ 0x1C021E3C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U2@.c)
 */

void __fastcall TraceLoggingHotkey(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  char v10; // r11
  _BYTE v11[4]; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v13; // [rsp+68h] [rbp-18h] BYREF
  int v14; // [rsp+6Ch] [rbp-14h] BYREF
  int v15; // [rsp+70h] [rbp-10h] BYREF
  int v16; // [rsp+74h] [rbp-Ch] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1C03263F8 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x400000000000LL) )
    {
      v12 = a5;
      v13 = a5;
      v14 = v8;
      v15 = v9;
      v11[0] = v10;
      v16 = a1;
      v17 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (unsigned int)&unk_1C02F0213,
        v7,
        v8,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)v11,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
