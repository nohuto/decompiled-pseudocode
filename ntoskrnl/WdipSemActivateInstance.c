/*
 * XREFs of WdipSemActivateInstance @ 0x14085ECB0
 * Callers:
 *     WdipSemEnableScenario @ 0x1407966C0 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140831E48 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void __fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C32458, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((__int64 *)&qword_140C32458, 0LL);
  KeLeaveCriticalRegion();
}
