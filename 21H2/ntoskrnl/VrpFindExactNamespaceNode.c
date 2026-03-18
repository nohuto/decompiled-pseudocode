/*
 * XREFs of VrpFindExactNamespaceNode @ 0x1406924F0
 * Callers:
 *     VrpAddNamespaceNodeToList @ 0x140691BB0 (VrpAddNamespaceNodeToList.c)
 *     VrpPostEnumerateKey @ 0x140691CD8 (VrpPostEnumerateKey.c)
 *     VrpDestroyNamespaceNode @ 0x1407F6410 (VrpDestroyNamespaceNode.c)
 *     VrpPreUnloadKey @ 0x140927048 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14077EA04 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
