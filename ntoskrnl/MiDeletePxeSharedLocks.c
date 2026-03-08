/*
 * XREFs of MiDeletePxeSharedLocks @ 0x1402A54C4
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePxeSharedLocks(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = *(void **)(v1 + 624);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
