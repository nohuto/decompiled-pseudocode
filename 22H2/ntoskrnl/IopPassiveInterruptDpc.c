/*
 * XREFs of IopPassiveInterruptDpc @ 0x1403B63C0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueue @ 0x14031CB50 (KeInsertQueue.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeInsertQueue(&PassiveInterruptRealtimeWorkQueue, (PLIST_ENTRY)(DeferredContext + 72));
}
