/*
 * XREFs of UsbhSshExitSx @ 0x1C0003CCC
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C000CE60 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhEnableTimerObject @ 0x1C0008770 (UsbhEnableTimerObject.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

LONG __fastcall UsbhSshExitSx(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx

  v4 = FdoExt(a1);
  KeWaitForSingleObject((PVOID)(v4 + 3160), Executive, 0, 0, 0LL);
  v5 = _InterlockedExchange64((volatile __int64 *)(v4 + 3304), 0LL);
  Log(a1, 0x10000, 1213429805, 0, v5);
  UsbhDecHubBusy(a1, v6, v5);
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), v4 + 3200, 2000, 0, a2, 2001228627);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3160), 16, 1, 0);
}
