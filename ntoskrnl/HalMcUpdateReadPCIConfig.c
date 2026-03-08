/*
 * XREFs of HalMcUpdateReadPCIConfig @ 0x140513180
 * Callers:
 *     <none>
 * Callees:
 *     HalpReadPCIConfig @ 0x1403704C4 (HalpReadPCIConfig.c)
 */

__int64 __fastcall HalMcUpdateReadPCIConfig(int a1, unsigned int a2, void *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r10d

  if ( !a1 )
  {
    v5 = a5;
    if ( a4 + a5 <= 0x100 )
      return HalpReadPCIConfig(0, 0, a2, a3, a4, v5);
    if ( a4 <= 0x100 )
    {
      v5 = 256 - a4;
      return HalpReadPCIConfig(0, 0, a2, a3, a4, v5);
    }
  }
  return 0LL;
}
