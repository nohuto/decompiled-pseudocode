/*
 * XREFs of ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C00F00FC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01CD424 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@@Z @ 0x1C00EFF68 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@@-$_t.c)
 *     ?CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z @ 0x1C01CB540 (-CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::CompleteFrame(__int64 a1)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // r11d
  __int64 v7; // r10
  __int64 v8; // r8
  int v9; // [rsp+60h] [rbp+27h] BYREF
  int v10; // [rsp+64h] [rbp+2Bh] BYREF
  __int64 v11; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+70h] [rbp+37h] BYREF
  __int64 v13; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v14; // [rsp+80h] [rbp+47h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v3 = InputTraceLogging::CompletionReasonToString(v2);
    v4 = *(_QWORD *)(a1 + 464);
    v11 = v3;
    LODWORD(v15) = *(unsigned __int16 *)(v4 + 18);
    LODWORD(v16) = *(unsigned __int16 *)(v4 + 16);
    v9 = *(_DWORD *)(v5 + 196);
    v12 = *(_QWORD *)(v5 + 48);
    v10 = v6;
    v13 = v7;
    v14 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0297ADE,
      v8,
      v5,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v16,
      (__int64)&v15,
      (void **)&v11);
  }
}
