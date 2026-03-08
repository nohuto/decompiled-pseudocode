/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x1403B44EC
 * Callers:
 *     HalpCalculateScatterGatherListSize @ 0x1403B4390 (HalpCalculateScatterGatherListSize.c)
 *     HalPutScatterGatherListV2 @ 0x1403C8D28 (HalPutScatterGatherListV2.c)
 *     HalGetDmaTransferInfoInternal @ 0x1404534BC (HalGetDmaTransferInfoInternal.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x140455976 (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x140455A8C (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x140455BE8 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x140455D28 (HalpDmaMapScatterTransferV2.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x140455EB4 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FD754 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404FDBA4 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404FE110 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x1404FE2D0 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14050F0B4 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x14050F610 (HalpFlushMapBuffers.c)
 *     HalFlushAdapterBuffersEx @ 0x140511F70 (HalFlushAdapterBuffersEx.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B4514 (HalpDmaGetAdapterVersion.c)
 */

__int64 __fastcall HalpDmaGetAdapterCacheAlignment(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1, a2, a1) == 2 )
    return 1LL;
  result = (unsigned int)HalpCoreDmaAlignment;
  if ( *(_BYTE *)(v2 + 445) )
    return 1LL;
  return result;
}
