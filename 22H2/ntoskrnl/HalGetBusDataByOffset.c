/*
 * XREFs of HalGetBusDataByOffset @ 0x14039E280
 * Callers:
 *     HalGetBusData @ 0x1403C7D70 (HalGetBusData.c)
 *     HalpWhackICHUsbSmi @ 0x1404D7264 (HalpWhackICHUsbSmi.c)
 *     HalpPiix4Detect @ 0x14099A3D0 (HalpPiix4Detect.c)
 *     KdpSysReadBusData @ 0x1409B8E98 (KdpSysReadBusData.c)
 * Callees:
 *     HalpGetPCIData @ 0x14039E2D4 (HalpGetPCIData.c)
 *     HalpGetSetCmosData @ 0x1404CC1CC (HalpGetSetCmosData.c)
 */

ULONG __stdcall HalGetBusDataByOffset(
        BUS_DATA_TYPE BusDataType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PVOID Buffer,
        ULONG Offset,
        ULONG Length)
{
  if ( BusDataType == Cmos )
    return HalpGetSetCmosData(0, SlotNumber, (_DWORD)Buffer, Length, 0);
  if ( BusNumber <= HalpMaxPciBus && BusDataType == PCIConfiguration && BusNumber >= HalpMinPciBus )
    return HalpGetPCIData(BusNumber >> 8);
  return 0;
}
