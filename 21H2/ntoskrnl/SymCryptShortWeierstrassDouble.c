/*
 * XREFs of SymCryptShortWeierstrassDouble @ 0x140409980
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
 */

__int64 __fastcall SymCryptShortWeierstrassDouble(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rdi
  _DWORD *v15; // [rsp+30h] [rbp-A8h]
  __int64 v16; // [rsp+48h] [rbp-90h]
  __int64 v17; // [rsp+50h] [rbp-88h]
  __int128 v18; // [rsp+60h] [rbp-78h] BYREF
  __int128 v19; // [rsp+70h] [rbp-68h]
  __int128 v20; // [rsp+80h] [rbp-58h]

  v15 = *(_DWORD **)(a1 + 616);
  v16 = a2 + 32;
  v17 = *(unsigned int *)(a1 + 36) + a2 + 32;
  v18 = 0LL;
  v7 = (__int64 *)&v18;
  v19 = 0LL;
  v8 = 6LL;
  v20 = 0LL;
  do
  {
    v9 = SymCryptModElementCreate();
    a5 += *(unsigned int *)(a1 + 36);
    *v7++ = v9;
    --v8;
  }
  while ( v8 );
  v10 = v18;
  SymCryptModSquare(v15);
  SymCryptModSquare(v15);
  v11 = *((_QWORD *)&v20 + 1);
  SymCryptModSquare(v15);
  v12 = *((_QWORD *)&v18 + 1);
  SymCryptModAdd(v15, v16);
  SymCryptModSquare(v15);
  SymCryptModSub(v15, v12);
  SymCryptModSub(v15, v12);
  SymCryptModAdd(v15, v12);
  SymCryptModSquare(v15);
  v13 = v19;
  SymCryptModSquare(v15);
  SymCryptModMul(v15, v13);
  SymCryptModAdd(v15, v13);
  SymCryptModAdd(v15, v10);
  SymCryptModAdd(v15, v13);
  SymCryptModSquare(v15);
  SymCryptModSub(v15, v10);
  SymCryptModSub(v15, v10);
  SymCryptModSub(v15, v12);
  SymCryptModMul(v15, v13);
  SymCryptModAdd(v15, v11);
  SymCryptModAdd(v15, v11);
  SymCryptModAdd(v15, v11);
  SymCryptModSub(v15, v12);
  SymCryptModAdd(v15, v17);
  SymCryptModSquare(v15);
  SymCryptModSub(v15, v13);
  SymCryptModSub(v15, v13);
  SymCryptModElementCopy();
  SymCryptModElementCopy();
  return SymCryptModElementCopy();
}
