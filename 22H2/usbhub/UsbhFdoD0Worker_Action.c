/*
 * XREFs of UsbhFdoD0Worker_Action @ 0x1C000DC30
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCompletePdoWakeIrps @ 0x1C0001D70 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C000CF10 (UsbhFdoSetD0Cold.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhCheckHubPowerStatus @ 0x1C00139C0 (UsbhCheckHubPowerStatus.c)
 *     UsbhSshExitSx @ 0x1C0015B1C (UsbhSshExitSx.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00176F8 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0018364 (UsbhReleaseFdoPwrLock.c)
 *     UsbhReleasePowerContext @ 0x1C0018750 (UsbhReleasePowerContext.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001A550 (UsbhDispatch_HardResetEvent.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001B180 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C001B724 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhSetFdoPowerState @ 0x1C001CE0C (UsbhSetFdoPowerState.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     UsbhSyncBusDisconnect @ 0x1C00321D0 (UsbhSyncBusDisconnect.c)
 *     UsbhFdoSetD0Warm @ 0x1C003CBD0 (UsbhFdoSetD0Warm.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

void __fastcall UsbhFdoD0Worker_Action(struct _DEVICE_OBJECT *a1, __int64 a2, void *a3)
{
  char v5; // di
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // r9d
  __int64 v12; // rdi
  KIRQL v13; // al
  int v14; // ecx
  bool v15; // zf
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  KIRQL v20; // dl
  int v21; // r8d
  int v22; // r8d
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-58h]
  int v26; // [rsp+48h] [rbp-30h]

  v5 = 0;
  UsbhDisarmHubForWakeDetect(a1);
  if ( (*(_DWORD *)(FdoExt(a1) + 2560) & 4) != 0 )
  {
    v6 = FdoExt(a1);
    if ( *(_QWORD *)(v6 + 4448) )
      v7 = (*(__int64 (__fastcall **)(_QWORD))(v6 + 4448))(*(_QWORD *)(v6 + 4232));
    else
      v7 = -1073741822;
  }
  else
  {
    v7 = -1073741810;
  }
  v8 = FdoExt(a1);
  v9 = FdoExt(a1);
  v10 = v9 + 1384;
  *(_QWORD *)(v9 + 1408) = KeGetCurrentThread();
  Log((_DWORD)a1, 16, 1349731376, v9 + 1384, v7);
  if ( v7 == -1073741810 )
    goto LABEL_33;
  if ( v7 != -1073741667 )
    v7 = UsbhCheckHubPowerStatus((_DWORD)a1);
  if ( v7 == -1073741810 || v7 == -1073741667 )
  {
LABEL_33:
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_DISCONNECT_AFTER_SUSPEND, 0, v7);
    UsbhAcquireFdoPwrLock(a1, v10, 114LL, 846671972LL);
    UsbhSetFdoPowerState(a1, (unsigned int)v7, 213LL, 121LL);
    UsbhReleasePowerContext(a1, a3);
    UsbhReleaseFdoPwrLock(a1, v10);
    UsbhSyncBusDisconnect(a1, v10);
  }
  else
  {
    if ( (v7 & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_FAIL_AFTER_SUSPEND, 0, v7);
      v21 = *(_DWORD *)(v8 + 2560);
      v5 = 1;
      *(_DWORD *)(v8 + 4216) = 2;
      if ( (v21 & 0x10) != 0 )
      {
        v21 &= ~0x10u;
        *(_DWORD *)(v8 + 2560) = v21;
      }
      v22 = v21 & 1;
      v23 = 4046;
      if ( !v22 )
        v23 = 4051;
      LOBYTE(v26) = 0;
      UsbhException((int)a1, 0, v22 + 45, 0, 0, v7, 0, usbfile_fdopwr_c, v23, v26);
      Log((_DWORD)a1, 16, 1346720304, 0, v7);
    }
    v25 = *(int *)(v8 + 4216);
    if ( (v25 & 0xFFFFFFFD) != 0 )
    {
      Log((_DWORD)a1, 16, 1450668653, 0, v25);
      v7 = UsbhFdoSetD0Warm(a1);
      if ( (v7 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v7) )
      {
        LOBYTE(v26) = 0;
        UsbhException((int)a1, 0, 43, 0, 0, v7, 0, usbfile_fdopwr_c, 4094, v26);
      }
    }
    else
    {
      Log((_DWORD)a1, 16, 1449356388, 0, v25);
      v7 = UsbhFdoSetD0Cold(a1, v10, v5);
      Log((_DWORD)a1, 8, 1381192818, 0, 0LL);
      UsbhDispatch_HardResetEvent(a1, v10, (unsigned int)(v11 + 11));
      if ( (v7 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v7) )
      {
        LOBYTE(v26) = 0;
        UsbhException((int)a1, 0, 44, 0, 0, v7, 0, usbfile_fdopwr_c, 4077, v26);
      }
    }
    Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
    v12 = FdoExt(a1);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 5056));
    v14 = *(_DWORD *)(v12 + 4172);
    *(_BYTE *)(v12 + 5064) = v13;
    *(_DWORD *)(v10 + 40) = v14;
    *(_DWORD *)(v10 + 44) = 114;
    *(_DWORD *)(v10 + 32) = 844055622;
    *(_DWORD *)(v10 + 36) = 829894756;
    *(_QWORD *)(v10 + 24) = KeGetCurrentThread();
    v15 = *(_DWORD *)(v12 + 4172) == 210;
    *(_QWORD *)(v12 + 1344) = v10;
    if ( v15 )
    {
      if ( *(_DWORD *)(FdoExt(a1) + 4212) == 1 )
      {
        v16 = *(_DWORD *)(FdoExt(a1) + 4212);
        v17 = FdoExt(a1);
        v18 = ((unsigned __int8)*(_DWORD *)(v17 + 828) + 1) & 7;
        *(_DWORD *)(v17 + 828) = v18;
        v18 *= 32LL;
        *(_DWORD *)(v18 + v17 + 284) = 130;
        *(_DWORD *)(v18 + v17 + 288) = *(_DWORD *)(v17 + 4172);
        *(_DWORD *)(v18 + v17 + 292) = 201;
        *(_DWORD *)(v18 + v17 + 296) = v16;
        *(_DWORD *)(v17 + 4172) = 201;
      }
      else
      {
        v24 = FdoExt(a1);
        UsbhSetFdoPowerState(a1, *(unsigned int *)(v24 + 4212), 206LL, 130LL);
      }
    }
    UsbhReleasePowerContext(a1, a3);
    v19 = FdoExt(a1);
    FdoExt(*(_QWORD *)(v10 + 8));
    *(_DWORD *)(v10 + 32) = 1734964085;
    v20 = *(_BYTE *)(v19 + 5064);
    *(_QWORD *)(v19 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 5056), v20);
  }
  Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
  Log((_DWORD)a1, 16, 1934645093, v7, 0LL);
  *(_QWORD *)(v8 + 5096) = MEMORY[0xFFFFF78000000014];
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhSshExitSx(a1, v10);
  if ( v7 >= 0 )
    UsbhCompletePdoWakeIrps((__int64)a1);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), a3, 0x20u);
}
