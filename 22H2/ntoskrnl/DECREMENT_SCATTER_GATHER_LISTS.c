/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x1409C9E10
 * Callers:
 *     VfBuildScatterGatherList @ 0x1409CB010 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CB370 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1409CC100 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CC4C0 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x1409CCF40 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1D34 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CEC70 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 168));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_140C12E5C,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 164));
    VfReportIssueWithOptions(
      0xE6u,
      6uLL,
      *(unsigned int *)(a1 + 164),
      (unsigned int)(*(_DWORD *)(a1 + 164) - v2),
      0LL,
      byte_140C12E5C);
  }
}
