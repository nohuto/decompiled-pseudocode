/*
 * XREFs of PfSnPowerBoostDpc @ 0x1403D2110
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall PfSnPowerBoostDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 136), CriticalWorkQueue);
}
