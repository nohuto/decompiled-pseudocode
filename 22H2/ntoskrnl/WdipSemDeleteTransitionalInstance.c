/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x1408318C0
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1407DADC0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemEnableScenario @ 0x1407E5A8C (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140831AF8 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     WdipSemFastFree @ 0x1408333B0 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C34E98, 0LL);
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  --dword_140C34E90;
  ExReleasePushLockEx((__int64 *)&qword_140C34E98, 0LL);
  KeLeaveCriticalRegion();
  return WdipSemFastFree(3LL, a1);
}
