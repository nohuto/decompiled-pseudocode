/*
 * XREFs of UsbhAsyncStop @ 0x1C00424CC
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0044A00 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00068E0 (UsbhWaitEventWithTimeoutEx.c)
 *     Usbh_SSH_Event @ 0x1C0007220 (Usbh_SSH_Event.c)
 *     UsbhDisableTimerObject @ 0x1C00084D0 (UsbhDisableTimerObject.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     UsbhSyncBusPause @ 0x1C0031870 (UsbhSyncBusPause.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0031BEC (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C0031D14 (UsbhReleaseFdoPnpLock.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C003A9B8 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C003C958 (Usbh_HubRootHubInitNotification.c)
 *     UsbhDisableHardReset @ 0x1C003CFA4 (UsbhDisableHardReset.c)
 *     UsbhSshDisabled @ 0x1C00592A0 (UsbhSshDisabled.c)
 */

void __fastcall UsbhAsyncStop(__int64 a1, int a2)
{
  _DWORD *v4; // rbp
  _DWORD *v5; // rsi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // r9
  int v9; // eax
  int v10; // r10d
  __int64 v11; // r9
  __int64 v12; // rcx
  int Timeout; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-20h]

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  Log(*(_QWORD *)(a1 + 8), 2, 1114850114, 0LL, 0LL);
  UsbhDisableTimerObject(*(_QWORD *)(a1 + 8), *((_QWORD *)v4 + 346));
  v5 = v4 + 640;
  if ( (unsigned int)Usbh_HubRootHubInitNotification(*(_QWORD *)(a1 + 8), 0LL, 0LL) == -1073741536 )
  {
    v6 = FdoExt(*(_QWORD *)(a1 + 8));
    *v5 |= 0x400u;
    v7 = v6;
    KeSetEvent((PRKEVENT)(v4 + 644), 0, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v7 + 390, 0x20u);
  }
  Log(*(_QWORD *)(a1 + 8), 2, 1684357954, 0LL, 0LL);
  v9 = UsbhWaitEventWithTimeoutEx(*(_QWORD *)(a1 + 8), v4 + 644, 5000, 1667394391, (unsigned int)v8 & Timeout, v8 & v14);
  Log(*(_QWORD *)(a1 + 8), 2, 1667379249, v9, 5000LL);
  if ( v10 == 258 )
  {
    Log(*(_QWORD *)(a1 + 8), 2, 1667379250, 0LL, 5000LL);
    v12 = *(_QWORD *)(a1 + 8);
    if ( (*v5 & 0x400) != 0 )
    {
      Log(v12, 2, 1667379252, v11, 5000LL);
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8));
    }
    Log(v12, 2, 1667379251, v11, 5000LL);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    KeWaitForSingleObject(v4 + 644, Executive, 0, 0, 0LL);
    UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 12, 1330933353, 1);
    if ( a2 == 5 )
    {
      UsbhDisableHardReset(*(_QWORD *)(a1 + 8));
      Usbh_SSH_Event(*(_QWORD *)(a1 + 8), 6u, a1);
      UsbhSshDisabled(*(_QWORD *)(a1 + 8), a1);
      UsbhSyncBusPause(*(_QWORD *)(a1 + 8), a1, 5);
      Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
    }
  }
}
