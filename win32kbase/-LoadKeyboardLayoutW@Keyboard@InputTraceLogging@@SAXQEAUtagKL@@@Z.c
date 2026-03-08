/*
 * XREFs of ?LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z @ 0x1C0085EE0
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0085310 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapSz@G@@@Z @ 0x1C0213BE8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 */

void __fastcall InputTraceLogging::Keyboard::LoadKeyboardLayoutW(struct tagKL *const a1)
{
  __int64 v1; // r8
  int v2; // [rsp+50h] [rbp-10h] BYREF
  int v3; // [rsp+54h] [rbp-Ch] BYREF
  __int64 v4; // [rsp+58h] [rbp-8h] BYREF
  __int64 v5; // [rsp+78h] [rbp+18h] BYREF
  __int64 v6; // [rsp+80h] [rbp+20h] BYREF
  __int64 v7; // [rsp+88h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 0x4000LL) )
  {
    v4 = v1 + 124;
    LODWORD(v5) = *(_DWORD *)(v1 + 120);
    LODWORD(v6) = *(_DWORD *)(v1 + 116);
    LODWORD(v7) = *(unsigned __int16 *)(v1 + 72);
    v2 = *(_DWORD *)(v1 + 112);
    v3 = *(_DWORD *)(v1 + 40);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)&dword_1C02CA7E0,
      (int)&dword_1C029C7DE,
      (__int64)&v3,
      (__int64)&v2,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4);
  }
}
