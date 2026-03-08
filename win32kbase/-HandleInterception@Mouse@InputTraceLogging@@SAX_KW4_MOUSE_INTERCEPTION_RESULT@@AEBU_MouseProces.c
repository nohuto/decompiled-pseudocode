/*
 * XREFs of ?HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProcessorData@@@Z @ 0x1C022DFA8
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C022E0C8 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01D1790 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

void InputTraceLogging::Mouse::HandleInterception()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // r10
  const char *v3; // rax
  __int64 v4; // [rsp+40h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp-10h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    LODWORD(v6) = *(_DWORD *)(v0 + 20);
    if ( (_DWORD)v1 )
    {
      v1 = (unsigned int)(v1 - 1);
      if ( (_DWORD)v1 )
      {
        if ( (_DWORD)v1 == 1 )
          v3 = "RequestProcessing";
        else
          v3 = "UNKNOWN";
      }
      else
      {
        v3 = "ProcessedByInterceptor";
      }
    }
    else
    {
      v3 = "No-op";
    }
    v4 = (__int64)v3;
    v5 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029D911,
      v0,
      v1,
      (__int64)&v5,
      (void **)&v4,
      (__int64)&v6);
  }
}
