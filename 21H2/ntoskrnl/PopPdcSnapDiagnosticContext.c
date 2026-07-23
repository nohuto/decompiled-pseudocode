/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x1408F02B8
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x140576810 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C54480;
  if ( qword_140C54480 )
    return (__int64 (*)(void))qword_140C54480();
  return result;
}
