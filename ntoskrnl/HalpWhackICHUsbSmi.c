__int64 __fastcall HalpWhackICHUsbSmi(ULONG BusNumber, ULONG SlotNumber)
{
  __int64 result; // rax
  unsigned __int32 v3; // eax
  unsigned int Buffer; // [rsp+50h] [rbp+18h] BYREF

  Buffer = 0;
  HalGetBusDataByOffset(PCIConfiguration, BusNumber, SlotNumber, &Buffer, 0x40u, 4u);
  result = Buffer;
  if ( Buffer )
  {
    LOWORD(Buffer) = Buffer & 0xFFFC;
    v3 = __indword((result & 0xFFFC) + 48);
    result = v3 & 0xFFFFFFF7;
    __outdword(Buffer + 48, result);
  }
  return result;
}
