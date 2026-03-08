/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x140AC1620
 * Callers:
 *     VfBuildScatterGatherList @ 0x140AC2650 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC29B0 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140AC3800 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC3BD0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140AC3F00 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC40B0 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 *     MmAreMdlPagesLocked @ 0x140AE5198 (MmAreMdlPagesLocked.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)MmAreMdlPagesLocked(a1) && !v2 )
  {
    ViHalPreprocessOptions(byte_140C0DCC8, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_140C0DCC8);
  }
}
