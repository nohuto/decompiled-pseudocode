/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x140831C10
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14078BFD0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemEnableScenario @ 0x1407966C0 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140831E48 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     WdipSemFastFree @ 0x140833700 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C32458, 0LL);
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  --dword_140C32450;
  ExReleasePushLockEx((__int64 *)&qword_140C32458, 0LL);
  KeLeaveCriticalRegion();
  return WdipSemFastFree(3LL, a1);
}
