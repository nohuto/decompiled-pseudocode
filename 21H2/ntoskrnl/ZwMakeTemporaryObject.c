/*
 * XREFs of ZwMakeTemporaryObject @ 0x1403FC780
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140603544 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x140772470 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x1407A5100 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
