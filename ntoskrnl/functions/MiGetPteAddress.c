__int64 __fastcall MiGetPteAddress(unsigned __int64 a1)
{
  return ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
}
