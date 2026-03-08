/*
 * XREFs of VfDriverInitStarting @ 0x140AB9E54
 * Callers:
 *     MmCallDllInitialize @ 0x14081BAB0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140B58AC4 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
