/*
 * XREFs of ZwMakeTemporaryObject @ 0x1403FBC20
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F79AC (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x140771F70 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x1407A5330 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
