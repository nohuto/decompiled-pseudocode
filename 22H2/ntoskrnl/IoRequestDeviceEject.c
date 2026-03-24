/*
 * XREFs of IoRequestDeviceEject @ 0x14050C8D0
 * Callers:
 *     PipProcessStartPhase2 @ 0x14073A19C (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x1408B5380 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x14050C8F0 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
