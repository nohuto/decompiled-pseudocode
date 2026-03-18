/*
 * XREFs of WdipSemActivateInstance @ 0x140862C70
 * Callers:
 *     WdipSemEnableScenario @ 0x1407E5A8C (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140831AF8 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 */

void __fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C34E98, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((__int64 *)&qword_140C34E98, 0LL);
  KeLeaveCriticalRegion();
}
