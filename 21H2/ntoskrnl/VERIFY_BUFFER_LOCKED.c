/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x1409CB060
 * Callers:
 *     VfBuildScatterGatherList @ 0x1409CC000 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CC360 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1409CD0F0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CD4B0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409CD870 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CDA30 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x1409C6CD0 (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)MmAreMdlPagesLocked((_DWORD *)a1) && !v2 )
  {
    ViHalPreprocessOptions(byte_140C12EA4, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_140C12EA4);
  }
}
