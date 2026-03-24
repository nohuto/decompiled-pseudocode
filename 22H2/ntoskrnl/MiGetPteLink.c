/*
 * XREFs of MiGetPteLink @ 0x140293260
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14029037C (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x140291460 (MmMapViewInSystemCache.c)
 *     InsertTailListPte @ 0x140292920 (InsertTailListPte.c)
 *     RemoveListHeadPte @ 0x140292A74 (RemoveListHeadPte.c)
 *     MiObtainSystemCacheView @ 0x140292B80 (MiObtainSystemCacheView.c)
 *     RemoveListEntryPte @ 0x140316F78 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037F6E0 (MiWaitForSystemCacheViewFlush.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140C4DF40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DF40;
  }
  return a1 >> 28;
}
