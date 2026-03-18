/*
 * XREFs of SymCryptShortWeierstrassAddDiffNonZero @ 0x140408D00
 * Callers:
 *     SymCryptShortWeierstrassAdd @ 0x140408B40 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SymCryptModAdd @ 0x140400EB4 (SymCryptModAdd.c)
 *     SymCryptModElementCopy @ 0x140400F34 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x140400F4C (SymCryptModElementCreate.c)
 *     SymCryptModMul @ 0x1404011D4 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x1404012B0 (SymCryptModSquare.c)
 *     SymCryptModSub @ 0x1404012E4 (SymCryptModSub.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall SymCryptShortWeierstrassAddDiffNonZero(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  _DWORD *v6; // r14
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rax
  _DWORD *v14; // rsi
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rbx
  _DWORD *v22; // [rsp+30h] [rbp-E8h]
  __int64 v23; // [rsp+38h] [rbp-E0h]
  __int64 v24; // [rsp+40h] [rbp-D8h]
  __int64 v25; // [rsp+48h] [rbp-D0h]
  __int64 v26; // [rsp+50h] [rbp-C8h]
  __int64 v27; // [rsp+58h] [rbp-C0h]
  __int64 v28; // [rsp+60h] [rbp-B8h]
  _QWORD v29[8]; // [rsp+80h] [rbp-98h] BYREF

  v5 = *(unsigned int *)(a1 + 36);
  v6 = *(_DWORD **)(a1 + 616);
  v24 = a2 + 32;
  v27 = v5 + a2 + 32;
  v9 = (unsigned int)(2 * v5);
  v25 = a3 + 32;
  v10 = v9 + a2 + 32;
  v22 = v6;
  v26 = v10;
  v28 = v5 + a3 + 32;
  v23 = v9 + a3 + 32;
  memset(v29, 0, sizeof(v29));
  v11 = v29;
  v12 = 8LL;
  do
  {
    v13 = SymCryptModElementCreate();
    a5 += *(unsigned int *)(a1 + 36);
    *v11++ = v13;
    --v12;
  }
  while ( v12 );
  v14 = v6;
  SymCryptModSquare(v6);
  SymCryptModMul(v6, v10);
  v15 = v29[6];
  SymCryptModSquare(v6);
  v16 = v29[2];
  SymCryptModMul(v14, v24);
  v17 = v29[3];
  SymCryptModMul(v14, v25);
  v18 = v29[5];
  SymCryptModSub(v14, v17);
  v19 = v29[4];
  SymCryptModAdd(v22, v26);
  SymCryptModSquare(v22);
  SymCryptModSub(v22, v19);
  SymCryptModSub(v22, v19);
  SymCryptModMul(v22, v19);
  SymCryptModMul(v22, v23);
  SymCryptModMul(v22, v27);
  v20 = v29[7];
  SymCryptModMul(v22, v28);
  SymCryptModSub(v22, v20);
  SymCryptModAdd(v22, v20);
  SymCryptModAdd(v22, v18);
  SymCryptModSquare(v22);
  SymCryptModMul(v22, v17);
  SymCryptModMul(v22, v16);
  SymCryptModSquare(v22);
  SymCryptModSub(v22, v16);
  SymCryptModSub(v22, v16);
  SymCryptModSub(v22, v16);
  SymCryptModSub(v22, v17);
  SymCryptModMul(v22, v17);
  SymCryptModMul(v22, v15);
  SymCryptModAdd(v22, v15);
  SymCryptModSub(v22, v17);
  SymCryptModElementCopy();
  SymCryptModElementCopy();
  return SymCryptModElementCopy();
}
