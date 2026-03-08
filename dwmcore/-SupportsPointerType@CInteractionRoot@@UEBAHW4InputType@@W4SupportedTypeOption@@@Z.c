/*
 * XREFs of ?SupportsPointerType@CInteractionRoot@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1801A3760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::SupportsPointerType(__int64 a1, int a2, unsigned int a3)
{
  return CInteractionProcessor::SupportsPointerType((CInteractionProcessor *)(a1 + 24), a2, a3);
}
