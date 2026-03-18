/*
 * XREFs of CaptureLogicalCursorPosToQMouseMove @ 0x1C0052FF0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C00532C0 (-CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 */

void __fastcall CaptureLogicalCursorPosToQMouseMove(struct tagQ *a1)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::CaptureLogicalCursorPosToQMouseMove(MouseProcessor, a1);
}
