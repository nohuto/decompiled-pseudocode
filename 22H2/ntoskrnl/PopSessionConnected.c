/*
 * XREFs of PopSessionConnected @ 0x14078D8D0
 * Callers:
 *     PopSessionConnectionChange @ 0x14078D82C (PopSessionConnectionChange.c)
 * Callees:
 *     PopDiagTraceSessionStates @ 0x140725380 (PopDiagTraceSessionStates.c)
 *     PopConsoleSessionActiveInput @ 0x140772AD4 (PopConsoleSessionActiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x140772B48 (PopRemoteSessionActiveInput.c)
 *     PopSetSessionDisplayStatus @ 0x1407818B8 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, unsigned __int8 a2, int *a3)
{
  __int64 v7; // rdx

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED, a1, a2);
  if ( a2 )
  {
    PopConsoleSession = 1;
    PopSetSessionDisplayStatus(a1, 1, 0);
    LODWORD(PopConsoleContext) = a1;
    return PopConsoleSessionActiveInput(
             a1,
             (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
             a3);
  }
  else
  {
    PopSetSessionDisplayStatus(a1, 1, 0);
    return PopRemoteSessionActiveInput(a1, v7, a3);
  }
}
