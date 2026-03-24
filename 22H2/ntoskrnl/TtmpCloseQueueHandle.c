/*
 * XREFs of TtmpCloseQueueHandle @ 0x1409058D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x1403446B0 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x14090361C (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
