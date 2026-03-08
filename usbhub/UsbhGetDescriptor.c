/*
 * XREFs of UsbhGetDescriptor @ 0x1C002B9AC
 * Callers:
 *     UsbhGetHubClassDescriptor @ 0x1C002C09C (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C002C234 (UsbhGetHubConfigurationDescriptor.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C0016EE0 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhGetDescriptor(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4, int a5, char a6)
{
  bool v10; // cf
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+78h] [rbp+10h] BYREF
  __int16 v15; // [rsp+79h] [rbp+11h]
  char v16; // [rsp+7Bh] [rbp+13h]
  __int16 v17; // [rsp+7Ch] [rbp+14h]
  __int16 v18; // [rsp+7Eh] [rbp+16h]
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0;
  FdoExt(a1);
  v10 = a6 != 0;
  a6 = -a6;
  v15 = 6;
  v16 = a4;
  v17 = 0;
  v14 = v10 ? -96 : 0x80;
  v18 = *a2;
  v11 = UsbhSyncSendCommand(a1, (__int64)&v14, a3, a2, v13, &v19);
  if ( (v11 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v11) )
    UsbhException(a1, 0, 16, a3, *a2, v11, v19, usbfile_hub_c, 3814, 0);
  return v11;
}
