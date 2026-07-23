/*
 * XREFs of ZwUnloadKey @ 0x1403FDEA0
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x1407795C4 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140785C08 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
