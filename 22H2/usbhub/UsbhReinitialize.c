/*
 * XREFs of UsbhReinitialize @ 0x1C002E168
 * Callers:
 *     UsbhHubStart @ 0x1C0043F60 (UsbhHubStart.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhConfigureUsbHub @ 0x1C002A738 (UsbhConfigureUsbHub.c)
 *     UsbhInitializeTtHub @ 0x1C002DCB8 (UsbhInitializeTtHub.c)
 *     UsbhLogStartFailure @ 0x1C002DEBC (UsbhLogStartFailure.c)
 */

__int64 __fastcall UsbhReinitialize(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  unsigned int v5; // ebx
  char *Src; // rax
  __int64 v7; // r9

  Log(a1, 8, 1750224457, a2, 0LL);
  v4 = FdoExt(a1);
  v5 = UsbhConfigureUsbHub(a1);
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    Src = "ConfigureUsbHub";
    v7 = 5767LL;
LABEL_6:
    UsbhLogStartFailure(a1, v5, 3u, v7, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c", Src);
    return v5;
  }
  if ( (v4[640] & 0x40) != 0 )
  {
    v5 = UsbhInitializeTtHub(a1, a2);
    if ( (v5 & 0xC0000000) == 0xC0000000 )
    {
      Src = "InitializeTtHub";
      v7 = 5777LL;
      goto LABEL_6;
    }
  }
  return v5;
}
