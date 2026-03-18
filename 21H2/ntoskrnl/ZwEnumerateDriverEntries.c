/*
 * XREFs of ZwEnumerateDriverEntries @ 0x14041D400
 * Callers:
 *     DifZwEnumerateDriverEntriesWrapper @ 0x140620030 (DifZwEnumerateDriverEntriesWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateDriverEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
