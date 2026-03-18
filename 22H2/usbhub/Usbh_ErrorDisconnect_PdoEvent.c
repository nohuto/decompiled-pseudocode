/*
 * XREFs of Usbh_ErrorDisconnect_PdoEvent @ 0x1C003B970
 * Callers:
 *     UsbhPortConnect @ 0x1C004DC30 (UsbhPortConnect.c)
 *     UsbhCreatePdo @ 0x1C00542B4 (UsbhCreatePdo.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001CDA8 (UsbhAcquirePdoStateLock.c)
 *     UsbhDeletePdo @ 0x1C0054E1C (UsbhDeletePdo.c)
 */

void __fastcall Usbh_ErrorDisconnect_PdoEvent(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // dl

  UsbhAcquirePdoStateLock(a1, a3, 4);
  Log(a1, 2, 1716736630, 0LL, a3);
  if ( PdoExt(a2)[281] == 1 )
  {
    UsbhDeletePdo(a1, a2, 1LL);
  }
  else
  {
    *(_DWORD *)(a3 + 136) = 0;
    qword_1C006C500 = 0LL;
    v6 = *(_BYTE *)(a3 + 132);
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v6);
  }
}
