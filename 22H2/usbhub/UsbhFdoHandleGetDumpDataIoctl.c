/*
 * XREFs of UsbhFdoHandleGetDumpDataIoctl @ 0x1C0030F34
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0009690 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0014E84 (UsbhDecPdoIoCount.c)
 *     Usbh_HubDerefDeviceHandle @ 0x1C002EC44 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhGetDeviceHandle @ 0x1C00389F4 (UsbhGetDeviceHandle.c)
 */

__int64 __fastcall UsbhFdoHandleGetDumpDataIoctl(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  unsigned int v8; // ebx
  _IRP *MasterIrp; // rbx
  PDEVICE_OBJECT *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 DeviceHandle; // [rsp+28h] [rbp-10h]

  v6 = PdoExt(a2);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  DeviceHandle = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x20 )
  {
    MasterIrp = a3->AssociatedIrp.MasterIrp;
    v12 = *((_QWORD *)v6 + 145);
    DeviceHandle = UsbhGetDeviceHandle(a1, a1);
    if ( DeviceHandle )
    {
      MasterIrp->AssociatedIrp.MasterIrp = (_IRP *)&v12;
      v10 = (PDEVICE_OBJECT *)FdoExt(a1);
      ++a3->CurrentLocation;
      ++a3->Tail.Overlay.CurrentStackLocation;
      v8 = IofCallDriver(v10[152], a3);
      Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a1, 0x48447472u);
      goto LABEL_7;
    }
    v8 = -1073741823;
  }
  else
  {
    v8 = -1073741789;
  }
  a3->IoStatus.Status = v8;
  IofCompleteRequest(a3, 0);
LABEL_7:
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v8;
}
