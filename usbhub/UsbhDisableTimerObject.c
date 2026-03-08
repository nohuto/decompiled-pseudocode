/*
 * XREFs of UsbhDisableTimerObject @ 0x1C00084D0
 * Callers:
 *     UsbhSshEnterSx @ 0x1C0004DC4 (UsbhSshEnterSx.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000ABD0 (UsbhSshSetPortsBusyState.c)
 *     UsbhFdoSystemPowerState @ 0x1C000D270 (UsbhFdoSystemPowerState.c)
 *     UsbhSshSuspendHub @ 0x1C000DEF0 (UsbhSshSuspendHub.c)
 *     Usbh_PIND_Disable_Action @ 0x1C002F6AC (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C002F814 (Usbh_PIND_SetAuto_Action.c)
 *     UsbhFreeTimerObject @ 0x1C003BC10 (UsbhFreeTimerObject.c)
 *     UsbhAsyncStop @ 0x1C00424CC (UsbhAsyncStop.c)
 *     UsbhHubStart @ 0x1C0043560 (UsbhHubStart.c)
 *     UsbhInitCallbackWorker @ 0x1C00438C0 (UsbhInitCallbackWorker.c)
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0056570 (UsbhPdoPnp_StartDevice.c)
 *     UsbhHubSSH_PnpStop @ 0x1C0058F40 (UsbhHubSSH_PnpStop.c)
 *     UsbhSshDisabled @ 0x1C00592A0 (UsbhSshDisabled.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0009AC0 (UsbhEtwWrite.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDisableTimerObject(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // r10
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // [rsp+28h] [rbp-49h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 )
  {
    if ( dword_1C006B690 )
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_DISABLE_TIMER, 0LL);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 3728));
    v5 = *(int *)(a2 + 4);
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 827618148;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a2;
        *(_QWORD *)(v7 + 24) = v5;
      }
    }
    v11 = *(int *)(a2 + 4);
    if ( (_DWORD)v11 == 1 )
    {
      Log(a1, 0x2000, 1685279794, a2, v11);
      v9 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v9 + 8) != a2 + 56 || (v10 = *(_QWORD **)(a2 + 64), *v10 != a2 + 56) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
    }
    else
    {
      Log(a1, 0x2000, 1685279795, a2, v11);
    }
    *(_DWORD *)(a2 + 4) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 3728), v8);
  }
}
