__int64 __fastcall Usbh_SSH_HubPendingSuspend(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r14
  int v8; // edi
  int v9; // edi
  __int64 v10; // rax
  int v12; // edi
  __int64 v13; // rdx
  int v14; // eax

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  v7 = FdoExt(a1);
  v8 = a2 - 1;
  if ( !v8 )
  {
    v13 = 2LL;
    goto LABEL_16;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v12 = v9 - 1;
    if ( v12 )
    {
      if ( v12 != 3 )
      {
        UsbhUnlockSSH(a3, 2LL);
        return (unsigned int)-1073741823;
      }
      UsbhUnlockSSH(a3, 3LL);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START, 0, 0);
      KeWaitForSingleObject((PVOID)(v7 + 3384), Executive, 0, 0, 0LL);
      v13 = (unsigned int)UsbhLockSSH(a3, 6LL);
      v14 = 0;
      if ( (_DWORD)v13 == 6 )
        v14 = -1073741823;
      v6 = v14;
    }
    else
    {
      v13 = 1LL;
    }
LABEL_16:
    UsbhUnlockSSH(a3, v13);
    return v6;
  }
  v10 = FdoExt(*(_QWORD *)(a3 + 8));
  *(_DWORD *)(v10 + 3124) = 4;
  *(_DWORD *)(32LL * *(unsigned int *)(v10 + 3456) + v10 + 3468) = 4;
  *(_DWORD *)(a3 + 120) = 1734964085;
  *(_QWORD *)(v10 + 3192) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v10 + 3128), 16, 1, 0);
  return v6;
}
