/*
 * XREFs of TtmpOpenQueueHandle @ 0x1409A9550
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     TtmiLogQueueHandleOpened @ 0x1409A60DC (TtmiLogQueueHandleOpened.c)
 */

__int64 __fastcall TtmpOpenQueueHandle(__int64 a1, char a2, struct _KPROCESS *a3)
{
  if ( !a2 )
    a3 = PsInitialSystemProcess;
  if ( a3 )
    PsGetProcessId(a3);
  TtmiLogQueueHandleOpened();
  return 0LL;
}
