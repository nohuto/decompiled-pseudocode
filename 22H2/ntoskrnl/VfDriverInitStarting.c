/*
 * XREFs of VfDriverInitStarting @ 0x1409C1F74
 * Callers:
 *     MmCallDllInitialize @ 0x1407AC8D0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140A5E4B4 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
