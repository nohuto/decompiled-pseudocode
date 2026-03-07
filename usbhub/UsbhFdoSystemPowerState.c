__int64 __fastcall UsbhFdoSystemPowerState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int LowPart; // r13d
  char *DeviceExtension; // r15
  __int64 v6; // rcx
  unsigned int inited; // r12d
  const EVENT_DESCRIPTOR *v8; // rbx
  _DWORD *v9; // rdx
  int v10; // ecx
  int ActivityIdIrp; // eax
  const GUID *v12; // rdx
  const EVENT_DESCRIPTOR *v13; // r9
  __int64 result; // rax
  _DWORD *v15; // rdi
  char *v16; // rbx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r9
  int ActivityId; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v24; // ebx
  const EVENT_DESCRIPTOR *v25; // r9
  __int128 *v26; // r8
  struct _KSEMAPHORE *v27; // rdi
  void *v28; // rdi
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // edi
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // ebx
  unsigned int v35; // edi
  __int128 *v36; // r8
  _QWORD *v37; // r12
  __int64 Pool2; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdi
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rax
  int v45; // edx
  __int64 v46; // rax
  unsigned int v47; // r12d
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  const EVENT_DESCRIPTOR *v51; // r9
  int v52; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v53; // [rsp+70h] [rbp-31h] BYREF
  __int128 v54; // [rsp+78h] [rbp-29h] BYREF
  int v55; // [rsp+88h] [rbp-19h] BYREF
  __int16 v56; // [rsp+8Ch] [rbp-15h]
  __int16 v57; // [rsp+8Eh] [rbp-13h]
  __int16 v58; // [rsp+90h] [rbp-11h]
  __int16 v59; // [rsp+92h] [rbp-Fh]
  _WORD v60[2]; // [rsp+98h] [rbp-9h] BYREF
  int v61; // [rsp+9Ch] [rbp-5h]
  int v62; // [rsp+A0h] [rbp-1h]
  int v68; // [rsp+B8h] [rbp+17h]

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_88;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v52 = 1937339216;
    v6 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v6 = 1937339216;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = Irp;
  }
  v52 = 0;
  inited = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, File, 1u, 0x20u);
  v8 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_S0_DISPATCH;
  v53 = LowPart;
  if ( LowPart != 1 )
    v8 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_DISPATCH;
  v61 = 0;
  v54 = 0LL;
  if ( dword_1C006B690 )
  {
    v9 = DeviceObject->DeviceExtension;
    if ( !v9 )
      UsbhTrapFatal_Dbg(DeviceObject, 0LL);
    if ( *v9 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v9);
    v55 = v9[1298];
    v56 = *((_WORD *)v9 + 2598);
    v57 = v9[1300];
    v58 = *((_WORD *)v9 + 2614);
    v59 = *((_WORD *)v9 + 2615);
    v60[0] = *((_WORD *)v9 + 1274);
    v60[1] = *((_WORD *)v9 + 1275);
    v61 = 0;
    v62 = *((unsigned __int16 *)v9 + 2604);
    v10 = *((_WORD *)v9 + 2604) != 0;
    v61 = v10;
    if ( *((unsigned __int16 *)v9 + 2605) )
      v61 = ++v10;
    if ( *((unsigned __int16 *)v9 + 2606) )
      v61 = ++v10;
    if ( *((unsigned __int16 *)v9 + 2607) )
      v61 = ++v10;
    if ( *((unsigned __int16 *)v9 + 2608) )
      v61 = ++v10;
    if ( *((unsigned __int16 *)v9 + 2609) )
      v61 = v10 + 1;
    v68 = v9[634];
    if ( g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(Irp, &v54);
    else
      ActivityIdIrp = -1073741823;
    v12 = (const GUID *)&v54;
    if ( ActivityIdIrp < 0 )
      v12 = 0LL;
    UsbhEtwWrite(v8, v12, &v55, 12LL, v60, 36LL, &v53, 4LL, &v52, 4LL, 0LL);
  }
  if ( (inited & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = inited;
    Log((_DWORD)DeviceObject, 16, 829651315, inited, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2585LL);
    v13 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v13 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    UsbhEtwLogHubPowerEvent((__int64)DeviceObject, (__int64)Irp, 0LL, v13);
    IofCompleteRequest(Irp, 0);
    return inited;
  }
  v15 = DeviceObject->DeviceExtension;
  if ( !v15 )
    goto LABEL_88;
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
    UsbhDisableTimerObject((__int64)DeviceObject, *((_QWORD *)DeviceExtension + 346));
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
    v54 = 0LL;
    UsbhReleaseFdoPnpLock(DeviceObject, v15 + 346);
    Log((_DWORD)DeviceObject, 16, 846428531, inited, (__int64)Irp);
    UsbhAcquireFdoPwrLock(DeviceObject, v15 + 346, 101LL, 829651315LL);
    v19 = 201LL;
    if ( LowPart != 1 )
      v19 = 205LL;
    UsbhSetFdoPowerState(DeviceObject, 0LL, v19);
    UsbhReleaseFdoPwrLock(DeviceObject, v15 + 346, v20, v21);
    ActivityId = UsbhEtwGetActivityId(Irp, &v54);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2647LL);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v24 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v25 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v25 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    v26 = &v54;
    if ( ActivityId < 0 )
      v26 = 0LL;
    goto LABEL_45;
  }
  v27 = (struct _KSEMAPHORE *)DeviceObject->DeviceExtension;
  if ( !v27 )
    goto LABEL_88;
  if ( v27->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  FdoExt(*((_QWORD *)v16 + 1));
  *((_DWORD *)v16 + 12) = 1734964085;
  v27[41].Header.WaitListHead.Blink = 0LL;
  KeReleaseSemaphore(v27 + 155, 16, 1, 0);
  v28 = DeviceObject->DeviceExtension;
  if ( !v28 )
    goto LABEL_88;
  if ( *(_DWORD *)v28 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  *((_BYTE *)v28 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v28 + 632);
  *((_DWORD *)v16 + 10) = *((_DWORD *)v28 + 1043);
  *((_DWORD *)v16 + 11) = 101;
  *((_DWORD *)v16 + 8) = 844055622;
  *((_DWORD *)v16 + 9) = 846428531;
  *((_QWORD *)v16 + 3) = KeGetCurrentThread();
  *((_QWORD *)v28 + 168) = v16;
  FdoExt(*((_QWORD *)v16 + 1));
  if ( *(_DWORD *)(FdoExt(*((_QWORD *)v16 + 1)) + 4172) == 213 )
  {
    v54 = 0LL;
    UsbhSetFdoPowerState(DeviceObject, LowPart, 213LL);
    UsbhReleaseFdoPwrLock(DeviceObject, v16, v29, v30);
    v31 = UsbhEtwGetActivityId(Irp, &v54);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2680LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v24 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v25 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v25 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    v26 = &v54;
    if ( v31 < 0 )
      v26 = 0LL;
LABEL_45:
    UsbhEtwLogHubPowerEvent((__int64)DeviceObject, 0LL, v26, v25);
    return v24;
  }
  if ( LowPart == 1 && *(_DWORD *)(FdoExt(DeviceObject) + 4212) == 1 )
  {
    v54 = 0LL;
    UsbhReleaseFdoPwrLock(DeviceObject, v16, v32, v33);
    v34 = UsbhEtwGetActivityId(Irp, &v54);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2708LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v35 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v36 = &v54;
    if ( v34 < 0 )
      v36 = 0LL;
    UsbhEtwLogHubPowerEvent((__int64)DeviceObject, 0LL, v36, &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE);
    return v35;
  }
  v37 = DeviceObject->DeviceExtension;
  if ( !v37 )
LABEL_88:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)v37 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  Pool2 = ExAllocatePool2(64LL, 144LL, 1112885333LL);
  v41 = Pool2;
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
    *(_QWORD *)(v41 + 72) = v16;
    *(_QWORD *)(v41 + 80) = KeGetCurrentThread();
    v16[132] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *((_DWORD *)v16 + 34) = 1;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( LowPart != 1 )
    {
      v37[114] = v41;
      *(_BYTE *)(v41 + 136) = 1;
    }
    v42 = (_QWORD *)qword_1C006B660;
    v43 = (_QWORD *)(v41 + 8);
    if ( *(__int64 **)qword_1C006B660 != &qword_1C006B658 )
      __fastfail(3u);
    *(_QWORD *)(v41 + 16) = qword_1C006B660;
    *v43 = &qword_1C006B658;
    *v42 = v43;
    qword_1C006B660 = v41 + 8;
    *((_DWORD *)v16 + 34) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v16[132]);
    switch ( LowPart )
    {
      case 1u:
        *((_QWORD *)DeviceExtension + 634) = MEMORY[0xFFFFF78000000014];
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v46 = FdoExt(DeviceObject);
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            22,
            (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
            *(_DWORD *)(v46 + 4208));
        }
        FdoExt(*((_QWORD *)v16 + 1));
        v47 = *(_DWORD *)(FdoExt(*((_QWORD *)v16 + 1)) + 4172);
        FdoExt(*((_QWORD *)v16 + 1));
        v48 = FdoExt(*((_QWORD *)v16 + 1));
        if ( *(_DWORD *)(v48 + 4172) != 205 )
        {
          if ( *(_DWORD *)(v48 + 4172) == 206 )
            v47 = 201;
          *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
          UsbhSetFdoPowerState(DeviceObject, 0LL, v47);
          UsbhReleaseFdoPwrLock(DeviceObject, v16, v49, v50);
          goto LABEL_83;
        }
        result = UsbhFdoSetPowerS0_Action(DeviceObject, Irp, (PVOID)v41);
        break;
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v44 = FdoExt(DeviceObject);
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            v45,
            1,
            21,
            (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
            LowPart,
            *(_DWORD *)(v44 + 4208));
        }
        result = UsbhFdoSetPowerSx_Action(DeviceObject, Irp, (_QWORD *)v41);
        break;
      default:
LABEL_83:
        UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2821LL);
        ++Irp->CurrentLocation;
        ++Irp->Tail.Overlay.CurrentStackLocation;
        v24 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
        return v24;
    }
  }
  else
  {
    UsbhReleaseFdoPwrLock(DeviceObject, v16, v39, v40);
    Irp->IoStatus.Status = -1073741670;
    Log((_DWORD)DeviceObject, 16, 829651315, -1073741670, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2740LL);
    v51 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v51 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    UsbhEtwLogHubPowerEvent((__int64)DeviceObject, (__int64)Irp, 0LL, v51);
    IofCompleteRequest(Irp, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    return 3221225626LL;
  }
  return result;
}
