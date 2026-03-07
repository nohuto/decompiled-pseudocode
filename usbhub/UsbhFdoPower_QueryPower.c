NTSTATUS __fastcall UsbhFdoPower_QueryPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  void *DeviceExtension; // rbx
  __int64 Options; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ecx
  PDEVICE_OBJECT *v9; // rbx
  _DWORD *v10; // rax
  _IO_STACK_LOCATION *v11; // rbp
  _DWORD *v12; // r11
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // r11

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v7 = *((_QWORD *)DeviceExtension + 111)
         + 32LL
         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v7 = 860770128;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = CurrentStackLocation;
      *(_QWORD *)(v7 + 24) = Irp;
    }
    *((_QWORD *)DeviceExtension + Options + 105) = Irp;
    *((_QWORD *)DeviceExtension + Options + 107) = CurrentStackLocation;
    *((_DWORD *)DeviceExtension + Options + 218) = 1161;
  }
  v8 = CurrentStackLocation->Parameters.Create.Options;
  if ( !v8 )
    return UsbhFdoQuerySystemPowerState(DeviceObject, Irp);
  if ( v8 == 1 )
  {
    v9 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
    Log((__int64)DeviceObject, 16, 1365536883, 0LL, (__int64)Irp);
    v10 = FdoExt((__int64)DeviceObject);
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = v10;
    v13 = v11->Parameters.Create.Options;
    if ( (unsigned int)v13 <= 1 )
    {
      Log((__int64)DeviceObject, 16, 1347374641, *(_QWORD *)&v12[2 * v13 + 210], (__int64)Irp);
      Log((__int64)DeviceObject, 16, 1347374642, *(_QWORD *)(v15 + 8 * v14 + 856), (__int64)v11);
      *(_QWORD *)(v17 + 8 * v16 + 840) = 0LL;
      *(_QWORD *)(v17 + 8 * v16 + 856) = 0LL;
      *(_DWORD *)(v17 + 4 * v16 + 872) = 1386;
      PoStartNextPowerIrp(Irp);
    }
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return PoCallDriver(v9[151], Irp);
  }
  else
  {
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 1172LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
  }
}
