/*
 * XREFs of ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01DC3DC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01EB954 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C01DB254 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$_ea_1C01DB254.c)
 */

void InputTraceLogging::Pointer::RetrieveMessage()
{
  __int64 v0; // r8
  int v1; // r9d
  __int64 v2; // r10
  int v3; // r11d
  __int64 v4; // r9
  const char *v5; // rax
  int v6; // [rsp+60h] [rbp+27h] BYREF
  int v7; // [rsp+64h] [rbp+2Bh] BYREF
  __int64 v8; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v9; // [rsp+70h] [rbp+37h] BYREF
  __int64 v10; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v11; // [rsp+80h] [rbp+47h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C032BE20 > 4 && tlgKeywordOn((__int64)&dword_1C032BE20, 32LL) )
  {
    v6 = v3;
    v4 = (unsigned int)(v1 - 1);
    if ( (_DWORD)v4 )
    {
      v4 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v4 )
      {
        v4 = (unsigned int)(v4 - 1);
        if ( (_DWORD)v4 )
        {
          if ( (_DWORD)v4 == 1 )
            v5 = "ContinueScan";
          else
            v5 = "UNKNOWN";
        }
        else
        {
          v5 = "SkipMsg";
        }
      }
      else
      {
        v5 = "NoMsg";
      }
    }
    else
    {
      v5 = "ReturnMsg";
    }
    v9 = (__int64)v5;
    v7 = *(_DWORD *)(v2 + 24);
    LODWORD(v8) = *(unsigned __int16 *)(v2 + 34);
    v10 = *(_QWORD *)(v2 + 40);
    LOWORD(v12) = *(_WORD *)(v2 + 32);
    v11 = *(_QWORD *)(v2 + 136);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C032BE20,
      byte_1C02EE914,
      v0,
      v4,
      (__int64)&v11,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v8,
      (__int64)&v7,
      (void **)&v9,
      (__int64)&v6);
  }
}
