/*
 * XREFs of ApiSetEditionUpdateCursorOnMouseMove @ 0x1C0057738
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00575D0 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionUpdateCursorOnMouseMove(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = 0LL;
  if ( qword_1C0296C20 && (int)qword_1C0296C20() >= 0 && qword_1C0296C28 )
    return qword_1C0296C28(a1, a2);
  return v2;
}
