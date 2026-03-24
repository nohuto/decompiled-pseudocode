/*
 * XREFs of ZwAddBootEntry @ 0x1403FA760
 * Callers:
 *     BiAddBootEntry @ 0x140970188 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
