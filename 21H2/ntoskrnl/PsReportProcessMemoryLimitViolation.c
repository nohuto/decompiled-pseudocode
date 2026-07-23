/*
 * XREFs of PsReportProcessMemoryLimitViolation @ 0x140908A74
 * Callers:
 *     MiChargeProcessCommitment @ 0x1402BF660 (MiChargeProcessCommitment.c)
 * Callees:
 *     PspSendJobNotification @ 0x14024234C (PspSendJobNotification.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x14068259C (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x14068264C (PspLockJobMemoryLimitsShared.c)
 */

char PsReportProcessMemoryLimitViolation()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rdi
  unsigned __int64 v2; // rax
  __int64 v3; // rbx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v2 = Process[1].Affinity.Bitmap[16];
  v3 = *(_QWORD *)(v2 + 816);
  if ( v3 && (*(_DWORD *)(v3 + 256) & 0x100) != 0 )
  {
    PspLockJobMemoryLimitsShared(*(_QWORD *)(v2 + 816), (__int64)CurrentThread);
    if ( *(_QWORD *)(v3 + 456) && (*(_DWORD *)(v3 + 876) & 0x200) != 0 && (Process[1].DirectoryTableBase & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0x20u);
      PspSendJobNotification(v3, 9LL, (int)Process[1].Header.WaitListHead.Flink, 1);
    }
    LOBYTE(v2) = PspUnlockJobMemoryLimitsShared(v3, (__int64)CurrentThread);
  }
  return v2;
}
