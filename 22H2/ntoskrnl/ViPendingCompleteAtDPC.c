/*
 * XREFs of ViPendingCompleteAtDPC @ 0x140AD2D30
 * Callers:
 *     <none>
 * Callees:
 *     ViPendingCompleteAfterWait @ 0x140AD2BEC (ViPendingCompleteAfterWait.c)
 */

void __fastcall ViPendingCompleteAtDPC(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ViPendingCompleteAfterWait(DeferredContext);
}
