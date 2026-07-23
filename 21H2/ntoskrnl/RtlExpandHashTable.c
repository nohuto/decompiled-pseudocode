/*
 * XREFs of RtlExpandHashTable @ 0x1402F6CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateSecondLevelDir @ 0x140250FEC (RtlpAllocateSecondLevelDir.c)
 *     RtlpGetChainHead @ 0x1402F5F2C (RtlpGetChainHead.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __stdcall RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // r14
  void **v6; // rdi
  unsigned int Pivot; // edx
  _QWORD *ChainHead; // rax
  _QWORD *v9; // r9
  __int64 v10; // r10
  _QWORD *v11; // rdx
  _QWORD *v12; // r8
  _QWORD *v13; // r10
  int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  unsigned int DivisorMask; // edx
  PVOID SecondLevelDir; // rax
  void *Directory; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v23; // rdi

  TableSize = HashTable->TableSize;
  if ( TableSize == 8388480 || HashTable->NumEnumerators )
    return 0;
  _BitScanReverse(&v3, TableSize + 128);
  v4 = (TableSize + 128) ^ (1 << v3);
  v5 = v3 - 7;
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x62615448u);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
      return 0;
    memset(PoolWithTag + 1, 0, 0x78uLL);
    *v23 = Directory;
    HashTable->Directory = v23;
  }
  v6 = (void **)HashTable->Directory;
  if ( !v6[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir(v5);
    if ( SecondLevelDir )
    {
      v6[v5] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *v6;
      ExFreePoolWithTag(v6, 0);
    }
    return 0;
  }
LABEL_5:
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = (_QWORD *)RtlpGetChainHead((__int64)HashTable, Pivot);
  ++HashTable->Pivot;
  v9 = ChainHead;
  v11 = (_QWORD *)(v10 + 16LL * v4);
  v11[1] = v11;
  *v11 = v11;
  v12 = (_QWORD *)*ChainHead;
  if ( (_QWORD *)*ChainHead != ChainHead )
  {
    v13 = ChainHead;
    do
    {
      v14 = *((_DWORD *)v12 + 4) >> HashTable->Shift;
      if ( (((2 * HashTable->DivisorMask) | 1) & ((69069 * v14 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v14
                                                                                                 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v15 = *v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12
          || (v16 = (_QWORD *)v12[1], (_QWORD *)*v16 != v12)
          || (*v16 = v15, *(_QWORD *)(v15 + 8) = v16, v17 = (_QWORD *)v11[1], (_QWORD *)*v17 != v11) )
        {
          __fastfail(3u);
        }
        *v12 = v11;
        v12[1] = v17;
        *v17 = v12;
        v11[1] = v12;
      }
      else
      {
        v13 = v12;
      }
      v12 = (_QWORD *)*v13;
    }
    while ( (_QWORD *)*v13 != v9 );
    if ( (_QWORD *)*v11 != v11 )
      ++HashTable->NonEmptyBuckets;
    if ( (_QWORD *)*v9 == v9 )
      --HashTable->NonEmptyBuckets;
  }
  DivisorMask = HashTable->DivisorMask;
  if ( HashTable->Pivot == DivisorMask + 1 )
  {
    HashTable->Pivot = 0;
    HashTable->DivisorMask = (2 * DivisorMask) | 1;
  }
  return 1;
}
