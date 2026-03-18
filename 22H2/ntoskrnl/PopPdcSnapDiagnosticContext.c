/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x140883B48
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1403D51B0 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C6B090;
  if ( qword_140C6B090 )
    return (__int64 (*)(void))qword_140C6B090();
  return result;
}
