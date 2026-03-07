__int64 __fastcall CmDeleteInstallerClassMappedPropertyFromRegValue(__int64 a1, int a2, void *a3, __int64 a4)
{
  int v4; // r10d
  HANDLE v5; // rbx
  int v6; // edi
  DEVPROPKEY **v9; // r9
  __int64 v10; // r8
  DEVPROPKEY *v13; // rdx
  DEVPROPKEY **v14; // r14
  __int64 v15; // rcx
  const WCHAR *v16; // r14
  __int64 v17; // rax
  int v18; // eax
  NTSTATUS inited; // eax
  __int64 v21; // [rsp+28h] [rbp-38h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = 0LL;
  KeyHandle = 0LL;
  v6 = 0;
  Handle = 0LL;
  v9 = &off_140A770B0;
  v10 = 0LL;
  do
  {
    v13 = *v9;
    v14 = v9;
    if ( v4 == (*v9)->pid )
    {
      v15 = *(_QWORD *)a4 - *(_QWORD *)&v13->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v13->fmtid.Data1 )
        v15 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v13->fmtid.Data4;
      if ( !v15 )
        break;
    }
    v14 = 0LL;
    v10 = (unsigned int)(v10 + 1);
    v9 += 4;
  }
  while ( (unsigned int)v10 < 0xD );
  if ( !v14 )
    return (unsigned int)-1073741802;
  if ( a3 )
  {
LABEL_12:
    v16 = (const WCHAR *)v14[2];
    if ( *(_DWORD *)(a4 + 16) != 2 )
      goto LABEL_22;
    v17 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
      v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
    if ( v17 )
    {
LABEL_22:
      if ( a3 )
        v5 = a3;
    }
    else
    {
      if ( a3 )
        v5 = a3;
      v18 = PnpOpenPropertiesKey(a1, (__int64)v5, 0LL, 2, 0, v21, &KeyHandle);
      v6 = v18;
      if ( v18 == -1073741772 )
      {
        v6 = 0;
        goto LABEL_32;
      }
      if ( v18 < 0 )
        goto LABEL_32;
      v5 = KeyHandle;
    }
    DestinationString = 0LL;
    inited = RtlInitUnicodeStringEx(&DestinationString, v16);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(v5, &DestinationString);
    if ( inited != -1073741772 )
    {
      if ( inited == -1073741444 )
        goto LABEL_32;
      if ( inited < 0 )
      {
        v6 = inited;
        goto LABEL_32;
      }
    }
    DestinationString = 0LL;
    if ( RtlInitUnicodeStringEx(&DestinationString, &word_1408834C0) >= 0 )
      ZwDeleteValueKey(v5, &DestinationString);
    goto LABEL_32;
  }
  v6 = CmOpenInstallerClassRegKey(a1, a2, v10, (__int64)v9, 2, 0, (__int64)&Handle, 0LL);
  if ( v6 >= 0 )
  {
    v5 = Handle;
    goto LABEL_12;
  }
LABEL_32:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
