/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x1409CAFCC
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405A12F8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x1409CB5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CB810 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1409CC590 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409CC950 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CCA00 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409CCCF0 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x1409CDF30 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409CE1A0 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140C12EA8, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C12EA8);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
