/*
 * XREFs of MmGetPageFileForCrashDump @ 0x1408D0A34
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BFA60 (IoConfigureCrashDump.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 MmGetPageFileForCrashDump()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  unsigned __int64 v2; // rbp
  char *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51190, 0LL);
  if ( Count )
  {
    v3 = (char *)&unk_140C528A0;
    v4 = Count;
    do
    {
      v5 = *(_QWORD *)v3;
      if ( (*(_WORD *)(*(_QWORD *)v3 + 204LL) & 0x850) == 0 && *(_QWORD *)(v5 + 16) > v2 )
      {
        v1 = *(_QWORD *)(v5 + 224);
        v2 = *(_QWORD *)(v5 + 16);
      }
      v3 += 8;
      --v4;
    }
    while ( v4 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51190, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C51190);
  KeAbPostRelease((ULONG_PTR)&qword_140C51190);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
