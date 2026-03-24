/*
 * XREFs of TtmpOpenQueueHandle @ 0x1409059D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x1403446B0 (PsGetProcessId.c)
 *     TtmiLogQueueHandleOpened @ 0x1409036E4 (TtmiLogQueueHandleOpened.c)
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
