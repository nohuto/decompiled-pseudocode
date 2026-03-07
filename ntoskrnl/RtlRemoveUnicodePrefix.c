void __stdcall RtlRemoveUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable, PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry)
{
  struct _UNICODE_PREFIX_TABLE_ENTRY *CaseMatch; // r8
  RTL_SPLAY_LINKS *p_Links; // rcx
  _RTL_SPLAY_LINKS *Parent; // rdx
  RTL_SPLAY_LINKS *i; // rdi
  RTL_SPLAY_LINKS *v6; // rbx
  PRTL_SPLAY_LINKS v7; // rax
  PRTL_SPLAY_LINKS v8; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rax
  RTL_SPLAY_LINKS *j; // rcx
  _RTL_SPLAY_LINKS *v11; // rdx
  _RTL_SPLAY_LINKS *v12; // rax
  RTL_SPLAY_LINKS *k; // rcx
  struct _UNICODE_PREFIX_TABLE_ENTRY *v14; // r8
  struct _UNICODE_PREFIX_TABLE_ENTRY *v15; // rax
  UNICODE_PREFIX_TABLE_ENTRY *n; // rcx
  UNICODE_PREFIX_TABLE_ENTRY *v17; // rax
  struct _UNICODE_PREFIX_TABLE_ENTRY *v18; // rcx
  RTL_SPLAY_LINKS *v19; // rax
  UNICODE_PREFIX_TABLE_ENTRY *v20; // r8
  struct _UNICODE_PREFIX_TABLE_ENTRY *NextPrefixTree; // r8
  UNICODE_PREFIX_TABLE_ENTRY *m; // r9
  _RTL_SPLAY_LINKS *v23; // rdx
  _RTL_SPLAY_LINKS *RightChild; // rdx

  PrefixTable->LastNextEntry = 0LL;
  if ( PrefixTableEntry->NodeTypeCode == 2049 || PrefixTableEntry->NodeTypeCode == 2050 )
  {
    CaseMatch = PrefixTableEntry->CaseMatch;
    if ( CaseMatch == PrefixTableEntry )
    {
      p_Links = &PrefixTableEntry->Links;
      Parent = PrefixTableEntry->Links.Parent;
      for ( i = p_Links; Parent != i; Parent = Parent->Parent )
        i = Parent;
      v6 = i - 1;
      v7 = RtlDelete(p_Links);
      if ( v7 )
      {
        if ( i != v7 )
        {
          v8 = v7 - 1;
          LeftChild = v6->LeftChild;
          for ( j = LeftChild->LeftChild; j != v6; j = j->LeftChild )
            LeftChild = j;
          LOWORD(v8->Parent) = 2049;
          LeftChild->LeftChild = v8;
          v8->LeftChild = v6->LeftChild;
          v6->LeftChild = 0LL;
          LOWORD(v6->Parent) = 2050;
        }
      }
      else
      {
        v11 = v6->LeftChild;
        v12 = v11;
        for ( k = v11->LeftChild; k != v6; k = k->LeftChild )
          v12 = k;
        v12->LeftChild = v11;
      }
    }
    else
    {
      v17 = CaseMatch->CaseMatch;
      v18 = PrefixTableEntry->CaseMatch;
      while ( v17 != PrefixTableEntry )
      {
        v18 = v17;
        v17 = v17->CaseMatch;
      }
      v18->CaseMatch = CaseMatch;
      v18->NodeTypeCode = PrefixTableEntry->NodeTypeCode;
      v18->NextPrefixTree = PrefixTableEntry->NextPrefixTree;
      v19 = &v18->Links;
      v18->Links = PrefixTableEntry->Links;
      v20 = (UNICODE_PREFIX_TABLE_ENTRY *)PrefixTableEntry->Links.Parent;
      if ( v20 == (UNICODE_PREFIX_TABLE_ENTRY *)&PrefixTableEntry->Links )
      {
        v19->Parent = v19;
        NextPrefixTree = PrefixTableEntry->NextPrefixTree;
        for ( m = NextPrefixTree->NextPrefixTree; m != PrefixTableEntry; m = m->NextPrefixTree )
          NextPrefixTree = m;
        NextPrefixTree->NextPrefixTree = v18;
      }
      else if ( v20->NextPrefixTree == (struct _UNICODE_PREFIX_TABLE_ENTRY *)&PrefixTableEntry->Links )
      {
        v20->NextPrefixTree = (struct _UNICODE_PREFIX_TABLE_ENTRY *)v19;
      }
      else
      {
        v20->CaseMatch = (struct _UNICODE_PREFIX_TABLE_ENTRY *)v19;
      }
      v23 = v18->Links.LeftChild;
      if ( v23 )
        v23->Parent = v19;
      RightChild = v18->Links.RightChild;
      if ( RightChild )
        RightChild->Parent = v19;
    }
  }
  else if ( PrefixTableEntry->NodeTypeCode == 2051 )
  {
    v14 = PrefixTableEntry->CaseMatch;
    v15 = v14;
    for ( n = v14->CaseMatch; n != PrefixTableEntry; n = n->CaseMatch )
      v15 = n;
    v15->CaseMatch = v14;
  }
}
