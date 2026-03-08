/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140AC158C
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405CC53C (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x140AC1B90 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC1DE0 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140AC2BE0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140AC3030 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC30E0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140AC3400 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x140AC45C0 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140AC4860 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140C0DCE0, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C0DCE0);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 220), 0);
}
