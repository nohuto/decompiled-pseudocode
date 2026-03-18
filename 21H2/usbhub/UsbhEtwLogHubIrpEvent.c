/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x1C000C920
 * Callers:
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0003974 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0003E98 (Usbh_SSH_HubSuspended.c)
 *     UsbhSshSuspendHub @ 0x1C00063E0 (UsbhSshSuspendHub.c)
 *     UsbhFdoD0Worker_Action @ 0x1C00070B0 (UsbhFdoD0Worker_Action.c)
 *     UsbhSshResumeDownstream @ 0x1C0009090 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x1C0009FA0 (UsbhFdoSetD0Cold.c)
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhArmHubForWakeDetect @ 0x1C000AE98 (UsbhArmHubForWakeDetect.c)
 *     UsbhSshResumeUpstream @ 0x1C000D344 (UsbhSshResumeUpstream.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x1C000F490 (UsbhFdoWaitWake_IoCompletion.c)
 *     UsbhFdoPower_WaitWake @ 0x1C000F5A0 (UsbhFdoPower_WaitWake.c)
 *     UsbhFdoColdStartPdo @ 0x1C001B954 (UsbhFdoColdStartPdo.c)
 *     UsbhReset1Complete @ 0x1C001BA90 (UsbhReset1Complete.c)
 *     UsbhSshPropagateResume @ 0x1C001E15C (UsbhSshPropagateResume.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002A8DC (UsbhGetAcpiPortAttributes.c)
 *     UsbhGetDeviceInformation @ 0x1C0037880 (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 *     UsbhFdoSetD0Warm @ 0x1C003B8A0 (UsbhFdoSetD0Warm.c)
 *     UsbhQueueHardReset @ 0x1C003CB20 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x1C003D128 (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004C6E0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortConnect @ 0x1C004C820 (UsbhPortConnect.c)
 *     UsbhReset1DropDevice @ 0x1C004D590 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C004D680 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C004D800 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x1C004DB80 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C004DC70 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C004DDF0 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C000CB00 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogHubIrpEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  __int128 v8; // [rsp+98h] [rbp+1Fh] BYREF

  v8 = 0LL;
  if ( dword_1C006A690 )
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
