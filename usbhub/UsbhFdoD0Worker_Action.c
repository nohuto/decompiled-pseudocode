/*
 * XREFs of UsbhFdoD0Worker_Action @ 0x1C000CE60
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCompletePdoWakeIrps @ 0x1C0001010 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSshExitSx @ 0x1C0003CCC (UsbhSshExitSx.c)
 *     UsbhCheckHubPowerStatus @ 0x1C00047D4 (UsbhCheckHubPowerStatus.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C00098E0 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhFdoSetD0Cold @ 0x1C000FBD0 (UsbhFdoSetD0Cold.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C001AB8C (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleasePowerContext @ 0x1C001BA68 (UsbhReleasePowerContext.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001EC80 (UsbhDispatch_HardResetEvent.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0020A80 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C00212F4 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     UsbhSyncBusDisconnect @ 0x1C00317FC (UsbhSyncBusDisconnect.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0031D74 (UsbhReleaseFdoPwrLock.c)
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 *     UsbhSetFdoPowerState @ 0x1C003C87C (UsbhSetFdoPowerState.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

void __fastcall UsbhFdoD0Worker_Action(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // eax
  int v11; // r9d
  __int64 v12; // rdi
  KIRQL v13; // al
  int v14; // ecx
  bool v15; // zf
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // rdi
  KIRQL v25; // dl
  int v26; // r8d
  int v27; // r8d
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // [rsp+20h] [rbp-58h]

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
    || (v10 = UsbhCheckHubPowerStatus((__int64)a1), v6 = v10, v10 == -1073741810)
    || v10 == -1073741667 )
  {
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_DISCONNECT_AFTER_SUSPEND);
    UsbhAcquireFdoPwrLock(a1, v9, 114LL, 846671972LL);
    UsbhSetFdoPowerState(a1, (unsigned int)v6, 213LL);
    UsbhReleasePowerContext(a1, a3);
    UsbhReleaseFdoPwrLock(a1, v9, v30, v31);
    UsbhSyncBusDisconnect(a1, v9);
  }
  else
  {
    if ( (v10 & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_FAIL_AFTER_SUSPEND);
      v26 = *(_DWORD *)(v7 + 2560);
      *(_DWORD *)(v7 + 4216) = 2;
      if ( (v26 & 0x10) != 0 )
      {
        v26 &= ~0x10u;
        *(_DWORD *)(v7 + 2560) = v26;
      }
      v27 = v26 & 1;
      v28 = 4046;
      if ( !v27 )
        v28 = 4051;
      UsbhException((int)a1, 0, v27 + 45, 0, 0, v6, 0, usbfile_fdopwr_c, v28, 0);
      Log((_DWORD)a1, 16, 1346720304, 0, v6);
    }
    v32 = *(int *)(v7 + 4216);
    if ( (v32 & 0xFFFFFFFD) != 0 )
    {
      Log((_DWORD)a1, 16, 1450668653, 0, v32);
      v6 = UsbhFdoSetD0Warm(a1);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v6) )
        UsbhException((int)a1, 0, 43, 0, 0, v6, 0, usbfile_fdopwr_c, 4094, 0);
    }
    else
    {
      Log((_DWORD)a1, 16, 1449356388, 0, v32);
      v6 = UsbhFdoSetD0Cold((_DWORD)a1);
      Log((_DWORD)a1, 8, 1381192818, 0, 0LL);
      UsbhDispatch_HardResetEvent(a1, v9, (unsigned int)(v11 + 11));
      if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v6) )
        UsbhException((int)a1, 0, 44, 0, 0, v6, 0, usbfile_fdopwr_c, 4077, 0);
    }
    Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
    v12 = FdoExt(a1);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 5056));
    v14 = *(_DWORD *)(v12 + 4172);
    *(_BYTE *)(v12 + 5064) = v13;
    *(_DWORD *)(v9 + 40) = v14;
    *(_DWORD *)(v9 + 44) = 114;
    *(_DWORD *)(v9 + 32) = 844055622;
    *(_DWORD *)(v9 + 36) = 829894756;
    *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
    v15 = *(_DWORD *)(v12 + 4172) == 210;
    *(_QWORD *)(v12 + 1344) = v9;
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
        v29 = FdoExt(a1);
        UsbhSetFdoPowerState(a1, *(unsigned int *)(v29 + 4212), 206LL);
      }
    }
    v19 = FdoExt(a1);
    v20 = *(_QWORD *)(a3 + 72);
    v21 = v19;
    *(_BYTE *)(v20 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(v20 + 136) = 1;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( *(_BYTE *)(a3 + 136) )
      *(_QWORD *)(v21 + 912) = 0LL;
    v22 = *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)(v22 + 8) != a3 + 8 || (v23 = *(_QWORD **)(a3 + 16), *v23 != a3 + 8) )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    ExFreePoolWithTag((PVOID)a3, 0);
    *(_DWORD *)(v20 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v20 + 132));
    v24 = FdoExt(a1);
    FdoExt(*(_QWORD *)(v9 + 8));
    *(_DWORD *)(v9 + 32) = 1734964085;
    v25 = *(_BYTE *)(v24 + 5064);
    *(_QWORD *)(v24 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 5056), v25);
  }
  Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
  Log((_DWORD)a1, 16, 1934645093, v6, 0LL);
  *(_QWORD *)(v7 + 5096) = MEMORY[0xFFFFF78000000014];
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhSshExitSx((__int64)a1, v9);
  if ( v6 >= 0 )
    UsbhCompletePdoWakeIrps((__int64)a1);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), (PVOID)a3, 0x20u);
}
