/*
 * XREFs of SymCryptShortWeierstrassIsEqual @ 0x1403FCAC0
 * Callers:
 *     SymCryptShortWeierstrassAdd @ 0x1403FB6D0 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x1403F3B38 (SymCryptModElementIsEqual.c)
 *     SymCryptModMul @ 0x1403F3D74 (SymCryptModMul.c)
 *     SymCryptModNeg @ 0x1403F3DB0 (SymCryptModNeg.c)
 *     SymCryptModSquare @ 0x1403F3E50 (SymCryptModSquare.c)
 */

unsigned __int64 __fastcall SymCryptShortWeierstrassIsEqual(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  _DWORD *v5; // r13
  __int64 *v6; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbx
  int IsEqual; // r13d
  int v18; // edi
  _DWORD *v20; // [rsp+30h] [rbp-98h]
  __int64 v23; // [rsp+50h] [rbp-78h]
  __int64 v25; // [rsp+60h] [rbp-68h] BYREF
  __int128 v26; // [rsp+68h] [rbp-60h]
  __int64 v27; // [rsp+78h] [rbp-50h]

  v5 = *(_DWORD **)(a1 + 616);
  v6 = &v25;
  v27 = 0LL;
  v20 = v5;
  v11 = 4LL;
  v26 = 0LL;
  do
  {
    v12 = SymCryptModElementCreate();
    v13 = *(unsigned int *)(a1 + 36);
    a5 += v13;
    *v6++ = v12;
    --v11;
  }
  while ( v11 );
  v14 = (unsigned int)(2 * v13);
  v23 = v13;
  v15 = v14 + a3;
  v16 = v14 + a2;
  SymCryptModSquare(v5);
  SymCryptModSquare(v5);
  SymCryptModMul(v5, a2 + 32);
  SymCryptModMul(v5, a3 + 32);
  IsEqual = SymCryptModElementIsEqual();
  SymCryptModMul(v20, v16 + 32);
  SymCryptModMul(v20, v15 + 32);
  SymCryptModMul(v20, v23 + a2 + 32);
  SymCryptModMul(v20, v23 + 32 + a3);
  v18 = SymCryptModElementIsEqual();
  SymCryptModNeg(v20);
  LOBYTE(v16) = a4 | ((-(__int64)a4 & 0x100000000LL) == 0);
  return IsEqual & (v18 & ((unsigned __int64)-(v16 & 1) >> 32) | ((unsigned __int64)-(v16 & 2) >> 32) & (unsigned int)SymCryptModElementIsEqual());
}
