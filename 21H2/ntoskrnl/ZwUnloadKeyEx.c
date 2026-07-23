/*
 * XREFs of ZwUnloadKeyEx @ 0x1403FDEE0
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140726218 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
