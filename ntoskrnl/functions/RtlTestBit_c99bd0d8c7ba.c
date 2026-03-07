BOOLEAN __stdcall RtlTestBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  return (*((char *)BitMapHeader->Buffer + ((unsigned __int64)BitNumber >> 3)) >> (BitNumber & 7)) & 1;
}
