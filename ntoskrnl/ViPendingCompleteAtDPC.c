/*
 * XREFs of ViPendingCompleteAtDPC @ 0x140ACED30
 * Callers:
 *     <none>
 * Callees:
 *     ViPendingCompleteAfterWait @ 0x140ACEBEC (ViPendingCompleteAfterWait.c)
 */

void __fastcall ViPendingCompleteAtDPC(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ViPendingCompleteAfterWait(DeferredContext);
}
