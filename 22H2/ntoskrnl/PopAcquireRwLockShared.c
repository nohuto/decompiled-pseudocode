/*
 * XREFs of PopAcquireRwLockShared @ 0x14034D9D4
 * Callers:
 *     PopThermalTraceRundownEvents @ 0x14034D8C4 (PopThermalTraceRundownEvents.c)
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 *     PoThermalCounterSetCallback @ 0x1408E7A10 (PoThermalCounterSetCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PopAcquireRwLockShared(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
