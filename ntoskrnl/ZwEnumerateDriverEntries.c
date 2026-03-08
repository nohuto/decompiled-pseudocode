/*
 * XREFs of ZwEnumerateDriverEntries @ 0x140413FD0
 * Callers:
 *     DifZwEnumerateDriverEntriesWrapper @ 0x1405EDB10 (DifZwEnumerateDriverEntriesWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateDriverEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
