/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1408F03D8
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EFE8C (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void PopResetIdlePhaseWatchdogDiagnosticContext()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&unk_140C213C8);
  dword_140C213E0 = 0;
  if ( qword_140C213D8 )
  {
    ExFreePoolWithTag(qword_140C213D8, 0x67696450u);
    qword_140C213D8 = 0LL;
  }
  PopReleaseRwLock((ULONG_PTR)&unk_140C213C8);
}
