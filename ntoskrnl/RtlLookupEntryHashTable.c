/*
 * XREFs of RtlLookupEntryHashTable @ 0x1402B7DA0
 * Callers:
 *     SepRmReferenceFindCap @ 0x1405B7498 (SepRmReferenceFindCap.c)
 *     SepGetCachedHandlesEntry @ 0x1407397EC (SepGetCachedHandlesEntry.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x140739B6C (SepFindMatchingLowBoxNumberEntry.c)
 *     SepFindMatchingLuidEntry @ 0x1409CE298 (SepFindMatchingLuidEntry.c)
 *     SepFindSharedSidEntry @ 0x1409CE95C (SepFindSharedSidEntry.c)
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
  unsigned int v7; // ecx
  unsigned int v8; // edx
  _QWORD *Directory; // r8
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v10; // rbx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *v11; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *v12; // rdx
  _QWORD *v13; // r8
  ULONG_PTR v14; // rax
  unsigned int v16; // ecx
  char v17; // [rsp+0h] [rbp-28h] BYREF

  v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v17;
  Shift = HashTable->Shift;
  if ( Context )
    v4 = Context;
  v7 = (69069 * ((unsigned int)Signature >> Shift) + 1) & 0xFFFF0000 | ((1103515245 * ((unsigned int)Signature >> Shift)
                                                                       + 12345) >> 16);
  v8 = v7 & HashTable->DivisorMask;
  if ( v8 < HashTable->Pivot )
    v8 = v7 & ((2 * HashTable->DivisorMask) | 1);
  Directory = HashTable->Directory;
  v10 = 0LL;
  if ( HashTable->TableSize > 0x80 )
  {
    _BitScanReverse(&v16, v8 + 128);
    v8 = (v8 + 128) ^ (1 << v16);
    Directory = (_QWORD *)Directory[v16 - 7];
  }
  v11 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&Directory[2 * v8];
  v12 = v11;
  v13 = *v11;
  if ( *v11 != (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v11 )
  {
    do
    {
      v14 = v13[2];
      if ( v14 && v14 >= Signature )
        break;
      v12 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)v13;
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v11 );
  }
  v4->ChainHead = (_LIST_ENTRY *)v11;
  v4->PrevLinkage = (_LIST_ENTRY *)v12;
  v4->Signature = Signature;
  if ( v11 == (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)*v12 )
    return 0LL;
  if ( (*v12)->Signature == Signature )
    return *v12;
  return v10;
}
