/*
 * XREFs of SepRmDestroyCapTable @ 0x140926198
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403CBCDC (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x1405965C0 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlEndEnumerationHashTable @ 0x140244500 (RtlEndEnumerationHashTable.c)
 *     RtlEnumerateEntryHashTable @ 0x1402F63B0 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1402F64D0 (RtlRemoveEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1402F6E90 (RtlInitEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x140378F00 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(_RTL_DYNAMIC_HASH_TABLE *P)
{
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  RtlInitEnumerationHashTable(P, &Enumerator);
  while ( 1 )
  {
    v2 = RtlEnumerateEntryHashTable(P, &Enumerator);
    v3 = v2;
    if ( !v2 )
      break;
    RtlRemoveEntryHashTable(P, v2, 0LL);
    v3[1].Linkage.Blink = 0LL;
    ExFreePoolWithTag(v3, 0x70536553u);
  }
  RtlEndEnumerationHashTable(P, &Enumerator);
  RtlDeleteHashTable(P);
  v4 = *(void **)&P[1].DivisorMask;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x70536553u);
  ExFreePoolWithTag(P, 0x70536553u);
}
