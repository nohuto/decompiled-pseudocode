/*
 * XREFs of Usbh_BusPnpFreeResources_PdoEvent @ 0x1C003A9B8
 * Callers:
 *     UsbhAsyncStop @ 0x1C00424CC (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0044890 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C001BEDC (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0031CB0 (UsbhAcquirePdoStateLock.c)
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusPnpFreeResources_PdoEvent(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  unsigned __int16 v6; // bp
  __int64 PortData; // rax
  __int64 v8; // rdi
  unsigned int v9; // r14d
  __int64 v10; // rcx
  KIRQL v11; // dl

  Log(a1, 2, 1716671314, 0LL, a2);
  UsbhAcquirePdoStateLock(v5, a2, v4 + 17);
  v6 = 1;
  if ( *((_BYTE *)FdoExt(a1) + 2938) )
  {
    while ( 1 )
    {
      PortData = UsbhGetPortData(a1, v6);
      if ( !PortData )
        goto LABEL_10;
      v8 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526258, v8, 0LL);
      if ( !v8 )
        goto LABEL_10;
      v9 = PdoExt(v8)[281];
      PdoExt(v8);
      if ( v9 == 1 || v9 == 2 )
        break;
      if ( v9 == 3 )
      {
        *(_DWORD *)(a2 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(a2 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
        UsbhUnlinkPdoDeviceHandle(a1, v8, 2017740849, 1);
LABEL_9:
        UsbhAcquirePdoStateLock(v10, a2, 17);
      }
LABEL_10:
      if ( ++v6 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
        goto LABEL_11;
    }
    UsbhDeletePdo(a1, v8, v9);
    goto LABEL_9;
  }
LABEL_11:
  *(_DWORD *)(a2 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  v11 = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v11);
}
