/*
 * XREFs of MiObtainRelocationBits @ 0x14066ADB4
 * Callers:
 *     MiSelectImageBase @ 0x14066AAC0 (MiSelectImageBase.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x14027E980 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x140297080 (RtlSetBitsEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlFindClearBitsAndSetEx @ 0x1403423E0 (RtlFindClearBitsAndSetEx.c)
 *     MiSelectRelocationStartHint @ 0x14066AE90 (MiSelectRelocationStartHint.c)
 */

unsigned __int64 __fastcall MiObtainRelocationBits(unsigned __int64 **a1, unsigned __int16 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v5; // r13
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 *v9; // rcx
  unsigned __int64 v11; // r14
  unsigned __int64 started; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CB48, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(*a1, (unsigned int)v5, a3);
  v8 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1LL )
  {
    v9 = a1[1];
    if ( v9 )
    {
      v11 = RtlFindClearBitsAndSetEx(v9, v5, ClearBitsAndSet);
      if ( v11 != v8 )
      {
        RtlClearBitsEx((__int64)*a1, v8, v5);
        if ( v11 != -1LL )
          RtlClearBitsEx((__int64)a1[1], v11, v5);
        started = MiSelectRelocationStartHint(a1, (unsigned __int16)v5, a3, 1LL);
        v8 = started;
        if ( started != -1LL )
        {
          RtlSetBitsEx((__int64)*a1, started, v5);
          RtlSetBitsEx((__int64)a1[1], v8, v5);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CB48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4CB48);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CB48);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v8;
}
