/*
 * XREFs of NtQueryInstallUILanguage @ 0x1406965E0
 * Callers:
 *     ExpSetPendingUILanguage @ 0x14078BF70 (ExpSetPendingUILanguage.c)
 *     NtQueryDefaultUILanguage @ 0x14078EC00 (NtQueryDefaultUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14078F330 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14098238C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  __int64 v2; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)InstallUILanguageId < 0x7FFFFFFF0000LL )
      v2 = (__int64)InstallUILanguageId;
    *(_WORD *)v2 = *(_WORD *)v2;
  }
  *InstallUILanguageId = PsInstallUILanguageId;
  return 0;
}
