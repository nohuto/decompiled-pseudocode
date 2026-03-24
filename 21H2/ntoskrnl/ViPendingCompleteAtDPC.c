/*
 * XREFs of ViPendingCompleteAtDPC @ 0x1409D5C60
 * Callers:
 *     <none>
 * Callees:
 *     ViPendingCompleteAfterWait @ 0x1409D5B24 (ViPendingCompleteAfterWait.c)
 */

void __fastcall ViPendingCompleteAtDPC(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ViPendingCompleteAfterWait(DeferredContext);
}
