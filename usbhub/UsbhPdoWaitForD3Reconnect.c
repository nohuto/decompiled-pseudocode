POWER_STATE __fastcall UsbhPdoWaitForD3Reconnect(PDEVICE_OBJECT DeviceObject, struct _DEVICE_OBJECT *a2)
{
  char v4; // r14
  int v5; // r15d
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  _DWORD *v8; // rax
  int v9; // eax
  int v10; // r10d
  _DWORD *v11; // rax
  int v12; // eax
  _DWORD *v13; // rax
  int v15; // [rsp+70h] [rbp+18h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  v4 = 0;
  v5 = 0;
  v6 = PdoExt((__int64)a2);
  v7 = v6;
  if ( (v6[355] & 0x1000000) != 0 )
  {
    v4 = 1;
    v5 = UsbhWaitEventWithTimeoutEx((__int64)DeviceObject, v6 + 730, v6[742], 1684222788, 0, 0LL);
  }
  KeWaitForSingleObject(v7 + 736, Executive, 0, 0, 0LL);
  v7[355] &= ~0x4000000u;
  KeSetEvent((PRKEVENT)(v7 + 736), 0, 0);
  Log((__int64)DeviceObject, 16, 1144210290, v5, *((unsigned __int16 *)v7 + 714));
  if ( v4 )
  {
    if ( v5 >= 0 )
      goto LABEL_11;
LABEL_16:
    v13 = PdoExt((__int64)a2);
    UsbhQueueSoftConnectChange((__int64)DeviceObject, *((_WORD *)v7 + 714), (__int64)(v13 + 236), 0);
    return UsbhSet_Pdo_Dx(a2, (POWER_STATE)1);
  }
  if ( (int)UsbhQueryPortState((__int64)DeviceObject, *((_WORD *)v7 + 714), (__int64)&v15, &v16) < 0 )
    goto LABEL_16;
  if ( (v15 & 3) != 1 )
  {
    if ( (v15 & 1) != 0 )
    {
      v8 = PdoExt((__int64)a2);
      UsbhSyncResumeDeviceInternal((__int64)DeviceObject, (__int64)(v8 + 236), a2);
      return UsbhSet_Pdo_Dx(a2, (POWER_STATE)1);
    }
    Log((__int64)DeviceObject, 16, 1144210279, (unsigned __int16)v15, *((unsigned __int16 *)v7 + 714));
    goto LABEL_16;
  }
  Log((__int64)DeviceObject, 16, 1144210284, (unsigned __int16)v15, *((unsigned __int16 *)v7 + 714));
LABEL_11:
  UsbhWait((__int64)DeviceObject, 0x64u);
  v9 = UsbhQueryPortState((__int64)DeviceObject, *((_WORD *)v7 + 714), (__int64)&v15, &v16);
  Log((__int64)DeviceObject, 16, 1144210291, v9, (unsigned __int16)v15);
  if ( v10 >= 0 && (v15 & 1) != 0 )
  {
    v11 = PdoExt((__int64)a2);
    v12 = UsbhSyncResetDeviceInternal(DeviceObject, (__int64)(v11 + 236), (__int64)a2);
  }
  else
  {
    v12 = -1073741823;
  }
  if ( v12 < 0 )
    goto LABEL_16;
  return UsbhSet_Pdo_Dx(a2, (POWER_STATE)1);
}
