/*
 * XREFs of HalWriteBootRegister @ 0x140A8D86C
 * Callers:
 *     HalpResetSBF @ 0x140A8D7E8 (HalpResetSBF.c)
 *     HalpInitBootTable @ 0x140B6316C (HalpInitBootTable.c)
 * Callees:
 *     HalpSetCmosData @ 0x14039F790 (HalpSetCmosData.c)
 */

__int64 __fastcall HalWriteBootRegister(unsigned __int8 a1)
{
  char v1; // r9
  unsigned int v3; // r11d
  char i; // r10
  char v5; // cl
  char v6; // r8
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !HalpSimpleBootFlagTable )
    return 3221225486LL;
  v3 = *(unsigned __int8 *)(HalpSimpleBootFlagTable + 36);
  for ( i = 1; (unsigned __int8)i < 0x80u; i *= 2 )
  {
    v5 = v1 + 1;
    if ( ((unsigned __int8)i & a1) == 0 )
      v5 = v1;
    v1 = v5;
  }
  if ( (v5 & 1) != 0 )
    v6 = a1 & 0x7F;
  else
    v6 = a1 | 0x80;
  v8 = v6;
  HalpSetCmosData(0LL, v3, (__int64)&v8, 1);
  return 0LL;
}
