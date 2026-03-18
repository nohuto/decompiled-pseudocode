/*
 * XREFs of UsbhFdoSystemPowerState @ 0x1C0007740
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x1C0004020 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     UsbhAcquireFdoPwrLock @ 0x1C00019E0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhFdoSetPowerS0_Action @ 0x1C000437C (UsbhFdoSetPowerS0_Action.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDisableTimerObject @ 0x1C000B4D0 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C000C730 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwWrite @ 0x1C000CB00 (UsbhEtwWrite.c)
 *     UsbhFdoSetPowerSx_Action @ 0x1C001D6D8 (UsbhFdoSetPowerSx_Action.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002DDB8 (WPP_RECORDER_SF_dd.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0031220 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C0031348 (UsbhReleaseFdoPnpLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C00313A8 (UsbhReleaseFdoPwrLock.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C003BE4C (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhSetFdoPowerState @ 0x1C003BF08 (UsbhSetFdoPowerState.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C003BFE4 (Usbh_HubRootHubInitNotification.c)
 *     Usbh_FDO_Pnp_State @ 0x1C0043A98 (Usbh_FDO_Pnp_State.c)
 *     UsbhEtwGetActivityId @ 0x1C005AC4C (UsbhEtwGetActivityId.c)
 */

__int64 __fastcall UsbhFdoSystemPowerState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int LowPart; // r15d
  char *DeviceExtension; // r13
  __int64 v6; // rcx
  unsigned int inited; // r12d
  const EVENT_DESCRIPTOR *v8; // rbx
  _DWORD *v9; // rdx
  int v10; // ecx
  int ActivityIdIrp; // eax
  const GUID *v12; // rdx
  void *v13; // r9
  _DWORD *v15; // rdi
  char *v16; // rbx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r8
  int ActivityId; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v22; // ebx
  void *v23; // r9
  __int128 *v24; // r8
  struct _KSEMAPHORE *v25; // rdi
  void *v26; // rdi
  int v27; // edi
  int v28; // ebx
  unsigned int v29; // edi
  __int128 *v30; // r8
  _QWORD *v31; // r12
  __int64 Pool2; // rax
  __int64 v33; // rdi
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  unsigned int v39; // r12d
  __int64 v40; // rax
  void *v41; // r9
  __int128 v42; // [rsp+78h] [rbp-29h] BYREF
  int v43; // [rsp+88h] [rbp-19h]
  __int16 v44; // [rsp+8Ch] [rbp-15h]
  __int16 v45; // [rsp+8Eh] [rbp-13h]
  __int16 v46; // [rsp+90h] [rbp-11h]
  __int16 v47; // [rsp+92h] [rbp-Fh]
  __int16 v48; // [rsp+98h] [rbp-9h]
  __int16 v49; // [rsp+9Ah] [rbp-7h]
  int v50; // [rsp+9Ch] [rbp-5h]
  int v51; // [rsp+A0h] [rbp-1h]
  int v57; // [rsp+B8h] [rbp+17h]

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_90;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v6 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v6 = 1937339216;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = Irp;
  }
  inited = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, File, 1u, 0x20u);
  v8 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_S0_DISPATCH;
  if ( LowPart != 1 )
    v8 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_DISPATCH;
  v50 = 0;
  v42 = 0LL;
  if ( dword_1C006A690 )
  {
    v9 = DeviceObject->DeviceExtension;
    if ( !v9 )
      UsbhTrapFatal_Dbg(DeviceObject, 0LL);
    if ( *v9 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v9);
    v43 = v9[1298];
    v44 = *((_WORD *)v9 + 2598);
    v45 = v9[1300];
    v46 = *((_WORD *)v9 + 2614);
    v47 = *((_WORD *)v9 + 2615);
    v48 = *((_WORD *)v9 + 1274);
    v49 = *((_WORD *)v9 + 1275);
    v50 = 0;
    v51 = *((unsigned __int16 *)v9 + 2604);
    v10 = *((_WORD *)v9 + 2604) != 0;
    v50 = v10;
    if ( *((unsigned __int16 *)v9 + 2605) )
      v50 = ++v10;
    if ( *((unsigned __int16 *)v9 + 2606) )
      v50 = ++v10;
    if ( *((unsigned __int16 *)v9 + 2607) )
      v50 = ++v10;
    if ( *((unsigned __int16 *)v9 + 2608) )
      v50 = ++v10;
    if ( *((unsigned __int16 *)v9 + 2609) )
      v50 = v10 + 1;
    v57 = v9[634];
    if ( g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(Irp, &v42);
    else
      ActivityIdIrp = -1073741823;
    v12 = (const GUID *)&v42;
    if ( ActivityIdIrp < 0 )
      v12 = 0LL;
    UsbhEtwWrite(v8, v12);
  }
  if ( (inited & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = inited;
    Log((_DWORD)DeviceObject, 16, 829651315, inited, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2585LL);
    v13 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v13 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v13, LowPart, inited);
    IofCompleteRequest(Irp, 0);
    return inited;
  }
  v15 = DeviceObject->DeviceExtension;
  if ( !v15 )
    goto LABEL_90;
  if ( *v15 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v16 = (char *)(v15 + 346);
  KeWaitForSingleObject(v15 + 1240, Executive, 0, 0, 0LL);
  v15[360] = v15[340];
  v15[361] = 101;
  v15[358] = 827278406;
  *((_QWORD *)v15 + 176) = KeGetCurrentThread();
  v17 = v15[6];
  *((_QWORD *)v15 + 166) = v15 + 346;
  v18 = ((_BYTE)v17 + 1) & 7;
  v15[6] = v18;
  v18 *= 32LL;
  *(_DWORD *)((char *)v15 + v18 + 28) = 101;
  *(_DWORD *)((char *)v15 + v18 + 32) = v15[340];
  *(_DWORD *)((char *)v15 + v18 + 36) = v15[340];
  *(_DWORD *)((char *)v15 + v18 + 40) = 812874099;
  FdoExt(*((_QWORD *)v15 + 174));
  if ( *(_DWORD *)(FdoExt(*((_QWORD *)v15 + 174)) + 1360) == 6 )
  {
    UsbhReleaseFdoPnpLock(DeviceObject, v15 + 346);
    UsbhDisableTimerObject(DeviceObject, *((_QWORD *)DeviceExtension + 346));
    inited = Usbh_HubRootHubInitNotification(DeviceObject, 0LL, 0LL);
    if ( inited == -1073741536 )
      Usbh_FDO_Pnp_State(v15 + 346, 8LL);
    else
      KeWaitForSingleObject(DeviceExtension + 2576, Executive, 0, 0, 0LL);
    UsbhAcquireFdoPnpLock((_DWORD)DeviceObject, (_DWORD)v15 + 1384, 101, 863205747, 1);
  }
  FdoExt(*((_QWORD *)v15 + 174));
  if ( *(_DWORD *)(FdoExt(*((_QWORD *)v15 + 174)) + 1360) != 5 )
  {
    v42 = 0LL;
    UsbhReleaseFdoPnpLock(DeviceObject, v15 + 346);
    Log((_DWORD)DeviceObject, 16, 846428531, inited, (__int64)Irp);
    UsbhAcquireFdoPwrLock((__int64)DeviceObject, (__int64)(v15 + 346), 101, 829651315);
    v19 = 201LL;
    if ( LowPart != 1 )
      v19 = 205LL;
    UsbhSetFdoPowerState(DeviceObject, 0LL, v19);
    UsbhReleaseFdoPwrLock(DeviceObject, v15 + 346);
    ActivityId = UsbhEtwGetActivityId(Irp, &v42);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2647LL);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v22 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v23 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v23 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    v24 = &v42;
    if ( ActivityId < 0 )
      v24 = 0LL;
LABEL_45:
    UsbhEtwLogHubPowerEvent(DeviceObject, 0LL, v24, v23, LowPart, v22);
    return v22;
  }
  v25 = (struct _KSEMAPHORE *)DeviceObject->DeviceExtension;
  if ( !v25 )
    goto LABEL_90;
  if ( v25->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  FdoExt(*((_QWORD *)v16 + 1));
  *((_DWORD *)v16 + 12) = 1734964085;
  v25[41].Header.WaitListHead.Blink = 0LL;
  KeReleaseSemaphore(v25 + 155, 16, 1, 0);
  v26 = DeviceObject->DeviceExtension;
  if ( !v26 )
    goto LABEL_90;
  if ( *(_DWORD *)v26 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  *((_BYTE *)v26 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v26 + 632);
  *((_DWORD *)v16 + 10) = *((_DWORD *)v26 + 1043);
  *((_DWORD *)v16 + 11) = 101;
  *((_DWORD *)v16 + 8) = 844055622;
  *((_DWORD *)v16 + 9) = 846428531;
  *((_QWORD *)v16 + 3) = KeGetCurrentThread();
  *((_QWORD *)v26 + 168) = v16;
  FdoExt(*((_QWORD *)v16 + 1));
  if ( *(_DWORD *)(FdoExt(*((_QWORD *)v16 + 1)) + 4172) == 213 )
  {
    v42 = 0LL;
    UsbhSetFdoPowerState(DeviceObject, LowPart, 213LL);
    UsbhReleaseFdoPwrLock(DeviceObject, v16);
    v27 = UsbhEtwGetActivityId(Irp, &v42);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2680LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v22 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v23 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v23 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    v24 = &v42;
    if ( v27 < 0 )
      v24 = 0LL;
    goto LABEL_45;
  }
  if ( LowPart == 1 && *(_DWORD *)(FdoExt(DeviceObject) + 4212) == 1 )
  {
    v42 = 0LL;
    UsbhReleaseFdoPwrLock(DeviceObject, v16);
    v28 = UsbhEtwGetActivityId(Irp, &v42);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2708LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v29 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v30 = &v42;
    if ( v28 < 0 )
      v30 = 0LL;
    UsbhEtwLogHubPowerEvent(DeviceObject, 0LL, v30, &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE, LowPart, v29);
    return v29;
  }
  v31 = DeviceObject->DeviceExtension;
  if ( !v31 )
LABEL_90:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)v31 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  Pool2 = ExAllocatePool2(64LL, 144LL, 1112885333LL);
  v33 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 2018662224;
    *(_DWORD *)(Pool2 + 32) = 11;
    *(_QWORD *)(Pool2 + 48) = DeviceObject;
    *(_QWORD *)(Pool2 + 40) = DeviceObject;
    *(_DWORD *)(Pool2 + 24) = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    *(_QWORD *)(Pool2 + 56) = Irp;
    if ( g_IoGetActivityIdIrp )
      g_IoGetActivityIdIrp(Irp, Pool2 + 120);
    *(_QWORD *)(v33 + 72) = v16;
    *(_QWORD *)(v33 + 80) = KeGetCurrentThread();
    v16[132] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *((_DWORD *)v16 + 34) = 1;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( LowPart != 1 )
    {
      v31[114] = v33;
      *(_BYTE *)(v33 + 136) = 1;
    }
    v34 = (_QWORD *)qword_1C006A660;
    v35 = (_QWORD *)(v33 + 8);
    if ( *(__int64 **)qword_1C006A660 != &qword_1C006A658 )
      __fastfail(3u);
    *(_QWORD *)(v33 + 16) = qword_1C006A660;
    *v35 = &qword_1C006A658;
    *v34 = v35;
    qword_1C006A660 = v33 + 8;
    *((_DWORD *)v16 + 34) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v16[132]);
    if ( LowPart == 1 )
    {
      *((_QWORD *)DeviceExtension + 634) = MEMORY[0xFFFFF78000000014];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v38 = FdoExt(DeviceObject);
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          22,
          (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
          *(_DWORD *)(v38 + 4208));
      }
      FdoExt(*((_QWORD *)v16 + 1));
      v39 = *(_DWORD *)(FdoExt(*((_QWORD *)v16 + 1)) + 4172);
      FdoExt(*((_QWORD *)v16 + 1));
      v40 = FdoExt(*((_QWORD *)v16 + 1));
      if ( *(_DWORD *)(v40 + 4172) == 205 )
        return UsbhFdoSetPowerS0_Action(DeviceObject, Irp, (_QWORD *)v33);
      if ( *(_DWORD *)(v40 + 4172) == 206 )
        v39 = 201;
      *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
      UsbhSetFdoPowerState(DeviceObject, 0LL, v39);
      UsbhReleaseFdoPwrLock(DeviceObject, v16);
    }
    else if ( LowPart == 5 || LowPart - 2 <= 4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v36 = FdoExt(DeviceObject);
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v37,
          1,
          21,
          (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
          LowPart,
          *(_DWORD *)(v36 + 4208));
      }
      return UsbhFdoSetPowerSx_Action(DeviceObject, Irp, (PVOID)v33);
    }
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2821LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v22 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    return v22;
  }
  UsbhReleaseFdoPwrLock(DeviceObject, v16);
  Irp->IoStatus.Status = -1073741670;
  Log((_DWORD)DeviceObject, 16, 829651315, -1073741670, (__int64)Irp);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2740LL);
  v41 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
  if ( LowPart != 1 )
    v41 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v41, LowPart, -1073741670);
  IofCompleteRequest(Irp, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
  return 3221225626LL;
}
