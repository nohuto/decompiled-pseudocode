/*
 * XREFs of RtlFindUnicodePrefix @ 0x140752230
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1402C2B50 (RtlSplay.c)
 *     CompareUnicodeStrings @ 0x140752340 (CompareUnicodeStrings.c)
 *     ComputeUnicodeNameLength @ 0x1407524A8 (ComputeUnicodeNameLength.c)
 */

PUNICODE_PREFIX_TABLE_ENTRY __stdcall RtlFindUnicodePrefix(
        PUNICODE_PREFIX_TABLE PrefixTable,
        PCUNICODE_STRING FullName,
        ULONG CaseInsensitiveIndex)
{
  PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree; // rdi
  PUNICODE_PREFIX_TABLE v4; // rbp
  CSHORT v7; // ax
  RTL_SPLAY_LINKS *i; // rsi
  UNICODE_PREFIX_TABLE_ENTRY *v10; // r14
  int v11; // eax
  UNICODE_PREFIX_TABLE_ENTRY *v12; // rbx
  struct _UNICODE_PREFIX_TABLE_ENTRY *v13; // rbx

  NextPrefixTree = PrefixTable->NextPrefixTree;
  v4 = PrefixTable;
  v7 = ComputeUnicodeNameLength(FullName);
  while ( NextPrefixTree->NameLength > v7 )
  {
    v4 = (PUNICODE_PREFIX_TABLE)NextPrefixTree;
    NextPrefixTree = NextPrefixTree->NextPrefixTree;
  }
LABEL_4:
  if ( NextPrefixTree->NameLength <= 0 )
    return 0LL;
  for ( i = &NextPrefixTree->Links; ; i = i->RightChild )
  {
    while ( 1 )
    {
      if ( !i )
      {
LABEL_16:
        v4 = (PUNICODE_PREFIX_TABLE)NextPrefixTree;
        NextPrefixTree = NextPrefixTree->NextPrefixTree;
        goto LABEL_4;
      }
      v10 = (UNICODE_PREFIX_TABLE_ENTRY *)&i[-1];
      v11 = CompareUnicodeStrings(i[1].Parent, FullName, 0LL);
      if ( v11 != 3 )
        break;
      i = i->LeftChild;
    }
    if ( v11 )
      break;
  }
  if ( CaseInsensitiveIndex )
  {
    v12 = (UNICODE_PREFIX_TABLE_ENTRY *)&i[-1];
    while ( (unsigned int)CompareUnicodeStrings(v12->Prefix, FullName, CaseInsensitiveIndex) - 1 > 1 )
    {
      v12 = v12->CaseMatch;
      if ( v12 == v10 )
        goto LABEL_16;
    }
    return v12;
  }
  else
  {
    if ( v10->NodeTypeCode == 2050 )
    {
      v13 = NextPrefixTree->NextPrefixTree;
      NextPrefixTree->NextPrefixTree = 0LL;
      NextPrefixTree->NodeTypeCode = 2050;
      v10 = (UNICODE_PREFIX_TABLE_ENTRY *)&RtlSplay(i)[-1];
      v10->NodeTypeCode = 2049;
      v4->NextPrefixTree = v10;
      v10->NextPrefixTree = v13;
    }
    return v10;
  }
}
