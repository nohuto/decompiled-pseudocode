/*
 * XREFs of ZwLoadKey @ 0x14041C860
 * Callers:
 *     DifZwLoadKeyWrapper @ 0x1405F0F00 (DifZwLoadKeyWrapper.c)
 *     BiLoadHive @ 0x140809604 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
