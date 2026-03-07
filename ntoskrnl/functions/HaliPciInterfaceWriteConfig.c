__int64 __fastcall HaliPciInterfaceWriteConfig(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  HalpPCIConfig(a2 >> 8);
  return a6;
}
