/*
 * XREFs of CancelCapturedMipOverride @ 0x1C02175F0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0230DF0 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CancelCapturedMipOverride(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( MouseProcessor )
    CMouseProcessor::RemoveMipOverrideOnMouseOwner(MouseProcessor);
}
