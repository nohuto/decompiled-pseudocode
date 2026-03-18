/*
 * XREFs of UsbhDisarmHubWakeOnConnect @ 0x1C003B5DC
 * Callers:
 *     UsbhSshSuspendHub @ 0x1C00063E0 (UsbhSshSuspendHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C0009A20 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001D300 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhSetHubRemoteWake @ 0x1C002CF94 (UsbhSetHubRemoteWake.c)
 */

void __fastcall UsbhDisarmHubWakeOnConnect(__int64 a1)
{
  _DWORD *v2; // rbx

  v2 = FdoExt(a1);
  UsbhDisarmHubForWakeDetect(a1);
  if ( (v2[640] & 0x80000) != 0 && (int)UsbhSetHubRemoteWake(a1, 0) >= 0 )
    v2[640] &= ~0x80000u;
}
