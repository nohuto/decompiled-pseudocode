/*
 * XREFs of VslIsSecureKernelRunning @ 0x140302F60
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1409495FC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094B0B8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140A97838 (IopLiveDumpCaptureMemoryPages.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}
