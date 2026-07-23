/*
 * XREFs of PopSessionDisconnected @ 0x140779C98
 * Callers:
 *     PopSessionConnectionChange @ 0x14078DAEC (PopSessionConnectionChange.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x140671770 (PopSetSessionUserStatus.c)
 *     PopDiagTraceSessionStates @ 0x140671984 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x140781B78 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( (_DWORD)PopConsoleContext == a1 && a1 != -1 )
  {
    PopConsoleContext = 0LL;
    qword_140C205C0 = 3LL;
    LODWORD(PopConsoleContext) = -1;
    xmmword_140C205B0 = 0LL;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  result = PopSetSessionUserStatus(a1, 2u);
  a2[1] = 0;
  *a2 = 0;
  return result;
}
