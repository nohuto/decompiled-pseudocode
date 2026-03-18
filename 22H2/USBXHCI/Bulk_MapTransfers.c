/*
 * XREFs of Bulk_MapTransfers @ 0x1C0011ED8
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011354 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_EP_StartMapping @ 0x1C0011CE0 (Bulk_EP_StartMapping.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C0011E50 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_EvtDmaCallback @ 0x1C00226B0 (Bulk_EvtDmaCallback.c)
 *     Bulk_CommonBufferCallback @ 0x1C0046990 (Bulk_CommonBufferCallback.c)
 * Callees:
 *     Bulk_MappingLoop @ 0x1C0011F40 (Bulk_MappingLoop.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001E0A4 (WPP_RECORDER_SF_DDD.c)
 */

__int64 __fastcall Bulk_MapTransfers(__int64 a1)
{
  char i; // di
  __int64 result; // rax
  int v4; // edx

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v4,
        14,
        37,
        (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        i);
    }
    result = Bulk_MappingLoop(a1);
    if ( *(_DWORD *)(a1 + 108) != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 340) )
      break;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 2);
    if ( (_DWORD)result != 2 )
      break;
  }
  return result;
}
