/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x1408150FC
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406D9E90 (WdipTimeoutCheckRoutine.c)
 *     WdipSemEnableScenario @ 0x1406E6B08 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140815DC8 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     WdipSemFastFree @ 0x140815360 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16818, 0LL);
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  --dword_140C16810;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16818, 0LL);
  KeLeaveCriticalRegion();
  return WdipSemFastFree(3LL, a1);
}
