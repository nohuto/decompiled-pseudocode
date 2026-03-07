__int64 __fastcall SymCryptTwistedEdwardsAdd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rbx
  __int64 *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rdi
  _DWORD *v18; // [rsp+30h] [rbp-E8h]
  __int64 v22; // [rsp+60h] [rbp-B8h]
  __int64 v23[8]; // [rsp+80h] [rbp-98h] BYREF

  memset(v23, 0, sizeof(v23));
  v18 = *(_DWORD **)(a1 + 616);
  v10 = (unsigned int)SymCryptSizeofModElementFromModulus((__int64)v18);
  v11 = v23;
  v12 = 8LL;
  do
  {
    a6 += v10;
    *v11 = SymCryptModElementCreate();
    a7 -= v10;
    ++v11;
    --v12;
  }
  while ( v12 );
  v22 = *(unsigned int *)(a1 + 36);
  SymCryptModMul(v18, a2 + 32);
  SymCryptModMul(v18, v22 + a2 + 32);
  SymCryptModMul(v18, (unsigned int)(3 * v22) + a2 + 32);
  SymCryptModMul(v18, *(_QWORD *)(a1 + 640));
  v13 = v23[3];
  SymCryptModMul(v18, (unsigned int)(2 * v22) + a2 + 32);
  v14 = v23[4];
  SymCryptModAdd(v18, a2 + 32);
  v15 = v23[5];
  SymCryptModAdd(v18, a3 + 32);
  SymCryptModMul(v18, v14);
  SymCryptModSub(v18, v14);
  SymCryptModSub(v18, v14);
  SymCryptModSub(v18, v13);
  v16 = v23[6];
  SymCryptModAdd(v18, v13);
  SymCryptModMul(v18, *(_QWORD *)(a1 + 632));
  SymCryptModSub(v18, v23[1]);
  SymCryptModMul(v18, v14);
  SymCryptModMul(v18, v16);
  SymCryptModMul(v18, v14);
  return SymCryptModMul(v18, v15);
}
