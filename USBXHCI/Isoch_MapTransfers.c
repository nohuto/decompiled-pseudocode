/*
 * XREFs of Isoch_MapTransfers @ 0x1C0001C9C
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x1C0001010 (Isoch_EvtDmaCallback.c)
 *     Isoch_EP_StartMapping @ 0x1C0001C10 (Isoch_EP_StartMapping.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_CommonBufferCallback @ 0x1C0043B30 (Isoch_CommonBufferCallback.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C004503C (Isoch_ProcessTransferRingEmptyEvent.c)
 * Callees:
 *     Isoch_MappingLoop @ 0x1C0001D18 (Isoch_MappingLoop.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001E054 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Isoch_MapTransfers(__int64 a1)
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
        67,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        i);
    }
    Isoch_MappingLoop(a1);
    result = *(unsigned int *)(a1 + 108);
    if ( (_DWORD)result != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 344) )
      return result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 2);
    if ( (_DWORD)result != 2 )
      return result;
LABEL_14:
    ;
  }
  if ( (_DWORD)result == 4 )
  {
    if ( *(_DWORD *)(a1 + 348) )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 4);
      if ( (_DWORD)result == 4 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 320),
          0LL);
        goto LABEL_14;
      }
    }
  }
  return result;
}
