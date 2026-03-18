/*
 * XREFs of ZwAddBootEntry @ 0x14041C4A0
 * Callers:
 *     DifZwAddBootEntryWrapper @ 0x14061C7E0 (DifZwAddBootEntryWrapper.c)
 *     BiAddBootEntry @ 0x140A1E0A0 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
