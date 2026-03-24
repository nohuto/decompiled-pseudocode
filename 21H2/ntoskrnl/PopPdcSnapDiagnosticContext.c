/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x1408F0158
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1405765D0 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C54440;
  if ( qword_140C54440 )
    return (__int64 (*)(void))qword_140C54440();
  return result;
}
