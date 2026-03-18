/*
 * XREFs of ForceResetMouseButtonsDownState @ 0x1C00BFE60
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1C00BFE84 (-ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ.c)
 */

void ForceResetMouseButtonsDownState()
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(MouseProcessor);
}
