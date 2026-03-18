/*
 * XREFs of WdipSemActivateInstance @ 0x14081CB98
 * Callers:
 *     WdipSemEnableScenario @ 0x1406E6B08 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140815DC8 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

void __fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16818, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16818, 0LL);
  KeLeaveCriticalRegion();
}
