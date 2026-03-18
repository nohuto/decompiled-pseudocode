/*
 * XREFs of ForceResetMouseButtonsDownState @ 0x1C00BC310
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1C00BC334 (-ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall ForceResetMouseButtonsDownState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( MouseProcessor )
    CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(MouseProcessor);
}
