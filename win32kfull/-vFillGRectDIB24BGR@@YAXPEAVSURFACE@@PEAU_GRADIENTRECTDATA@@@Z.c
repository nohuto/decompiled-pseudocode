void __fastcall vFillGRectDIB24BGR(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  __int64 v3; // r12
  int v5; // r14d
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // ecx
  __int64 v13; // rax
  const void *v14; // r15
  _BYTE *v15; // r8
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  char v18; // rax^6
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  char *i; // rbx
  __int64 v22; // r15
  __int64 v23; // r13
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  _BYTE *v27; // rdx
  __int64 v28; // r11
  __int64 v29; // r12
  _BYTE *v30; // r8
  _BYTE *v31; // rax
  __int64 v32; // [rsp+70h] [rbp+8h]
  __int64 v33; // [rsp+78h] [rbp+10h]
  __int64 v34; // [rsp+80h] [rbp+18h]
  __int64 v35; // [rsp+88h] [rbp+20h]

  v3 = *((int *)a1 + 22);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  if ( *((_DWORD *)a2 + 38) )
  {
    v22 = *((_QWORD *)a2 + 10);
    v23 = *((_QWORD *)a2 + 11);
    v24 = *((_QWORD *)a2 + 12);
    v25 = *((_QWORD *)a1 + 10) + *((_DWORD *)a2 + 9) * (int)v3;
    v26 = *((int *)a2 + 45);
    if ( (int)v26 > 0 )
    {
      v6 += v22 * v26;
      v7 += v23 * v26;
      v8 += v24 * *((int *)a2 + 45);
    }
    v27 = (_BYTE *)(3 * *((_DWORD *)a2 + 8) + v25);
    if ( v5 )
    {
      v28 = *((int *)a1 + 22);
      v29 = *((_QWORD *)a2 + 12);
      do
      {
        --v5;
        v30 = v27;
        v31 = &v27[3 * *((_DWORD *)a2 + 10)];
        if ( v27 != v31 )
        {
          do
          {
            *v30 = BYTE6(v8);
            v30[1] = BYTE6(v7);
            v30[2] = BYTE6(v6);
            v30 += 3;
          }
          while ( v30 != v31 );
        }
        v6 += v22;
        v7 += v23;
        v8 += v29;
        v27 += v28;
      }
      while ( v5 );
    }
  }
  else
  {
    v9 = *((int *)a2 + 44);
    v10 = *((_QWORD *)a2 + 14);
    v11 = *((_QWORD *)a2 + 16);
    v33 = v10;
    v34 = *((_QWORD *)a2 + 15);
    v35 = v11;
    BYTE6(v32) = BYTE6(v8);
    if ( (int)v9 > 0 )
    {
      v6 += v10 * v9;
      v7 += *((_QWORD *)a2 + 15) * v9;
      v32 = v8 + v11 * v9;
      v8 = v32;
    }
    v12 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v12 - 1) <= 0xD05554 )
    {
      v13 = AllocFreeTmpBuffer((unsigned int)(3 * v12));
      v14 = (const void *)v13;
      if ( v13 )
      {
        v15 = (_BYTE *)v13;
        v16 = (unsigned int)(3 * *((_DWORD *)a2 + 10));
        v17 = (_BYTE *)(v13 + (int)v16);
        if ( (_BYTE *)v13 != v17 )
        {
          v18 = BYTE6(v32);
          v16 = v33;
          do
          {
            v8 += v35;
            *v15 = v18;
            v19 = HIWORD(v7);
            v7 += v34;
            v15[1] = v19;
            v20 = HIWORD(v6);
            v6 += v33;
            v15[2] = v20;
            v15 += 3;
            v18 = BYTE6(v8);
          }
          while ( v15 != v17 );
        }
        for ( i = (char *)(*((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * (int)v3));
              v5;
              --v5 )
        {
          memmove(i, v14, 3 * *((_DWORD *)a2 + 10));
          i += v3;
        }
        FreeTmpBuffer(v14, v16, v15);
      }
    }
  }
}
