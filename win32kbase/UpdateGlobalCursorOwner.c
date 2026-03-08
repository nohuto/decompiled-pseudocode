/*
 * XREFs of UpdateGlobalCursorOwner @ 0x1C00F43B0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C007D6BC (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 */

void __fastcall UpdateGlobalCursorOwner(struct CInputDest *a1, struct tagPOINT *a2, __int64 a3, __int64 a4)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor((__int64)a1, (__int64)a2, a3, a4);
  if ( MouseProcessor )
    CMouseProcessor::UpdateGlobalCursorOwner(MouseProcessor, a1, a2, 0LL);
}
