__int64 __fastcall UsbhGetStatus(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-40h]
  _DWORD v7[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v8; // [rsp+90h] [rbp+30h] BYREF
  int v9; // [rsp+98h] [rbp+38h] BYREF

  v9 = 0;
  FdoExt(a1);
  v7[0] = 128;
  v8 = 2;
  v7[1] = 0x20000;
  v4 = UsbhSyncSendCommand(a1, (__int64)v7, a2, &v8, v6, &v9);
  if ( (v4 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v4) )
    UsbhException(a1, 0, 17, a2, v8, v4, v9, usbfile_hub_c, 3876, 0);
  return v4;
}
