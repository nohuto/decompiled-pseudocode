void InputTraceLogging::Pointer::DropInput()
{
  __int64 v0; // r8
  __int64 v1; // r9
  _WORD *v2; // r10
  const char *v3; // rax
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h] BYREF
  __int64 v6[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v7; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
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
              v0 = (unsigned int)(v0 - 1);
              if ( (_DWORD)v0 )
              {
                v0 = (unsigned int)(v0 - 1);
                if ( (_DWORD)v0 )
                {
                  if ( (_DWORD)v0 == 1 )
                    v3 = "VirtualPTP";
                  else
                    v3 = "UNKNOWN";
                }
                else
                {
                  v3 = "UIPI";
                }
              }
              else
              {
                v3 = "HitTestFailed";
              }
            }
            else
            {
              v3 = "InvalidStateTransition";
            }
          }
          else
          {
            v3 = "PointerTypeChanged";
          }
        }
        else
        {
          v3 = "CreateNodeFailed";
        }
      }
      else
      {
        v3 = "NoPointerFlags";
      }
    }
    else
    {
      v3 = "Suppressed";
    }
    v4 = (__int64)v3;
    LOWORD(v7) = *v2;
    v5 = *(_QWORD *)(v1 + 72);
    v6[0] = *(_QWORD *)(v1 + 216);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029B15D,
      v0,
      v1,
      (__int64)v6,
      (__int64)&v5,
      (__int64)&v7,
      (void **)&v4);
  }
}
