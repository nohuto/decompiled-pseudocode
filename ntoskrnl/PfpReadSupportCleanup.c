/*
 * XREFs of PfpReadSupportCleanup @ 0x140785204
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x1406A2A70 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x14097AEE4 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpOpenHandleClose @ 0x1406A5824 (PfpOpenHandleClose.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PfpReadSupportCleanup(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  v4 = *(void **)(a2 + 40);
  if ( v4 )
    NtClose(v4);
  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  if ( _bittest64((const signed __int64 *)(a2 + 32), 0x22u) )
    PfpOpenHandleClose(a2 + 8, a1);
}
