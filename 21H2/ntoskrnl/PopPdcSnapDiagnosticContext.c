/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x14080B778
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1403A0800 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C5ADD0;
  if ( qword_140C5ADD0 )
    return (__int64 (*)(void))qword_140C5ADD0();
  return result;
}
