void __fastcall vFillGRectDIB32Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r13d
  struct _GRADIENTRECTDATA *v3; // rbx
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  unsigned __int8 v9; // rdx^6
  unsigned __int8 v10; // r9^6
  unsigned __int8 v11; // r10^6
  __int64 v12; // rax
  char *v13; // rcx
  char *v14; // rdi
  char *v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // r13
  char *v18; // rdi
  char *v19; // rdi
  int v20; // ebp
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r13
  unsigned int v24; // eax
  void *v25; // r9
  unsigned __int64 v26; // r8
  char *v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+38h] [rbp-60h]
  char *v29; // [rsp+48h] [rbp-50h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  int v31; // [rsp+A0h] [rbp+8h]
  __int64 v32; // [rsp+A0h] [rbp+8h]
  int v34; // [rsp+B0h] [rbp+18h]
  __int64 v35; // [rsp+B0h] [rbp+18h]
  __int64 v36; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = a2;
  v34 = v2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v36 = v4;
  v31 = v5;
  if ( !*((_DWORD *)a2 + 38) )
  {
    v9 = BYTE6(*((_QWORD *)a2 + 8));
    v10 = BYTE6(v7);
    v11 = BYTE6(v6);
    v12 = *((int *)v3 + 44);
    if ( (int)v12 > 0 )
    {
      v6 += *((_QWORD *)v3 + 14) * v12;
      v7 += *((_QWORD *)v3 + 15) * v12;
      v11 = BYTE6(v6);
      v10 = BYTE6(v7);
      v8 += *((_QWORD *)v3 + 16) * *((int *)v3 + 44);
      v9 = BYTE6(v8);
    }
    v13 = (char *)(*((_QWORD *)a1 + 10) + *((_DWORD *)v3 + 9) * v2 + 4LL * *((int *)v3 + 8));
    v27 = v13;
    v14 = v13;
    v29 = v13;
    v15 = v13;
    if ( v13 != &v13[4 * *((int *)v3 + 10)] )
    {
      v28 = *((_QWORD *)v3 + 16);
      v16 = *((_QWORD *)v3 + 14);
      v17 = *((_QWORD *)v3 + 15);
      v18 = &v13[4 * *((int *)v3 + 10)];
      do
      {
        v6 += v16;
        v7 += v17;
        v8 += v28;
        *(_DWORD *)v15 = XEPALOBJ::ulDispatchGFPEFunction(
                           v36,
                           *(unsigned int *)(*(_QWORD *)v36 + 100LL),
                           v11 | ((v10 | (v9 << 8)) << 8));
        v15 += 4;
        v9 = BYTE6(v8);
        v10 = BYTE6(v7);
        v11 = BYTE6(v6);
      }
      while ( v15 != v18 );
      v14 = v29;
      v3 = a2;
      v13 = v29;
      v5 = v31;
      v2 = v34;
    }
    v19 = &v14[v2];
    v20 = v5 - 1;
    while ( v20 > 0 )
    {
      --v20;
      memmove(v19, v13, 4 * *((_DWORD *)v3 + 10));
      v13 = v27;
      v19 += v2;
    }
    return;
  }
  v21 = *((int *)a2 + 45);
  v32 = *((_QWORD *)a2 + 11);
  v35 = *((_QWORD *)a2 + 12);
  if ( (int)v21 > 0 )
  {
    v6 += *((_QWORD *)a2 + 10) * v21;
    v7 += *((_QWORD *)a2 + 11) * v21;
    v8 += *((_QWORD *)a2 + 12) * v21;
  }
  v22 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * v2);
  if ( v5 )
  {
    v30 = *((int *)a1 + 22);
    v23 = *((_QWORD *)a2 + 10);
    while ( 1 )
    {
      --v5;
      v24 = XEPALOBJ::ulDispatchGFPEFunction(
              v4,
              *(unsigned int *)(*(_QWORD *)v4 + 100LL),
              BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
      v25 = (void *)v22;
      v26 = (unsigned __int64)(4 * *((_DWORD *)v3 + 10)) >> 2;
      if ( v26 )
      {
        if ( (v22 & 4) == 0 )
          goto LABEL_20;
        *(_DWORD *)v22 = v24;
        if ( --v26 )
          break;
      }
LABEL_22:
      v7 += v32;
      v6 += v23;
      v8 += v35;
      v22 += v30;
      if ( !v5 )
        return;
    }
    v25 = (void *)(v22 + 4);
LABEL_20:
    memset64(v25, v24 | ((unsigned __int64)v24 << 32), v26 >> 1);
    v4 = v36;
    if ( (v26 & 1) != 0 )
      *((_DWORD *)v25 + v26 - 1) = v24;
    goto LABEL_22;
  }
}
