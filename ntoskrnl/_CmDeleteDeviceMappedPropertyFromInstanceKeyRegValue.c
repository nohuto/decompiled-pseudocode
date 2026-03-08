/*
 * XREFs of _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A64974
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14076C5D4 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  HANDLE v4; // rdi
  DEVPROPKEY **v5; // r10
  int v6; // ebx
  unsigned int i; // r11d
  DEVPROPKEY *v11; // rdx
  DEVPROPKEY **v12; // rsi
  __int64 v13; // rcx
  const WCHAR *v14; // rdx
  NTSTATUS inited; // eax
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  v4 = 0LL;
  v5 = &off_140A756D0;
  v6 = 0;
  Handle = 0LL;
  for ( i = 0; i < 2; ++i )
  {
    v11 = *v5;
    v12 = v5;
    if ( *(_DWORD *)(a4 + 16) == (*v5)->pid )
    {
      v13 = *(_QWORD *)a4 - *(_QWORD *)&v11->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v11->fmtid.Data1 )
        v13 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v11->fmtid.Data4;
      if ( !v13 )
        break;
    }
    v12 = 0LL;
    v5 += 4;
  }
  if ( !v12 )
    return (unsigned int)-1073741264;
  if ( a3 )
    goto LABEL_12;
  v6 = CmOpenDeviceRegKey(a1, a2, 16, 0, 2, 0, (__int64)&Handle, 0LL);
  if ( v6 >= 0 )
  {
    v4 = Handle;
LABEL_12:
    v14 = (const WCHAR *)v12[2];
    DestinationString = 0LL;
    if ( a3 )
      v4 = a3;
    inited = RtlInitUnicodeStringEx(&DestinationString, v14);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(v4, &DestinationString);
    if ( inited != -1073741772 && inited != -1073741444 && inited < 0 )
      v6 = inited;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
