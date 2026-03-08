/*
 * XREFs of ZwMakeTemporaryObject @ 0x1404145F0
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1407DCB7C (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoCreateDriver @ 0x14081AF70 (IoCreateDriver.c)
 *     IoDeleteSymbolicLink @ 0x140871290 (IoDeleteSymbolicLink.c)
 *     PiDrvDbUnregisterNode @ 0x14096E504 (PiDrvDbUnregisterNode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(Handle, v1);
}
