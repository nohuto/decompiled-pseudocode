__int64 __fastcall Usbh_SSH_HubSuspended(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  v6 = a2 - 1;
  if ( !v6 )
  {
    UsbhUnlockSSH(a3, 4LL);
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_16;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_16;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_16;
  v10 = v9 - 1;
  if ( !v10 )
  {
    v14 = FdoExt(*(_QWORD *)(a3 + 8));
    v15 = 32LL * *(unsigned int *)(v14 + 3456);
    *(_DWORD *)(v14 + 3124) = 4;
    *(_DWORD *)(v15 + v14 + 3468) = 4;
    *(_DWORD *)(a3 + 120) = 1734964085;
    *(_QWORD *)(v14 + 3192) = 0LL;
    KeReleaseSemaphore((PRKSEMAPHORE)(v14 + 3128), 16, 1, 0);
    return (unsigned int)-1073741823;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 2 )
    {
LABEL_16:
      UsbhUnlockSSH(a3, 4LL);
      return (unsigned int)-1073741823;
    }
    UsbhUnlockSSH(a3, 5LL);
    UsbhSshResumeDownstream(a1);
    return 0;
  }
  v12 = FdoExt(*(_QWORD *)(a3 + 8));
  *(_DWORD *)(v12 + 3124) = 5;
  *(_DWORD *)(32LL * *(unsigned int *)(v12 + 3456) + v12 + 3468) = 5;
  *(_DWORD *)(a3 + 120) = 1734964085;
  *(_QWORD *)(v12 + 3192) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v12 + 3128), 16, 1, 0);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START, 0, 0);
  v13 = UsbhSshResumeUpstream(a1, a3);
  if ( v13 < 0 )
    Usbh_SSH_Event(*(_QWORD *)(a3 + 8), 9LL, a3);
  return (unsigned int)v13;
}
