__int64 __fastcall HalpPciWriteIoConfigUlong(unsigned int *a1, unsigned int *a2, int a3)
{
  unsigned int v3; // r8d

  v3 = *a1 ^ (*a1 ^ a3) & 0xFC;
  *a1 = v3;
  __outdword(0xCF8u, v3);
  __outdword(0xCFCu, *a2);
  return 4LL;
}
