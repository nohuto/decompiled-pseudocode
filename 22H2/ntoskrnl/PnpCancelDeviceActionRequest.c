/*
 * XREFs of PnpCancelDeviceActionRequest @ 0x14050E718
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x1406B2710 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14072F6CC (PiQueueDeviceRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PnpCancelDeviceActionRequest(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  *(_BYTE *)(a1 + 88) = 1;
  ExReleasePushLockEx(a1 + 80, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
