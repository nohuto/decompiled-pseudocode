__int64 __fastcall IopTranslateAndAdjustReqDesc(__int64 a1, __int64 a2, __int64 *a3)
{
  _DWORD *v3; // r14
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r15d
  __int64 v7; // rsi
  int v8; // edi
  char *Pool2; // r13
  _DWORD *v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // eax
  _OWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbp
  _OWORD *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // rsi
  _OWORD *v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 j; // rbx
  int *v27; // [rsp+30h] [rbp-78h]
  __int64 v28; // [rsp+40h] [rbp-68h]
  char *v29; // [rsp+48h] [rbp-60h]
  _OWORD **v30; // [rsp+50h] [rbp-58h]
  char v31; // [rsp+B0h] [rbp+8h]
  __int64 v32; // [rsp+B0h] [rbp+8h]
  int i; // [rsp+C8h] [rbp+20h]

  v3 = (_DWORD *)(a1 + 56);
  v4 = 0;
  v28 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0;
  v31 = 0;
  v7 = a1;
  v8 = -1073741823;
  if ( !v5 )
    return 3221225485LL;
  *a3 = 0LL;
  Pool2 = (char *)ExAllocatePool2(256LL, 8LL * v5, 538996816LL);
  if ( !Pool2 )
    return 3221225626LL;
  v10 = (_DWORD *)ExAllocatePool2(256LL, 4LL * (unsigned int)*v3, 538996816LL);
  if ( !v10 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  v11 = *(_QWORD *)(v7 + 64);
  v30 = (_OWORD **)(v7 + 64);
  v12 = 0LL;
  for ( i = 0; (unsigned int)v12 < *v3; i = v12 )
  {
    v27 = &v10[v12];
    v29 = &Pool2[8 * v12];
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, int *, char *))(v28 + 40))(
           *(_QWORD *)(v28 + 8),
           v11,
           *(_QWORD *)(v7 + 72),
           v27,
           v29);
    if ( v8 >= 0 && (v13 = *v27) != 0 )
    {
      v31 = 1;
    }
    else
    {
      *(_QWORD *)v29 = v11;
      v13 = 1;
      *v27 = 0;
    }
    v6 += v13;
    v11 += 32LL;
    if ( v8 >= 0 && v4 != 288 )
      v4 = v8;
    v12 = (unsigned int)(i + 1);
  }
  if ( v31 )
    v8 = v4;
  v14 = (_OWORD *)ExAllocatePool2(256LL, 32LL * v6, 538996816LL);
  if ( v14 )
  {
    v15 = ExAllocatePool2(256LL, 296LL, 538996816LL);
    v32 = v15;
    v16 = v15;
    if ( v15 )
    {
      v17 = (_OWORD *)v15;
      v18 = 2LL;
      do
      {
        *v17 = *(_OWORD *)v7;
        v17[1] = *(_OWORD *)(v7 + 16);
        v17[2] = *(_OWORD *)(v7 + 32);
        v17[3] = *(_OWORD *)(v7 + 48);
        v17[4] = *(_OWORD *)(v7 + 64);
        v17[5] = *(_OWORD *)(v7 + 80);
        v17[6] = *(_OWORD *)(v7 + 96);
        v17 += 8;
        v19 = *(_OWORD *)(v7 + 112);
        v7 += 128LL;
        *(v17 - 1) = v19;
        --v18;
      }
      while ( v18 );
      *v17 = *(_OWORD *)v7;
      v17[1] = *(_OWORD *)(v7 + 16);
      v20 = *(_QWORD *)(v7 + 32);
      v21 = 0LL;
      *((_QWORD *)v17 + 4) = v20;
      *(_QWORD *)(v16 + 16) = 0LL;
      *(_QWORD *)(v16 + 32) = 0LL;
      *(_DWORD *)(v16 + 56) = v6;
      *(_QWORD *)(v16 + 288) = a2;
      *(_QWORD *)(v16 + 48) = v16 + 40;
      *(_QWORD *)(v16 + 40) = v16 + 40;
      *(_QWORD *)(v16 + 64) = v14;
      *(_QWORD *)(v16 + 112) = v16 + 136;
      v22 = *v30;
      if ( *v3 )
      {
        while ( 1 )
        {
          v23 = v10[v21];
          if ( !v23 )
            break;
          memmove(v14, *(const void **)&Pool2[8 * v21], 32LL * v23);
          v24 = 32LL * (unsigned int)v10[v21];
LABEL_21:
          v22 += 2;
          v21 = (unsigned int)(v21 + 1);
          v14 = (_OWORD *)((char *)v14 + v24);
          if ( (unsigned int)v21 >= *v3 )
          {
            v16 = v32;
            goto LABEL_23;
          }
        }
        *v14 = *v22;
        v14[1] = v22[1];
        if ( *((_BYTE *)v14 + 1) != 1 )
        {
          if ( *((_BYTE *)v14 + 1) == 2 )
          {
LABEL_32:
            *((_DWORD *)v14 + 2) = 2;
            *((_DWORD *)v14 + 3) = 1;
            goto LABEL_33;
          }
          if ( *((_BYTE *)v14 + 1) != 3 )
          {
            if ( *((_BYTE *)v14 + 1) == 4 )
              goto LABEL_32;
            if ( *((_BYTE *)v14 + 1) == 6 )
            {
              *((_DWORD *)v14 + 3) = 2;
              *((_DWORD *)v14 + 4) = 1;
              goto LABEL_33;
            }
            if ( *((_BYTE *)v14 + 1) != 7 )
            {
LABEL_33:
              v24 = 32LL;
              goto LABEL_21;
            }
          }
        }
        *((_DWORD *)v14 + 5) = 0;
        *((_DWORD *)v14 + 7) = 0;
        *((_DWORD *)v14 + 4) = 2;
        *((_DWORD *)v14 + 6) = 1;
        goto LABEL_33;
      }
LABEL_23:
      *a3 = v16;
      goto LABEL_24;
    }
    ExFreePoolWithTag(v14, 0);
  }
  v8 = -1073741670;
LABEL_24:
  for ( j = 0LL; (unsigned int)j < *v3; j = (unsigned int)(j + 1) )
  {
    if ( v10[j] )
      ExFreePoolWithTag(*(PVOID *)&Pool2[8 * j], 0);
  }
  ExFreePoolWithTag(Pool2, 0);
  ExFreePoolWithTag(v10, 0);
  return (unsigned int)v8;
}
