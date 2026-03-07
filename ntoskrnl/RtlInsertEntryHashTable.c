BOOLEAN __stdcall RtlInsertEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // rsi
  unsigned int v7; // ecx
  unsigned int v8; // edx
  _QWORD *Directory; // r9
  _LIST_ENTRY *ChainHead; // rax
  _LIST_ENTRY *v11; // r9
  _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *PrevLinkage; // rax
  struct _LIST_ENTRY *v14; // rcx
  ULONG_PTR Flink; // rcx
  unsigned int v17; // ecx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v19; // [rsp+30h] [rbp-18h]

  Entry->Signature = Signature;
  ++HashTable->NumEntries;
  v19 = 0LL;
  v4 = Context;
  v18 = 0LL;
  if ( Context )
  {
    if ( !Context->ChainHead )
      RtlpPopulateContext(HashTable, Context);
    ChainHead = v4->ChainHead;
  }
  else
  {
    v7 = (69069 * ((unsigned int)Signature >> HashTable->Shift) + 1) & 0xFFFF0000 | ((1103515245
                                                                                    * ((unsigned int)Signature >> HashTable->Shift)
                                                                                    + 12345) >> 16);
    v8 = v7 & HashTable->DivisorMask;
    if ( v8 < HashTable->Pivot )
      v8 = v7 & ((2 * HashTable->DivisorMask) | 1);
    Directory = HashTable->Directory;
    if ( HashTable->TableSize > 0x80 )
    {
      _BitScanReverse(&v17, v8 + 128);
      v8 = (v8 + 128) ^ (1 << v17);
      Directory = (_QWORD *)Directory[v17 - 7];
    }
    ChainHead = (_LIST_ENTRY *)&Directory[2 * v8];
    v11 = ChainHead;
    for ( i = ChainHead->Flink; i != ChainHead; i = i->Flink )
    {
      Flink = (ULONG_PTR)i[1].Flink;
      if ( Flink && Flink >= Signature )
        break;
      v11 = i;
    }
    *(_QWORD *)&v18 = ChainHead;
    v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v18;
    *((_QWORD *)&v18 + 1) = v11;
    v19 = Signature;
  }
  if ( ChainHead->Flink == ChainHead )
    ++HashTable->NonEmptyBuckets;
  PrevLinkage = v4->PrevLinkage;
  v14 = PrevLinkage->Flink;
  if ( PrevLinkage->Flink->Blink != PrevLinkage )
    __fastfail(3u);
  Entry->Linkage.Blink = PrevLinkage;
  Entry->Linkage.Flink = v14;
  v14->Blink = &Entry->Linkage;
  PrevLinkage->Flink = &Entry->Linkage;
  return 1;
}
