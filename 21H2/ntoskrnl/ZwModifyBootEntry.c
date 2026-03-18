/*
 * XREFs of ZwModifyBootEntry @ 0x14041DAE0
 * Callers:
 *     DifZwModifyBootEntryWrapper @ 0x1406212A0 (DifZwModifyBootEntryWrapper.c)
 *     BiModifyBootEntry @ 0x140A20758 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
