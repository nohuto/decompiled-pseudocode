BOOLEAN __stdcall PfxInsertPrefix(PPREFIX_TABLE PrefixTable, PSTRING Prefix, PPREFIX_TABLE_ENTRY PrefixTableEntry)
{
  CSHORT v6; // ax
  RTL_SPLAY_LINKS *p_Links; // r14
  PREFIX_TABLE *i; // rdi
  unsigned __int16 *NextPrefixTree; // rcx
  PREFIX_TABLE *p_RightChild; // rsi
  PPREFIX_TABLE_ENTRY v12; // rax
  RTL_SPLAY_LINKS *v13; // rcx
  int v14; // eax
  struct _PREFIX_TABLE_ENTRY *v15; // rbx
  PREFIX_TABLE_ENTRY *p_LeftChild; // rax

  v6 = ComputeNameLength(&Prefix->Length);
  p_Links = &PrefixTableEntry->Links;
  PrefixTableEntry->NameLength = v6;
  PrefixTableEntry->Links.LeftChild = 0LL;
  PrefixTableEntry->Links.RightChild = 0LL;
  PrefixTableEntry->Prefix = Prefix;
  PrefixTableEntry->Links.Parent = &PrefixTableEntry->Links;
  for ( i = (PREFIX_TABLE *)PrefixTable->NextPrefixTree; i->NameLength > v6; i = (PREFIX_TABLE *)i->NextPrefixTree )
    PrefixTable = i;
  if ( i->NameLength != v6 )
  {
    PrefixTable->NextPrefixTree = PrefixTableEntry;
    PrefixTableEntry->NodeTypeCode = 513;
    PrefixTableEntry->NextPrefixTree = (struct _PREFIX_TABLE_ENTRY *)i;
    return 1;
  }
  NextPrefixTree = (unsigned __int16 *)i[2].NextPrefixTree;
  p_RightChild = i;
  while ( 1 )
  {
    v14 = CompareNamesCaseSensitive(NextPrefixTree, &Prefix->Length);
    if ( v14 == 2 )
      return 0;
    if ( v14 != 3 )
      break;
    v12 = p_RightChild[1].NextPrefixTree;
    if ( !v12 )
    {
      PrefixTableEntry->NextPrefixTree = 0LL;
      v13 = (RTL_SPLAY_LINKS *)&p_RightChild[1];
      PrefixTableEntry->NodeTypeCode = 514;
      p_RightChild[1].NextPrefixTree = (PPREFIX_TABLE_ENTRY)p_Links;
      goto LABEL_16;
    }
LABEL_12:
    p_RightChild = (PREFIX_TABLE *)&v12[-1].Links.RightChild;
    NextPrefixTree = (unsigned __int16 *)v12->Links.LeftChild;
  }
  v12 = *(PPREFIX_TABLE_ENTRY *)&p_RightChild[2].NodeTypeCode;
  if ( v12 )
    goto LABEL_12;
  PrefixTableEntry->NextPrefixTree = 0LL;
  v13 = (RTL_SPLAY_LINKS *)&p_RightChild[1];
  PrefixTableEntry->NodeTypeCode = 514;
  *(_QWORD *)&p_RightChild[2].NodeTypeCode = p_Links;
LABEL_16:
  p_Links->Parent = v13;
  v15 = i->NextPrefixTree;
  i->NextPrefixTree = 0LL;
  i->NodeTypeCode = 514;
  p_LeftChild = (PREFIX_TABLE_ENTRY *)&RtlSplay(v13)[-1].LeftChild;
  p_LeftChild->NodeTypeCode = 513;
  PrefixTable->NextPrefixTree = p_LeftChild;
  p_LeftChild->NextPrefixTree = v15;
  return 1;
}
