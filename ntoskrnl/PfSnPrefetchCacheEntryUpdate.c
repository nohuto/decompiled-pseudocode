/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x1407E307C
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1407E2E70 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1407E4284 (PfSnPrefetchCacheEntryGet.c)
 */

char __fastcall PfSnPrefetchCacheEntryUpdate(__int64 a1)
{
  const void *v1; // rdi
  unsigned __int8 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx

  v1 = (const void *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 4);
  v4 = 314159LL;
  v5 = 8LL;
  do
  {
    v6 = *v3;
    v3 += 8;
    v4 = *(v3 - 1)
       + 37
       * (*(v3 - 2)
        + 37
        * (*(v3 - 3) + 37 * (*(v3 - 4) + 37 * (*(v3 - 5) + 37 * (*(v3 - 6) + 37 * (*(v3 - 7) + 37 * (v6 + 37 * v4)))))));
    --v5;
  }
  while ( v5 );
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_140C6A320, 1u);
  v8 = qword_140C6A310 - 16;
  if ( !memcmp((const void *)(qword_140C6A310 - 16 + 32), v1, 0x40uLL)
    || (v8 = PfSnPrefetchCacheEntryGet(&unk_140C6A2F8, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v8 + 116) = *(_DWORD *)(a1 + 68);
  }
  ExReleaseResourceLite(&stru_140C6A320);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
