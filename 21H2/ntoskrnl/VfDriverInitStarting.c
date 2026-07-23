/*
 * XREFs of VfDriverInitStarting @ 0x1409C2F70
 * Callers:
 *     MmCallDllInitialize @ 0x1407AC690 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140A5F4B4 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
