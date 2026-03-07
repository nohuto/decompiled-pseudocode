__int64 __fastcall HalBuildScatterGatherListDmaThin(
        __int64 a1,
        __int64 a2,
        __int64 **a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char *P,
        unsigned int a10)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 **v12; // rsi
  unsigned __int64 v15; // rax
  unsigned int v16; // r15d
  unsigned int v17; // ebx
  char *v18; // r14
  __int64 v19; // rbp
  unsigned __int64 v20; // rdx
  char v21; // al
  char *v22; // rbx
  __int64 result; // rax
  unsigned int v24; // edi
  char *Pool2; // rax
  unsigned int v26; // [rsp+60h] [rbp+18h] BYREF

  v10 = *((unsigned int *)a3 + 11);
  v26 = 0;
  v11 = a4 - v10 - (_QWORD)a3[4];
  v12 = a3;
  while ( 1 )
  {
    v15 = *((unsigned int *)v12 + 10);
    if ( v11 < v15 )
      break;
    v12 = (__int64 **)*v12;
    v11 -= v15;
    if ( !v12 )
      return 3221225485LL;
  }
  v16 = a5;
  HalpGetNumberOfSGElementsDmaThin(v12, v11, a5, &v26);
  v17 = v26;
  v18 = P;
  v19 = 24LL * v26 + 16;
  v20 = 24LL * v26 + 120;
  if ( P )
  {
    if ( a10 < v20 )
      return 3221225507LL;
    *(_DWORD *)P = v26;
    v21 = 0;
    v22 = &v18[v19];
  }
  else
  {
    Pool2 = (char *)ExAllocatePool2(66LL, v20, 1147953480LL);
    v18 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_DWORD *)Pool2 = v17;
    v22 = &Pool2[v19];
    v21 = 1;
  }
  v22[97] = v21;
  *((_QWORD *)v22 + 3) = a1;
  *((_QWORD *)v22 + 4) = a2;
  *((_QWORD *)v22 + 5) = *(_QWORD *)(a2 + 32);
  *((_QWORD *)v22 + 8) = a6;
  *((_QWORD *)v22 + 9) = a7;
  *((_DWORD *)v22 + 14) = v16;
  *((_QWORD *)v22 + 6) = v12;
  *((_DWORD *)v22 + 15) = v11;
  *((_QWORD *)v22 + 10) = v18;
  v22[96] = 0;
  *((_DWORD *)v22 + 4) = 2;
  v22[98] = 0;
  *((_QWORD *)v22 + 11) = 0LL;
  result = HalpConstructScatterGatherListDmaThin(v22);
  v24 = result;
  if ( (int)result < 0 )
  {
    if ( v22[97] )
    {
      ExFreePoolWithTag(v18, 0);
      return v24;
    }
  }
  return result;
}
