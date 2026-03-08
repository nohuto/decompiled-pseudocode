/*
 * XREFs of SymCryptTwistedEdwardsOnCurve @ 0x1403FAA70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptModAdd @ 0x1403F3A54 (SymCryptModAdd.c)
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x1403F3B38 (SymCryptModElementIsEqual.c)
 *     SymCryptModMul @ 0x1403F3D74 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x1403F3E50 (SymCryptModSquare.c)
 *     SymCryptSizeofModElementFromModulus @ 0x1403F3F08 (SymCryptSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptTwistedEdwardsOnCurve(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r12
  __int64 v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v15; // [rsp+38h] [rbp-70h] BYREF
  __int128 v16; // [rsp+40h] [rbp-68h]
  __int64 v17; // [rsp+50h] [rbp-58h]

  v4 = (_DWORD *)a1[77];
  v17 = 0LL;
  v16 = 0LL;
  v8 = (unsigned int)SymCryptSizeofModElementFromModulus((__int64)v4);
  v9 = &v15;
  v10 = 4LL;
  do
  {
    a3 += v8;
    *v9 = SymCryptModElementCreate();
    a4 -= v8;
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = v15;
  SymCryptModSquare(v4);
  SymCryptModSquare(v4);
  v12 = *((_QWORD *)&v16 + 1);
  SymCryptModSquare(v4);
  v13 = v17;
  SymCryptModMul(v4, a1[79]);
  SymCryptModAdd(v4, v13);
  SymCryptModMul(v4, v13);
  SymCryptModMul(v4, v11);
  SymCryptModMul(v4, a1[80]);
  SymCryptModMul(v4, v12);
  SymCryptModAdd(v4, v12);
  return SymCryptModElementIsEqual();
}
