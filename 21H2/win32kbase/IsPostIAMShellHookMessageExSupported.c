/*
 * XREFs of IsPostIAMShellHookMessageExSupported @ 0x1C005D988
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0033B48 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsPostIAMShellHookMessageExSupported()
{
  if ( qword_1C029C8C8 )
    return qword_1C029C8C8();
  else
    return 3221225659LL;
}
