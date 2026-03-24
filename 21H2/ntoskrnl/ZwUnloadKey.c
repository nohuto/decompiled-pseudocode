/*
 * XREFs of ZwUnloadKey @ 0x1403FDCC0
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x140779404 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140785A48 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
