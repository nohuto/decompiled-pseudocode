void __fastcall vFillGRectDIB32BGRA(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v3; // ebp
  int v4; // ebx
  __int64 v5; // rax
  int v6; // ecx
  int *v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // r15
  int *v17; // rax
  int *v18; // rbx
  unsigned __int8 v19; // r9^6
  int v20; // r11d
  unsigned __int64 v21; // r9
  int v22; // r10d
  char *v23; // rdi
  char *i; // rbx
  struct _GRADIENTRECTDATA *v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // r11
  void *v36; // rbp
  unsigned int v37; // ebx
  unsigned __int64 v38; // rsi
  int v39; // [rsp+60h] [rbp+8h]
  int v40; // [rsp+60h] [rbp+8h]
  __int64 v42; // [rsp+68h] [rbp+10h]
  int v43; // [rsp+70h] [rbp+18h]

  v3 = *((_DWORD *)a1 + 22);
  v4 = *((_DWORD *)a2 + 11);
  v43 = v3;
  v39 = v4;
  if ( !*((_DWORD *)a2 + 38) )
  {
    v5 = *((_QWORD *)a1 + 10) + *((_DWORD *)a2 + 9) * v3;
    v6 = *((_DWORD *)a2 + 10);
    v42 = v5;
    if ( (unsigned int)(v6 - 1) <= 0x9C3FFF )
    {
      v7 = (int *)AllocFreeTmpBuffer((unsigned int)(4 * v6));
      if ( v7 )
      {
        v8 = *((int *)a2 + 44);
        v9 = *((_QWORD *)a2 + 6);
        v10 = *((_QWORD *)a2 + 7);
        v11 = *((_QWORD *)a2 + 8);
        v12 = *((_QWORD *)a2 + 9);
        v13 = *((_QWORD *)a2 + 14);
        v14 = *((_QWORD *)a2 + 15);
        v15 = *((_QWORD *)a2 + 16);
        v16 = *((_QWORD *)a2 + 17);
        if ( (int)v8 > 0 )
        {
          v9 += v13 * v8;
          v10 += v14 * v8;
          v11 += v15 * v8;
          v12 += v16 * *((int *)a2 + 44);
        }
        v17 = v7;
        v18 = &v7[*((int *)a2 + 10)];
        if ( v7 != v18 )
        {
          do
          {
            v19 = BYTE6(v12);
            v12 += v16;
            v20 = v19;
            v21 = HIWORD(v9);
            v9 += v13;
            BYTE6(v21) = BYTE6(v10);
            v10 += v14;
            v22 = BYTE6(v21);
            BYTE6(v21) = BYTE6(v11);
            v11 += v15;
            *v17++ = BYTE6(v21) | ((v22 | (((unsigned __int8)v21 | (v20 << 8)) << 8)) << 8);
          }
          while ( v17 != v18 );
        }
        v23 = (char *)(v42 + 4LL * *((int *)a2 + 8));
        for ( i = &v23[v43 * v39]; v23 != i; v23 += v43 )
          memmove(v23, v7, 4 * *((_DWORD *)a2 + 10));
        FreeTmpBuffer(v7, v10, v12);
      }
    }
    return;
  }
  v25 = a2;
  v26 = *((_QWORD *)a2 + 7);
  v27 = *((_QWORD *)a2 + 8);
  v28 = *((_QWORD *)a2 + 9);
  v29 = *((int *)a2 + 45);
  v30 = *((_QWORD *)a2 + 10);
  v31 = *((_QWORD *)a2 + 11);
  v32 = *((_QWORD *)a2 + 12);
  v33 = *((_QWORD *)a2 + 6);
  v34 = *((_QWORD *)a2 + 13);
  if ( (int)v29 > 0 )
  {
    v33 += v30 * v29;
    v26 += v31 * v29;
    v27 += v32 * v29;
    v28 += v34 * *((int *)a2 + 45);
  }
  v35 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * v3);
  if ( v4 )
  {
    while ( 1 )
    {
      v36 = (void *)v35;
      v40 = v4 - 1;
      v37 = BYTE6(v27) | ((BYTE6(v26) | ((BYTE6(v33) | (BYTE6(v28) << 8)) << 8)) << 8);
      v38 = (unsigned __int64)(4 * *((_DWORD *)v25 + 10)) >> 2;
      if ( v38 )
      {
        if ( (v35 & 4) == 0 )
          goto LABEL_19;
        *(_DWORD *)v35 = v37;
        if ( --v38 )
          break;
      }
LABEL_21:
      v33 += v30;
      v4 = v40;
      v35 += v43;
      v25 = a2;
      v26 += v31;
      v27 += v32;
      v28 += v34;
      if ( !v40 )
        return;
    }
    v36 = (void *)(v35 + 4);
LABEL_19:
    memset64(v36, v37 | ((unsigned __int64)v37 << 32), v38 >> 1);
    if ( (v38 & 1) != 0 )
      *((_DWORD *)v36 + v38 - 1) = v37;
    goto LABEL_21;
  }
}
