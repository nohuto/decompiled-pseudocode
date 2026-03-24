/*
 * XREFs of ?HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z @ 0x180234440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionRoot::HasBufferedOutput(__int64 a1, unsigned int a2, int a3)
{
  return CInteractionProcessor::HasBufferedOutput((CInteractionProcessor *)(a1 + 32), a2, a3);
}
