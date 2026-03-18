/*
 * XREFs of Usbh_SSH_Event @ 0x1C0004D80
 * Callers:
 *     UsbhInternalIoctlPropagateResume @ 0x1C0002D58 (UsbhInternalIoctlPropagateResume.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0002DF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0003E98 (Usbh_SSH_HubSuspended.c)
 *     UsbhHubSSH_Worker @ 0x1C0004190 (UsbhHubSSH_Worker.c)
 *     UsbhSshSuspendHub @ 0x1C00063E0 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x1C0009090 (UsbhSshResumeDownstream.c)
 *     UsbhQueryBusRelations @ 0x1C000B7A0 (UsbhQueryBusRelations.c)
 *     UsbhAcquireEnumBusLock @ 0x1C000CBC8 (UsbhAcquireEnumBusLock.c)
 *     UsbhSshResumeUpstream @ 0x1C000D344 (UsbhSshResumeUpstream.c)
 *     UsbhIncHubBusy @ 0x1C0011BC0 (UsbhIncHubBusy.c)
 *     UsbhFdoDeviceControl @ 0x1C0029C60 (UsbhFdoDeviceControl.c)
 *     UsbhHardReset_Action @ 0x1C003C838 (UsbhHardReset_Action.c)
 *     UsbhAsyncStop @ 0x1C0041C0C (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C00426A0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0043FE0 (Usbh_FDO_WaitPnpStop.c)
 *     UsbhSShResumeWorker @ 0x1C00589B0 (UsbhSShResumeWorker.c)
 * Callees:
 *     UsbhUnlockSSH @ 0x1C0002A5C (UsbhUnlockSSH.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0003974 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C0003A50 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0003E98 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C00041F0 (Usbh_SSH_HubPendingResume.c)
 *     UsbhSshSuspendHub @ 0x1C00063E0 (UsbhSshSuspendHub.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C000C0D0 (UsbhEnableTimerObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C0058D7C (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0058DF8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall Usbh_SSH_Event(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids,
      a2);
  v6 = *(_QWORD *)(a3 + 8);
  if ( !v6 )
    goto LABEL_60;
  v7 = *(_QWORD *)(v6 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(v6, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(v6, *(_QWORD *)(v6 + 64));
  KeWaitForSingleObject((PVOID)(v7 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v7 + 3192) = a3;
  *(_DWORD *)(a3 + 120) = 2018005843;
  *(_DWORD *)(a3 + 124) = a2;
  *(_QWORD *)(a3 + 24) = KeGetCurrentThread();
  v8 = *(_DWORD *)(v7 + 3456);
  v9 = 32LL * (v8 & 7);
  if ( *(_DWORD *)(v9 + v7 + 3460) != a2
    || (v11 = *(unsigned int *)(v7 + 3124), *(_DWORD *)(v9 + v7 + 3464) != (_DWORD)v11) )
  {
    v10 = ((_BYTE)v8 + 1) & 7;
    *(_DWORD *)(v7 + 3456) = v10;
    v10 *= 32LL;
    *(_DWORD *)(v10 + v7 + 3460) = a2;
    *(_DWORD *)(v10 + v7 + 3464) = *(_DWORD *)(v7 + 3124);
    v11 = *(unsigned int *)(v7 + 3124);
  }
  if ( (_DWORD)v11 != 1 )
  {
    switch ( (_DWORD)v11 )
    {
      case 2:
        return (unsigned int)Usbh_SSH_HubPendingSuspend(a1, a2, a3);
      case 3:
        return (unsigned int)Usbh_SSH_HubPendingResumeAfterSuspend(a1, a2, a3);
      case 4:
        return (unsigned int)Usbh_SSH_HubSuspended(a1, a2, a3);
      case 5:
        return (unsigned int)Usbh_SSH_HubPendingResume(a1, a2, a3);
      case 6:
        return (unsigned int)Usbh_SSH_HubFailedResume(a1, v11, a3);
      default:
        v16 = -1073741823;
        UsbhUnlockSSH(a3, v11);
        break;
    }
    return v16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  if ( !a1 )
    goto LABEL_60;
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v12 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 == 6 )
  {
    *(_BYTE *)(v12 + 3408) = 1;
    v13 = *(_QWORD *)(a3 + 8);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 64);
      if ( !v14 )
        UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), 0LL);
      if ( *(_DWORD *)v14 != 541218120 )
        UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), *(_QWORD *)(v13 + 64));
      v15 = *(unsigned int *)(v14 + 3456);
      *(_DWORD *)(v14 + 3124) = 1;
      *(_DWORD *)(32 * v15 + v14 + 3468) = 1;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *(_QWORD *)(v14 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v14 + 3128), 16, 1, 0);
      return 0;
    }
LABEL_60:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  }
  if ( a2 == 1 )
  {
    if ( *(_BYTE *)(v12 + 3408)
      || *(_QWORD *)(v12 + 3104) != v12 + 3104
      || *(_DWORD *)(v12 + 3120)
      || *(_QWORD *)(v12 + 4824) != v12 + 4824
      || (*(_DWORD *)(v12 + 2560) & 0x10) != 0
      || *(int *)(v12 + 2740) > 1
      || (int)UsbhSsh_CheckPortChangeQueuesIdle(a1) < 0 )
    {
      *(_BYTE *)(v12 + 3408) = 0;
      v16 = -1073741823;
      v20 = FdoExt(*(_QWORD *)(a3 + 8));
      v21 = 32LL * *(unsigned int *)(v20 + 3456);
      *(_DWORD *)(v20 + 3124) = 1;
      *(_DWORD *)(v21 + v20 + 3468) = 1;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *(_QWORD *)(v20 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v20 + 3128), 16, 1, 0);
      KeWaitForSingleObject((PVOID)(v12 + 3160), Executive, 0, 0, 0LL);
      if ( !*(_QWORD *)(v12 + 3312) && !*(_QWORD *)(v12 + 3304) && !*(_QWORD *)(v12 + 3296) )
      {
        v22 = FdoExt(a1);
        UsbhEnableTimerObject(a1, v12 + 3200, *(_DWORD *)(v12 + 5256), 0, v22 + 1912, 2001228627);
      }
      KeReleaseSemaphore((PRKSEMAPHORE)(v12 + 3160), 16, 1, 0);
    }
    else
    {
      *(_BYTE *)(v12 + 3408) = 0;
      v16 = 0;
      KeResetEvent((PRKEVENT)(v12 + 3384));
      *(_BYTE *)(v12 + 3416) = 0;
      v18 = FdoExt(*(_QWORD *)(a3 + 8));
      v19 = 32LL * *(unsigned int *)(v18 + 3456);
      *(_DWORD *)(v18 + 3124) = 2;
      *(_DWORD *)(v19 + v18 + 3468) = 2;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *(_QWORD *)(v18 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v18 + 3128), 16, 1, 0);
      UsbhSshSuspendHub(a1);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 4u:
        v23 = *(_QWORD *)(v12 + 3304);
        UsbhUnlockSSH(a3, 1);
        v16 = v23 != 0 ? 0xC0000001 : 0;
        break;
      case 5u:
        UsbhUnlockSSH(a3, 1);
        return 0;
      default:
        UsbhUnlockSSH(a3, 1);
        v16 = -1073741823;
        break;
    }
  }
  return v16;
}
