/*
 * XREFs of SymCryptMontgomeryIsEqual @ 0x1403FB190
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x1403F3B38 (SymCryptModElementIsEqual.c)
 *     SymCryptModMul @ 0x1403F3D74 (SymCryptModMul.c)
 *     SymCryptSizeofModElementFromModulus @ 0x1403F3F08 (SymCryptSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptMontgomeryIsEqual(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // rbp
  __int64 *v9; // rsi
  __int64 v11; // r15
  __int64 v12; // rbx
  _QWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = *(_DWORD **)(a1 + 616);
  v14[1] = 0LL;
  v9 = v14;
  v11 = 2LL;
  v12 = (unsigned int)SymCryptSizeofModElementFromModulus((__int64)v6);
  do
  {
    a5 += v12;
    *v9 = SymCryptModElementCreate();
    a6 -= v12;
    ++v9;
    --v11;
  }
  while ( v11 );
  SymCryptModMul(v6, a2 + 32);
  SymCryptModMul(v6, a3 + 32);
  return SymCryptModElementIsEqual();
}
