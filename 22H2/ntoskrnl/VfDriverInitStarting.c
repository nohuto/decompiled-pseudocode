/*
 * XREFs of VfDriverInitStarting @ 0x140ABE304
 * Callers:
 *     MmCallDllInitialize @ 0x1408133E0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140B41100 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
