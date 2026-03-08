/*
 * XREFs of SymCryptTwistedEdwardsDouble @ 0x1403FA260
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptModAdd @ 0x1403F3A54 (SymCryptModAdd.c)
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModMul @ 0x1403F3D74 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x1403F3E50 (SymCryptModSquare.c)
 *     SymCryptModSub @ 0x1403F3E84 (SymCryptModSub.c)
 *     SymCryptSizeofModElementFromModulus @ 0x1403F3F08 (SymCryptSizeofModElementFromModulus.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall SymCryptTwistedEdwardsDouble(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v9; // r12
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdi
  _QWORD v21[8]; // [rsp+60h] [rbp-88h] BYREF

  memset(v21, 0, sizeof(v21));
  v9 = *(_DWORD **)(a1 + 616);
  v11 = v21;
  v12 = (unsigned int)SymCryptSizeofModElementFromModulus((__int64)v9);
  v13 = 8LL;
  do
  {
    a5 += v12;
    *v11 = SymCryptModElementCreate();
    a6 -= v12;
    ++v11;
    --v13;
  }
  while ( v13 );
  SymCryptModSquare(v9);
  SymCryptModSquare(v9);
  v14 = v21[2];
  SymCryptModSquare(v9);
  SymCryptModAdd(v9, v14);
  v15 = v21[3];
  SymCryptModMul(v9, *(_QWORD *)(a1 + 632));
  v16 = v21[4];
  SymCryptModAdd(v9, a2 + 32);
  SymCryptModSquare(v9);
  SymCryptModSub(v9, v16);
  SymCryptModSub(v9, v16);
  v17 = v21[6];
  SymCryptModAdd(v9, v15);
  v18 = v21[5];
  SymCryptModSub(v9, v17);
  SymCryptModSub(v9, v15);
  SymCryptModMul(v9, v16);
  SymCryptModMul(v9, v17);
  SymCryptModMul(v9, v16);
  return SymCryptModMul(v9, v18);
}
