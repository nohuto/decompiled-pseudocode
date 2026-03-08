/*
 * XREFs of ZwUnloadKey @ 0x140415DF0
 * Callers:
 *     DifZwUnloadKeyWrapper @ 0x1405F5CB0 (DifZwUnloadKeyWrapper.c)
 *     VrpUnloadDifferencingHive @ 0x1407379FC (VrpUnloadDifferencingHive.c)
 *     BiLoadHive @ 0x1408306AC (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5A134 (BiUnloadHiveByName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
