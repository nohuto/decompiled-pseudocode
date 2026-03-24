/*
 * XREFs of MiPersistPage @ 0x1405417DC
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x140541070 (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541648 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x140541CB4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x1405417AC (MiPersistMemory.c)
 */

void __fastcall MiPersistPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  __int64 v5; // rdx
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( !byte_140C4DEE8 )
  {
    v4 = (void *)MiMapPageInHyperSpaceWorker(a1, &v6, 0x80000000, a4);
    MiPersistMemory(v4, 4096LL);
    LOBYTE(v5) = v6;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, v5, 0x80000000LL);
  }
}
