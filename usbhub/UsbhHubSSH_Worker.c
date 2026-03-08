/*
 * XREFs of UsbhHubSSH_Worker @ 0x1C00052F0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0007220 (Usbh_SSH_Event.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhHubSSH_Worker(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *v3; // rbx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v3 = *(struct _KEVENT **)(a1 + 64);
  if ( !v3 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v3->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  Usbh_SSH_Event(a1, 1LL, a3);
  return KeSetEvent(v3 + 143, 0, 0);
}
