void __fastcall XDCOBJ::LogUmpdCallbackStatus(XDCOBJ *this, struct UMPDOBJ *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  const WCHAR *DriverName; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  const WCHAR *v13; // [rsp+58h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  if ( dword_1C02C93D8 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
    {
      v4 = *(unsigned int *)(v3 + 428);
      v5 = *(unsigned __int16 *)(*(_QWORD *)v2 + 12LL);
      if ( *(_DWORD *)(*(_QWORD *)v2 + 2176LL) != (_DWORD)v4 )
      {
        *(_DWORD *)(*(_QWORD *)v2 + 2176LL) = v4;
        DriverName = PDEV::GetDriverName(*(PDEV **)(*(_QWORD *)v2 + 48LL));
        if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, v6) )
        {
          v16 = v5;
          v12 = v4;
          v13 = DriverName;
          v14 = 0x2000000LL;
          v15 = 20;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v7,
            byte_1C029544C,
            v9,
            v10,
            (__int64)&v15,
            (__int64)&v14,
            &v13,
            (__int64)&v12,
            (__int64)&v16);
        }
        v11 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
        if ( !*(_BYTE *)(v11 + 1216) )
        {
          *(_BYTE *)(v11 + 1216) = 1;
          DbgkWerCaptureLiveKernelDump(
            L"win32kbase.sys",
            400LL,
            29LL,
            DriverName,
            v4,
            v5,
            DriverName,
            DumpDriverName,
            0);
        }
      }
    }
  }
}
