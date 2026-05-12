/*
 * XREFs of RaidRemoveIoQueue @ 0x1C001AB54
 * Callers:
 *     RaidUnitCancelPendingRequests @ 0x1C001AB1C (RaidUnitCancelPendingRequests.c)
 *     RaUnitDisableDeviceIrp @ 0x1C00476F0 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C004777C (RaUnitFlushQueueSrb.c)
 * Callees:
 *     RaidRemovePendingDeviceQueue @ 0x1C001AB7C (RaidRemovePendingDeviceQueue.c)
 */

__int64 __fastcall RaidRemoveIoQueue(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // rdx

  v1 = RaidRemovePendingDeviceQueue(a1 + 16);
  v2 = 0LL;
  if ( v1 )
  {
    v2 = v1 - 120;
    v4 = *(_QWORD *)(*(_QWORD *)(v1 - 120 + 184) + 8LL);
    if ( *(_BYTE *)(v4 + 2) != 40 )
      *(_QWORD *)(v4 + 56) = *(_QWORD *)(v4 + 40);
  }
  return v2;
}
