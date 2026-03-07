struct B_TREE_NODE_HDR *__fastcall NP_CONTEXT::NpGetResidentLeaf(struct NP_CONTEXT::NP_CTX *a1, union _NP_LEAF_PTR *a2)
{
  int v2; // ecx
  unsigned int v3; // ecx

  v2 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 2) != 0 )
    v3 = ((unsigned __int16)v2 ^ (unsigned __int16)(v2 + 4)) & 0xFFC ^ v2;
  else
    v3 = v2 & 0xFFFFF001 | 6;
  *(_DWORD *)a2 = v3;
  return (struct B_TREE_NODE_HDR *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFF000uLL);
}
