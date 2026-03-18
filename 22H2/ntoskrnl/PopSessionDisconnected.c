/*
 * XREFs of PopSessionDisconnected @ 0x140683338
 * Callers:
 *     PopSessionConnectionChange @ 0x1407EBF04 (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     PopSetSessionDisplayStatus @ 0x1407A6040 (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1407A62CC (PopSetSessionUserStatus.c)
 *     PopDiagTraceSessionStates @ 0x1407EBDDC (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED);
  if ( dword_140C39CD8 == a1 && a1 != -1 )
  {
    memset(&PopAdaptiveContext, 0, 0x50uLL);
    dword_140C39CD8 = -1;
    dword_140C39CDC = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  PopSetSessionUserStatus(a1, 2LL);
  result = 0LL;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 12) = 0;
  return result;
}
