/*
 * XREFs of UsbhSshResumeUpstream @ 0x1C0013558
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x1C0015264 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C005A4C8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003610 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0004060 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0015F10 (UsbhSyncSendInternalIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeUpstream(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _DWORD *v4; // r15
  __int64 v5; // rbp
  _QWORD *v6; // r14
  _DWORD *v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  int v11; // [rsp+48h] [rbp-30h]
  unsigned int v12; // [rsp+90h] [rbp+18h] BYREF

  v12 = 0;
  v4 = FdoExt((__int64)a1);
  Log((__int64)a1, 0x10000, 1383290224, a2, 0LL);
  v5 = (int)UsbhSyncSendInternalIoctl(a1, 2228243LL, &v12, 0LL);
  Log((__int64)a1, 8, 1970303827, v12, v5);
  v6 = (_QWORD *)UsbhIncHubBusy((__int64)a1, a2, (__int64)a1, 1347777128, 0);
  if ( (int)v5 >= 0 )
  {
    v7 = FdoExt((__int64)a1);
    if ( *((_QWORD *)v7 + 591) )
      LODWORD(v5) = (*((__int64 (__fastcall **)(_QWORD))v7 + 591))(*((_QWORD *)v7 + 149));
    else
      LODWORD(v5) = -1073741637;
  }
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_UPSTREAM);
  KeWaitForSingleObject(v4 + 782, Executive, 0, 0, 0LL);
  v8 = v4[781];
  KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 782), 16, 1, 0);
  if ( v8 == 5 )
  {
    Usbh_SSH_Event(a1, 9u, a2);
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE);
    KeSetEvent((PRKEVENT)v4 + 141, 0, 0);
    LOBYTE(v11) = 0;
    UsbhException((int)a1, 0, 137, 0, 0, v5, 0, usbfile_sshub_c, 2306, v11);
  }
  if ( v6 )
    UsbhDecHubBusy((__int64)a1, v9, v6);
  Log((__int64)a1, 0x10000, 1383290232, 0LL, (int)v5);
  return (unsigned int)v5;
}
