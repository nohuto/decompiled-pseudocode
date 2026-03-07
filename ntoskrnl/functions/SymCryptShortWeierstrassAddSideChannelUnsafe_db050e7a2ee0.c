void *__fastcall SymCryptShortWeierstrassAddSideChannelUnsafe(__int64 a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, __int64 a5)
{
  _DWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v9; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  _BYTE *v15; // rdx
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // [rsp+30h] [rbp-89h]
  __int64 v25; // [rsp+38h] [rbp-81h]
  __int64 v26; // [rsp+40h] [rbp-79h]
  __int64 v27; // [rsp+48h] [rbp-71h]
  __int64 v28; // [rsp+58h] [rbp-61h]
  __int64 v29; // [rsp+60h] [rbp-59h]
  __int64 v30[8]; // [rsp+70h] [rbp-49h] BYREF

  v5 = *(_DWORD **)(a1 + 616);
  v6 = (__int64)(a2 + 32);
  v9 = *(unsigned int *)(a1 + 36);
  v25 = v6;
  v13 = (unsigned int)(2 * v9);
  v26 = (__int64)&a2[v9 + 32];
  v14 = (__int64)&a2[v13 + 32];
  v28 = (__int64)(a3 + 32);
  v27 = v14;
  v29 = (__int64)&a3[v9 + 32];
  v24 = (__int64)&a3[v13 + 32];
  memset(v30, 0, sizeof(v30));
  if ( (unsigned int)SymCryptModElementIsZero() )
  {
    v15 = a3;
    return SymCryptEcpointCopy(a1, v15, a4);
  }
  if ( (unsigned int)SymCryptModElementIsZero() )
  {
    v15 = a2;
    return SymCryptEcpointCopy(a1, v15, a4);
  }
  v17 = v30;
  v18 = 8LL;
  do
  {
    *v17++ = SymCryptModElementCreate();
    a5 += *(unsigned int *)(a1 + 36);
    --v18;
  }
  while ( v18 );
  SymCryptModSquare(v5);
  SymCryptModMul(v5, v14);
  SymCryptModSquare(v5);
  v19 = v30[2];
  SymCryptModMul(v5, v25);
  v20 = v30[3];
  SymCryptModMul(v5, v28);
  SymCryptModSub(v5, v20);
  if ( (unsigned int)SymCryptModElementIsZero() )
  {
    SymCryptModElementCopy();
    SymCryptModSquare(v5);
    SymCryptModSquare(v5);
    SymCryptModSquare(v5);
    SymCryptModAdd(v5, v25);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v30[1]);
    SymCryptModSub(v5, v30[1]);
    SymCryptModAdd(v5, v30[1]);
    SymCryptModSquare(v5);
    SymCryptModMul(v5, v19);
    SymCryptModAdd(v5, v19);
    SymCryptModAdd(v5, v30[0]);
    SymCryptModAdd(v5, v19);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v30[0]);
    SymCryptModSub(v5, v30[0]);
    SymCryptModSub(v5, v30[1]);
    SymCryptModMul(v5, v19);
    SymCryptModAdd(v5, v30[5]);
    SymCryptModAdd(v5, v30[5]);
    SymCryptModAdd(v5, v30[5]);
    SymCryptModSub(v5, v30[1]);
    SymCryptModAdd(v5, v26);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v19);
    SymCryptModSub(v5, v19);
  }
  else
  {
    v21 = v30[4];
    SymCryptModAdd(v5, v27);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v21);
    SymCryptModSub(v5, v21);
    SymCryptModMul(v5, v21);
    SymCryptModMul(v5, v24);
    SymCryptModMul(v5, v26);
    v22 = v30[7];
    SymCryptModMul(v5, v29);
    SymCryptModSub(v5, v22);
    SymCryptModAdd(v5, v22);
    SymCryptModAdd(v5, v30[5]);
    SymCryptModSquare(v5);
    SymCryptModMul(v5, v20);
    SymCryptModMul(v5, v30[2]);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v30[2]);
    SymCryptModSub(v5, v30[2]);
    SymCryptModSub(v5, v30[2]);
    SymCryptModSub(v5, v20);
    SymCryptModMul(v5, v20);
    v23 = v30[6];
    SymCryptModMul(v5, v30[6]);
    SymCryptModAdd(v5, v23);
    SymCryptModSub(v5, v20);
  }
  SymCryptModElementCopy();
  SymCryptModElementCopy();
  return (void *)SymCryptModElementCopy();
}
