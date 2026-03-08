/*
 * XREFs of PfxRemovePrefix @ 0x1409B7D10
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x1402C2940 (RtlDelete.c)
 */

void __stdcall PfxRemovePrefix(PPREFIX_TABLE PrefixTable, PPREFIX_TABLE_ENTRY PrefixTableEntry)
{
  RTL_SPLAY_LINKS *p_Links; // rcx
  _RTL_SPLAY_LINKS *Parent; // rdx
  RTL_SPLAY_LINKS *i; // rdi
  char *p_LeftChild; // rbx
  PRTL_SPLAY_LINKS v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 k; // rcx
  _RTL_SPLAY_LINKS **v10; // rdx
  __int64 v11; // rax
  __int64 j; // rcx

  if ( PrefixTableEntry->NodeTypeCode == 513 || PrefixTableEntry->NodeTypeCode == 514 )
  {
    p_Links = &PrefixTableEntry->Links;
    Parent = PrefixTableEntry->Links.Parent;
    for ( i = p_Links; Parent != i; Parent = Parent->Parent )
      i = Parent;
    p_LeftChild = (char *)&i[-1].LeftChild;
    v6 = RtlDelete(p_Links);
    if ( v6 )
    {
      if ( i != v6 )
      {
        v10 = &v6[-1].LeftChild;
        v11 = *((_QWORD *)p_LeftChild + 1);
        for ( j = *(_QWORD *)(v11 + 8); (char *)j != p_LeftChild; j = *(_QWORD *)(j + 8) )
          v11 = j;
        *(_WORD *)v10 = 513;
        *(_QWORD *)(v11 + 8) = v10;
        v10[1] = (_RTL_SPLAY_LINKS *)*((_QWORD *)p_LeftChild + 1);
        *((_QWORD *)p_LeftChild + 1) = 0LL;
        *(_WORD *)p_LeftChild = 514;
      }
    }
    else
    {
      v7 = *((_QWORD *)p_LeftChild + 1);
      v8 = v7;
      for ( k = *(_QWORD *)(v7 + 8); (char *)k != p_LeftChild; k = *(_QWORD *)(k + 8) )
        v8 = k;
      *(_QWORD *)(v8 + 8) = v7;
    }
  }
}
