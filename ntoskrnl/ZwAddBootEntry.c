/*
 * XREFs of ZwAddBootEntry @ 0x140413050
 * Callers:
 *     DifZwAddBootEntryWrapper @ 0x1405EA400 (DifZwAddBootEntryWrapper.c)
 *     BiAddBootEntry @ 0x140A5AAD4 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
