/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1408F02C8
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EFD7C (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void PopResetIdlePhaseWatchdogDiagnosticContext()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&unk_140C213A8);
  dword_140C213C0 = 0;
  if ( qword_140C213B8 )
  {
    ExFreePoolWithTag(qword_140C213B8, 0x67696450u);
    qword_140C213B8 = 0LL;
  }
  PopReleaseRwLock((ULONG_PTR)&unk_140C213A8);
}
