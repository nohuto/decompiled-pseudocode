/*
 * XREFs of ZwQueryInstallUILanguage @ 0x14041D1E0
 * Callers:
 *     DifZwQueryInstallUILanguageWrapper @ 0x1405F50A0 (DifZwQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegLoadInstalled @ 0x140847160 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInstallUILanguage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
