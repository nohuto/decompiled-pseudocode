/*
 * XREFs of ZwQueryInstallUILanguage @ 0x14041E240
 * Callers:
 *     DifZwQueryInstallUILanguageWrapper @ 0x1406252C0 (DifZwQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegLoadInstalled @ 0x14083008C (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInstallUILanguage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
