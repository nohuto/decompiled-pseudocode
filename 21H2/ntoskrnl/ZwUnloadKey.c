/*
 * XREFs of ZwUnloadKey @ 0x14041F1C0
 * Callers:
 *     DifZwUnloadKeyWrapper @ 0x140628480 (DifZwUnloadKeyWrapper.c)
 *     VrpUnloadDifferencingHive @ 0x1407F6200 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x1408073EC (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140813960 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
