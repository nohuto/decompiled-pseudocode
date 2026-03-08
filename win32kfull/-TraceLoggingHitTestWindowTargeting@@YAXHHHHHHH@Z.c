/*
 * XREFs of ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C020471C
 * Callers:
 *     TouchTargetChildTree @ 0x1C01E7B88 (TouchTargetChildTree.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x1C02041EC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplat.c)
 */

void __fastcall TraceLoggingHitTestWindowTargeting(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r10d
  int v12; // r11d
  int v13; // [rsp+60h] [rbp+Fh] BYREF
  int v14; // [rsp+64h] [rbp+13h] BYREF
  int v15; // [rsp+68h] [rbp+17h] BYREF
  int v16; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v17; // [rsp+70h] [rbp+1Fh] BYREF
  int v18; // [rsp+74h] [rbp+23h] BYREF
  int v19; // [rsp+78h] [rbp+27h] BYREF
  __int64 v20; // [rsp+80h] [rbp+2Fh] BYREF

  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000000LL) )
    {
      v13 = a7;
      v14 = a6;
      v15 = a5;
      v16 = v10;
      v17 = v11;
      v18 = v12;
      v19 = a1;
      v20 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        byte_1C031E296,
        v9,
        v10,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
}
