/*
 * XREFs of RaFreeIoResource @ 0x1C004DF54
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0008E00 (StorRemoveIoGatewayItem.c)
 *     RaidAdapterRestartQueues @ 0x1C0013F74 (RaidAdapterRestartQueues.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaFreeIoResource(__int64 a1, struct _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 64) )
    a1 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * LODWORD(a2->Next));
  return ExpInterlockedPushEntrySList((PSLIST_HEADER)a1, a2);
}
