/*
 * XREFs of ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C007B630
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C007BDB8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePagedLookasideList @ 0x1C007C440 (Win32FreePagedLookasideList.c)
 */

void RGNMEMOBJ::vDestroyScanLookAsideList(void)
{
  if ( RGNMEMOBJ::s_pSCANLookAsideList )
  {
    Win32FreePagedLookasideList();
    RGNMEMOBJ::s_pSCANLookAsideList = 0LL;
  }
}
