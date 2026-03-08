/*
 * XREFs of PostPendingMouseMove @ 0x1C0071380
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C007D560 (CoalesceInputSourceMouseMoves.c)
 * Callees:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C00713AC (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 */

void __fastcall PostPendingMouseMove(struct tagQ *a1)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::PostPendingMouseMove(MouseProcessor, a1);
}
