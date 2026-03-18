/*
 * XREFs of RtlLookupEntryHashTable @ 0x14021F920
 * Callers:
 *     SepRmReferenceFindCap @ 0x1405F5D18 (SepRmReferenceFindCap.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14069654C (SepFindMatchingCachedHandlesEntry.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x140696884 (SepFindMatchingLowBoxNumberEntry.c)
 *     SepFindMatchingLuidEntry @ 0x1409CE3A8 (SepFindMatchingLuidEntry.c)
 *     SepFindSharedSidEntry @ 0x1409CECAC (SepFindSharedSidEntry.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlLookupEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // r9
  unsigned int Shift; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  _QWORD *Directory; // r11
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *v9; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *v10; // r8
  _QWORD *v11; // r10
  ULONG_PTR v12; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  unsigned int v14; // ecx
  char v15; // [rsp+0h] [rbp-28h] BYREF

  v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v15;
  Shift = HashTable->Shift;
  if ( Context )
    v4 = Context;
  v6 = (69069 * ((unsigned int)Signature >> Shift) + 1) & 0xFFFF0000 | ((1103515245 * ((unsigned int)Signature >> Shift)
                                                                       + 12345) >> 16);
  v7 = v6 & HashTable->DivisorMask;
  if ( v7 < HashTable->Pivot )
    v7 = v6 & ((2 * HashTable->DivisorMask) | 1);
  Directory = HashTable->Directory;
  if ( HashTable->TableSize > 0x80 )
  {
    _BitScanReverse(&v14, v7 + 128);
    v7 = (v7 + 128) ^ (1 << v14);
    Directory = (_QWORD *)Directory[v14 - 7];
  }
  v9 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&Directory[2 * v7];
  v10 = v9;
  v11 = *v9;
  if ( *v9 != (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v9 )
  {
    do
    {
      v12 = v11[2];
      if ( v12 && v12 >= Signature )
        break;
      v10 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)v11;
      v11 = (_QWORD *)*v11;
    }
    while ( v11 != v9 );
  }
  v4->ChainHead = (_LIST_ENTRY *)v9;
  v4->PrevLinkage = (_LIST_ENTRY *)v10;
  v4->Signature = Signature;
  result = *v10;
  if ( v9 == (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)*v10 || result->Signature != Signature )
    return 0LL;
  return result;
}
