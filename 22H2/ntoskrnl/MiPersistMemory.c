/*
 * XREFs of MiPersistMemory @ 0x1405417AC
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x140541070 (MiFlushFileOnlyMdl.c)
 *     MiPersistPage @ 0x1405417DC (MiPersistPage.c)
 * Callees:
 *     KePersistMemory @ 0x1404024A0 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x14051B030 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMemory(void *a1, __int64 a2)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)a1, a2);
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
