/*
 * XREFs of ZwUnloadKey @ 0x14041E180
 * Callers:
 *     DifZwUnloadKeyWrapper @ 0x1405F8160 (DifZwUnloadKeyWrapper.c)
 *     VrpUnloadDifferencingHive @ 0x14077C3DC (VrpUnloadDifferencingHive.c)
 *     BiLoadHive @ 0x140809604 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D60C (BiUnloadHiveByName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
