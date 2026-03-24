/*
 * XREFs of TtmpCloseQueueHandle @ 0x140905880
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x14027B6A0 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x1409035CC (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
