/*
 * XREFs of ZwQueryInstallUILanguage @ 0x140414E50
 * Callers:
 *     DifZwQueryInstallUILanguageWrapper @ 0x1405F2BF0 (DifZwQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegLoadInstalled @ 0x140844000 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInstallUILanguage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
