/*
 * XREFs of TR_AttemptStateChange @ 0x1C0008120
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x1C0001010 (Isoch_EvtDmaCallback.c)
 *     Isoch_MappingLoop @ 0x1C0001D18 (Isoch_MappingLoop.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MappingLoop @ 0x1C0011F10 (Bulk_MappingLoop.c)
 *     Bulk_EvtDmaCallback @ 0x1C00227B0 (Bulk_EvtDmaCallback.c)
 *     Isoch_EP_StopMapping @ 0x1C00442C0 (Isoch_EP_StopMapping.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 */

__int64 __fastcall TR_AttemptStateChange(__int64 a1, signed __int32 a2, __int32 a3)
{
  unsigned __int32 v3; // ebx
  __int64 v5; // r9
  __int64 v6; // rcx

  if ( a2 == 5 )
    v3 = _InterlockedExchange((volatile __int32 *)(a1 + 108), a3);
  else
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), a3, a2);
  if ( a2 == v3 || a2 == 5 )
  {
    if ( a3 )
      return v3;
    v5 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v5 + 37) )
    {
LABEL_14:
      ESM_AddEvent((PVOID)(v5 + 296));
      return v3;
    }
  }
  else
  {
    if ( a2 != 3 || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1) != 1 )
      return v3;
    v5 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v5 + 37) )
      goto LABEL_14;
  }
  v6 = *(_QWORD *)(v5 + 136);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v6 + 20)) == *(_DWORD *)(v6 + 8) )
    goto LABEL_14;
  return v3;
}
