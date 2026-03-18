/*
 * XREFs of UsbhFdoReturnPortStatus @ 0x1C00186F0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0017C10 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhUnlockSSH @ 0x1C0002A5C (UsbhUnlockSSH.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0003E98 (Usbh_SSH_HubSuspended.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C000EE64 (UsbhDecPdoIoCount.c)
 *     UsbhQueryPortState @ 0x1C0018E60 (UsbhQueryPortState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C00313A8 (UsbhReleaseFdoPwrLock.c)
 *     USBHUB_TriggerCallBacks @ 0x1C00413B4 (USBHUB_TriggerCallBacks.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C0058D7C (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0058DF8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall UsbhFdoReturnPortStatus(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG_PTR v5; // r14
  _DWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  _DWORD *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rax
  KIRQL v17; // dl
  _DWORD *v18; // rax
  bool v19; // zf
  KIRQL v20; // dl
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 PortState; // r14
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int SecurityQos; // edx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdi
  _QWORD *v38; // rbx
  KIRQL v39; // r15
  _QWORD *v40; // rcx
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  _DWORD *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  int v50; // r14d
  int v51; // eax

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v5 = a2;
  if ( !a2 )
    goto LABEL_125;
  v7 = *(_DWORD **)(a2 + 64);
  if ( !v7 )
    goto LABEL_124;
  if ( *v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1045647431;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a3;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  if ( KeGetCurrentIrql() )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(v5, (ULONG_PTR)a3);
    return 3221225485LL;
  }
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(v5, (ULONG_PTR)a3);
    Log(a1, 8, 1196446497, (__int64)a3, 0LL);
    return 3221225485LL;
  }
  LODWORD(SecurityContext->SecurityQos) = 0;
  v11 = *(_DWORD **)(v5 + 64);
  if ( !v11 )
    goto LABEL_124;
  if ( *v11 != 1329877064 )
    UsbhTrapFatal_Dbg(v5, *(_QWORD *)(v5 + 64));
  v12 = (__int64)(v11 + 236);
  if ( !a1 )
    goto LABEL_125;
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    goto LABEL_122;
  if ( *(_DWORD *)v13 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  *(_BYTE *)(v13 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 5056));
  *(_DWORD *)(v12 + 40) = *(_DWORD *)(v13 + 4172);
  *(_DWORD *)(v12 + 44) = 11;
  *(_DWORD *)(v12 + 32) = 844055622;
  *(_DWORD *)(v12 + 36) = 1953516355;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v13 + 1344) = v12;
  v14 = *(_QWORD *)(v12 + 8);
  if ( !v14 )
    goto LABEL_125;
  v15 = *(_DWORD **)(v14 + 64);
  if ( !v15 )
    UsbhTrapFatal_Dbg(v14, 0LL);
  if ( *v15 != 541218120 )
    UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64));
  if ( (unsigned int)(v15[1043] - 212) <= 1 )
  {
    UsbhReleaseFdoPwrLock(a1, v12);
    Log(a1, 8, 1196450936, (__int64)a3, 0LL);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(v5, (ULONG_PTR)a3);
    return 3221225486LL;
  }
  v16 = *(_QWORD *)(a1 + 64);
  if ( !v16 )
LABEL_122:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v16 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  *(_DWORD *)(v12 + 32) = 1734964085;
  v17 = *(_BYTE *)(v16 + 5064);
  *(_QWORD *)(v16 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 5056), v17);
  *(_BYTE *)(v12 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v12 + 136) = 1;
  *(_DWORD *)(v12 + 88) = 2018460752;
  *(_DWORD *)(v12 + 92) = 16;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v12;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v18 = *(_DWORD **)(v5 + 64);
  if ( !v18 )
LABEL_124:
    UsbhTrapFatal_Dbg(v5, 0LL);
  if ( *v18 != 1329877064 )
    UsbhTrapFatal_Dbg(v5, *(_QWORD *)(v5 + 64));
  v19 = v18[281] == 3;
  *(_DWORD *)(v12 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v12 + 88) = 1734964085;
  v20 = *(_BYTE *)(v12 + 132);
  if ( !v19 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(v5, (ULONG_PTR)a3);
    Log(a1, 8, 1196446584, (__int64)a3, 0LL);
    return 3221225486LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20);
  v21 = *(_QWORD *)(v12 + 8);
  v22 = v21;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids,
      5);
    v22 = *(_QWORD *)(v12 + 8);
  }
  if ( !v22 )
LABEL_125:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v23 = *(_QWORD *)(v22 + 64);
  if ( !v23 )
    UsbhTrapFatal_Dbg(v22, 0LL);
  if ( *(_DWORD *)v23 != 541218120 )
    UsbhTrapFatal_Dbg(v22, *(_QWORD *)(v22 + 64));
  KeWaitForSingleObject((PVOID)(v23 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v23 + 3192) = v12;
  *(_DWORD *)(v12 + 120) = 2018005843;
  *(_DWORD *)(v12 + 124) = 5;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v24 = *(_DWORD *)(v23 + 3456);
  v25 = 32LL * (v24 & 7);
  if ( *(_DWORD *)(v25 + v23 + 3460) != 5
    || (v26 = *(unsigned int *)(v23 + 3124), *(_DWORD *)(v25 + v23 + 3464) != (_DWORD)v26) )
  {
    v48 = ((_BYTE)v24 + 1) & 7;
    *(_DWORD *)(v23 + 3456) = v48;
    v48 *= 32LL;
    *(_DWORD *)(v48 + v23 + 3460) = 5;
    *(_DWORD *)(v48 + v23 + 3464) = *(_DWORD *)(v23 + 3124);
    v26 = *(unsigned int *)(v23 + 3124);
  }
  if ( (_DWORD)v26 != 1 )
  {
    switch ( (_DWORD)v26 )
    {
      case 2:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            12,
            (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
        FdoExt(v21);
        LODWORD(v26) = 2;
        break;
      case 3:
        v49 = Usbh_SSH_HubPendingResumeAfterSuspend(v21, 5LL, v12);
LABEL_82:
        if ( (v49 & 0xC0000000) == 0xC0000000 )
        {
          LODWORD(SecurityContext->SecurityQos) |= 3u;
          v50 = 0;
          SecurityQos = (unsigned int)SecurityContext->SecurityQos;
          goto LABEL_49;
        }
        goto LABEL_43;
      case 4:
        v49 = Usbh_SSH_HubSuspended(v21, 5, v12);
        goto LABEL_82;
      case 5:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            15,
            (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
        if ( v21 )
        {
          v44 = *(_DWORD **)(v21 + 64);
          if ( !v44 )
LABEL_108:
            UsbhTrapFatal_Dbg(v21, 0LL);
          if ( *v44 != 541218120 )
            UsbhTrapFatal_Dbg(v21, v44);
          v45 = *(_QWORD *)(v12 + 8);
          if ( v45 )
          {
            v46 = *(_QWORD *)(v45 + 64);
            if ( !v46 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), 0LL);
            if ( *(_DWORD *)v46 != 541218120 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), *(_QWORD *)(v45 + 64));
            v47 = *(unsigned int *)(v46 + 3456);
            *(_DWORD *)(v46 + 3124) = 5;
            *(_DWORD *)(32 * v47 + v46 + 3468) = 5;
            *(_DWORD *)(v12 + 120) = 1734964085;
            *(_QWORD *)(v46 + 3192) = 0LL;
            KeReleaseSemaphore((PRKSEMAPHORE)(v46 + 3128), 16, 1, 0);
            goto LABEL_79;
          }
        }
        goto LABEL_125;
      case 6:
        v49 = Usbh_SSH_HubFailedResume(v21, v26, v12);
        goto LABEL_82;
    }
    UsbhUnlockSSH(v12, v26);
LABEL_79:
    LODWORD(SecurityContext->SecurityQos) |= 3u;
    v50 = 0;
    SecurityQos = (unsigned int)SecurityContext->SecurityQos;
    goto LABEL_49;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  if ( !v21 )
    goto LABEL_125;
  v27 = *(_DWORD **)(v21 + 64);
  if ( !v27 )
    goto LABEL_108;
  if ( *v27 != 541218120 )
    UsbhTrapFatal_Dbg(v21, v27);
  v28 = *(_QWORD *)(v12 + 8);
  if ( !v28 )
    goto LABEL_125;
  v29 = *(_QWORD *)(v28 + 64);
  if ( !v29 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), 0LL);
  if ( *(_DWORD *)v29 != 541218120 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), *(_QWORD *)(v28 + 64));
  v30 = *(unsigned int *)(v29 + 3456);
  *(_DWORD *)(v29 + 3124) = 1;
  *(_DWORD *)(32 * v30 + v29 + 3468) = 1;
  *(_DWORD *)(v12 + 120) = 1734964085;
  *(_QWORD *)(v29 + 3192) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v29 + 3128), 16, 1, 0);
LABEL_43:
  PortState = (int)UsbhQueryPortState(a1);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v32 = *(_QWORD *)(a1 + 64);
    if ( v32 )
    {
      v33 = *(_QWORD *)(v32 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
      *(_DWORD *)v33 = 861098055;
      *(_QWORD *)(v33 + 16) = 0LL;
      *(_QWORD *)(v33 + 8) = 0LL;
      *(_QWORD *)(v33 + 24) = PortState;
    }
  }
  SecurityQos = (unsigned int)SecurityContext->SecurityQos;
  if ( (int)PortState < 0 )
  {
    v50 = -1073741810;
  }
  else
  {
    v50 = -1073741810;
    if ( v7[596] == 2 )
    {
      SecurityQos &= ~1u;
      LODWORD(SecurityContext->SecurityQos) = SecurityQos;
    }
  }
LABEL_49:
  if ( (UsbhLogMask & 8) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 64);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
      *(_DWORD *)v36 = 877875271;
      *(_QWORD *)(v36 + 16) = SecurityQos;
      *(_QWORD *)(v36 + 24) = v50;
      *(_QWORD *)(v36 + 8) = 0LL;
    }
  }
  a3->IoStatus.Status = v50;
  IofCompleteRequest(a3, 0);
  v37 = *(_QWORD *)(a2 + 64);
  if ( !v37 )
  {
    v5 = a2;
    goto LABEL_124;
  }
  if ( *(_DWORD *)v37 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v38 = (_QWORD *)(v37 + 1224);
  v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v37 + 1216));
  v40 = *(_QWORD **)(v37 + 1224);
  if ( v40 == (_QWORD *)(v37 + 1224) || !v40 )
  {
LABEL_116:
    v51 = *(_DWORD *)(v37 + 1264);
    if ( !v51 )
    {
      USBHUB_TriggerCallBacks(a2);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, a2, (ULONG_PTR)a3);
    }
    *(_DWORD *)(v37 + 1264) = v51 - 1;
  }
  else
  {
    while ( 1 )
    {
      v41 = (_QWORD *)*v40;
      if ( (IRP *)v40[2] == a3 )
        break;
      v40 = (_QWORD *)*v40;
      if ( v41 == v38 )
        goto LABEL_116;
    }
    if ( (_QWORD *)v41[1] != v40 || (v42 = (_QWORD *)v40[1], (_QWORD *)*v42 != v40) )
      __fastfail(3u);
    *v42 = v41;
    v41[1] = v42;
    ExFreePoolWithTag(v40 - 1, 0);
  }
  if ( (_QWORD *)*v38 != v38 || *(_DWORD *)(v37 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v37 + 1216), v39);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v37 + 1216), v39);
    KeSetEvent((PRKEVENT)(v37 + 1240), 0, 0);
  }
  return (unsigned int)v50;
}
