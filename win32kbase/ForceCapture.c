/*
 * XREFs of ForceCapture @ 0x1C00D4890
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C022CF5C (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 */

void __fastcall ForceCapture(__int64 a1, struct tagINPUTDEST *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  CMouseProcessor *MouseProcessor; // rax

  v5 = a1;
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, (__int64)a2, a3, a4);
  if ( MouseProcessor && (a2 || v5 == 3) )
    CMouseProcessor::ForceMouseOwner(MouseProcessor, a2, v5);
}
