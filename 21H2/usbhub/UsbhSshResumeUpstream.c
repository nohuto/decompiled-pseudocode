/*
 * XREFs of UsbhSshResumeUpstream @ 0x1C000D344
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x1C0003E98 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0058DF8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C0002F60 (UsbhSyncSendInternalIoctl.c)
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000C920 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0011BC0 (UsbhIncHubBusy.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeUpstream(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r15
  __int64 v5; // rbp
  __int64 v6; // r14
  _DWORD *v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int v11; // [rsp+90h] [rbp+18h] BYREF

  v11 = 0;
  v4 = FdoExt(a1);
  Log(a1, 0x10000, 1383290224, a2, 0LL);
  v5 = UsbhSyncSendInternalIoctl(a1, 0x220013u, (unsigned __int64)&v11, 0LL);
  Log(a1, 8, 1970303827, v11, v5);
  v6 = UsbhIncHubBusy(a1, a2, a1, 1347777128, 0);
  if ( (int)v5 >= 0 )
  {
    v7 = FdoExt(a1);
    if ( *((_QWORD *)v7 + 591) )
      LODWORD(v5) = (*((__int64 (__fastcall **)(_QWORD))v7 + 591))(*((_QWORD *)v7 + 149));
    else
      LODWORD(v5) = -1073741637;
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_UPSTREAM);
  KeWaitForSingleObject(v4 + 782, Executive, 0, 0, 0LL);
  v8 = v4[781];
  KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 782), 16, 1, 0);
  if ( v8 == 5 )
  {
    Usbh_SSH_Event(a1, 9u, a2);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE);
    KeSetEvent((PRKEVENT)v4 + 141, 0, 0);
    UsbhException(a1, 0, 137, 0, 0, v5, 0, usbfile_sshub_c, 2306, 0);
  }
  if ( v6 )
    UsbhDecHubBusy(a1, v9, v6);
  Log(a1, 0x10000, 1383290232, 0LL, (int)v5);
  return (unsigned int)v5;
}
