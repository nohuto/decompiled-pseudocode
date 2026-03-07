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
