/*
 * XREFs of SymCryptTwistedEdwardsIsEqual @ 0x1403FA730
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x1403F3B38 (SymCryptModElementIsEqual.c)
 *     SymCryptModMul @ 0x1403F3D74 (SymCryptModMul.c)
 *     SymCryptModNeg @ 0x1403F3DB0 (SymCryptModNeg.c)
 *     SymCryptSizeofModElementFromModulus @ 0x1403F3F08 (SymCryptSizeofModElementFromModulus.c)
 */

unsigned __int64 __fastcall SymCryptTwistedEdwardsIsEqual(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v6; // r12
  __int64 *v9; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rsi
  int IsEqual; // r12d
  int v15; // edi
  char v16; // bl
  _QWORD v18[11]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD *v19; // [rsp+90h] [rbp+8h]

  v6 = *(_DWORD **)(a1 + 616);
  v18[1] = 0LL;
  v19 = v6;
  v9 = v18;
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
  v13 = *(unsigned int *)(a1 + 36);
  SymCryptModMul(v6, a2 + 32);
  SymCryptModMul(v6, a3 + 32);
  IsEqual = SymCryptModElementIsEqual();
  SymCryptModNeg(v19);
  v15 = SymCryptModElementIsEqual();
  SymCryptModMul(v19, v13 + a2 + 32);
  SymCryptModMul(v19, v13 + a3 + 32);
  v16 = a4 | ((-(__int64)a4 & 0x100000000LL) == 0);
  return (IsEqual & ((unsigned __int64)-(__int64)(v16 & 1) >> 32) | v15 & (unsigned int)((unsigned __int64)-(__int64)(v16 & 2) >> 32)) & (unsigned int)SymCryptModElementIsEqual();
}
