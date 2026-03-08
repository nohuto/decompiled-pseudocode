/*
 * XREFs of HvlWritePerfMsr @ 0x14053E390
 * Callers:
 *     <none>
 * Callees:
 *     HvlpWritePerfRegister @ 0x1405402C8 (HvlpWritePerfRegister.c)
 */

__int64 __fastcall HvlWritePerfMsr(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  return HvlpWritePerfRegister(a1, a2 | 0x10000000000000LL, a3, a4);
}
