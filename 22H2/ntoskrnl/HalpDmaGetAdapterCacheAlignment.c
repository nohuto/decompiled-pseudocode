/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x1404B8BA0
 * Callers:
 *     HalPutScatterGatherList @ 0x1402F6340 (HalPutScatterGatherList.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039F2B8 (HalpDmaCheckMdlAccessibility.c)
 *     HalGetDmaTransferInfoInternal @ 0x14039F348 (HalGetDmaTransferInfoInternal.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2630 (HalFlushAdapterBuffersEx.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404B768C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404B7B40 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x1404B7CF0 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404C84AC (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x1404C89FC (HalpFlushMapBuffers.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1404CD76C (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x1404CD888 (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1404CD9EC (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x1404CDB44 (HalpDmaMapScatterTransferV2.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x1404CDCD0 (HalpDmaNextContiguousPieceV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14030DA00 (HalpDmaGetAdapterVersion.c)
 */

__int64 __fastcall HalpDmaGetAdapterCacheAlignment(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return 1LL;
  result = (unsigned int)HalpCoreDmaAlignment;
  if ( *(_BYTE *)(v1 + 437) )
    return 1LL;
  return result;
}
