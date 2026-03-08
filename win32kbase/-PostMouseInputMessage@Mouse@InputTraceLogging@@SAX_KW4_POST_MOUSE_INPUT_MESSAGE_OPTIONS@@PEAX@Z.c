/*
 * XREFs of ?PostMouseInputMessage@Mouse@InputTraceLogging@@SAX_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAX@Z @ 0x1C022EFAC
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C022ED3C (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@3@Z @ 0x1C0229F40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void InputTraceLogging::Mouse::PostMouseInputMessage()
{
  __int64 v0; // r8
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r9
  const char *v4; // rax
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    v7 = v0;
    v3 = (unsigned int)(v1 - 1);
    if ( (_DWORD)v3 )
    {
      v3 = (unsigned int)(v3 - 1);
      if ( (_DWORD)v3 )
      {
        if ( (_DWORD)v3 == 1 )
          v4 = "RetargetAndPostInput";
        else
          v4 = "UNKNOWN";
      }
      else
      {
        v4 = "DropInput";
      }
    }
    else
    {
      v4 = "PostInput";
    }
    v5 = (__int64)v4;
    v6 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029DDD4,
      v0,
      v3,
      (__int64)&v6,
      (void **)&v5,
      (__int64)&v7);
  }
}
