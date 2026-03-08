/*
 * XREFs of _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140A64810
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14076C5D4 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall CmDeleteDeviceMappedPropertyFromDriverKeyRegValue(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r11d
  unsigned int v5; // r9d
  DEVPROPKEY **v7; // r8
  DEVPROPKEY *v8; // r10
  DEVPROPKEY **v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  const WCHAR *v13; // rdx
  HANDLE v14; // rsi
  NTSTATUS inited; // eax
  __int64 v16; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  v4 = *(_DWORD *)(a3 + 16);
  v5 = 0;
  v7 = &off_140A784E0;
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
  v12 = CmOpenDeviceRegKey(a1, a2, 18, 0, 2, 0, (__int64)&KeyHandle, 0LL);
  v11 = v12;
  if ( v12 == -1073741772 )
  {
    v11 = 0;
    goto LABEL_24;
  }
  if ( v12 >= 0 )
  {
    v13 = (const WCHAR *)v9[2];
    v14 = KeyHandle;
    DestinationString = 0LL;
    inited = RtlInitUnicodeStringEx(&DestinationString, v13);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(v14, &DestinationString);
    if ( inited == -1073741772 )
      goto LABEL_18;
    if ( inited == -1073741444 )
      goto LABEL_24;
    if ( inited >= 0 )
    {
LABEL_18:
      if ( *(_DWORD *)(a3 + 16) == 2 )
      {
        v16 = *(_QWORD *)a3 - *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1;
        if ( *(_QWORD *)a3 == *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1 )
          v16 = *(_QWORD *)(a3 + 8) - *(_QWORD *)DEVPKEY_Device_DriverDate.fmtid.Data4;
        if ( !v16 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, L"DriverDate") >= 0 )
            ZwDeleteValueKey(KeyHandle, &DestinationString);
        }
      }
      goto LABEL_24;
    }
    v11 = inited;
  }
LABEL_24:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v11;
}
