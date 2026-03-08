/*
 * XREFs of ZwQueryDefaultLocale @ 0x1404125B0
 * Callers:
 *     DifZwQueryDefaultLocaleWrapper @ 0x1405F14D0 (DifZwQueryDefaultLocaleWrapper.c)
 *     NtInitializeNlsFiles @ 0x140780A70 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDefaultLocale(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
