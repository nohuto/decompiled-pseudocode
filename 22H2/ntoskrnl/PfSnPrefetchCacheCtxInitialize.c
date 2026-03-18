/*
 * XREFs of PfSnPrefetchCacheCtxInitialize @ 0x140848C68
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140B65430 (PfSnInitializePrefetcher.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     memset @ 0x140435400 (memset.c)
 */

NTSTATUS __fastcall PfSnPrefetchCacheCtxInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  return ExInitializeResourceLite((PERESOURCE)(a1 + 40));
}
