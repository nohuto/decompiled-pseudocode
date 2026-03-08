/*
 * XREFs of MiPersistPage @ 0x14063C604
 * Callers:
 *     MiMarkFileOnlyPfnBad @ 0x14063BC40 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14063CAD0 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     KePersistMemory @ 0x14041BC60 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x1404580A0 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  void *v1; // rax
  unsigned __int64 v2; // rbx
  unsigned __int8 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !byte_140C65768 )
  {
    v1 = (void *)MiMapPageInHyperSpaceWorker(a1, &v3, 0x80000000);
    v2 = (unsigned __int64)v1;
    if ( !byte_140C65768 )
    {
      if ( _bittest64(&KeFeatureBits, 0x24u) )
        KePersistMemory((__int64)v1, 4096LL);
      else
        KeInvalidateRangeAllCaches(v1, 0x1000u);
    }
    MiUnmapPageInHyperSpaceWorker(v2, v3);
  }
}
