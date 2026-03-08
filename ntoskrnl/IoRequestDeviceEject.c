/*
 * XREFs of IoRequestDeviceEject @ 0x14055D9B0
 * Callers:
 *     PipProcessStartPhase2 @ 0x1406817A0 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x14096C498 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x14055D9D0 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
