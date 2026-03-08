/*
 * XREFs of Usbh_BusPnpStop_PdoEvent @ 0x1C003AB58
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C00314EC (UsbhBusPnpStop_Action.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0031CB0 (UsbhAcquirePdoStateLock.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0036750 (SET_PDO_HWPNPSTATE.c)
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusPnpStop_PdoEvent(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  unsigned __int16 i; // bp
  __int64 PortData; // rax
  __int64 v8; // rbx
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r12
  _DWORD *v11; // rax
  __int64 v12; // rcx
  KIRQL v13; // dl

  Log(a1, 2, 1716736630, 0LL, a2);
  UsbhAcquirePdoStateLock(v5, a2, v4 + 5);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
  {
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v8 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526257, v8, 0LL);
      if ( v8 )
      {
        v9 = (KSPIN_LOCK *)PdoExt(v8);
        v10 = KeAcquireSpinLockRaiseToDpc(v9 + 351);
        if ( *((_DWORD *)v9 + 704) == 1 )
        {
          *((_DWORD *)v9 + 704) = 2;
          USBD_RemoveDeviceFromGlobalList(v8);
        }
        KeReleaseSpinLock(v9 + 351, v10);
        v11 = PdoExt(v8);
        if ( v11[281] == 1 || v11[281] == 2 )
        {
          UsbhDeletePdo(a1, v8, (unsigned int)v11[281]);
          UsbhAcquirePdoStateLock(v12, a2, 5);
        }
        else if ( v11[281] == 3 )
        {
          SET_PDO_HWPNPSTATE(v8, 3, 5);
        }
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  v13 = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v13);
}
