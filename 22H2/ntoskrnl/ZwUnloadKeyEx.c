/*
 * XREFs of ZwUnloadKeyEx @ 0x1403FD380
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140725F28 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
