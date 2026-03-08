/*
 * XREFs of ZwLoadKey @ 0x1404144D0
 * Callers:
 *     DifZwLoadKeyWrapper @ 0x1405EEA50 (DifZwLoadKeyWrapper.c)
 *     BiLoadHive @ 0x1408306AC (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
