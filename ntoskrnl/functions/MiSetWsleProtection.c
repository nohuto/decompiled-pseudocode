__int64 __fastcall MiSetWsleProtection(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r10

  MiGetWsleContents(a1, a2);
  return MiWriteValidPteVolatile(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL);
}
