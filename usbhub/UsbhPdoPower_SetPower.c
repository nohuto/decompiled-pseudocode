__int64 __fastcall UsbhPdoPower_SetPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _QWORD *DeviceExtension; // rcx
  __int64 Options; // r11
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // edx
  _DWORD *v15; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !a1 )
    goto LABEL_24;
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)DeviceExtension != 1329877064 )
    UsbhTrapFatal_Dbg(a1, DeviceExtension);
  Options = CurrentStackLocation->Parameters.Create.Options;
  v7 = DeviceExtension[148];
  if ( (unsigned int)Options <= 1 )
  {
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 64);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 888)
             + 32LL
             * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
          *(_DWORD *)v9 = 860767312;
          *(_QWORD *)(v9 + 8) = 0LL;
          *(_QWORD *)(v9 + 16) = CurrentStackLocation;
          *(_QWORD *)(v9 + 24) = a2;
        }
      }
    }
    DeviceExtension[Options + 100] = a2;
    DeviceExtension[Options + 102] = CurrentStackLocation;
    *((_DWORD *)DeviceExtension + Options + 208) = 752;
  }
  v10 = DeviceExtension[148];
  if ( !v10 )
LABEL_24:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v11 = *(_QWORD *)(v10 + 64);
  if ( !v11 )
    UsbhTrapFatal_Dbg(DeviceExtension[148], 0LL);
  if ( *(_DWORD *)v11 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceExtension[148], *(_QWORD *)(v10 + 64));
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(v11 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
    *(_DWORD *)v12 = 1347642480;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = a1;
    *(_QWORD *)(v12 + 24) = a2;
  }
  v13 = CurrentStackLocation->Parameters.Create.Options;
  if ( !v13 )
    return UsbhPdoSystemPowerState(DeviceExtension[148], (__int64)a1, a2);
  if ( v13 == 1 )
    return UsbhPdoDevicePowerState(DeviceExtension[148], a1, a2);
  v15 = PdoExt((__int64)a1);
  UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v15 + 148), (__int64)a1, a2, 767);
  a2->IoStatus.Status = -1073741637;
  IofCompleteRequest(a2, 0);
  return 3221225659LL;
}
