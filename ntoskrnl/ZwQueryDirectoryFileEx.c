/*
 * XREFs of ZwQueryDirectoryFileEx @ 0x140414C70
 * Callers:
 *     DifZwQueryDirectoryFileExWrapper @ 0x1405F1700 (DifZwQueryDirectoryFileExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryFileEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
