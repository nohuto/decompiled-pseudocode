/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x1C01AE6F0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0042A1C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ @ 0x1C01BF9A8 (-Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ.c)
 */

void ExecuteMarshaledInterceptRequest()
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::Extensibility_ExecuteMarshaledInterceptRequest(MouseProcessor);
}
