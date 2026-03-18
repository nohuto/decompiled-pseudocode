/*
 * XREFs of UsbhGetStatus @ 0x1C002D6A0
 * Callers:
 *     UsbhGetMaxPowerPerPort @ 0x1C002D400 (UsbhGetMaxPowerPerPort.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

__int64 __fastcall UsbhGetStatus(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-40h]
  int v7; // [rsp+48h] [rbp-18h]
  _DWORD v8[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v9; // [rsp+90h] [rbp+30h] BYREF
  int v10; // [rsp+98h] [rbp+38h] BYREF

  v10 = 0;
  FdoExt(a1);
  v8[0] = 128;
  v9 = 2;
  v8[1] = 0x20000;
  v4 = UsbhSyncSendCommand(a1, (__int64)v8, a2, &v9, v6, &v10);
  if ( (v4 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v4) )
  {
    LOBYTE(v7) = 0;
    UsbhException(a1, 0, 17, a2, v9, v4, v10, usbfile_hub_c, 3876, v7);
  }
  return v4;
}
