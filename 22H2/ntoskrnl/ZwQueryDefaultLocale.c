/*
 * XREFs of ZwQueryDefaultLocale @ 0x1403F9CC0
 * Callers:
 *     NtInitializeNlsFiles @ 0x140612F00 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDefaultLocale(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
