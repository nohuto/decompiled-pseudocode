/*
 * XREFs of HalSetBusDataByOffset @ 0x140394D80
 * Callers:
 *     HalSetBusData @ 0x140501050 (HalSetBusData.c)
 *     HalpPiix4Detect @ 0x140A8F324 (HalpPiix4Detect.c)
 *     KdpSysWriteBusData @ 0x140AB5D1C (KdpSysWriteBusData.c)
 * Callees:
 *     HalpSetPCIData @ 0x140394DC4 (HalpSetPCIData.c)
 *     HalpGetSetCmosData @ 0x1403A4CAC (HalpGetSetCmosData.c)
 */

ULONG __stdcall HalSetBusDataByOffset(
        BUS_DATA_TYPE BusDataType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PVOID Buffer,
        ULONG Offset,
        ULONG Length)
{
  size_t Size; // [rsp+28h] [rbp-10h]

  if ( BusDataType == Cmos )
    return HalpGetSetCmosData(0, SlotNumber, (_DWORD)Buffer, Length, 1);
  if ( BusDataType != PCIConfiguration )
    return 0;
  LODWORD(Size) = Length;
  return HalpSetPCIData(BusNumber >> 8, BusNumber, SlotNumber, (int)Buffer, Offset, Size);
}
