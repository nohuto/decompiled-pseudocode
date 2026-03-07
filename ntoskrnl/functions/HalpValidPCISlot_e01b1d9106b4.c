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
