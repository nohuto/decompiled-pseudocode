/*
 * XREFs of VrpFindExactNamespaceNode @ 0x1405D371C
 * Callers:
 *     VrpDestroyNamespaceNode @ 0x1405D3260 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x1405D33DC (VrpAddNamespaceNodeToList.c)
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x1408842C0 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1405D4CE4 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
