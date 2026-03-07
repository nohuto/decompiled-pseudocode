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
