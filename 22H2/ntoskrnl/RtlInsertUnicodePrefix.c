/*
 * XREFs of RtlInsertUnicodePrefix @ 0x140677BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1402D9F50 (RtlSplay.c)
 *     CompareUnicodeStrings @ 0x140677E28 (CompareUnicodeStrings.c)
 *     ComputeUnicodeNameLength @ 0x140677F68 (ComputeUnicodeNameLength.c)
 */

BOOLEAN __stdcall RtlInsertUnicodePrefix(
        PUNICODE_PREFIX_TABLE PrefixTable,
        PUNICODE_STRING Prefix,
        PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry)
{
  CSHORT v6; // ax
  RTL_SPLAY_LINKS *p_Links; // r14
  UNICODE_STRING *v8; // rcx
  _UNICODE_PREFIX_TABLE *i; // rsi
  _UNICODE_PREFIX_TABLE *j; // rdi
  int v11; // eax
  PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree; // rax
  _RTL_SPLAY_LINKS *v13; // rax
  _UNICODE_PREFIX_TABLE_ENTRY *v14; // rbx
  _UNICODE_PREFIX_TABLE_ENTRY *v15; // rax
  _UNICODE_PREFIX_TABLE *v17; // rbp

  v6 = ComputeUnicodeNameLength(Prefix);
  p_Links = &PrefixTableEntry->Links;
  PrefixTableEntry->NameLength = v6;
  PrefixTableEntry->Links.LeftChild = 0LL;
  PrefixTableEntry->Links.RightChild = 0LL;
  PrefixTableEntry->Prefix = v8;
  PrefixTableEntry->Links.Parent = &PrefixTableEntry->Links;
  for ( i = (_UNICODE_PREFIX_TABLE *)PrefixTable->NextPrefixTree;
        i->NameLength > v6;
        i = (_UNICODE_PREFIX_TABLE *)i->NextPrefixTree )
  {
    PrefixTable = i;
  }
  if ( i->NameLength == v6 )
  {
    for ( j = i; ; j = (_UNICODE_PREFIX_TABLE *)&NextPrefixTree[-1].Links.LeftChild )
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
          v13 = (_RTL_SPLAY_LINKS *)&j[1];
          PrefixTableEntry->NodeTypeCode = 2050;
          PrefixTableEntry->CaseMatch = PrefixTableEntry;
          j[1].NextPrefixTree = (PUNICODE_PREFIX_TABLE_ENTRY)p_Links;
LABEL_12:
          p_Links->Parent = v13;
          goto LABEL_13;
        }
      }
      else
      {
        NextPrefixTree = j[1].LastNextEntry;
        if ( !NextPrefixTree )
        {
          PrefixTableEntry->NextPrefixTree = 0LL;
          v13 = (_RTL_SPLAY_LINKS *)&j[1];
          PrefixTableEntry->NodeTypeCode = 2050;
          PrefixTableEntry->CaseMatch = PrefixTableEntry;
          j[1].LastNextEntry = (PUNICODE_PREFIX_TABLE_ENTRY)p_Links;
          goto LABEL_12;
        }
      }
    }
    v17 = j;
    do
    {
      if ( (unsigned int)CompareUnicodeStrings(*(_QWORD *)&v17[2].NodeTypeCode, Prefix, 0xFFFFFFFFLL) == 2 )
        return 0;
      v17 = (_UNICODE_PREFIX_TABLE *)v17->LastNextEntry;
    }
    while ( v17 != j );
    PrefixTableEntry->NextPrefixTree = 0LL;
    PrefixTableEntry->NodeTypeCode = 2051;
    PrefixTableEntry->CaseMatch = j->LastNextEntry;
    j->LastNextEntry = PrefixTableEntry;
LABEL_13:
    v14 = i->NextPrefixTree;
    i->NextPrefixTree = 0LL;
    i->NodeTypeCode = 2050;
    v15 = (_UNICODE_PREFIX_TABLE_ENTRY *)&RtlSplay((PRTL_SPLAY_LINKS)&j[1])[-1];
    v15->NodeTypeCode = 2049;
    PrefixTable->NextPrefixTree = v15;
    v15->NextPrefixTree = v14;
  }
  else
  {
    PrefixTable->NextPrefixTree = PrefixTableEntry;
    PrefixTableEntry->NodeTypeCode = 2049;
    PrefixTableEntry->NextPrefixTree = (_UNICODE_PREFIX_TABLE_ENTRY *)i;
    PrefixTableEntry->CaseMatch = PrefixTableEntry;
  }
  return 1;
}
