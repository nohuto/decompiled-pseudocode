/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x1409C9FCC
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405A10C8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x1409CA5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA810 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1409CB590 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409CB950 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CBA00 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409CBCF0 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x1409CCF30 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409CD1A0 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CEC60 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140C12E88, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C12E88);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
