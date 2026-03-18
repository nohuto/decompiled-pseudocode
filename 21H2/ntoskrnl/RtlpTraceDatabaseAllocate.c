/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1405EE240
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1405EDE80 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405EE268 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpTraceDatabaseAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  bool v3; // zf
  POOL_TYPE v5; // ecx

  v3 = (a2 & 4) == 0;
  v5 = NonPagedPoolNx;
  if ( v3 )
    v5 = PagedPool;
  return ExAllocatePoolWithTag(v5, NumberOfBytes, a3);
}
