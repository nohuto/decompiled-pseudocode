/*
 * XREFs of Usbh_BusPnpStop_PdoEvent @ 0x1C003B41C
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C0031EC0 (UsbhBusPnpStop_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001CDA8 (UsbhAcquirePdoStateLock.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0036FD4 (SET_PDO_HWPNPSTATE.c)
 *     UsbhDeletePdo @ 0x1C0054E1C (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusPnpStop_PdoEvent(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  unsigned __int16 i; // si
  __int64 PortData; // rax
  __int64 v8; // rdi
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r12
  __int64 v11; // r8
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
        v11 = (unsigned int)PdoExt(v8)[281];
        if ( (int)v11 > 0 )
        {
          if ( (int)v11 <= 2 )
          {
            UsbhDeletePdo(a1, v8, v11);
            UsbhAcquirePdoStateLock(v12, a2, 5);
          }
          else if ( (_DWORD)v11 == 3 )
          {
            SET_PDO_HWPNPSTATE(v8, 3, 5);
          }
        }
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  qword_1C006C500 = 0LL;
  v13 = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, v13);
}
