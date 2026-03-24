/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x1408F01A8
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x140576510 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C54440;
  if ( qword_140C54440 )
    return (__int64 (*)(void))qword_140C54440();
  return result;
}
