/*
 * XREFs of ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C02080A4
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C70 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMRemoveFromActiveDevices @ 0x1C018B4C4 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C013AE30 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C013AE60 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 */

void __fastcall ApiSetPostPointerDeviceOutOfRangeMessage(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_DWORD *)(a1 + 24) != 7 )
  {
    EtwTracePointerDeviceOutOfRangeMessageStart(a1);
    if ( qword_1C0296258 && (int)qword_1C0296258() >= 0 )
    {
      if ( qword_1C0296260 )
        qword_1C0296260(a1, 0LL, 0LL);
    }
    EtwTracePointerDeviceOutOfRangeMessageStop(v2);
  }
}
