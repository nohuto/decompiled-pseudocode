/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1403FCDC0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1407940E4 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInstallUILanguage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
