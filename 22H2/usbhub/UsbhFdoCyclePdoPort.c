/*
 * XREFs of UsbhFdoCyclePdoPort @ 0x1C0030D70
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0009690 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0014E84 (UsbhDecPdoIoCount.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhCycleDevicePort @ 0x1C0037B3C (UsbhCycleDevicePort.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoCyclePdoPort(__int64 a1, ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = 0;
  Log(a1, 8, 1768898097, (__int64)BugCheckParameter4, 0LL);
  v6 = PdoExt(BugCheckParameter3);
  LOBYTE(v11) = 0;
  UsbhException(a1, *((unsigned __int16 *)v6 + 714), 96, 0, 0, 0, 0, usbfile_dioctl_c, 917, v11);
  if ( KeGetCurrentIrql() )
  {
    v7 = -1073741811;
    v9 = PdoExt(BugCheckParameter3);
    LOBYTE(v12) = 0;
    UsbhException(a1, *((unsigned __int16 *)v9 + 714), 95, 0, 0, -1073741811, 0, usbfile_dioctl_c, 931, v12);
  }
  else
  {
    v7 = UsbhCycleDevicePort(a1, BugCheckParameter3, &v13);
    if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
    {
      v8 = PdoExt(BugCheckParameter3);
      LOBYTE(v12) = 0;
      UsbhException(a1, *((unsigned __int16 *)v8 + 714), 94, 0, 0, v7, v13, usbfile_dioctl_c, 924, v12);
    }
  }
  BugCheckParameter4->IoStatus.Status = v7;
  IofCompleteRequest(BugCheckParameter4, 0);
  UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return v7;
}
