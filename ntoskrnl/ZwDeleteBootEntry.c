/*
 * XREFs of ZwDeleteBootEntry @ 0x140413DF0
 * Callers:
 *     DifZwDeleteBootEntryWrapper @ 0x1405ED020 (DifZwDeleteBootEntryWrapper.c)
 *     BiDeleteBootEntry @ 0x140A5B66C (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
