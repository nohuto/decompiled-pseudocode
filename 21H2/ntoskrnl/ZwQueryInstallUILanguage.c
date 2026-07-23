/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1403FCFA0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14078FE84 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguageId);
}
