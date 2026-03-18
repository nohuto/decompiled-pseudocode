/*
 * XREFs of ZwLoadKey @ 0x14041D900
 * Callers:
 *     DifZwLoadKeyWrapper @ 0x140620FD0 (DifZwLoadKeyWrapper.c)
 *     BiLoadHive @ 0x140813960 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
