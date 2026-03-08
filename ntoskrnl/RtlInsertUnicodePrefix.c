/*
 * XREFs of RtlInsertUnicodePrefix @ 0x1407520F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1402C2B50 (RtlSplay.c)
 *     CompareUnicodeStrings @ 0x140752340 (CompareUnicodeStrings.c)
 *     ComputeUnicodeNameLength @ 0x1407524A8 (ComputeUnicodeNameLength.c)
 */

BOOLEAN __stdcall RtlInsertUnicodePrefix(
        PUNICODE_PREFIX_TABLE PrefixTable,
        PUNICODE_STRING Prefix,
        PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry)
{
  CSHORT v6; // ax
  RTL_SPLAY_LINKS *p_Links; // r14
  UNICODE_STRING *v8; // rcx
  UNICODE_PREFIX_TABLE *i; // rsi
  UNICODE_PREFIX_TABLE *j; // rdi
  int v11; // eax
  PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree; // rax
  RTL_SPLAY_LINKS *v13; // rcx
  struct _UNICODE_PREFIX_TABLE_ENTRY *v14; // rbx
  UNICODE_PREFIX_TABLE_ENTRY *v15; // rax
  UNICODE_PREFIX_TABLE *v17; // rbp

  v6 = ComputeUnicodeNameLength(Prefix);
  p_Links = &PrefixTableEntry->Links;
  PrefixTableEntry->NameLength = v6;
  PrefixTableEntry->Links.LeftChild = 0LL;
  PrefixTableEntry->Links.RightChild = 0LL;
  PrefixTableEntry->Prefix = v8;
  PrefixTableEntry->Links.Parent = &PrefixTableEntry->Links;
  for ( i = (UNICODE_PREFIX_TABLE *)PrefixTable->NextPrefixTree;
        i->NameLength > v6;
        i = (UNICODE_PREFIX_TABLE *)i->NextPrefixTree )
  {
    PrefixTable = i;
  }
  if ( i->NameLength == v6 )
  {
    for ( j = i; ; j = (UNICODE_PREFIX_TABLE *)&NextPrefixTree[-1].Links.LeftChild )
    {
      v11 = CompareUnicodeStrings(*(_QWORD *)&j[2].NodeTypeCode, Prefix, 0LL);
      if ( v11 == 2 )
        break;
      if ( v11 == 3 )
      {
        NextPrefixTree = j[1].NextPrefixTree;
        if ( !NextPrefixTree )
        {
          PrefixTableEntry->NextPrefixTree = 0LL;
          PrefixTableEntry->NodeTypeCode = 2050;
          v13 = (RTL_SPLAY_LINKS *)&j[1];
          PrefixTableEntry->CaseMatch = PrefixTableEntry;
          j[1].NextPrefixTree = (PUNICODE_PREFIX_TABLE_ENTRY)p_Links;
          goto LABEL_12;
        }
      }
      else
      {
        NextPrefixTree = j[1].LastNextEntry;
        if ( !NextPrefixTree )
        {
          PrefixTableEntry->NextPrefixTree = 0LL;
          PrefixTableEntry->NodeTypeCode = 2050;
          v13 = (RTL_SPLAY_LINKS *)&j[1];
          PrefixTableEntry->CaseMatch = PrefixTableEntry;
          j[1].LastNextEntry = (PUNICODE_PREFIX_TABLE_ENTRY)p_Links;
LABEL_12:
          p_Links->Parent = v13;
LABEL_13:
          v14 = i->NextPrefixTree;
          i->NextPrefixTree = 0LL;
          i->NodeTypeCode = 2050;
          v15 = (UNICODE_PREFIX_TABLE_ENTRY *)&RtlSplay(v13)[-1];
          v15->NodeTypeCode = 2049;
          PrefixTable->NextPrefixTree = v15;
          v15->NextPrefixTree = v14;
          return 1;
        }
      }
    }
    v17 = j;
    while ( (unsigned int)CompareUnicodeStrings(*(_QWORD *)&v17[2].NodeTypeCode, Prefix, 0xFFFFFFFFLL) != 2 )
    {
      v17 = (UNICODE_PREFIX_TABLE *)v17->LastNextEntry;
      if ( v17 == j )
      {
        PrefixTableEntry->NextPrefixTree = 0LL;
        v13 = (RTL_SPLAY_LINKS *)&j[1];
        PrefixTableEntry->NodeTypeCode = 2051;
        PrefixTableEntry->CaseMatch = j->LastNextEntry;
        j->LastNextEntry = PrefixTableEntry;
        goto LABEL_13;
      }
    }
    return 0;
  }
  else
  {
    PrefixTable->NextPrefixTree = PrefixTableEntry;
    PrefixTableEntry->NodeTypeCode = 2049;
    PrefixTableEntry->NextPrefixTree = (struct _UNICODE_PREFIX_TABLE_ENTRY *)i;
    PrefixTableEntry->CaseMatch = PrefixTableEntry;
    return 1;
  }
}
