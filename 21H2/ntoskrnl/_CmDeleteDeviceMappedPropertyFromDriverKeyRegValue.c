/*
 * XREFs of _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140730998
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14073A704 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall CmDeleteDeviceMappedPropertyFromDriverKeyRegValue(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r11d
  unsigned int v5; // r9d
  DEVPROPKEY **v7; // r8
  DEVPROPKEY *v8; // r10
  DEVPROPKEY **v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  const WCHAR *v13; // rdx
  HANDLE v14; // rsi
  NTSTATUS inited; // eax
  __int64 v17; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  v4 = *(_DWORD *)(a3 + 16);
  v5 = 0;
  v7 = &off_140986A80;
  do
  {
    v8 = *v7;
    v9 = v7;
    if ( v4 == (*v7)->pid )
    {
      v10 = *(_QWORD *)a3 - *(_QWORD *)&v8->fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&v8->fmtid.Data1 )
        v10 = *(_QWORD *)(a3 + 8) - *(_QWORD *)v8->fmtid.Data4;
      if ( !v10 )
        break;
    }
    v9 = 0LL;
    ++v5;
    v7 += 4;
  }
  while ( v5 < 0xD );
  if ( !v9 )
    return (unsigned int)-1073741802;
  v11 = CmOpenDeviceRegKey(a1, a2, 18, 0, 2, 0, (__int64)&KeyHandle, 0LL);
  v12 = v11;
  if ( v11 == -1073741772 )
  {
    v12 = 0;
  }
  else if ( v11 >= 0 )
  {
    v13 = (const WCHAR *)v9[2];
    v14 = KeyHandle;
    DestinationString = 0LL;
    inited = RtlInitUnicodeStringEx(&DestinationString, v13);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(v14, &DestinationString);
    if ( inited == -1073741772 )
      goto LABEL_16;
    if ( inited != -1073741444 )
    {
      if ( inited >= 0 )
      {
LABEL_16:
        if ( *(_DWORD *)(a3 + 16) == 2 )
        {
          v17 = *(_QWORD *)a3 - *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1;
          if ( *(_QWORD *)a3 == *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1 )
            v17 = *(_QWORD *)(a3 + 8) - *(_QWORD *)DEVPKEY_Device_DriverDate.fmtid.Data4;
          if ( !v17 )
          {
            DestinationString = 0LL;
            if ( RtlInitUnicodeStringEx(&DestinationString, L"DriverDate") >= 0 )
              ZwDeleteValueKey(KeyHandle, &DestinationString);
          }
        }
        goto LABEL_17;
      }
      v12 = inited;
    }
  }
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v12;
}
