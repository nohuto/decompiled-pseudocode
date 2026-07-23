/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1403FC440
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14078FBC4 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguageId);
}
