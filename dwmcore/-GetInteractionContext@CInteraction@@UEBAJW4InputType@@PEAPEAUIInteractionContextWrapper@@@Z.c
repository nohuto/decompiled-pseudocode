/*
 * XREFs of ?GetInteractionContext@CInteraction@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180208C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetInteractionContext(__int64 a1, int a2, _QWORD *a3)
{
  return CInteractionProcessor::GetInteractionContext((CInteractionProcessor *)(a1 + 288), a2, a3);
}
