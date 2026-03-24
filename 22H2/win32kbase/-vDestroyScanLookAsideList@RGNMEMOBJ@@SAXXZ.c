/*
 * XREFs of ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C007CD10
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C007D498 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePagedLookasideList @ 0x1C007DB20 (Win32FreePagedLookasideList.c)
 */

void RGNMEMOBJ::vDestroyScanLookAsideList(void)
{
  if ( RGNMEMOBJ::s_pSCANLookAsideList )
  {
    Win32FreePagedLookasideList();
    RGNMEMOBJ::s_pSCANLookAsideList = 0LL;
  }
}
