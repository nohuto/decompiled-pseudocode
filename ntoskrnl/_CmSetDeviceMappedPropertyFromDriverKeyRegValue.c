/*
 * XREFs of _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140874D18
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14076C5D4 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlUnalignedStringCchLengthW @ 0x140246434 (RtlUnalignedStringCchLengthW.c)
 *     RtlTimeToTimeFields @ 0x1402D14B0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     _RegRtlSetValue @ 0x140784FE4 (_RegRtlSetValue.c)
 */

__int64 __fastcall CmSetDeviceMappedPropertyFromDriverKeyRegValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        PLARGE_INTEGER Time,
        ULONG a6)
{
  int v8; // r11d
  DEVPROPKEY **v9; // rdx
  unsigned int i; // r9d
  DEVPROPKEY *v13; // r8
  DEVPROPKEY **v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-60h]
  __int64 v22; // [rsp+28h] [rbp-58h]
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  size_t pcchLength; // [rsp+48h] [rbp-38h] BYREF
  TIME_FIELDS TimeFields; // [rsp+50h] [rbp-30h] BYREF
  wchar_t pszDest[12]; // [rsp+60h] [rbp-20h] BYREF

  Handle = 0LL;
  pcchLength = 0LL;
  v8 = *(_DWORD *)(a3 + 16);
  v9 = &off_140A784E0;
  TimeFields = 0LL;
  for ( i = 0; i < 0xD; ++i )
  {
    v13 = *v9;
    v14 = v9;
    if ( v8 == (*v9)->pid )
    {
      v15 = *(_QWORD *)a3 - *(_QWORD *)&v13->fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&v13->fmtid.Data1 )
        v15 = *(_QWORD *)(a3 + 8) - *(_QWORD *)v13->fmtid.Data4;
      if ( !v15 )
        break;
    }
    v14 = 0LL;
    v9 += 4;
  }
  if ( !v14 )
    return (unsigned int)-1073741802;
  v16 = *((_DWORD *)v14 + 2);
  if ( a4 != v16 )
  {
    if ( a4 == 25 )
    {
      if ( v16 == 18 )
        goto LABEL_10;
    }
    else if ( a4 < 2 )
    {
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
LABEL_10:
  v17 = CmOpenDeviceRegKey(a1, a2, 18, 0, 2, 1, (__int64)&Handle, 0LL);
  if ( v17 >= 0 )
  {
    v18 = RegRtlSetValue(Handle, (const WCHAR *)v14[2], *((_DWORD *)v14 + 6), Time, a6);
    if ( v18 == -1073741444 )
    {
      v17 = -1073741772;
    }
    else if ( v18 < 0 )
    {
      v17 = v18;
    }
    else if ( *(_DWORD *)(a3 + 16) == 2 )
    {
      v20 = *(_QWORD *)a3 - *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1 )
        v20 = *(_QWORD *)(a3 + 8) - *(_QWORD *)DEVPKEY_Device_DriverDate.fmtid.Data4;
      if ( !v20 )
      {
        RtlTimeToTimeFields(Time, &TimeFields);
        LODWORD(v22) = TimeFields.Year;
        LODWORD(v21) = TimeFields.Day;
        if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%d-%d-%d", (unsigned int)TimeFields.Month, v21, v22) >= 0
          && RtlUnalignedStringCchLengthW(pszDest, 0xBuLL, &pcchLength) >= 0 )
        {
          RegRtlSetValue(Handle, L"DriverDate", 1u, pszDest, 2 * (pcchLength + 1));
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v17;
}
