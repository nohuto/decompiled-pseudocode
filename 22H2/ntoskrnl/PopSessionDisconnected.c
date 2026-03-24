/*
 * XREFs of PopSessionDisconnected @ 0x1407799D8
 * Callers:
 *     PopSessionConnectionChange @ 0x14078D82C (PopSessionConnectionChange.c)
 * Callees:
 *     PopDiagTraceSessionStates @ 0x140725380 (PopDiagTraceSessionStates.c)
 *     PopSetSessionUserStatus @ 0x1407255E4 (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x1407818B8 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( (_DWORD)PopConsoleContext == a1 && a1 != -1 )
  {
    PopConsoleContext = 0LL;
    qword_140C20580 = 3LL;
    LODWORD(PopConsoleContext) = -1;
    xmmword_140C20570 = 0LL;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  result = PopSetSessionUserStatus(a1, 2u);
  a2[1] = 0;
  *a2 = 0;
  return result;
}
