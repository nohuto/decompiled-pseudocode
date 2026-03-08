/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x1C00098E0
 * Callers:
 *     UsbhReset1Complete @ 0x1C0002B20 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0004B88 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhSshResumeUpstream @ 0x1C0004F34 (UsbhSshResumeUpstream.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00050BC (Usbh_SSH_HubSuspended.c)
 *     UsbhFdoD0Worker_Action @ 0x1C000CE60 (UsbhFdoD0Worker_Action.c)
 *     UsbhSshSuspendHub @ 0x1C000DEF0 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x1C000E1B0 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x1C000FBD0 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoPower_WaitWake @ 0x1C0020750 (UsbhFdoPower_WaitWake.c)
 *     UsbhArmHubForWakeDetect @ 0x1C00218E0 (UsbhArmHubForWakeDetect.c)
 *     UsbhSshPropagateResume @ 0x1C0021BE4 (UsbhSshPropagateResume.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x1C0022040 (UsbhFdoWaitWake_IoCompletion.c)
 *     UsbhFdoColdStartPdo @ 0x1C00222BC (UsbhFdoColdStartPdo.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002B2AC (UsbhGetAcpiPortAttributes.c)
 *     UsbhGetDeviceInformation @ 0x1C00382CC (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 *     UsbhQueueHardReset @ 0x1C003D3B0 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x1C003D9BC (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004CFC0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortConnect @ 0x1C004D100 (UsbhPortConnect.c)
 *     UsbhReset1DropDevice @ 0x1C004DE80 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C004DF70 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C004E0F0 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x1C004E470 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C004E560 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C004E6E0 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0009AC0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogHubIrpEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  __int128 v8; // [rsp+98h] [rbp+1Fh] BYREF

  v8 = 0LL;
  if ( dword_1C006B690 )
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
LABEL_10:
      UsbhEtwWrite(a4, v7);
      return;
    }
    v7 = (const GUID *)&v8;
    goto LABEL_10;
  }
}
