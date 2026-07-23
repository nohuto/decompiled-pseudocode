/*
 * XREFs of PopGetPowerRequestDiagnosticBuffer @ 0x1408E1A50
 * Callers:
 *     PopUmpoSendPowerRequestCreate @ 0x1408F27F8 (PopUmpoSendPowerRequestCreate.c)
 * Callees:
 *     PoStoreDiagnosticContext @ 0x14038ADEC (PoStoreDiagnosticContext.c)
 */

__int64 __fastcall PopGetPowerRequestDiagnosticBuffer(int a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __int64 i; // rcx

  for ( i = PopPowerRequestObjectList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &PopPowerRequestObjectList )
      return 3221226021LL;
    if ( *(_DWORD *)(i + 28) == a1 )
      break;
  }
  return PoStoreDiagnosticContext(*(_QWORD *)(i + 80), a2, a3);
}
