/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x1C02178E0
 * Callers:
 *     HandleMITWakeSignal @ 0x1C007DE68 (HandleMITWakeSignal.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ @ 0x1C022C834 (-Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall ExecuteMarshaledInterceptRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( MouseProcessor )
    CMouseProcessor::Extensibility_ExecuteMarshaledInterceptRequest(MouseProcessor);
}
