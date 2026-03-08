/*
 * XREFs of ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x1C01CC1E8
 * Callers:
 *     rimFindAndReclaimHoldingFrame @ 0x1C01CE060 (rimFindAndReclaimHoldingFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@@Z @ 0x1C00EFF68 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@@-$_t.c)
 *     ?CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z @ 0x1C01CB540 (-CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::DropCompleteFrame(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // r9d
  const char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r9
  int v11; // [rsp+60h] [rbp+27h] BYREF
  int v12; // [rsp+64h] [rbp+2Bh] BYREF
  __int64 v13; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+37h] BYREF
  __int64 v15; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v16; // [rsp+80h] [rbp+47h] BYREF
  __int64 v17; // [rsp+88h] [rbp+4Fh] BYREF
  __int64 v18; // [rsp+A8h] [rbp+6Fh] BYREF

  v2 = *(_DWORD *)(a2 + 40);
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v5 = InputTraceLogging::CompletionReasonToString(v4);
    v6 = *(_QWORD *)(a1 + 464);
    v14 = (__int64)v5;
    LODWORD(v18) = *(unsigned __int16 *)(v6 + 18);
    v11 = *(unsigned __int16 *)(v6 + 16);
    v12 = (unsigned __int8)v7;
    v15 = *(_QWORD *)(v8 + 32);
    LODWORD(v13) = v2;
    v16 = v9;
    v17 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0297BE4,
      v7,
      v10,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v18,
      (void **)&v14);
  }
}
