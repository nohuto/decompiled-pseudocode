/*
 * XREFs of PfSnCleanupPrefetchHeader @ 0x1406A4CAC
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1407E3C20 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     PfSnCleanupPrefetchSectionInfo @ 0x1406A4DB4 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpOpenHandleClose @ 0x1406A5824 (PfpOpenHandleClose.c)
 *     PfpPrefetchSharedDeref @ 0x140766630 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x1407666FC (PfpPrefetchSharedCleanup.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnCleanupPrefetchHeader(__int64 a1)
{
  unsigned int i; // edi
  _QWORD **v3; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(_QWORD *)a1 )
    {
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 88LL); ++i )
        PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(a1 + 56) + 56LL * i, a1, 0LL);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 56), 0);
  }
  v3 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    PfpOpenHandleClose(v4 + 8, *(_QWORD *)(a1 + 8));
    PfpOpenHandleClose(v4 + 4, *(_QWORD *)(a1 + 8));
  }
  v6 = *(void **)(a1 + 16);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = *(void **)(a1 + 80);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = *(void **)(a1 + 88);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( *(_QWORD *)(a1 + 8) )
  {
    PfpPrefetchSharedCleanup();
    PfpPrefetchSharedDeref(*(_QWORD *)(a1 + 8));
  }
  v9 = *(void **)(a1 + 112);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
