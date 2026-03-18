/*
 * XREFs of PostPendingMouseMove @ 0x1C009B8E0
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C0057400 (CoalesceInputSourceMouseMoves.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C009B90C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 */

void __fastcall PostPendingMouseMove(struct tagQ *a1, __int64 a2, __int64 a3, __int64 a4)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor((__int64)a1, a2, a3, a4);
  if ( MouseProcessor )
    CMouseProcessor::PostPendingMouseMove(MouseProcessor, a1);
}
