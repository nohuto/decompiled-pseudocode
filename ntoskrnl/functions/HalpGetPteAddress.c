__int64 __fastcall HalpGetPteAddress(unsigned __int64 a1)
{
  return 8 * ((a1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL;
}
