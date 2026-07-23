/*
 * XREFs of RtlNextUnicodePrefix @ 0x140773640
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x1402F80C0 (RtlRealSuccessor.c)
 */

PUNICODE_PREFIX_TABLE_ENTRY __stdcall RtlNextUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable, BOOLEAN Restart)
{
  PUNICODE_PREFIX_TABLE_ENTRY LastNextEntry; // rbx
  PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree; // rax
  _RTL_SPLAY_LINKS *v5; // rcx
  PRTL_SPLAY_LINKS v6; // rax
  PUNICODE_PREFIX_TABLE_ENTRY result; // rax
  RTL_SPLAY_LINKS *p_Links; // rcx
  RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *v11; // rcx

  if ( !Restart && (LastNextEntry = PrefixTable->LastNextEntry) != 0LL )
  {
    result = LastNextEntry->CaseMatch;
    if ( result->NodeTypeCode == 2051 )
      goto LABEL_7;
    v6 = RtlRealSuccessor(&result->Links);
    if ( v6 )
    {
LABEL_6:
      result = (PUNICODE_PREFIX_TABLE_ENTRY)&v6[-1];
LABEL_7:
      PrefixTable->LastNextEntry = result;
      return result;
    }
    p_Links = &LastNextEntry->Links;
    Parent = LastNextEntry->Links.Parent;
    if ( Parent != &LastNextEntry->Links )
    {
      do
      {
        p_Links = Parent;
        Parent = Parent->Parent;
      }
      while ( Parent != p_Links );
    }
    LeftChild = p_Links[-1].LeftChild;
    if ( SWORD1(LeftChild->Parent) > 0 )
    {
      v11 = LeftChild[1].LeftChild;
      v6 = LeftChild + 1;
      while ( v11 )
      {
        v6 = v11;
        v11 = v11->LeftChild;
      }
      goto LABEL_6;
    }
  }
  else
  {
    NextPrefixTree = PrefixTable->NextPrefixTree;
    if ( NextPrefixTree->NodeTypeCode != 2048 )
    {
      v5 = NextPrefixTree->Links.LeftChild;
      v6 = &NextPrefixTree->Links;
      while ( v5 )
      {
        v6 = v5;
        v5 = v5->LeftChild;
      }
      goto LABEL_6;
    }
  }
  return 0LL;
}
