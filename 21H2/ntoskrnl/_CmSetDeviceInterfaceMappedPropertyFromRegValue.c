/*
 * XREFs of _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1407664E4
 * Callers:
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140766394 (_CmSetDeviceInterfaceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpCtxRegCreateKey @ 0x140630370 (_PnpCtxRegCreateKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140632654 (_CmOpenDeviceInterfaceRegKey.c)
 *     _RegRtlSetValue @ 0x140768CB4 (_RegRtlSetValue.c)
 */

__int64 __fastcall CmSetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        ULONG a7)
{
  unsigned int v7; // r11d
  int v8; // ebx
  __int64 v13; // r9
  DEVPROPKEY **v14; // rcx
  DEVPROPKEY *v15; // r10
  DEVPROPKEY **v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rax
  int Key; // eax
  __int64 v23; // rax
  HANDLE v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  HANDLE KeyHandle; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v28; // [rsp+48h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v28 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  if ( v7 < 2 )
    return (unsigned int)-1073741264;
  v13 = 0LL;
  v14 = &off_140983B98;
  do
  {
    v15 = *v14;
    v16 = v14;
    if ( v7 == (*v14)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v16 = 0LL;
    v13 = (unsigned int)(v13 + 1);
    v14 += 2;
  }
  while ( (unsigned int)v13 < 3 );
  if ( !v16 )
    return (unsigned int)-1073741264;
  v18 = *((_DWORD *)v16 + 2);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 == 18 )
        goto LABEL_11;
    }
    else if ( a5 < 2 )
    {
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
LABEL_11:
  if ( !a3 )
  {
    v8 = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, v13, 1, 0, (__int64)&v28, 0LL);
    if ( v8 < 0 )
      goto LABEL_21;
  }
  v19 = *(_DWORD *)(a4 + 16);
  if ( v19 == 2 )
  {
    v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
      v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
    if ( !v23 )
    {
      v24 = v28;
      if ( a3 )
        v24 = a3;
      Key = PnpCtxRegCreateKey(a1, (__int64)v24, (__int64)L"Device Parameters", 0, 2u, 0LL, (__int64)&KeyHandle, 0LL);
      if ( Key == -1073741444 )
        goto LABEL_45;
      if ( Key < 0 )
        goto LABEL_36;
      Key = RegRtlSetValue(KeyHandle, a7);
LABEL_19:
      if ( Key != -1073741444 )
      {
        if ( Key >= 0 )
          goto LABEL_21;
LABEL_36:
        v8 = Key;
        goto LABEL_21;
      }
LABEL_45:
      v8 = -1073741772;
      goto LABEL_21;
    }
LABEL_55:
    v8 = -1073741264;
    goto LABEL_21;
  }
  if ( v19 != 256 )
  {
    if ( v19 == 3 )
    {
      v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
        v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
      if ( !v25 )
        goto LABEL_54;
    }
    if ( v19 == 4 )
    {
      v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
        v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
      if ( !v26 )
      {
LABEL_54:
        v8 = -1073741790;
        goto LABEL_21;
      }
    }
    goto LABEL_55;
  }
  v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
    v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
  if ( v20 )
    goto LABEL_55;
  v8 = CmOpenDeviceInterfaceRegKey(a1, a2, 0x31u, v13, 2, 0, (__int64)&Handle, 0LL);
  if ( v8 >= 0 )
  {
    Key = RegRtlSetValue(Handle, a7);
    goto LABEL_19;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v28 )
    ZwClose(v28);
  return (unsigned int)v8;
}
