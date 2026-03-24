/*
 * XREFs of MiFlushEnclaveTb @ 0x14054A5DC
 * Callers:
 *     MiProtectEnclavePages @ 0x14054AA70 (MiProtectEnclavePages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 */

void __fastcall MiFlushEnclaveTb(__int64 a1, _KPROCESS *a2, int a3)
{
  if ( a2 != (_KPROCESS *)-1LL )
  {
    if ( (a3 & 0x20000000) == 0 && !*(_DWORD *)(a1 + 12) )
      MiInsertTbFlushEntry(a1, (unsigned __int64)a2, 1LL, 0);
    MiFlushTbList(a1, a2);
  }
}
