__int64 __fastcall PpmHeteroComputeUnparkCount(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        _DWORD *a10)
{
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  __int64 v13; // r11
  __int64 v14; // r13
  unsigned int *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned int *v19; // r14
  unsigned __int8 *v20; // rbp
  __int64 *v21; // r13
  __int64 v22; // r15
  __int64 v23; // r8
  __int64 v24; // r14
  int v25; // ebp
  __int64 v26; // r8
  unsigned int v27; // r13d
  __int64 result; // rax
  unsigned int v29; // [rsp+20h] [rbp-58h]
  int v30; // [rsp+80h] [rbp+8h]
  __int64 v33; // [rsp+98h] [rbp+20h]

  v33 = a4;
  v30 = a1;
  v10 = a8;
  v11 = 0;
  v13 = a3;
  v14 = a2;
  if ( a8 )
  {
    v15 = a6;
    v16 = a8;
    do
    {
      v17 = *v15++;
      a7 -= v17;
      --v16;
    }
    while ( v16 );
    a4 = v33;
  }
  LODWORD(v18) = a8;
  if ( a8 < a9 )
  {
    v19 = &a6[a8];
    v20 = (unsigned __int8 *)(v14 + a8 + (a1 != 0 ? 353LL : 289LL));
    v21 = (__int64 *)(a5 + 8LL * a8);
    v22 = a4 - (_QWORD)a6;
    do
    {
      v23 = 0LL;
      if ( a5 )
        v23 = *v21;
      v29 = *v20;
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                            v13,
                            *(unsigned int *)((char *)v19 + v22),
                            v23,
                            *v20) )
        break;
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(a3, a7, 0LL, v29) )
        break;
      v13 = a3;
      a7 -= *v19;
      LODWORD(v18) = v18 + 1;
      ++v20;
      ++v21;
      ++v19;
    }
    while ( (unsigned int)v18 < a9 );
    v10 = a8;
    if ( (unsigned int)v18 > a8 )
    {
      v11 = 2;
      goto LABEL_26;
    }
    a1 = v30;
    v13 = a3;
    v14 = a2;
  }
  if ( (_DWORD)v18 )
  {
    v24 = a1 != 0 ? 225LL : 161LL;
    while ( 1 )
    {
      v25 = v18;
      v18 = (unsigned int)(v18 - 1);
      v26 = 0LL;
      a7 += a6[v18];
      if ( a5 )
        v26 = *(_QWORD *)(a5 + 8 * v18);
      v27 = *(unsigned __int8 *)(v24 + v18 + v14);
      if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v13, *(unsigned int *)(v33 + 4 * v18), v26, v27) )
      {
        if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(a3, a7, 0LL, v27) )
          break;
      }
      if ( !(_DWORD)v18 )
        goto LABEL_24;
      v13 = a3;
      v14 = a2;
    }
    LODWORD(v18) = v25;
  }
LABEL_24:
  if ( (unsigned int)v18 < v10 )
    v11 = 1;
LABEL_26:
  result = v11;
  *a10 = v18;
  return result;
}
