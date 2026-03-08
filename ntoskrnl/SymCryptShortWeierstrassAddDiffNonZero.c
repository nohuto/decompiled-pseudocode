/*
 * XREFs of SymCryptShortWeierstrassAddDiffNonZero @ 0x1403FB890
 * Callers:
 *     SymCryptShortWeierstrassAdd @ 0x1403FB6D0 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptModAdd @ 0x1403F3A54 (SymCryptModAdd.c)
 *     SymCryptModElementCopy @ 0x1403F3AD4 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModMul @ 0x1403F3D74 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x1403F3E50 (SymCryptModSquare.c)
 *     SymCryptModSub @ 0x1403F3E84 (SymCryptModSub.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall SymCryptShortWeierstrassAddDiffNonZero(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  _DWORD *v6; // r14
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 *v11; // rdi
  __int64 v12; // rbp
  _DWORD *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rbx
  _DWORD *v21; // [rsp+30h] [rbp-E8h]
  __int64 v22; // [rsp+38h] [rbp-E0h]
  __int64 v23; // [rsp+40h] [rbp-D8h]
  __int64 v24; // [rsp+48h] [rbp-D0h]
  __int64 v25; // [rsp+50h] [rbp-C8h]
  __int64 v26; // [rsp+58h] [rbp-C0h]
  __int64 v27; // [rsp+60h] [rbp-B8h]
  _QWORD v28[8]; // [rsp+80h] [rbp-98h] BYREF

  v5 = *(unsigned int *)(a1 + 36);
  v6 = *(_DWORD **)(a1 + 616);
  v23 = a2 + 32;
  v26 = v5 + a2 + 32;
  v9 = (unsigned int)(2 * v5);
  v24 = a3 + 32;
  v10 = v9 + a2 + 32;
  v21 = v6;
  v25 = v10;
  v27 = v5 + a3 + 32;
  v22 = v9 + a3 + 32;
  memset(v28, 0, sizeof(v28));
  v11 = v28;
  v12 = 8LL;
  do
  {
    *v11++ = SymCryptModElementCreate();
    a5 += *(unsigned int *)(a1 + 36);
    --v12;
  }
  while ( v12 );
  v13 = v6;
  SymCryptModSquare(v6);
  SymCryptModMul(v6, v10);
  v14 = v28[6];
  SymCryptModSquare(v6);
  v15 = v28[2];
  SymCryptModMul(v13, v23);
  v16 = v28[3];
  SymCryptModMul(v13, v24);
  v17 = v28[5];
  SymCryptModSub(v13, v16);
  v18 = v28[4];
  SymCryptModAdd(v21, v25);
  SymCryptModSquare(v21);
  SymCryptModSub(v21, v18);
  SymCryptModSub(v21, v18);
  SymCryptModMul(v21, v18);
  SymCryptModMul(v21, v22);
  SymCryptModMul(v21, v26);
  v19 = v28[7];
  SymCryptModMul(v21, v27);
  SymCryptModSub(v21, v19);
  SymCryptModAdd(v21, v19);
  SymCryptModAdd(v21, v17);
  SymCryptModSquare(v21);
  SymCryptModMul(v21, v16);
  SymCryptModMul(v21, v15);
  SymCryptModSquare(v21);
  SymCryptModSub(v21, v15);
  SymCryptModSub(v21, v15);
  SymCryptModSub(v21, v15);
  SymCryptModSub(v21, v16);
  SymCryptModMul(v21, v16);
  SymCryptModMul(v21, v14);
  SymCryptModAdd(v21, v14);
  SymCryptModSub(v21, v16);
  SymCryptModElementCopy();
  SymCryptModElementCopy();
  return SymCryptModElementCopy();
}
