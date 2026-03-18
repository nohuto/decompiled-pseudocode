/*
 * XREFs of ZwQueryDirectoryFileEx @ 0x14041D000
 * Callers:
 *     DifZwQueryDirectoryFileExWrapper @ 0x1405F3BB0 (DifZwQueryDirectoryFileExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryFileEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
