/*
 * XREFs of SepFindMatchingLowBoxNumberEntries @ 0x14092533C
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x1409256CC (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x140251400 (RtlEnumerateEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x14031EB70 (RtlInitEnumerationHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x14031F180 (RtlEndEnumerationHashTable.c)
 */

__int64 __fastcall SepFindMatchingLowBoxNumberEntries(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        int a2,
        int a3,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY *a4,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY *a5)
{
  char v9; // di
  char v10; // bl
  int Signature; // ecx
  bool v13; // zf
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v14; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-48h] BYREF

  *a4 = 0LL;
  Enumerator.HashEntry.Linkage = 0LL;
  *a5 = 0LL;
  memset(&Enumerator.CurEntry + 2, 0, 24);
  v9 = 0;
  v10 = 0;
  if ( !RtlInitEnumerationHashTable(HashTable, &Enumerator) )
    return 3221226021LL;
  while ( 1 )
  {
    v14 = RtlEnumerateEntryHashTable(HashTable, &Enumerator);
    if ( !v14 )
      break;
    Signature = v14[1].Signature;
    if ( Signature == a2 )
    {
      v9 = 1;
      *a4 = v14;
      v13 = v10 == 1;
LABEL_7:
      if ( v13 )
        break;
    }
    else if ( Signature == a3 )
    {
      v10 = 1;
      *a5 = v14;
      v13 = v9 == 1;
      goto LABEL_7;
    }
  }
  RtlEndEnumerationHashTable(HashTable, &Enumerator);
  if ( v9 != 1 || v10 != 1 )
    return 3221226021LL;
  return 0LL;
}
