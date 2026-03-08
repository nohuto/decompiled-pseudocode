/*
 * XREFs of HalpReadPCIConfig @ 0x1403704C4
 * Callers:
 *     HalpSetPCIData @ 0x1403701C4 (HalpSetPCIData.c)
 *     HalpGetPCIData @ 0x1403703A4 (HalpGetPCIData.c)
 *     HalpValidPCISlot @ 0x140370554 (HalpValidPCISlot.c)
 *     HalMcUpdateReadPCIConfig @ 0x140513180 (HalMcUpdateReadPCIConfig.c)
 * Callees:
 *     HalpPCIConfig @ 0x1402D7810 (HalpPCIConfig.c)
 *     HalpValidPCISlot @ 0x140370554 (HalpValidPCISlot.c)
 *     memset @ 0x14042CFC0 (memset.c)
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
