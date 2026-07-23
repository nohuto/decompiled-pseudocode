/*
 * XREFs of SepRmDestroyCapTable @ 0x140926088
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403CB46C (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x1405962D0 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x140251400 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140251520 (RtlRemoveEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x14031EB70 (RtlInitEnumerationHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x14031F180 (RtlEndEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x140378E20 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
