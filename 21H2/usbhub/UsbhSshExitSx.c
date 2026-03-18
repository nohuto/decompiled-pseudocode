/*
 * XREFs of UsbhSshExitSx @ 0x1C000F9A0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00070B0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhEnableTimerObject @ 0x1C000C0D0 (UsbhEnableTimerObject.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 */

LONG __fastcall UsbhSshExitSx(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx

  v4 = FdoExt(a1);
  KeWaitForSingleObject(v4 + 790, Executive, 0, 0, 0LL);
  v5 = _InterlockedExchange64((volatile __int64 *)v4 + 413, 0LL);
  Log(a1, 0x10000, 1213429805, 0LL, v5);
  UsbhDecHubBusy(a1, v6, v5);
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), (__int64)(v4 + 800), 2000, 0, a2, 0x77485353u);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 790), 16, 1, 0);
}
