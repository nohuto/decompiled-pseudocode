void __fastcall InputTraceLogging::RIM::RimDevice(const struct RIMDEV *a1)
{
  __int64 v2; // r8
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // ecx
  const char *v7; // rax
  __int64 v8; // rcx
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  const char *v14; // rax
  unsigned int v15; // ecx
  char v16; // [rsp+B0h] [rbp-80h] BYREF
  int v17; // [rsp+B4h] [rbp-7Ch] BYREF
  int v18; // [rsp+B8h] [rbp-78h] BYREF
  int v19; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v28; // [rsp+100h] [rbp-30h] BYREF
  __int64 v29; // [rsp+108h] [rbp-28h] BYREF
  __int64 v30; // [rsp+110h] [rbp-20h] BYREF
  __int64 v31; // [rsp+118h] [rbp-18h] BYREF
  __int64 v32; // [rsp+140h] [rbp+10h] BYREF
  __int64 v33; // [rsp+148h] [rbp+18h] BYREF

  if ( InputTraceLogging::Enabled(0) )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
    {
      v3 = *((_DWORD *)a1 + 534);
      v4 = v2 - *((_QWORD *)a1 + 9);
      v5 = v2 - *((_QWORD *)a1 + 8);
      v20 = v4;
      v17 = *((_DWORD *)a1 + 38);
      v18 = *((_DWORD *)a1 + 68);
      v19 = *((_DWORD *)a1 + 72);
      v22 = *((_QWORD *)a1 + 31);
      LOBYTE(v32) = *((_BYTE *)a1 + 206);
      LOBYTE(v33) = *((_BYTE *)a1 + 205);
      v16 = *((_BYTE *)a1 + 204);
      v23 = *((_QWORD *)a1 + 24);
      v24 = (__int64)a1 + 2140;
      v25 = (__int64)a1 + 2120;
      v21 = v5;
      if ( v3 )
      {
        v6 = v3 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
            v7 = "Unknown";
          else
            v7 = "UNKNOWN";
        }
        else
        {
          v7 = "External";
        }
      }
      else
      {
        v7 = "Integrated";
      }
      v8 = *((unsigned int *)a1 + 330);
      v26 = (__int64)v7;
      v27 = (__int64)a1 + 208;
      v28 = InputTraceLogging::InputModeToString(v8);
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 == 1 )
                v14 = "Reset";
              else
                v14 = (const char *)&unk_1C02A2108;
            }
            else
            {
              v14 = "Destroyed";
            }
          }
          else
          {
            v14 = "Closed";
          }
        }
        else
        {
          v14 = "Opened";
        }
      }
      else
      {
        v14 = "Created";
      }
      v15 = *((unsigned __int8 *)a1 + 48);
      v29 = (__int64)v14;
      v30 = (__int64)InputTraceLogging::RimDevTypeToString(v15);
      v31 = (__int64)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (int)&dword_1C02CA7E0,
        (int)&dword_1C0296753,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v16,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v22,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v21,
        (__int64)&v20);
    }
    InputTraceLogging::RIM::RimDeviceFlags(a1);
    if ( (*((_DWORD *)a1 + 50) & 0x80u) == 0 )
    {
      if ( *((_BYTE *)a1 + 48) == 2 )
        InputTraceLogging::RIM::RimDeviceHidData(a1);
    }
    else
    {
      InputTraceLogging::RIM::RimDevicePointerData(a1);
    }
    if ( *((_DWORD *)a1 + 334) )
      InputTraceLogging::RIM::RimDeviceMonitorMapping(a1);
  }
}
