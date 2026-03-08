/*
 * XREFs of SmpKeyedStoreCtxCleanup @ 0x1405C78C8
 * Callers:
 *     SmPartitionCleanup @ 0x1409D3DC8 (SmPartitionCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SmpKeyedStoreCtxCleanup(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
