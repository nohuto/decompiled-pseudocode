/*
 * XREFs of Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C003C4D0
 * Callers:
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C003B64C (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C003B760 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C001A740 (WPP_RECORDER_SF_dddd.c)
 */

void __fastcall Endpoint_StreamsOnResetSetDequeuePointerComplete(__int64 *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  signed __int32 v4; // edi
  char v5; // [rsp+38h] [rbp-20h]

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 136);
  v4 = _InterlockedIncrement((volatile signed __int32 *)(v3 + 20));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = a2;
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v2 + 80),
      a2,
      13,
      41,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144),
      v5,
      v4);
  }
  if ( v4 == *(_DWORD *)(v3 + 8) )
  {
    *(_DWORD *)(v2 + 288) = 0;
    ESM_AddEvent((KSPIN_LOCK *)(v2 + 296), 16);
  }
}
