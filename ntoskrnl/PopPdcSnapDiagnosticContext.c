/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x14087EDA8
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1403CFC20 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C6AC20;
  if ( qword_140C6AC20 )
    return (__int64 (*)(void))qword_140C6AC20();
  return result;
}
