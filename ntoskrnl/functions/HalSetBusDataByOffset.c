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
