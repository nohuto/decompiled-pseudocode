/*
 * XREFs of Usbh_Disconnect_PdoEvent @ 0x1C003B86C
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0035DA4 (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhDropDevice @ 0x1C004D614 (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C004E1B0 (UsbhPortDisconnect.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001CDA8 (UsbhAcquirePdoStateLock.c)
 *     UsbhDeregisterPdo @ 0x1C0037DEC (UsbhDeregisterPdo.c)
 *     UsbhDeletePdo @ 0x1C0054E1C (UsbhDeletePdo.c)
 */

void __fastcall Usbh_Disconnect_PdoEvent(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // r8
  KIRQL v9; // dl

  UsbhAcquirePdoStateLock(a1, a4, a3);
  Log(a1, 2, 1716736630, 0LL, a4);
  FdoExt(a1);
  if ( (PdoExt(a2)[355] & 0x200) != 0 )
    USBD_MarkDeviceAsDisconnected(a2);
  v8 = (unsigned int)PdoExt(a2)[281];
  if ( (int)v8 > 0 )
  {
    if ( (int)v8 <= 2 )
    {
      UsbhDeletePdo(a1, a2, v8);
      return;
    }
    if ( (_DWORD)v8 == 3 )
    {
      UsbhDeregisterPdo(a1, a2, v8, a3, a4);
      return;
    }
  }
  *(_DWORD *)(a4 + 136) = 0;
  qword_1C006C500 = 0LL;
  v9 = *(_BYTE *)(a4 + 132);
  *(_DWORD *)(a4 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, v9);
}
