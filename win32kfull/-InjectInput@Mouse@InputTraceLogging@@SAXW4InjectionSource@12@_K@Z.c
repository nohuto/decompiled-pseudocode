void InputTraceLogging::Mouse::InjectInput()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // r10
  const char *v3; // rax
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C035C080 > 4 && tlgKeywordOn((__int64)&dword_1C035C080, 64LL) )
  {
    if ( (_DWORD)v1 )
    {
      v1 = (unsigned int)(v1 - 1);
      if ( (_DWORD)v1 )
      {
        v1 = (unsigned int)(v1 - 1);
        if ( (_DWORD)v1 )
        {
          v1 = (unsigned int)(v1 - 1);
          if ( (_DWORD)v1 )
          {
            v1 = (unsigned int)(v1 - 1);
            if ( (_DWORD)v1 )
            {
              if ( (_DWORD)v1 == 1 )
                v3 = "Dial";
              else
                v3 = "UNKNOWN";
            }
            else
            {
              v3 = "PTPMouseOperation";
            }
          }
          else
          {
            v3 = "MousePromotion";
          }
        }
        else
        {
          v3 = "SendInput";
        }
      }
      else
      {
        v3 = "PTPMarshalNotification";
      }
    }
    else
    {
      v3 = "SynthesizeMouseInput";
    }
    v4 = (__int64)v3;
    v5 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C035C080,
      byte_1C031BA18,
      v0,
      v1,
      (__int64)&v5,
      (void **)&v4);
  }
}
