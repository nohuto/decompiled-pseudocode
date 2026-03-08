/*
 * XREFs of HalGetBusDataByOffset @ 0x140370350
 * Callers:
 *     HalGetBusData @ 0x140370320 (HalGetBusData.c)
 *     HalpWhackICHUsbSmi @ 0x14051EBA4 (HalpWhackICHUsbSmi.c)
 *     HalpPiix4Detect @ 0x140A85B70 (HalpPiix4Detect.c)
 *     KdpSysReadBusData @ 0x140AB1CC4 (KdpSysReadBusData.c)
 * Callees:
 *     HalpGetPCIData @ 0x1403703A4 (HalpGetPCIData.c)
 *     HalpGetSetCmosData @ 0x14039F6CC (HalpGetSetCmosData.c)
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
