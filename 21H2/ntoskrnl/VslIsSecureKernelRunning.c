/*
 * XREFs of VslIsSecureKernelRunning @ 0x14025E6F8
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14093AAEC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14093C2FC (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140A65D84 (IopLiveDumpCaptureMemoryPages.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}
