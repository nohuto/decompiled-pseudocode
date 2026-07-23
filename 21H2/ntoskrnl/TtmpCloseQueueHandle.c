/*
 * XREFs of TtmpCloseQueueHandle @ 0x1409059E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x14090372C (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
