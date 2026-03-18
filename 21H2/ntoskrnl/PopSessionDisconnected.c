/*
 * XREFs of PopSessionDisconnected @ 0x1407EC2C8
 * Callers:
 *     PopSessionConnectionChange @ 0x1407ED88C (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     PopDiagTraceSessionStates @ 0x1407ED774 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x1407EDCAC (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1407EF430 (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED);
  if ( dword_140C1F3B8 == a1 && a1 != -1 )
  {
    memset(&PopAdaptiveContext, 0, 0x50uLL);
    dword_140C1F3B8 = -1;
    dword_140C1F3BC = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  PopSetSessionUserStatus(a1, 2LL);
  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  return result;
}
