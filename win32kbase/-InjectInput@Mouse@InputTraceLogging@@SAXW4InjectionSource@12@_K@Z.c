void InputTraceLogging::Mouse::InjectInput()
{
  __int64 v0; // r8
  __int64 v1; // r9
  const char *v2; // rax
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    if ( (_DWORD)v0 )
    {
      v0 = (unsigned int)(v0 - 1);
      if ( (_DWORD)v0 )
      {
        v0 = (unsigned int)(v0 - 1);
        if ( (_DWORD)v0 )
        {
          v0 = (unsigned int)(v0 - 1);
          if ( (_DWORD)v0 )
          {
            v0 = (unsigned int)(v0 - 1);
            if ( (_DWORD)v0 )
            {
              if ( (_DWORD)v0 == 1 )
                v2 = "Dial";
              else
                v2 = "UNKNOWN";
            }
            else
            {
              v2 = "PTPMouseOperation";
            }
          }
          else
          {
            v2 = "MousePromotion";
          }
        }
        else
        {
          v2 = "SendInput";
        }
      }
      else
      {
        v2 = "PTPMarshalNotification";
      }
    }
    else
    {
      v2 = "SynthesizeMouseInput";
    }
    v3 = (__int64)v2;
    v4 = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0294DE5,
      v0,
      v1,
      (__int64)&v4,
      (void **)&v3);
  }
}
