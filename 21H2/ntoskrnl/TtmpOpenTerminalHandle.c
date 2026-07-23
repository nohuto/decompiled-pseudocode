/*
 * XREFs of TtmpOpenTerminalHandle @ 0x1408FE0D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     TtmiLogTerminalHandleOpened @ 0x140904CF0 (TtmiLogTerminalHandleOpened.c)
 */

__int64 __fastcall TtmpOpenTerminalHandle(unsigned int a1, char a2, struct _KPROCESS *a3, __int64 a4)
{
  HANDLE ProcessId; // r8

  ProcessId = 0LL;
  if ( !a2 )
    a3 = PsInitialSystemProcess;
  if ( a3 )
    ProcessId = PsGetProcessId(a3);
  TtmiLogTerminalHandleOpened(**(unsigned int **)(a4 + 16), *(unsigned int *)(a4 + 28), ProcessId, a1);
  return 0LL;
}
