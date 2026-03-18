/*
 * XREFs of PsSwapProcessWorkingSet @ 0x1409AD76C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1407F5540 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     PspRequestProcessExecutionState @ 0x140683844 (PspRequestProcessExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x140687754 (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(_KPROCESS *BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  int v5; // edi
  signed __int64 *p_Lock; // rbx
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned int v13; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  p_Lock = (signed __int64 *)&BugCheckParameter1[1].Header.Lock;
  ExAcquirePushLockSharedEx((ULONG_PTR)&BugCheckParameter1[1], 0LL);
  v7 = BugCheckParameter1[1].Affinity.StaticBitmap[16];
  if ( v7 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 56), 1u);
    v5 = *(_DWORD *)(v7 + 1056) != 0 ? 2 : 0;
    if ( *(_DWORD *)(v7 + 1048) )
      v5 = 1;
  }
  v8 = v5 & 0xFFFFFFFD;
  v9 = v5 | 2;
  if ( !a2 )
    v9 = v8;
  PspRequestProcessExecutionState((__int64)BugCheckParameter1, v9, 1);
  if ( v7 )
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Lock);
  KeAbPostRelease((ULONG_PTR)p_Lock);
  v13 = PspChangeProcessExecutionState(BugCheckParameter1, v10, v11, v12);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v13;
}
