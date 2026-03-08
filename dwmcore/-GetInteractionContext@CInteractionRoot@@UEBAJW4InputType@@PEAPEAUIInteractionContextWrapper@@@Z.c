/*
 * XREFs of ?GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180208C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::GetInteractionContext(__int64 a1, int a2, _QWORD *a3)
{
  return CInteractionProcessor::GetInteractionContext((CInteractionProcessor *)(a1 + 24), a2, a3);
}
