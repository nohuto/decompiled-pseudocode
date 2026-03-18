/*
 * XREFs of MiFlushEnclaveTb @ 0x14064806C
 * Callers:
 *     MiProtectEnclavePages @ 0x1406482B8 (MiProtectEnclavePages.c)
 * Callees:
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F450 (MiInsertTbFlushEntry.c)
 */

void __fastcall MiFlushEnclaveTb(int *a1, unsigned __int64 a2, int a3)
{
  if ( a2 != -1LL )
  {
    if ( (a3 & 0x20000000) == 0 && !a1[3] )
      MiInsertTbFlushEntry((__int64)a1, a2, 1LL, 0);
    MiFlushTbList(a1);
  }
}
