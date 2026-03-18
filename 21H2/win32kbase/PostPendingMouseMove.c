/*
 * XREFs of PostPendingMouseMove @ 0x1C003C8D0
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C0033E80 (CoalesceInputSourceMouseMoves.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C003C8FC (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 */

void __fastcall PostPendingMouseMove(struct tagQ *a1)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::PostPendingMouseMove(MouseProcessor, a1);
}
