/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x1407375A8
 * Callers:
 *     VrpCreateNamespaceNode @ 0x140737348 (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1406C231C (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0LL, a3);
}
