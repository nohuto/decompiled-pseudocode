/*
 * XREFs of ?ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01B6C5C
 * Callers:
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01B7500 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01B5AA8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U-$_tl.c)
 *     ?DelegationResponseToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01B6658 (-DelegationResponseToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::DManip::ShellHandwritingDelegationHandleDelegatedInput(const struct tagQMSG *a1)
{
  int v1; // r10d
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // [rsp+50h] [rbp-20h] BYREF
  __int64 v5; // [rsp+58h] [rbp-18h] BYREF
  __int64 v6; // [rsp+60h] [rbp-10h] BYREF
  __int64 v7; // [rsp+68h] [rbp-8h] BYREF
  __int64 v8; // [rsp+90h] [rbp+20h] BYREF
  __int64 v9; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 4096LL) )
    {
      v5 = (__int64)InputTraceLogging::DelegationResponseToString(v1);
      LODWORD(v9) = *(_DWORD *)(v2 + 24);
      LODWORD(v4) = *(unsigned __int16 *)(v2 + 34);
      v6 = *(_QWORD *)(v2 + 40);
      LOWORD(v8) = *(_WORD *)(v2 + 32);
      v7 = *(_QWORD *)(v2 + 136);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)&dword_1C035C080,
        byte_1C031CCEF,
        v3,
        v2,
        (__int64)&v7,
        (__int64)&v8,
        (__int64)&v6,
        (__int64)&v4,
        (__int64)&v9,
        (void **)&v5);
    }
  }
}
