/*
 * XREFs of GdiMultiUserFontCleanup @ 0x1C00E6080
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00E6238 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C00E63FC (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00E6560 (-CleanUpEUDC@@YAXXZ.c)
 */

void GdiMultiUserFontCleanup()
{
  __int64 v0; // rbx
  void *v1; // rcx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  CleanUpEUDC();
  if ( gpPFTPrivate )
    bCleanupFontTable(gpPFTPrivate);
  if ( gpPFTPublic )
    bCleanupFontTable((struct PFT **)&gpPFTPublic);
  if ( gpPFTDevice )
    bCleanupFontTable(&gpPFTDevice);
  v0 = gpPrintKViewList;
  if ( gpPrintKViewList )
  {
    do
    {
      v1 = (void *)v0;
      v0 = *(_QWORD *)(v0 + 32);
      Win32FreePool(v1);
    }
    while ( v0 );
    gpPrintKViewList = 0LL;
  }
  if ( ghsemFntCache )
  {
    v2 = ghsemFntCache;
    GreAcquireSemaphore(ghsemFntCache);
    vCleanUpFntCacheInternal();
    SEMOBJ::vUnlock((SEMOBJ *)&v2);
  }
}
