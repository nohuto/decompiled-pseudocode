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
