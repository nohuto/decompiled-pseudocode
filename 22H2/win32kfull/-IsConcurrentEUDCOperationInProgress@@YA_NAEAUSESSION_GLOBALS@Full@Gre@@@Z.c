/*
 * XREFs of ?IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0089CBC
 * Callers:
 *     bAddAllFlEntry @ 0x1C00897FC (bAddAllFlEntry.c)
 *     bDeleteAllFlEntry @ 0x1C0114C3C (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C029E958 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C029EC80 (GreEudcUnloadLinkW.c)
 * Callees:
 *     <none>
 */

char __fastcall IsConcurrentEUDCOperationInProgress(struct Gre::Full::SESSION_GLOBALS *a1)
{
  if ( !*((_DWORD *)a1 + 3325) )
    return 0;
  EngSetLastError(0xA7u);
  return 1;
}
