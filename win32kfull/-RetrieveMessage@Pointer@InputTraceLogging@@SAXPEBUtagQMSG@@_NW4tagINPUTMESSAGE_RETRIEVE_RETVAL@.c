/*
 * XREFs of ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C0143BA8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01C6A28 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C01B5B80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$_ea_1C01B5B80.c)
 */

void InputTraceLogging::Pointer::RetrieveMessage()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // r11d
  int v3; // r9d
  int v4; // r9d
  int v5; // r9d
  const char *v6; // rax
  int v7; // [rsp+60h] [rbp+27h] BYREF
  int v8; // [rsp+64h] [rbp+2Bh] BYREF
  __int64 v9; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v10; // [rsp+70h] [rbp+37h] BYREF
  __int64 v11; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v12; // [rsp+80h] [rbp+47h] BYREF
  __int64 v13; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C035C080 > 4 && tlgKeywordOn((__int64)&dword_1C035C080, 32LL) )
  {
    v7 = v2;
    v3 = v0 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 == 1 )
            v6 = "ContinueScan";
          else
            v6 = "UNKNOWN";
        }
        else
        {
          v6 = "SkipMsg";
        }
      }
      else
      {
        v6 = "NoMsg";
      }
    }
    else
    {
      v6 = "ReturnMsg";
    }
    v10 = (__int64)v6;
    v8 = *(_DWORD *)(v1 + 24);
    LODWORD(v9) = *(unsigned __int16 *)(v1 + 34);
    v11 = *(_QWORD *)(v1 + 40);
    LOWORD(v13) = *(_WORD *)(v1 + 32);
    v12 = *(_QWORD *)(v1 + 136);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_1C035C080,
      (__int64)&v12,
      (__int64)&v13,
      (__int64)&v11,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v10,
      (__int64)&v7);
  }
}
