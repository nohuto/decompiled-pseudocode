/*
 * XREFs of VrpFindExactNamespaceNode @ 0x140737324
 * Callers:
 *     VrpPostEnumerateKey @ 0x140736428 (VrpPostEnumerateKey.c)
 *     VrpAddNamespaceNodeToList @ 0x140737050 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x140737134 (VrpDestroyNamespaceNode.c)
 *     VrpPreUnloadKey @ 0x140A70314 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1406C231C (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
