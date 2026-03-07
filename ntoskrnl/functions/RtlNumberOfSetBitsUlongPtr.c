ULONG __stdcall RtlNumberOfSetBitsUlongPtr(ULONG_PTR Target)
{
  ULONG_PTR v1; // rdx

  v1 = ((Target - ((Target >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
     + (((Target - ((Target >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  return (0x101010101010101LL * ((v1 + (v1 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
}
