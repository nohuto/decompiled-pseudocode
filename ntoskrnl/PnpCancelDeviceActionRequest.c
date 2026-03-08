/*
 * XREFs of PnpCancelDeviceActionRequest @ 0x140560204
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x1406CD670 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14096AF78 (PiQueueDeviceRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall PnpCancelDeviceActionRequest(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  *(_BYTE *)(a1 + 88) = 1;
  ExReleasePushLockEx((__int64 *)(a1 + 80), 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
