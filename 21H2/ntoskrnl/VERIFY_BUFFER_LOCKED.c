/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x1409CA060
 * Callers:
 *     VfBuildScatterGatherList @ 0x1409CB000 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CB360 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1409CC0F0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CC4B0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409CC870 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CCA30 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x1409C5CD0 (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x1409CEC60 (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)MmAreMdlPagesLocked((_DWORD *)a1) && !v2 )
  {
    ViHalPreprocessOptions(byte_140C12E9C, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_140C12E9C);
  }
}
