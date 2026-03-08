/*
 * XREFs of UsbhEtwLogDevicePowerEvent @ 0x1C0008330
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003200 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C000A4C0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C001A910 (UsbhPdoUnblockPendedD0IrpWI.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0009AC0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogDevicePowerEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  __int64 v5; // rax
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  __int128 v8; // [rsp+A8h] [rbp+27h] BYREF

  v8 = 0LL;
  if ( dword_1C006B690 )
  {
    v5 = *(_QWORD *)(a1 + 1184);
    if ( !v5 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v6 = *(_DWORD **)(v5 + 64);
    if ( !v6 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 1184), 0LL);
    if ( *v6 != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 1184), v6);
    if ( a2 && g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(a2, &v8) >= 0 )
      v7 = (const GUID *)&v8;
    else
      v7 = 0LL;
    UsbhEtwWrite(a3, v7);
  }
}
