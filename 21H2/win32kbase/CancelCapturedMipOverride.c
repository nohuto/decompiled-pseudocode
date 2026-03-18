/*
 * XREFs of CancelCapturedMipOverride @ 0x1C01E7790
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01FC54C (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 */

void CancelCapturedMipOverride()
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::RemoveMipOverrideOnMouseOwner(MouseProcessor);
}
