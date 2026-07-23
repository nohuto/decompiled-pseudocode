/*
 * XREFs of ViTargetDelayFreeAvlNode @ 0x140365ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViTargetDelayFreeAvlNode(_RTL_AVL_TABLE *a1, _RTL_BALANCED_LINKS *a2)
{
  a1[1].BalancedRoot.LeftChild = a2;
}
