/*
 * XREFs of ZwDeleteBootEntry @ 0x14041D220
 * Callers:
 *     DifZwDeleteBootEntryWrapper @ 0x14061F510 (DifZwDeleteBootEntryWrapper.c)
 *     BiDeleteBootEntry @ 0x140A1F760 (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
