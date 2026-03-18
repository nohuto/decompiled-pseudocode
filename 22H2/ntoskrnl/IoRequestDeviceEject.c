/*
 * XREFs of IoRequestDeviceEject @ 0x14055FE50
 * Callers:
 *     PipProcessStartPhase2 @ 0x1407913A8 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x14096F4B8 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x14055FE70 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
