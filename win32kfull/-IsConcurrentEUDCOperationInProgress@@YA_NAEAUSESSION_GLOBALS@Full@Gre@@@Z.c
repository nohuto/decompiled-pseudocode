/*
 * XREFs of ?IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00B918C
 * Callers:
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 *     bDeleteAllFlEntry @ 0x1C0116094 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C02A13F0 (GreEudcUnloadLinkW.c)
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
