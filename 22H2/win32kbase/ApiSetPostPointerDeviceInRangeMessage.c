/*
 * XREFs of ApiSetPostPointerDeviceInRangeMessage @ 0x1C020804C
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C70 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMAddToActiveDevices @ 0x1C01863D8 (RIMAddToActiveDevices.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     EtwTracePointerDeviceInRangeMessageStart @ 0x1C013ADD0 (EtwTracePointerDeviceInRangeMessageStart.c)
 *     EtwTracePointerDeviceInRangeMessageStop @ 0x1C013AE00 (EtwTracePointerDeviceInRangeMessageStop.c)
 */

void __fastcall ApiSetPostPointerDeviceInRangeMessage(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_DWORD *)(a1 + 24) != 7 )
  {
    EtwTracePointerDeviceInRangeMessageStart(a1);
    if ( qword_1C0296228 && (int)qword_1C0296228() >= 0 )
    {
      if ( qword_1C0296230 )
        qword_1C0296230(a1, 0LL, 0LL);
    }
    EtwTracePointerDeviceInRangeMessageStop(v2);
  }
}
