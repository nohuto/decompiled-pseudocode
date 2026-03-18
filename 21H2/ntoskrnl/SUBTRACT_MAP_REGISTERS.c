/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140A83B84
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405FE678 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x140A84180 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140A843D0 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140A85150 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140A85600 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140A856B0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140A859A0 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x140A86C30 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140A86EA0 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140A88948 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140C0D910, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C0D910);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
