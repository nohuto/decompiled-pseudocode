/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x140AC5290
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140AC5B90 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC5DE0 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140AC6BE0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140AC7030 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC70E0 (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x140AC8860 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140ACA2F4 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 216));
  if ( *(_DWORD *)(a1 + 224) < 3u && v2 != *(_DWORD *)(a1 + 212) )
  {
    ViHalPreprocessOptions(byte_140C0DDCC, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(0xE6u, 4uLL, v2 != *(_DWORD *)(a1 + 212), 0LL, 0LL, byte_140C0DDCC);
  }
}
