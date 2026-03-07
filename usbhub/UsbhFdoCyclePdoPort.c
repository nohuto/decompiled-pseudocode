__int64 __fastcall UsbhFdoCyclePdoPort(__int64 a1, ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  int v11; // [rsp+80h] [rbp+18h] BYREF

  v11 = 0;
  Log(a1, 8, 1768898097, (__int64)BugCheckParameter4, 0LL);
  v6 = PdoExt(BugCheckParameter3);
  UsbhException(a1, *((unsigned __int16 *)v6 + 714), 96, 0, 0, 0, 0, usbfile_dioctl_c, 917, 0);
  if ( KeGetCurrentIrql() )
  {
    v7 = -1073741811;
    v9 = PdoExt(BugCheckParameter3);
    UsbhException(a1, *((unsigned __int16 *)v9 + 714), 95, 0, 0, -1073741811, 0, usbfile_dioctl_c, 931, 0);
  }
  else
  {
    v7 = UsbhCycleDevicePort(a1, BugCheckParameter3, &v11);
    if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
    {
      v8 = PdoExt(BugCheckParameter3);
      UsbhException(a1, *((unsigned __int16 *)v8 + 714), 94, 0, 0, v7, v11, usbfile_dioctl_c, 924, 0);
    }
  }
  BugCheckParameter4->IoStatus.Status = v7;
  IofCompleteRequest(BugCheckParameter4, 0);
  UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return v7;
}
