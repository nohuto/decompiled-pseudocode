/*
 * XREFs of UsbhGetHubClassDescriptor @ 0x1C002C09C
 * Callers:
 *     UsbhCheckHubPowerStatus @ 0x1C00047D4 (UsbhCheckHubPowerStatus.c)
 *     UsbhInitialize @ 0x1C002CE20 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     memset @ 0x1C0023880 (memset.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     UsbhGetDescriptor @ 0x1C002B9AC (UsbhGetDescriptor.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubClassDescriptor(__int64 a1, void *a2)
{
  _DWORD *v4; // rsi
  int Descriptor; // ebx
  int v6; // r10d
  int v7; // r11d
  int v8; // r10d
  int v10; // [rsp+20h] [rbp-48h]
  unsigned __int16 v11; // [rsp+80h] [rbp+18h] BYREF
  _DWORD *v12; // [rsp+88h] [rbp+20h] BYREF

  v4 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      23,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  v12 = v4 + 734;
  memset(a2, 0, 0x47uLL);
  v11 = 71;
  Descriptor = UsbhGetDescriptor(a1, &v11, (__int64)a2, 41, v10, 1);
  Log(a1, 8, 1214475379, Descriptor, v11);
  if ( (Descriptor & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(Descriptor) )
      UsbhException(a1, 0, 14, (int)&v12, v8, Descriptor, -1, usbfile_hub_c, 4089, 0);
  }
  else if ( *((_BYTE *)v12 + 2) )
  {
    v4[640] |= 0x400000u;
    Log(a1, v7, 1214475364, (__int64)v12, *((unsigned __int8 *)v12 + 2));
  }
  else
  {
    Descriptor = -1073741811;
    UsbhException(a1, 0, 15, (int)&v12, v6, -1073741811, -1, usbfile_hub_c, 4098, 0);
  }
  return (unsigned int)Descriptor;
}
