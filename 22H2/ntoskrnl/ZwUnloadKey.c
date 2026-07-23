/*
 * XREFs of ZwUnloadKey @ 0x1403FD340
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x140779304 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140785948 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
