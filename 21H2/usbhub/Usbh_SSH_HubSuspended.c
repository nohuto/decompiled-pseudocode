/*
 * XREFs of Usbh_SSH_HubSuspended @ 0x1C0015264
 * Callers:
 *     UsbhFdoReturnPortStatus @ 0x1C00099C0 (UsbhFdoReturnPortStatus.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSshResumeDownstream @ 0x1C000C0F0 (UsbhSshResumeDownstream.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 *     UsbhSshResumeUpstream @ 0x1C0013558 (UsbhSshResumeUpstream.c)
 *     UsbhUnlockSSH @ 0x1C001CC84 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubSuspended(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  _DWORD *v12; // rax
  int v13; // ebx
  _DWORD *v14; // rax
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
    v15 = 8LL * (unsigned int)v14[864];
    v14[781] = 4;
    v14[v15 + 867] = 4;
    *(_DWORD *)(a3 + 120) = 1734964085;
    *((_QWORD *)v14 + 399) = 0LL;
    KeReleaseSemaphore((PRKSEMAPHORE)(v14 + 782), 16, 1, 0);
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
    UsbhSshResumeDownstream((__int64)a1, a3, 1);
    return 0;
  }
  v12 = FdoExt(*(_QWORD *)(a3 + 8));
  v12[781] = 5;
  v12[8 * v12[864] + 867] = 5;
  *(_DWORD *)(a3 + 120) = 1734964085;
  *((_QWORD *)v12 + 399) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v12 + 782), 16, 1, 0);
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START);
  v13 = UsbhSshResumeUpstream(a1, a3);
  if ( v13 < 0 )
    Usbh_SSH_Event(*(struct _DEVICE_OBJECT **)(a3 + 8), 9u, a3);
  return (unsigned int)v13;
}
