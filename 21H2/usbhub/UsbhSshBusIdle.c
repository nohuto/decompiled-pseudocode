/*
 * XREFs of UsbhSshBusIdle @ 0x1C0030DDC
 * Callers:
 *     UsbhHubSSH_PnpStop @ 0x1C0058680 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 */

LONG __fastcall UsbhSshBusIdle(__int64 a1)
{
  volatile __int64 *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r10

  v2 = (volatile __int64 *)FdoExt(a1);
  Log(a1, 2048, 1114863917, 0LL, _InterlockedExchange64(v2 + 411, 0LL));
  return UsbhDecHubBusy(a1, v3, v4);
}
