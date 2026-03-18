/*
 * XREFs of TtmpCloseQueueHandle @ 0x1409AB560
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x1409A92D0 (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
