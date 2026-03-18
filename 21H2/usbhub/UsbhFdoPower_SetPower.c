/*
 * XREFs of UsbhFdoPower_SetPower @ 0x1C0004020
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoDevicePowerState @ 0x1C0005910 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoSystemPowerState @ 0x1C0007740 (UsbhFdoSystemPowerState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C003BE4C (UsbhPoStartNextPowerIrp_Fdo.c)
 */

NTSTATUS __fastcall UsbhFdoPower_SetPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  void *DeviceExtension; // rdi
  volatile signed __int32 *v6; // rax
  __int64 v7; // rcx
  _IO_STACK_LOCATION *v8; // r8
  __int64 Options; // r11
  __int64 v10; // rdx
  unsigned int v11; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_20;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v6 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v7 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v7 = 1952805712;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = Irp;
    v6 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
  }
  if ( !v6 )
LABEL_20:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, v6);
  v8 = Irp->Tail.Overlay.CurrentStackLocation;
  Options = v8->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v10 = *((_QWORD *)v6 + 111) + 32LL * ((unsigned int)_InterlockedDecrement(v6 + 220) & v6[221]);
      *(_DWORD *)v10 = 860770128;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = v8;
      *(_QWORD *)(v10 + 24) = Irp;
    }
    *(_QWORD *)&v6[2 * Options + 210] = Irp;
    *(_QWORD *)&v6[2 * Options + 214] = v8;
    v6[Options + 218] = 1743;
  }
  v11 = CurrentStackLocation->Parameters.Create.Options;
  if ( !v11 )
    return UsbhFdoSystemPowerState(DeviceObject, Irp);
  if ( v11 == 1 )
    return UsbhFdoDevicePowerState(DeviceObject, Irp);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 1753LL);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
}
