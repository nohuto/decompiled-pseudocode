/*
 * XREFs of ZwMakeTemporaryObject @ 0x14041DA20
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x140811120 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     PiDrvDbUnregisterNode @ 0x14095E00C (PiDrvDbUnregisterNode.c)
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
