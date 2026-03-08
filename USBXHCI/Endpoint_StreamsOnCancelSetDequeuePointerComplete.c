/*
 * XREFs of Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C003C41C
 * Callers:
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0010A74 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0010BA0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C001A740 (WPP_RECORDER_SF_dddd.c)
 */

void __fastcall Endpoint_StreamsOnCancelSetDequeuePointerComplete(__int64 a1, int a2)
{
  __int64 v2; // rsi
  signed __int32 v4; // ebx
  char v5; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 136);
  v4 = _InterlockedIncrement((volatile signed __int32 *)(v2 + 20));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = a2;
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(a1 + 80),
      a2,
      13,
      61,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL),
      *(_DWORD *)(a1 + 144),
      v5,
      v4);
  }
  if ( v4 == *(_DWORD *)(v2 + 8) )
    ESM_AddEvent((KSPIN_LOCK *)(a1 + 296), 16);
}
