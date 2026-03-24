/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x1C0012400
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C000C0F0 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x1C000CF10 (UsbhFdoSetD0Cold.c)
 *     UsbhSshSuspendHub @ 0x1C000D970 (UsbhSshSuspendHub.c)
 *     UsbhFdoD0Worker_Action @ 0x1C000DC30 (UsbhFdoD0Worker_Action.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0010064 (UsbhArmHubForWakeDetect.c)
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhSshResumeUpstream @ 0x1C0013558 (UsbhSshResumeUpstream.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0015264 (Usbh_SSH_HubSuspended.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x1C00153F0 (UsbhFdoWaitWake_IoCompletion.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0015704 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhFdoPower_WaitWake @ 0x1C00157E0 (UsbhFdoPower_WaitWake.c)
 *     UsbhReset1Complete @ 0x1C0018F50 (UsbhReset1Complete.c)
 *     UsbhSshPropagateResume @ 0x1C001BB74 (UsbhSshPropagateResume.c)
 *     UsbhFdoColdStartPdo @ 0x1C001C580 (UsbhFdoColdStartPdo.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002BC50 (UsbhGetAcpiPortAttributes.c)
 *     UsbhGetDeviceInformation @ 0x1C0038B48 (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x1C0039FD8 (UsbhSetupDevice.c)
 *     UsbhFdoSetD0Warm @ 0x1C003CBD0 (UsbhFdoSetD0Warm.c)
 *     UsbhQueueHardReset @ 0x1C003DD00 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x1C003E308 (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004DAF0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortConnect @ 0x1C004DC30 (UsbhPortConnect.c)
 *     UsbhReset1DropDevice @ 0x1C004E9A0 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C004EA90 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C004EC10 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x1C004EF90 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C004F080 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C004F200 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogHubIrpEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  __int128 v8; // [rsp+98h] [rbp+1Fh] BYREF

  v8 = 0LL;
  if ( dword_1C006C5F0 )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v6 = *(_DWORD **)(a1 + 64);
    if ( !v6 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v6 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v6);
    if ( a3 )
    {
      v8 = *a3;
    }
    else if ( !a2 || !g_IoGetActivityIdIrp || (int)g_IoGetActivityIdIrp(a2, &v8) < 0 )
    {
      v7 = 0LL;
LABEL_8:
      UsbhEtwWrite(a4, v7);
      return;
    }
    v7 = (const GUID *)&v8;
    goto LABEL_8;
  }
}
