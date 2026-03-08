/*
 * XREFs of HalPutScatterGatherList @ 0x1403C8D00
 * Callers:
 *     <none>
 * Callees:
 *     HalPutScatterGatherListV2 @ 0x1403C8D28 (HalPutScatterGatherListV2.c)
 *     HalPutScatterGatherListV3 @ 0x14050CE18 (HalPutScatterGatherListV3.c)
 */

void __stdcall HalPutScatterGatherList(
        PADAPTER_OBJECT DmaAdapter,
        PSCATTER_GATHER_LIST ScatterGather,
        BOOLEAN WriteToDevice)
{
  if ( HIDWORD(DmaAdapter[9].DmaOperations) == 2 )
    HalPutScatterGatherListV2(DmaAdapter, ScatterGather, WriteToDevice);
  else
    HalPutScatterGatherListV3(DmaAdapter, ScatterGather, WriteToDevice);
}
