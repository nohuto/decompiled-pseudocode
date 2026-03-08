/*
 * XREFs of SymCryptShortWeierstrassDouble @ 0x1403FC510
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
 */

__int64 __fastcall SymCryptShortWeierstrassDouble(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r8
  __int64 *v8; // rbx
  __int64 v9; // rsi
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

  v6 = *(unsigned int *)(a1 + 36);
  v15 = *(_DWORD **)(a1 + 616);
  v18 = 0LL;
  v16 = a2 + 32;
  v17 = v6 + a2 + 32;
  v19 = 0LL;
  v8 = (__int64 *)&v18;
  v20 = 0LL;
  v9 = 6LL;
  do
  {
    *v8++ = SymCryptModElementCreate();
    a5 += *(unsigned int *)(a1 + 36);
    --v9;
  }
  while ( v9 );
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
