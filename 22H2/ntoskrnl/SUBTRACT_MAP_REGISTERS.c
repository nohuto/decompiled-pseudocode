/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x1409C9FDC
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405A1008 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x1409CA5D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA820 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1409CB5A0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409CB960 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CBA10 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409CBD00 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x1409CCF40 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409CD1B0 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1D34 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CEC70 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140C12E60, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C12E60);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
