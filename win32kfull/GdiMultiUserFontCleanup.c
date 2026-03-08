/*
 * XREFs of GdiMultiUserFontCleanup @ 0x1C00B6E30
 * Callers:
 *     <none>
 * Callees:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C00B6EE0 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00B76C0 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00B8080 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vCleanupPrintKViewList@@YAXXZ @ 0x1C02B98A4 (-vCleanupPrintKViewList@@YAXXZ.c)
 */

void GdiMultiUserFontCleanup()
{
  Gre::Base *v0; // rcx
  struct PFT **v1; // rcx
  __int64 v2; // rbx
  struct PFT **v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  CleanUpEUDC();
  v1 = (struct PFT **)((char *)Gre::Base::Globals(v0) + 6368);
  if ( *v1 )
    bCleanupFontTable(v1);
  v2 = *(_QWORD *)(SGDGetSessionState(v1) + 32);
  if ( *(_QWORD *)(v2 + 20272) )
    bCleanupFontTable((struct PFT **)(v2 + 20272));
  v3 = (struct PFT **)(v2 + 20280);
  if ( *(_QWORD *)(v2 + 20280) )
    bCleanupFontTable(v3);
  if ( *(_QWORD *)(v2 + 23392) )
    vCleanupPrintKViewList();
  v4 = Gre::Base::Globals((Gre::Base *)v3);
  v5 = *((_QWORD *)v4 + 8);
  if ( v5 )
  {
    v6 = *((_QWORD *)v4 + 8);
    GreAcquireSemaphore(v5);
    vCleanUpFntCacheInternal();
    SEMOBJ::vUnlock((SEMOBJ *)&v6);
  }
}
