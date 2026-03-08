/*
 * XREFs of SepRmDestroyCapTable @ 0x1409CF58C
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403A918C (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x1405B5A90 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x1402B8050 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1402B8170 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x1402B81D0 (RtlEndEnumerationHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1402B8220 (RtlInitEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x1403BBB80 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(struct _RTL_DYNAMIC_HASH_TABLE *P)
{
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

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
