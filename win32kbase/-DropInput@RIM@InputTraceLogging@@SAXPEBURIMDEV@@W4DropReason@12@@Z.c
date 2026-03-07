char __fastcall InputTraceLogging::RIM::DropInput(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // r9d
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int8 *v6; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  __int64 v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF

  LOBYTE(v1) = *(_BYTE *)(a1 + 48);
  if ( (_BYTE)v1 )
  {
    if ( (_BYTE)v1 == 2 )
    {
      v1 = *(_DWORD *)(a1 + 200);
      if ( (v1 & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C02CA7E0 > 4 )
        {
          LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL);
          if ( (_BYTE)v1 )
          {
            v3 = InputTraceLogging::DropReasonToString(v8);
            v6 = (unsigned __int8 *)&unk_1C0296FAA;
            goto LABEL_17;
          }
        }
      }
      else if ( (unsigned int)dword_1C02CA7E0 > 4 )
      {
        LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL);
        if ( (_BYTE)v1 )
        {
          v3 = InputTraceLogging::DropReasonToString(v7);
          v6 = (unsigned __int8 *)&unk_1C0296FDC;
          goto LABEL_17;
        }
      }
    }
    else if ( (_BYTE)v1 == 1 && (unsigned int)dword_1C02CA7E0 > 4 )
    {
      LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL);
      if ( (_BYTE)v1 )
      {
        v3 = InputTraceLogging::DropReasonToString(v9);
        v6 = (unsigned __int8 *)&unk_1C0297012;
        goto LABEL_17;
      }
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 4 )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL);
    if ( (_BYTE)v1 )
    {
      v3 = InputTraceLogging::DropReasonToString(v2);
      v6 = (unsigned __int8 *)&unk_1C0296F76;
LABEL_17:
      v11 = v3;
      v12 = v4;
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
                     (__int64)&dword_1C02CA7E0,
                     v6,
                     v4,
                     v5,
                     (__int64)&v12,
                     (void **)&v11);
    }
  }
  return v1;
}
