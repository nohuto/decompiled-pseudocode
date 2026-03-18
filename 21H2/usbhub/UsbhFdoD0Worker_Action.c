/*
 * XREFs of UsbhFdoD0Worker_Action @ 0x1C00070B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhAcquireFdoPwrLock @ 0x1C00019E0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0001D80 (UsbhCompletePdoWakeIrps.c)
 *     UsbhReleasePowerContext @ 0x1C00035EC (UsbhReleasePowerContext.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhFdoSetD0Cold @ 0x1C0009FA0 (UsbhFdoSetD0Cold.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000C920 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhCheckHubPowerStatus @ 0x1C000D988 (UsbhCheckHubPowerStatus.c)
 *     UsbhSshExitSx @ 0x1C000F9A0 (UsbhSshExitSx.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001C920 (UsbhDispatch_HardResetEvent.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001D300 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C001DB84 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     UsbhSyncBusDisconnect @ 0x1C0030E28 (UsbhSyncBusDisconnect.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C00313A8 (UsbhReleaseFdoPwrLock.c)
 *     UsbhFdoSetD0Warm @ 0x1C003B8A0 (UsbhFdoSetD0Warm.c)
 *     UsbhSetFdoPowerState @ 0x1C003BF08 (UsbhSetFdoPowerState.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

void __fastcall UsbhFdoD0Worker_Action(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // r9d
  __int64 v11; // rdi
  KIRQL v12; // al
  int v13; // ecx
  bool v14; // zf
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rdx
  _QWORD *v22; // r8
  __int64 v23; // rdi
  KIRQL v24; // dl
  int v25; // r8d
  int v26; // r8d
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-58h]

  UsbhDisarmHubForWakeDetect(a1);
  if ( (*(_DWORD *)(FdoExt(a1) + 2560) & 4) != 0 )
  {
    v5 = FdoExt(a1);
    if ( *(_QWORD *)(v5 + 4448) )
      v6 = (*(__int64 (__fastcall **)(_QWORD))(v5 + 4448))(*(_QWORD *)(v5 + 4232));
    else
      v6 = -1073741822;
  }
  else
  {
    v6 = -1073741810;
  }
  v7 = FdoExt(a1);
  v8 = FdoExt(a1);
  v9 = v8 + 1384;
  *(_QWORD *)(v8 + 1408) = KeGetCurrentThread();
  Log((_DWORD)a1, 16, 1349731376, v8 + 1384, v6);
  if ( v6 == -1073741810
    || v6 == -1073741667
    || (v6 = UsbhCheckHubPowerStatus((_DWORD)a1), v6 == -1073741810)
    || v6 == -1073741667 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_DISCONNECT_AFTER_SUSPEND, 0, v6);
    UsbhAcquireFdoPwrLock((__int64)a1, v9, 114, 846671972);
    UsbhSetFdoPowerState(a1, (unsigned int)v6, 213LL);
    UsbhReleasePowerContext((__int64)a1, a3);
    UsbhReleaseFdoPwrLock(a1, v9);
    UsbhSyncBusDisconnect(a1, v9);
  }
  else
  {
    if ( (v6 & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_FAIL_AFTER_SUSPEND, 0, v6);
      v25 = *(_DWORD *)(v7 + 2560);
      *(_DWORD *)(v7 + 4216) = 2;
      if ( (v25 & 0x10) != 0 )
      {
        v25 &= ~0x10u;
        *(_DWORD *)(v7 + 2560) = v25;
      }
      v26 = v25 & 1;
      v27 = 4046;
      if ( !v26 )
        v27 = 4051;
      UsbhException((int)a1, 0, v26 + 45, 0, 0, v6, 0, usbfile_fdopwr_c, v27, 0);
      Log((_DWORD)a1, 16, 1346720304, 0, v6);
    }
    v30 = *(int *)(v7 + 4216);
    if ( (v30 & 0xFFFFFFFD) != 0 )
    {
      Log((_DWORD)a1, 16, 1450668653, 0, v30);
      v28 = UsbhFdoSetD0Warm(a1);
      v6 = v28;
      if ( (v28 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v28) )
        UsbhException((int)a1, 0, 43, 0, 0, v6, 0, usbfile_fdopwr_c, 4094, 0);
    }
    else
    {
      Log((_DWORD)a1, 16, 1449356388, 0, v30);
      v6 = UsbhFdoSetD0Cold(a1);
      Log((_DWORD)a1, 8, 1381192818, 0, 0LL);
      UsbhDispatch_HardResetEvent(a1, v9, (unsigned int)(v10 + 11));
      if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v6) )
        UsbhException((int)a1, 0, 44, 0, 0, v6, 0, usbfile_fdopwr_c, 4077, 0);
    }
    Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
    v11 = FdoExt(a1);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 5056));
    v13 = *(_DWORD *)(v11 + 4172);
    *(_BYTE *)(v11 + 5064) = v12;
    *(_DWORD *)(v9 + 40) = v13;
    *(_DWORD *)(v9 + 44) = 114;
    *(_DWORD *)(v9 + 32) = 844055622;
    *(_DWORD *)(v9 + 36) = 829894756;
    *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
    v14 = *(_DWORD *)(v11 + 4172) == 210;
    *(_QWORD *)(v11 + 1344) = v9;
    if ( v14 )
    {
      if ( *(_DWORD *)(FdoExt(a1) + 4212) == 1 )
      {
        v15 = *(_DWORD *)(FdoExt(a1) + 4212);
        v16 = FdoExt(a1);
        v17 = ((unsigned __int8)*(_DWORD *)(v16 + 828) + 1) & 7;
        *(_DWORD *)(v16 + 828) = v17;
        v17 *= 32LL;
        *(_DWORD *)(v17 + v16 + 284) = 130;
        *(_DWORD *)(v17 + v16 + 288) = *(_DWORD *)(v16 + 4172);
        *(_DWORD *)(v17 + v16 + 292) = 201;
        *(_DWORD *)(v17 + v16 + 296) = v15;
        *(_DWORD *)(v16 + 4172) = 201;
      }
      else
      {
        v29 = FdoExt(a1);
        UsbhSetFdoPowerState(a1, *(unsigned int *)(v29 + 4212), 206LL);
      }
    }
    v18 = FdoExt(a1);
    v19 = *(_QWORD *)(a3 + 72);
    v20 = v18;
    *(_BYTE *)(v19 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(v19 + 136) = 1;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( *(_BYTE *)(a3 + 136) )
      *(_QWORD *)(v20 + 912) = 0LL;
    v21 = *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)(v21 + 8) != a3 + 8 || (v22 = *(_QWORD **)(a3 + 16), *v22 != a3 + 8) )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    ExFreePoolWithTag((PVOID)a3, 0);
    *(_DWORD *)(v19 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v19 + 132));
    v23 = FdoExt(a1);
    FdoExt(*(_QWORD *)(v9 + 8));
    *(_DWORD *)(v9 + 32) = 1734964085;
    v24 = *(_BYTE *)(v23 + 5064);
    *(_QWORD *)(v23 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 5056), v24);
  }
  Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
  Log((_DWORD)a1, 16, 1934645093, v6, 0LL);
  *(_QWORD *)(v7 + 5096) = MEMORY[0xFFFFF78000000014];
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhSshExitSx(a1, v9);
  if ( v6 >= 0 )
    UsbhCompletePdoWakeIrps((__int64)a1);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), (PVOID)a3, 0x20u);
}
