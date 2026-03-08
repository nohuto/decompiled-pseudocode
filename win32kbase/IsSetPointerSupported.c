/*
 * XREFs of IsSetPointerSupported @ 0x1C00D89D0
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C007D6BC (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSetPointerSupported()
{
  if ( qword_1C02D6B58 )
    return qword_1C02D6B58();
  else
    return 3221225659LL;
}
