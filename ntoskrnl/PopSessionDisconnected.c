/*
 * XREFs of PopSessionDisconnected @ 0x14067FF58
 * Callers:
 *     PopSessionConnectionChange @ 0x14079A150 (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopSetSessionUserStatus @ 0x14073C8E4 (PopSetSessionUserStatus.c)
 *     PopDiagTraceSessionStates @ 0x14079A284 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x14079A2F0 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED);
  if ( dword_140C398D8 == a1 && a1 != -1 )
  {
    memset(&PopAdaptiveContext, 0, 0x50uLL);
    dword_140C398D8 = -1;
    dword_140C398DC = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  PopSetSessionUserStatus(a1, 2LL);
  result = 0LL;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 12) = 0;
  return result;
}
