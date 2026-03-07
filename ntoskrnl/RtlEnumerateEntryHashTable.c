PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // ebx
  unsigned int TableSize; // r11d
  unsigned int v6; // r8d
  unsigned int i; // r10d
  _QWORD *Directory; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  _LIST_ENTRY *ChainHead; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v12; // rdx
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *Flink; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *Blink; // r9
  _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax

  BucketIndex = Enumerator->BucketIndex;
  TableSize = HashTable->TableSize;
  v6 = BucketIndex;
  if ( BucketIndex >= TableSize )
    return 0LL;
  for ( i = BucketIndex + 128; ; ++i )
  {
    if ( v6 == BucketIndex )
    {
      ChainHead = Enumerator->ChainHead;
      v12 = Enumerator;
    }
    else
    {
      Directory = HashTable->Directory;
      if ( TableSize <= 0x80 )
      {
        v10 = v6;
      }
      else
      {
        _BitScanReverse(&v9, i);
        v10 = i ^ (1 << v9);
        Directory = (_QWORD *)Directory[v9 - 7];
      }
      ChainHead = (_LIST_ENTRY *)&Directory[2 * v10];
      v12 = (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)ChainHead;
    }
    Flink = (struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *)v12->HashEntry.Linkage.Flink;
    if ( Flink != (struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      break;
LABEL_8:
    if ( ++v6 >= TableSize )
      return 0LL;
  }
  while ( !Flink->Signature )
  {
    Flink = (struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *)Flink->Linkage.Flink;
    if ( Flink == (struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      goto LABEL_8;
  }
  v15 = Enumerator->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink->Blink != Enumerator )
    goto LABEL_22;
  Blink = Enumerator->HashEntry.Linkage.Blink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator )
    goto LABEL_22;
  Blink->Flink = v15;
  v15->Blink = Blink;
  v17 = Enumerator->ChainHead;
  if ( v17 != ChainHead )
  {
    if ( v17->Flink == v17 )
      --HashTable->NonEmptyBuckets;
    if ( ChainHead->Flink == ChainHead )
      ++HashTable->NonEmptyBuckets;
  }
  Enumerator->BucketIndex = v6;
  Enumerator->ChainHead = ChainHead;
  v18 = Flink->Linkage.Flink;
  if ( (struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *)Flink->Linkage.Flink->Blink != Flink )
LABEL_22:
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Flink = v18;
  Enumerator->HashEntry.Linkage.Blink = &Flink->Linkage;
  v18->Blink = &Enumerator->HashEntry.Linkage;
  result = Flink;
  Flink->Linkage.Flink = &Enumerator->HashEntry.Linkage;
  return result;
}
