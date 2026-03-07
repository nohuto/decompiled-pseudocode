void __fastcall vGradientFill32BGRA(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // r11
  struct SURFACE *v3; // r13
  int v4; // edi
  char *v5; // r14
  int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // r12
  int v9; // r15d
  int v10; // ebp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  int v15; // r10d
  _DWORD *v16; // r15
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r9
  int v19; // r10d
  int v20; // r10d
  unsigned __int64 v21; // r9
  int v22; // r10d
  unsigned __int64 v23; // r9
  __int64 v24; // [rsp+0h] [rbp-78h]
  __int64 v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+10h] [rbp-68h]
  __int64 v27; // [rsp+18h] [rbp-60h]
  __int64 v28; // [rsp+20h] [rbp-58h]
  int v31; // [rsp+98h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = *((_DWORD *)a2 + 28);
  v5 = (char *)a2 + 168;
  v6 = *((_DWORD *)a2 + 3);
  v7 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v4;
  v24 = *((_QWORD *)a2 + 2);
  v25 = *((_QWORD *)a2 + 3);
  v26 = *((_QWORD *)a2 + 4);
  v27 = *((_QWORD *)a2 + 5);
  if ( v6 >= *((_DWORD *)a2 + 29) )
    v6 = *((_DWORD *)a2 + 29);
  v31 = v6;
  if ( v4 < v6 )
  {
    v8 = *((int *)a1 + 22);
    v28 = v8;
    do
    {
      v9 = *(_DWORD *)v5;
      v10 = *((_DWORD *)v5 + 1);
      v11 = *((_QWORD *)v5 + 1);
      if ( *(_DWORD *)v5 <= *(_DWORD *)v2 )
        v9 = *(_DWORD *)v2;
      v12 = *((_QWORD *)v5 + 2);
      v13 = *((_QWORD *)v5 + 3);
      v14 = *((_QWORD *)v5 + 4);
      if ( v10 >= *((_DWORD *)v2 + 2) )
        v10 = *((_DWORD *)v2 + 2);
      if ( *((_QWORD *)v3 + 9) <= (unsigned __int64)(v7 + v9) && v9 < v10 )
      {
        v15 = *(_DWORD *)v2 - *(_DWORD *)v5;
        v16 = (_DWORD *)(v7 + 4LL * v9);
        v17 = v7 + 4LL * v10;
        if ( v15 > 0 )
        {
          v11 += v24 * v15;
          v12 += v25 * v15;
          v13 += v26 * v15;
          v14 += v27 * v15;
        }
        if ( (unsigned __int64)v16 < v17 )
        {
          do
          {
            v18 = v11;
            v11 += v24;
            v19 = HIBYTE(v14) << 8;
            v14 += v27;
            v20 = HIBYTE(v18) | v19;
            v21 = HIBYTE(v12);
            v12 += v25;
            v22 = v21 | (v20 << 8);
            v23 = HIBYTE(v13);
            v13 += v26;
            *v16++ = v23 | (v22 << 8);
          }
          while ( (unsigned __int64)v16 < v17 );
          v2 = a2;
          v6 = v31;
          v3 = a1;
          v8 = v28;
        }
      }
      v7 += v8;
      v5 += 40;
      ++v4;
    }
    while ( v4 < v6 );
  }
}
