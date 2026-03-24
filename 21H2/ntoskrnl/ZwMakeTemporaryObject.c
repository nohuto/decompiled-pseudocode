/*
 * XREFs of ZwMakeTemporaryObject @ 0x1403FC5A0
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406A5914 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x1407722B0 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x1407A4F00 (IoCreateDriver.c)
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
