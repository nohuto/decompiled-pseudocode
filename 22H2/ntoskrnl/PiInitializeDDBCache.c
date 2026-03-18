/*
 * XREFs of PiInitializeDDBCache @ 0x140B42F60
 * Callers:
 *     PpInitializeBootDDB @ 0x140B42D24 (PpInitializeBootDDB.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14031E790 (RtlInitializeGenericTableAvl.c)
 */

__int64 PiInitializeDDBCache()
{
  RtlInitializeGenericTableAvl(
    &PiDDBCacheTable,
    (PRTL_AVL_COMPARE_ROUTINE)PiCompareDDBCacheEntries,
    (PRTL_AVL_ALLOCATE_ROUTINE)PnpAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)CMFFreeFn,
    0LL);
  qword_140D54F68 = (__int64)&PiDDBCacheList;
  PiDDBCacheList = &PiDDBCacheList;
  return 0LL;
}
