/*
 * XREFs of TtmpCloseQueueHandle @ 0x1409AC4D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x1402FA490 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x1409A909C (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
