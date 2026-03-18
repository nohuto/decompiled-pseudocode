/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140AC558C
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405CE9EC (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x140AC5B90 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC5DE0 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140AC6BE0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140AC7030 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC70E0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140AC7400 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x140AC85C0 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140AC8860 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140ACA2F4 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140C0DDD8, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C0DDD8);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 220), 0);
}
