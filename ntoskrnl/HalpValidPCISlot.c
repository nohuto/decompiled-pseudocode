/*
 * XREFs of HalpValidPCISlot @ 0x140370554
 * Callers:
 *     HalpWritePCIConfig @ 0x1403702A0 (HalpWritePCIConfig.c)
 *     HalpReadPCIConfig @ 0x1403704C4 (HalpReadPCIConfig.c)
 * Callees:
 *     HalpWritePCIConfig @ 0x1403702A0 (HalpWritePCIConfig.c)
 *     HalpReadPCIConfig @ 0x1403704C4 (HalpReadPCIConfig.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall HalpValidPCISlot(unsigned __int16 a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  _WORD v7[7]; // [rsp+30h] [rbp-38h] BYREF
  char v8[2]; // [rsp+3Eh] [rbp-2Ah] BYREF

  if ( a3 < 0x100 )
  {
    if ( (a3 & 0xE0) == 0 )
      return 1;
    v6 = a3 & 0x1F;
    HalpReadPCIConfig(a1, a2, v6, v7, 0, 0x10u);
    if ( v7[0] != 0xFFFF )
    {
      if ( v8[0] < 0 )
        return 1;
      if ( v7[0] == 0x8086 && v7[1] == 4654 )
      {
        v8[0] |= 0x80u;
        HalpWritePCIConfig(a1, a2, v6, v8, 0xEu, 1u);
        return 1;
      }
    }
  }
  return 0;
}
