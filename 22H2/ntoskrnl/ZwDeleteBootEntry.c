/*
 * XREFs of ZwDeleteBootEntry @ 0x1403FB440
 * Callers:
 *     BiDeleteBootEntry @ 0x140971854 (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
