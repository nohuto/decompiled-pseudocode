/*
 * XREFs of MiFlushEnclaveTb @ 0x140645A50
 * Callers:
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 * Callees:
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
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
