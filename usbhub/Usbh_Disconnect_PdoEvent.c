/*
 * XREFs of Usbh_Disconnect_PdoEvent @ 0x1C003AFBC
 * Callers:
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C00354BC (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhDropDevice @ 0x1C004CAEC (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C004D690 (UsbhPortDisconnect.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0031CB0 (UsbhAcquirePdoStateLock.c)
 *     UsbhDeregisterPdo @ 0x1C0037578 (UsbhDeregisterPdo.c)
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 */

void __fastcall Usbh_Disconnect_PdoEvent(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _DWORD *v8; // rax
  __int64 v9; // r8
  KIRQL v10; // dl

  UsbhAcquirePdoStateLock(a1, a4, a3);
  Log(a1, 2, 1716736630, 0LL, a4);
  FdoExt(a1);
  if ( (PdoExt(a2)[355] & 0x200) != 0 )
    USBD_MarkDeviceAsDisconnected(a2);
  v8 = PdoExt(a2);
  v9 = (unsigned int)v8[281];
  if ( v8[281] == 1 || v8[281] == 2 )
  {
    UsbhDeletePdo(a1, a2, v9);
  }
  else if ( v8[281] == 3 )
  {
    UsbhDeregisterPdo(a1, a2, v9, a3, a4);
  }
  else
  {
    *(_DWORD *)(a4 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v10 = *(_BYTE *)(a4 + 132);
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v10);
  }
}
