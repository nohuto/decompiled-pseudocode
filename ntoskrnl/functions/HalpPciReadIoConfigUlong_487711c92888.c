__int64 __fastcall HalpPciReadIoConfigUlong(unsigned int *a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r8d
  unsigned __int32 v4; // eax

  v3 = *a1 ^ (*a1 ^ a3) & 0xFC;
  *a1 = v3;
  __outdword(0xCF8u, v3);
  v4 = __indword(0xCFCu);
  *a2 = v4;
  return 4LL;
}
