/*
 * XREFs of UsbhEtwLogHubPowerEvent @ 0x1C00096F0
 * Callers:
 *     UsbhFdoDevicePowerState @ 0x1C000AE40 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C000B5D0 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C000C140 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C000C6B0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C000CA40 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C000D270 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0009AC0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogHubPowerEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  _DWORD *v6; // rdx
  int ActivityIdIrp; // eax
  const GUID *v8; // rdx
  __int128 v9; // [rsp+98h] [rbp+1Fh] BYREF

  v9 = 0LL;
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
      ActivityIdIrp = 0;
      v9 = *a3;
    }
    else if ( a2 && g_IoGetActivityIdIrp )
    {
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v9);
    }
    else
    {
      ActivityIdIrp = -1073741823;
    }
    v8 = (const GUID *)&v9;
    if ( ActivityIdIrp < 0 )
      v8 = 0LL;
    UsbhEtwWrite(a4, v8);
  }
}
