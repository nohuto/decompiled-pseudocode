__int64 __fastcall HalpKdWritePCIConfig(unsigned int a1, unsigned int a2, void *a3, unsigned int a4, unsigned int a5)
{
  HalpPCIConfig((unsigned int *)(unsigned __int16)(a1 >> 8), a1, a2, a3, a4, a5, 1);
  return a5;
}
