/*
 * XREFs of UsbhFdoSystemPowerState @ 0x1C000E9B0
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x1C001AA90 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     UsbhFdoSetPowerSx_Action @ 0x1C000200C (UsbhFdoSetPowerSx_Action.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhDisableTimerObject @ 0x1C0011260 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0012210 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00176F8 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0018364 (UsbhReleaseFdoPwrLock.c)
 *     UsbhFdoSetPowerS0_Action @ 0x1C001B49C (UsbhFdoSetPowerS0_Action.c)
 *     UsbhSetFdoPowerState @ 0x1C001CE0C (UsbhSetFdoPowerState.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002F194 (WPP_RECORDER_SF_dd.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0032554 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C0032618 (UsbhReleaseFdoPnpLock.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C003D17C (UsbhPoStartNextPowerIrp_Fdo.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C003D29C (Usbh_HubRootHubInitNotification.c)
 *     Usbh_FDO_Pnp_State @ 0x1C0044D48 (Usbh_FDO_Pnp_State.c)
 *     UsbhEtwGetActivityId @ 0x1C005C36C (UsbhEtwGetActivityId.c)
 */

__int64 __fastcall UsbhFdoSystemPowerState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int LowPart; // r12d
  char *DeviceExtension; // r13
  __int64 v6; // rcx
  unsigned int inited; // r15d
  const EVENT_DESCRIPTOR *v8; // rbx
  _DWORD *v9; // rcx
  const GUID *v10; // rdx
  _DWORD *v11; // rdi
  char *v12; // rbx
  int v13; // ecx
  __int64 v14; // rcx
  struct _KSEMAPHORE *v15; // rdi
  void *v16; // rdi
  _QWORD *v17; // r15
  char *PoolWithTag; // rax
  char *v19; // rdi
  void (__fastcall *v20)(PIRP, char *); // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  unsigned int v24; // r15d
  __int64 v25; // rax
  void *v26; // r9
  __int64 v27; // r8
  int ActivityId; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v30; // ebx
  void *v31; // r9
  __int128 *v32; // r8
  int v33; // edi
  int v34; // ebx
  unsigned int v35; // edi
  __int128 *v36; // r8
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rax
  void *v40; // r9
  __int128 v41; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v44; // [rsp+E8h] [rbp-20h] BYREF

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_88;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
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
  v41 = 0LL;
  if ( dword_1C006C5F0 )
  {
    v9 = DeviceObject->DeviceExtension;
    if ( !v9 )
      UsbhTrapFatal_Dbg(DeviceObject, 0LL);
    if ( *v9 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
    if ( g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(Irp, &v41) >= 0 )
      v10 = (const GUID *)&v41;
    else
      v10 = 0LL;
    UsbhEtwWrite(v8, v10);
  }
  if ( (inited & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = inited;
    Log((_DWORD)DeviceObject, 16, 829651315, inited, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2585LL);
    v26 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v26 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v26, LowPart, inited);
    IofCompleteRequest(Irp, 0);
    return inited;
  }
  v11 = DeviceObject->DeviceExtension;
  if ( !v11 )
LABEL_88:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *v11 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v12 = (char *)(v11 + 346);
  KeWaitForSingleObject(v11 + 1240, Executive, 0, 0, 0LL);
  v11[360] = v11[340];
  v11[361] = 101;
  v11[358] = 827278406;
  *((_QWORD *)v11 + 176) = KeGetCurrentThread();
  v13 = v11[6];
  *((_QWORD *)v11 + 166) = v11 + 346;
  v14 = ((_BYTE)v13 + 1) & 7;
  v11[6] = v14;
  v14 *= 32LL;
  *(_DWORD *)((char *)v11 + v14 + 28) = 101;
  *(_DWORD *)((char *)v11 + v14 + 32) = v11[340];
  *(_DWORD *)((char *)v11 + v14 + 36) = v11[340];
  *(_DWORD *)((char *)v11 + v14 + 40) = 812874099;
  FdoExt(*((_QWORD *)v11 + 174));
  if ( *(_DWORD *)(FdoExt(*((_QWORD *)v11 + 174)) + 1360) == 6 )
  {
    UsbhReleaseFdoPnpLock(DeviceObject, v11 + 346);
    UsbhDisableTimerObject(DeviceObject, *((_QWORD *)DeviceExtension + 346));
    inited = Usbh_HubRootHubInitNotification(DeviceObject, 0LL, 0LL);
    if ( inited == -1073741536 )
      Usbh_FDO_Pnp_State(v11 + 346, 8LL);
    else
      KeWaitForSingleObject(DeviceExtension + 2576, Executive, 0, 0, 0LL);
    UsbhAcquireFdoPnpLock((_DWORD)DeviceObject, (_DWORD)v12, 101, 863205747, 1);
  }
  FdoExt(*((_QWORD *)v11 + 174));
  if ( *(_DWORD *)(FdoExt(*((_QWORD *)v11 + 174)) + 1360) != 5 )
  {
    v42 = 0LL;
    UsbhReleaseFdoPnpLock(DeviceObject, v12);
    Log((_DWORD)DeviceObject, 16, 846428531, inited, (__int64)Irp);
    UsbhAcquireFdoPwrLock(DeviceObject, v12, 101LL, 829651315LL);
    v27 = 201LL;
    if ( LowPart != 1 )
      v27 = 205LL;
    UsbhSetFdoPowerState(DeviceObject, 0LL, v27, (unsigned int)(LowPart != 1) + 127);
    UsbhReleaseFdoPwrLock(DeviceObject, v12);
    ActivityId = UsbhEtwGetActivityId(Irp, &v42);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2647LL);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v30 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v31 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v31 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    v32 = &v42;
    if ( ActivityId < 0 )
      v32 = 0LL;
    goto LABEL_65;
  }
  v15 = (struct _KSEMAPHORE *)DeviceObject->DeviceExtension;
  if ( !v15 )
    goto LABEL_88;
  if ( v15->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  FdoExt(*((_QWORD *)v12 + 1));
  *((_DWORD *)v12 + 12) = 1734964085;
  v15[41].Header.WaitListHead.Blink = 0LL;
  KeReleaseSemaphore(v15 + 155, 16, 1, 0);
  v16 = DeviceObject->DeviceExtension;
  if ( !v16 )
    goto LABEL_88;
  if ( *(_DWORD *)v16 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  *((_BYTE *)v16 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v16 + 632);
  *((_DWORD *)v12 + 10) = *((_DWORD *)v16 + 1043);
  *((_DWORD *)v12 + 11) = 101;
  *((_DWORD *)v12 + 8) = 844055622;
  *((_DWORD *)v12 + 9) = 846428531;
  *((_QWORD *)v12 + 3) = KeGetCurrentThread();
  *((_QWORD *)v16 + 168) = v12;
  FdoExt(*((_QWORD *)v12 + 1));
  if ( *(_DWORD *)(FdoExt(*((_QWORD *)v12 + 1)) + 4172) == 213 )
  {
    v43 = 0LL;
    UsbhSetFdoPowerState(DeviceObject, LowPart, 213LL, (unsigned int)(LowPart == 1) + 103);
    UsbhReleaseFdoPwrLock(DeviceObject, v12);
    v33 = UsbhEtwGetActivityId(Irp, &v43);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2680LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v30 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v31 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v31 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    v32 = &v43;
    if ( v33 < 0 )
      v32 = 0LL;
LABEL_65:
    UsbhEtwLogHubPowerEvent(DeviceObject, 0LL, v32, v31, LowPart, v30);
    return v30;
  }
  if ( LowPart == 1 && *(_DWORD *)(FdoExt(DeviceObject) + 4212) == 1 )
  {
    v44 = 0LL;
    UsbhReleaseFdoPwrLock(DeviceObject, v12);
    v34 = UsbhEtwGetActivityId(Irp, &v44);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2708LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v35 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v36 = &v44;
    if ( v34 < 0 )
      v36 = 0LL;
    UsbhEtwLogHubPowerEvent(DeviceObject, 0LL, v36, &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE, LowPart, v35);
    return v35;
  }
  v17 = DeviceObject->DeviceExtension;
  if ( !v17 )
    goto LABEL_88;
  if ( *(_DWORD *)v17 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  PoolWithTag = (char *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x90uLL, 0x42554855u);
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x90uLL);
    v20 = (void (__fastcall *)(PIRP, char *))g_IoGetActivityIdIrp;
    *(_DWORD *)v19 = 2018662224;
    *((_DWORD *)v19 + 8) = 11;
    *((_QWORD *)v19 + 6) = DeviceObject;
    *((_QWORD *)v19 + 5) = DeviceObject;
    *((_DWORD *)v19 + 6) = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    *((_QWORD *)v19 + 7) = Irp;
    if ( v20 )
      v20(Irp, v19 + 120);
    *((_QWORD *)v19 + 9) = v12;
    *((_QWORD *)v19 + 10) = KeGetCurrentThread();
    v12[132] = KeAcquireSpinLockRaiseToDpc(&HubG);
    *((_DWORD *)v12 + 34) = 1;
    qword_1C006C500 = (__int64)&dword_1C006C508;
    if ( LowPart != 1 )
    {
      v17[114] = v19;
      v19[136] = 1;
    }
    v21 = (_QWORD *)qword_1C006C5C0;
    v22 = v19 + 8;
    if ( *(__int64 **)qword_1C006C5C0 != &qword_1C006C5B8 )
      __fastfail(3u);
    *((_QWORD *)v19 + 2) = qword_1C006C5C0;
    *v22 = &qword_1C006C5B8;
    *v21 = v22;
    qword_1C006C5C0 = (__int64)(v19 + 8);
    *((_DWORD *)v12 + 34) = 0;
    qword_1C006C500 = 0LL;
    KeReleaseSpinLock(&HubG, v12[132]);
    if ( LowPart == 1 )
    {
      *((_QWORD *)DeviceExtension + 634) = MEMORY[0xFFFFF78000000014];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v39 = FdoExt(DeviceObject);
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          22,
          (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
          *(_DWORD *)(v39 + 4208));
      }
      FdoExt(*((_QWORD *)v12 + 1));
      v24 = *(_DWORD *)(FdoExt(*((_QWORD *)v12 + 1)) + 4172);
      FdoExt(*((_QWORD *)v12 + 1));
      v25 = FdoExt(*((_QWORD *)v12 + 1));
      if ( *(_DWORD *)(v25 + 4172) == 205 )
        return UsbhFdoSetPowerS0_Action(DeviceObject, Irp, v19);
      if ( *(_DWORD *)(v25 + 4172) == 206 )
        v24 = 201;
      *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
      UsbhSetFdoPowerState(DeviceObject, 0LL, v24, 129LL);
      UsbhReleaseFdoPwrLock(DeviceObject, v12);
    }
    else if ( LowPart == 5 || LowPart - 2 <= 4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v37 = FdoExt(DeviceObject);
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            v38,
            1,
            21,
            (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
            LowPart,
            *(_DWORD *)(v37 + 4208));
        }
      }
      return UsbhFdoSetPowerSx_Action(DeviceObject, Irp, v19);
    }
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2821LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v30 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    return v30;
  }
  UsbhReleaseFdoPwrLock(DeviceObject, v12);
  Irp->IoStatus.Status = -1073741670;
  Log((_DWORD)DeviceObject, 16, 829651315, -1073741670, (__int64)Irp);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2740LL);
  v40 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
  if ( LowPart != 1 )
    v40 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v40, LowPart, -1073741670);
  IofCompleteRequest(Irp, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
  return 3221225626LL;
}
