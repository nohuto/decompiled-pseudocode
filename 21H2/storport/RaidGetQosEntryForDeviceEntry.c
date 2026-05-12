/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x1C0034BBC
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0008E00 (StorRemoveIoGatewayItem.c)
 *     RaidStartIoPacket @ 0x1C000A020 (RaidStartIoPacket.c)
 *     RiNormalizeDeviceQueue @ 0x1C000AD3C (RiNormalizeDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C000AE50 (RiEnqueueDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000AF34 (StorSubmitIoGatewayItem.c)
 *     RaidAdapterRestartQueues @ 0x1C0013F74 (RaidAdapterRestartQueues.c)
 *     RaidRemovePendingDeviceQueue @ 0x1C001ABEC (RaidRemovePendingDeviceQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetQosEntryForDeviceEntry(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v2 = *(_QWORD *)(v1 + 96);
  else
    v2 = *(_QWORD *)(v1 + 48);
  return v2 + 24;
}
