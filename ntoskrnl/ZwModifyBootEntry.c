/*
 * XREFs of ZwModifyBootEntry @ 0x1404146B0
 * Callers:
 *     DifZwModifyBootEntryWrapper @ 0x1405EED10 (DifZwModifyBootEntryWrapper.c)
 *     BiModifyBootEntry @ 0x140A5BF28 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
