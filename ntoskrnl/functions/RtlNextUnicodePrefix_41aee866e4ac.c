PUNICODE_PREFIX_TABLE_ENTRY __stdcall RtlNextUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable, BOOLEAN Restart)
{
  PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree; // rax
  PUNICODE_PREFIX_TABLE_ENTRY result; // rax
  PUNICODE_PREFIX_TABLE_ENTRY LastNextEntry; // rbx
  PRTL_SPLAY_LINKS p_Links; // rax
  RTL_SPLAY_LINKS *v7; // rcx
  RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *v9; // rax
  RTL_SPLAY_LINKS *v10; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // rcx

  if ( Restart || (LastNextEntry = PrefixTable->LastNextEntry) == 0LL )
  {
    NextPrefixTree = PrefixTable->NextPrefixTree;
    if ( NextPrefixTree->NodeTypeCode == 2048 )
      return 0LL;
    LeftChild = NextPrefixTree->Links.LeftChild;
    p_Links = &NextPrefixTree->Links;
    while ( LeftChild )
    {
      p_Links = LeftChild;
      LeftChild = LeftChild->LeftChild;
    }
    goto LABEL_17;
  }
  result = LastNextEntry->CaseMatch;
  if ( result->NodeTypeCode != 2051 )
  {
    p_Links = RtlRealSuccessor(&result->Links);
    if ( !p_Links )
    {
      v7 = &LastNextEntry->Links;
      Parent = LastNextEntry->Links.Parent;
      if ( Parent != &LastNextEntry->Links )
      {
        do
        {
          v7 = Parent;
          Parent = Parent->Parent;
        }
        while ( Parent != v7 );
      }
      v9 = v7[-1].LeftChild;
      if ( SWORD1(v9->Parent) > 0 )
      {
        v10 = v9[1].LeftChild;
        p_Links = v9 + 1;
        while ( v10 )
        {
          p_Links = v10;
          v10 = v10->LeftChild;
        }
        goto LABEL_17;
      }
      return 0LL;
    }
LABEL_17:
    result = (PUNICODE_PREFIX_TABLE_ENTRY)&p_Links[-1];
  }
  PrefixTable->LastNextEntry = result;
  return result;
}
