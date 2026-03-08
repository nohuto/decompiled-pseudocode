/*
 * XREFs of SymCryptEcDsaTruncateHash @ 0x1403F3F38
 * Callers:
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 * Callees:
 *     SymCryptEcurveBitsizeofGroupOrder @ 0x1403F2C7C (SymCryptEcurveBitsizeofGroupOrder.c)
 *     SymCryptIntDivPow2 @ 0x1403F380C (SymCryptIntDivPow2.c)
 *     SymCryptIntSetValue @ 0x1403F391C (SymCryptIntSetValue.c)
 *     SymCryptIntToModElement @ 0x1403F39F0 (SymCryptIntToModElement.c)
 */

__int64 __fastcall SymCryptEcDsaTruncateHash(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // r14
  unsigned int v11; // esi
  unsigned int v12; // edi

  v8 = a4;
  if ( (a4 & 0xFFFFFFF7) != 0 )
  {
    return 32782;
  }
  else
  {
    v12 = SymCryptEcurveBitsizeofGroupOrder(a1);
    if ( 8 * a3 > v12 )
      a3 = (unsigned __int64)(v12 + 7) >> 3;
    v11 = SymCryptIntSetValue();
    if ( !v11 )
    {
      if ( (v8 & 8) == 0 && 8 * (int)a3 > v12 )
        SymCryptIntDivPow2();
      SymCryptIntToModElement(a6, *(_QWORD *)(a1 + 624), a5, a7, a8);
    }
  }
  return v11;
}
