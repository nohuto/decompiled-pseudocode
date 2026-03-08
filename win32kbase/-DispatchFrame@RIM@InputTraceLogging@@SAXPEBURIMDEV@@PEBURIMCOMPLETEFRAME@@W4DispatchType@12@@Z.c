/*
 * XREFs of ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C00F0A58
 * Callers:
 *     rimProcessCompleteFrame @ 0x1C00F0D94 (rimProcessCompleteFrame.c)
 *     rimFindOtherQueuedFrames @ 0x1C01D25F8 (rimFindOtherQueuedFrames.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01D2AB4 (rimProcessAnyQueuedCompleteFrames.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1C00F07D6 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_t.c)
 */

void __fastcall InputTraceLogging::RIM::DispatchFrame(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // rcx
  const char *v7; // rax
  int v8; // [rsp+60h] [rbp+27h] BYREF
  int v9; // [rsp+64h] [rbp+2Bh] BYREF
  __int64 v10; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v11; // [rsp+70h] [rbp+37h] BYREF
  __int64 v12; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v13; // [rsp+80h] [rbp+47h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v6 = *(_QWORD *)(a1 + 464);
    LODWORD(v14) = *(unsigned __int16 *)(v6 + 18);
    LODWORD(v15) = *(unsigned __int16 *)(v6 + 16);
    v8 = *(_DWORD *)(v3 + 196);
    v9 = v4;
    if ( (_DWORD)v2 )
    {
      if ( (_DWORD)v2 == 1 )
        v7 = "Queued";
      else
        v7 = "UNKNOWN";
    }
    else
    {
      v7 = "Immediate";
    }
    v10 = (__int64)v7;
    v11 = *(_QWORD *)(v3 + 48);
    v12 = v5;
    v13 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C02982BE,
      v2,
      v3,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (void **)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v15,
      (__int64)&v14);
  }
}
