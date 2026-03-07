struct B_TREE_NODE_HDR *__fastcall NP_CONTEXT::NpLeafRefInternal(struct NP_CONTEXT **a1, void **a2, char a3)
{
  struct B_TREE_NODE_HDR *ResidentLeaf; // rbx
  void **v7; // rdx

  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    if ( (a3 & 1) != 0 )
      return 0LL;
    NP_CONTEXT::NpiLeafPageIn(*a1, (struct NP_CONTEXT::NP_CTX *)a1, (union _NP_LEAF_PTR *)a2);
    if ( (*(_DWORD *)a2 & 1) == 0 )
      return 0LL;
  }
  ResidentLeaf = NP_CONTEXT::NpGetResidentLeaf((struct NP_CONTEXT::NP_CTX *)a1, (union _NP_LEAF_PTR *)a2);
  if ( (a3 & 2) == 0 && *(_DWORD *)*a1 != -1 )
    NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)a1, v7);
  return ResidentLeaf;
}
