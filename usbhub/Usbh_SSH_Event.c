__int64 __fastcall Usbh_SSH_Event(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  _DWORD *v8; // rdx
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx

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
  v8 = (_DWORD *)(v7 + 3124);
  *(_DWORD *)(a3 + 120) = 2018005843;
  *(_DWORD *)(a3 + 124) = a2;
  *(_QWORD *)(a3 + 24) = KeGetCurrentThread();
  v9 = *(_DWORD *)(v7 + 3456);
  v10 = 32LL * (v9 & 7);
  if ( *(_DWORD *)(v10 + v7 + 3460) != a2 || *(_DWORD *)(v10 + v7 + 3464) != *v8 )
  {
    v11 = ((_BYTE)v9 + 1) & 7;
    *(_DWORD *)(v7 + 3456) = v11;
    v11 *= 32LL;
    *(_DWORD *)(v11 + v7 + 3460) = a2;
    *(_DWORD *)(v11 + v7 + 3464) = *v8;
  }
  v12 = (unsigned int)*v8;
  if ( (_DWORD)v12 != 1 )
  {
    switch ( (_DWORD)v12 )
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
        return (unsigned int)Usbh_SSH_HubFailedResume(a1, v12, a3);
      default:
        v17 = -1073741823;
        UsbhUnlockSSH(a3, v12);
        break;
    }
    return v17;
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
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v13 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 == 6 )
  {
    *(_BYTE *)(v13 + 3408) = 1;
    v14 = *(_QWORD *)(a3 + 8);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 64);
      if ( !v15 )
        UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), 0LL);
      if ( *(_DWORD *)v15 != 541218120 )
        UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), *(_QWORD *)(v14 + 64));
      v16 = *(unsigned int *)(v15 + 3456);
      *(_DWORD *)(v15 + 3124) = 1;
      *(_DWORD *)(32 * v16 + v15 + 3468) = 1;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *(_QWORD *)(v15 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v15 + 3128), 16, 1, 0);
      return 0;
    }
LABEL_60:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  }
  if ( a2 == 1 )
  {
    if ( *(_BYTE *)(v13 + 3408)
      || *(_QWORD *)(v13 + 3104) != v13 + 3104
      || *(_DWORD *)(v13 + 3120)
      || *(_QWORD *)(v13 + 4824) != v13 + 4824
      || (*(_DWORD *)(v13 + 2560) & 0x10) != 0
      || *(int *)(v13 + 2740) > 1
      || (int)UsbhSsh_CheckPortChangeQueuesIdle(a1) < 0 )
    {
      *(_BYTE *)(v13 + 3408) = 0;
      v17 = -1073741823;
      v21 = FdoExt(*(_QWORD *)(a3 + 8));
      v22 = 32LL * *(unsigned int *)(v21 + 3456);
      *(_DWORD *)(v21 + 3124) = 1;
      *(_DWORD *)(v22 + v21 + 3468) = 1;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *(_QWORD *)(v21 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v21 + 3128), 16, 1, 0);
      KeWaitForSingleObject((PVOID)(v13 + 3160), Executive, 0, 0, 0LL);
      if ( !*(_QWORD *)(v13 + 3312) && !*(_QWORD *)(v13 + 3304) && !*(_QWORD *)(v13 + 3296) )
      {
        v23 = FdoExt(a1);
        UsbhEnableTimerObject(a1, v13 + 3200, *(_DWORD *)(v13 + 5256), 0, v23 + 1912, 2001228627);
      }
      KeReleaseSemaphore((PRKSEMAPHORE)(v13 + 3160), 16, 1, 0);
    }
    else
    {
      *(_BYTE *)(v13 + 3408) = 0;
      v17 = 0;
      KeResetEvent((PRKEVENT)(v13 + 3384));
      *(_BYTE *)(v13 + 3416) = 0;
      v19 = FdoExt(*(_QWORD *)(a3 + 8));
      v20 = 32LL * *(unsigned int *)(v19 + 3456);
      *(_DWORD *)(v19 + 3124) = 2;
      *(_DWORD *)(v20 + v19 + 3468) = 2;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *(_QWORD *)(v19 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v19 + 3128), 16, 1, 0);
      UsbhSshSuspendHub(a1);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 4u:
        v24 = *(_QWORD *)(v13 + 3304);
        UsbhUnlockSSH(a3, 1LL);
        v17 = v24 != 0 ? 0xC0000001 : 0;
        break;
      case 5u:
        UsbhUnlockSSH(a3, 1LL);
        return 0;
      default:
        UsbhUnlockSSH(a3, 1LL);
        v17 = -1073741823;
        break;
    }
  }
  return v17;
}
