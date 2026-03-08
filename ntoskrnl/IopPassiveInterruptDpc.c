/*
 * XREFs of IopPassiveInterruptDpc @ 0x1403B1700
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueue @ 0x1402F3300 (KeInsertQueue.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeInsertQueue(&PassiveInterruptRealtimeWorkQueue, (PLIST_ENTRY)(DeferredContext + 72));
}
