/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x1403B91AC
 * Callers:
 *     HalpCalculateScatterGatherListSize @ 0x1403B9050 (HalpCalculateScatterGatherListSize.c)
 *     HalPutScatterGatherListV2 @ 0x1403CE2D8 (HalPutScatterGatherListV2.c)
 *     HalGetDmaTransferInfoInternal @ 0x14045B45C (HalGetDmaTransferInfoInternal.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14045D916 (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x14045DA2C (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x14045DB88 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x14045DCC8 (HalpDmaMapScatterTransferV2.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x14045DE54 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FF834 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404FFC84 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1405001F0 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x1405003B0 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1405115E4 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x140511B40 (HalpFlushMapBuffers.c)
 *     HalFlushAdapterBuffersEx @ 0x1405144A0 (HalFlushAdapterBuffersEx.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B91D4 (HalpDmaGetAdapterVersion.c)
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
