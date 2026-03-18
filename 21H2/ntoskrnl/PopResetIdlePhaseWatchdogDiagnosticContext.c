/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1407F28E0
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x1407F287C (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void PopResetIdlePhaseWatchdogDiagnosticContext()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C20768);
  dword_140C20780 = 0;
  if ( qword_140C20778 )
  {
    ExFreePoolWithTag(qword_140C20778, 0x67696450u);
    qword_140C20778 = 0LL;
  }
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C20768);
}
