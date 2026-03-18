/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x140AC53C0
 * Callers:
 *     VfBuildScatterGatherList @ 0x140AC6650 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC69B0 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140AC7800 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC7BD0 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x140AC85C0 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140ACA2F4 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 200));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_140C0DDC8,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 196));
    VfReportIssueWithOptions(
      0xE6u,
      6uLL,
      *(unsigned int *)(a1 + 196),
      (unsigned int)(*(_DWORD *)(a1 + 196) - v2),
      0LL,
      byte_140C0DDC8);
  }
}
