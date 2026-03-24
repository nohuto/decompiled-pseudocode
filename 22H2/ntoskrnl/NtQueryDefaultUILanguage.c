/*
 * XREFs of NtQueryDefaultUILanguage @ 0x14078EC00
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1406965E0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall NtQueryDefaultUILanguage(_WORD *a1)
{
  return NtQueryInstallUILanguage(a1);
}
