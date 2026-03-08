/*
 * XREFs of TtmpCloseQueueHandle @ 0x1409A9450
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x1409A6014 (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
