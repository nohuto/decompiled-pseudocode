/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1408F0278
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EFD2C (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void PopResetIdlePhaseWatchdogDiagnosticContext()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&unk_140C21388);
  dword_140C213A0 = 0;
  if ( qword_140C21398 )
  {
    ExFreePoolWithTag(qword_140C21398, 0x67696450u);
    qword_140C21398 = 0LL;
  }
  PopReleaseRwLock((ULONG_PTR)&unk_140C21388);
}
