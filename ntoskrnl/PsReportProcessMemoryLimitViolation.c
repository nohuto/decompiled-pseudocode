/*
 * XREFs of PsReportProcessMemoryLimitViolation @ 0x1409AED9C
 * Callers:
 *     MiChargeProcessCommitment @ 0x14031FA10 (MiChargeProcessCommitment.c)
 * Callees:
 *     PspSendJobNotification @ 0x14030201C (PspSendJobNotification.c)
 *     PspLockJobMemoryLimitsShared @ 0x1406FC318 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1406FC344 (PspUnlockJobMemoryLimitsShared.c)
 */

char PsReportProcessMemoryLimitViolation()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rdi
  unsigned __int64 v2; // rax
  __int64 v3; // rbx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v2 = Process[1].Affinity.StaticBitmap[16];
  v3 = *(_QWORD *)(v2 + 1008);
  if ( v3 && (*(_DWORD *)(v3 + 256) & 0x100) != 0 )
  {
    PspLockJobMemoryLimitsShared(*(_QWORD *)(v2 + 1008), (__int64)CurrentThread);
    if ( *(_QWORD *)(v3 + 552) && (*(_DWORD *)(v3 + 1088) & 0x200) != 0 && (Process[1].DirectoryTableBase & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0x20u);
      PspSendJobNotification(v3, 9LL, (int)Process[1].Header.WaitListHead.Flink, 1);
    }
    LOBYTE(v2) = PspUnlockJobMemoryLimitsShared(v3, (__int64)CurrentThread);
  }
  return v2;
}
