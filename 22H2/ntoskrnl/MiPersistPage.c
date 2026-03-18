/*
 * XREFs of MiPersistPage @ 0x14063EA6C
 * Callers:
 *     MiMarkFileOnlyPfnBad @ 0x14063E0B0 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14063EF38 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AEA4 (MiUnmapPageInHyperSpaceWorker.c)
 *     KePersistMemory @ 0x140423FF0 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x140460040 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  void *v1; // rax
  unsigned __int64 v2; // rbx
  unsigned __int8 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !byte_140C65BE8 )
  {
    v1 = (void *)MiMapPageInHyperSpaceWorker(a1, &v3, 0x80000000);
    v2 = (unsigned __int64)v1;
    if ( !byte_140C65BE8 )
    {
      if ( _bittest64(&KeFeatureBits, 0x24u) )
        KePersistMemory((__int64)v1, 4096LL);
      else
        KeInvalidateRangeAllCaches(v1, 0x1000u);
    }
    MiUnmapPageInHyperSpaceWorker(v2, v3);
  }
}
