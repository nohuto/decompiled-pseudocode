void __fastcall InputTraceLogging::RIM::RimDeviceMonitorMapping(const struct RIMDEV *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  const char *v9; // rax
  __int64 v10; // [rsp+60h] [rbp-20h] BYREF
  __int64 v11; // [rsp+68h] [rbp-18h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h] BYREF
  __int64 v14; // [rsp+98h] [rbp+18h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v3 = *(_DWORD *)(v1 + 1352);
    LODWORD(v14) = *(_DWORD *)(v1 + 1880);
    LODWORD(v15) = *(_DWORD *)(v1 + 1876);
    v16 = *(_QWORD *)(v1 + 1868);
    v10 = v1 + 1612;
    v11 = v1 + 1356;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              v8 = v7 - 1;
              if ( v8 )
              {
                if ( v8 == 1 )
                  v9 = "Monitor";
                else
                  v9 = "UNKNOWN";
              }
              else
              {
                v9 = "OEM";
              }
            }
            else
            {
              v9 = "DefaultFallback";
            }
          }
          else
          {
            v9 = "DefaultPrimary";
          }
        }
        else
        {
          v9 = "Automatic";
        }
      }
      else
      {
        v9 = "User";
      }
    }
    else
    {
      v9 = "None";
    }
    v12 = (__int64)v9;
    v13 = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      (unsigned __int8 *)dword_1C02966BD,
      v1,
      v2,
      (__int64)&v13,
      (void **)&v12,
      (const WCHAR **)&v11,
      (const WCHAR **)&v10,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
}
