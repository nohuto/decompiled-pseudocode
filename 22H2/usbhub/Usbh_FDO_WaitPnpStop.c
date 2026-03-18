/*
 * XREFs of Usbh_FDO_WaitPnpStop @ 0x1C0045290
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0015EB4 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     UsbhSyncBusPause @ 0x1C0032244 (UsbhSyncBusPause.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C0032618 (UsbhReleaseFdoPnpLock.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C003B290 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     UsbhDisableHardReset @ 0x1C003D8F8 (UsbhDisableHardReset.c)
 *     UsbhModuleDispatch @ 0x1C0044710 (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x1C0044C50 (UsbhSetFdoPnpState.c)
 *     Usbh_PnpRemove @ 0x1C0045544 (Usbh_PnpRemove.c)
 *     UsbhSshDisabled @ 0x1C005A0C0 (UsbhSshDisabled.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpStop(ULONG_PTR a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  int v8; // ebp
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  Log(*(_QWORD *)(a1 + 8), 2, 2001949776, a1, a2);
  if ( a2 == 2 )
  {
    UsbhModuleDispatch(0LL, v4, *(struct _DRIVER_OBJECT **)(a1 + 8), 6, 0LL, a1);
    return Usbh_PnpRemove(a1, 2LL);
  }
  else
  {
    if ( a2 == 3 )
    {
      v8 = UsbhFdoCheckUpstreamConnectionState(*(_QWORD *)(a1 + 8), &v10);
      if ( v8 >= 0 )
        Usbh_SSH_Event(*(struct _DEVICE_OBJECT **)(a1 + 8), 6u, a1);
      UsbhModuleDispatch(0LL, v7, *(struct _DRIVER_OBJECT **)(a1 + 8), 6, 0LL, a1);
      v6 = 4;
      if ( v8 >= 0 )
        Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
    }
    else if ( a2 == 4 )
    {
      v6 = 5;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 8);
      if ( a2 != 5 )
        UsbhTrapFatal_Dbg(v5, a1);
      UsbhDisableHardReset(v5);
      Usbh_SSH_Event(*(struct _DEVICE_OBJECT **)(a1 + 8), 6u, a1);
      UsbhSshDisabled(*(_QWORD *)(a1 + 8), a1);
      UsbhSyncBusPause(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 4);
      Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
      v6 = 7;
    }
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), v6, a2);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    return 0LL;
  }
}
