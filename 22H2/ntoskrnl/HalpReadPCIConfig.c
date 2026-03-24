/*
 * XREFs of HalpReadPCIConfig @ 0x14039E3F4
 * Callers:
 *     HalpSetPCIData @ 0x14039E1A4 (HalpSetPCIData.c)
 *     HalpGetPCIData @ 0x14039E2D4 (HalpGetPCIData.c)
 *     HalpValidPCISlot @ 0x14039E474 (HalpValidPCISlot.c)
 *     HalMcUpdateReadPCIConfig @ 0x1404CBFC0 (HalMcUpdateReadPCIConfig.c)
 * Callees:
 *     HalpPCIConfig @ 0x140309270 (HalpPCIConfig.c)
 *     HalpValidPCISlot @ 0x14039E474 (HalpValidPCISlot.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall HalpReadPCIConfig(
        unsigned __int16 a1,
        unsigned __int8 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int Size)
{
  if ( (unsigned __int8)HalpValidPCISlot() )
  {
    HalpPCIConfig((unsigned int *)a1, a2, a3, a4, a5, Size, 0);
    return Size;
  }
  else
  {
    memset(a4, 255, Size);
    return 0LL;
  }
}
