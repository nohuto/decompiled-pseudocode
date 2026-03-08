/*
 * XREFs of TtmpOpenTerminalHandle @ 0x1409A8910
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     TtmiLogTerminalHandleOpened @ 0x1409A75D4 (TtmiLogTerminalHandleOpened.c)
 */

__int64 __fastcall TtmpOpenTerminalHandle(__int64 a1, char a2, struct _KPROCESS *a3, __int64 a4)
{
  if ( !a2 )
    a3 = PsInitialSystemProcess;
  if ( a3 )
    PsGetProcessId(a3);
  TtmiLogTerminalHandleOpened(**(_DWORD **)(a4 + 16));
  return 0LL;
}
