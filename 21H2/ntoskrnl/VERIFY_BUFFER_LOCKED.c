/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x140A83C18
 * Callers:
 *     VfBuildScatterGatherList @ 0x140A84BC0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140A84F20 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140A85DA0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140A86160 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140A86510 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140A866D0 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x140A8142C (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x140A88948 (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)MmAreMdlPagesLocked((_DWORD *)a1) && !v2 )
  {
    ViHalPreprocessOptions(byte_140C0D8FC, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_140C0D8FC);
  }
}
