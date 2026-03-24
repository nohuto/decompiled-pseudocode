/*
 * XREFs of KiSynchronizePassiveInterruptExecution @ 0x140521D40
 * Callers:
 *     KeSynchronizeExecution @ 0x1403FEBC0 (KeSynchronizeExecution.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

char __fastcall KiSynchronizePassiveInterruptExecution(__int64 a1, __int64 (__fastcall *a2)(__int64), __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
  LOBYTE(a3) = a2(a3);
  KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return a3;
}
