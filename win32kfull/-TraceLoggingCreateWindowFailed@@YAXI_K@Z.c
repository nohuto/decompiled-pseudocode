/*
 * XREFs of ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1C0204564
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01B5C70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall TraceLoggingCreateWindowFailed()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // r10d
  __int64 v3[3]; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+70h] [rbp+18h] BYREF
  __int64 v5; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
    {
      v5 = v1;
      v4 = v2;
      v3[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1C0357098,
        byte_1C031DC6F,
        v0,
        v1,
        (__int64)v3,
        (__int64)&v4,
        (__int64)&v5);
    }
  }
}
