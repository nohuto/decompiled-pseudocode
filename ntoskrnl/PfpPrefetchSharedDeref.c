/*
 * XREFs of PfpPrefetchSharedDeref @ 0x140766630
 * Callers:
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x14067FEF0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfSnCleanupPrefetchHeader @ 0x1406A4CAC (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchRequestPerform @ 0x1407662E0 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x14097B4F0 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPrefetchSharedDeref(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 15, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
