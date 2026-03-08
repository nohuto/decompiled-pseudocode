/*
 * XREFs of RtlExpandHashTable @ 0x1402B8330
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x1402B84F0 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x1402B86BC (RtlpAllocateSecondLevelDir.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rbp
  void **v6; // rdi
  __int64 Pivot; // rdx
  _QWORD *ChainHead; // rax
  _QWORD *v9; // r10
  __int64 v10; // r9
  _QWORD *v11; // rdx
  unsigned int *p_DivisorMask; // r9
  _QWORD *v13; // r8
  _QWORD *v14; // r11
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  unsigned int v19; // edx
  __int64 SecondLevelDir; // rax
  void *Directory; // r14
  __int64 Pool2; // rax
  _QWORD *v24; // rdi

  TableSize = HashTable->TableSize;
  if ( TableSize == 8388480 || HashTable->NumEnumerators )
    return 0;
  _BitScanReverse(&v3, TableSize + 128);
  v4 = (TableSize + 128) ^ (1 << v3);
  v5 = v3 - 7;
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    Pool2 = ExAllocatePool2(64LL, 128LL, 1650545736LL);
    v24 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return 0;
    memset((void *)(Pool2 + 8), 0, 0x78uLL);
    *v24 = Directory;
    HashTable->Directory = v24;
  }
  v6 = (void **)HashTable->Directory;
  if ( !v6[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir((unsigned int)v5);
    if ( SecondLevelDir )
    {
      v6[v5] = (void *)SecondLevelDir;
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
  ChainHead = (_QWORD *)RtlpGetChainHead(HashTable, Pivot);
  ++HashTable->Pivot;
  v9 = ChainHead;
  v11 = (_QWORD *)(v10 + 16LL * v4);
  p_DivisorMask = &HashTable->DivisorMask;
  v11[1] = v11;
  *v11 = v11;
  v13 = (_QWORD *)*ChainHead;
  if ( (_QWORD *)*ChainHead != ChainHead )
  {
    v14 = ChainHead;
    do
    {
      v15 = *((_DWORD *)v13 + 4) >> HashTable->Shift;
      if ( (((2 * *p_DivisorMask) | 1) & ((69069 * v15 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v15 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v16 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13
          || (v17 = (_QWORD *)v13[1], (_QWORD *)*v17 != v13)
          || (*v17 = v16, *(_QWORD *)(v16 + 8) = v17, v18 = (_QWORD *)v11[1], (_QWORD *)*v18 != v11) )
        {
          __fastfail(3u);
        }
        *v13 = v11;
        v13[1] = v18;
        *v18 = v13;
        v11[1] = v13;
      }
      else
      {
        v14 = v13;
      }
      v13 = (_QWORD *)*v14;
    }
    while ( (_QWORD *)*v14 != v9 );
    if ( (_QWORD *)*v11 != v11 )
      ++HashTable->NonEmptyBuckets;
    if ( (_QWORD *)*v9 == v9 )
      --HashTable->NonEmptyBuckets;
  }
  v19 = *p_DivisorMask;
  if ( HashTable->Pivot == *p_DivisorMask + 1 )
  {
    HashTable->Pivot = 0;
    *p_DivisorMask = (2 * v19) | 1;
  }
  return 1;
}
