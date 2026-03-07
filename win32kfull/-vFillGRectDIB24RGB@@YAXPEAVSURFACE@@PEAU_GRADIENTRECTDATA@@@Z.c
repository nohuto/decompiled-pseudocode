void __fastcall vFillGRectDIB24RGB(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  __int64 v3; // r12
  int v5; // r14d
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rax
  const void *v13; // r15
  _BYTE *v14; // r8
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  char v17; // rax^6
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  char *i; // rbx
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  _BYTE *v26; // rdx
  __int64 v27; // r11
  __int64 v28; // r12
  _BYTE *v29; // r8
  _BYTE *v30; // rax
  __int64 v31; // [rsp+70h] [rbp+8h]
  __int64 v32; // [rsp+78h] [rbp+10h]
  __int64 v33; // [rsp+80h] [rbp+18h]
  __int64 v34; // [rsp+88h] [rbp+20h]

  v3 = *((int *)a1 + 22);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  if ( *((_DWORD *)a2 + 38) )
  {
    v21 = *((_QWORD *)a2 + 10);
    v22 = *((_QWORD *)a2 + 11);
    v23 = *((_QWORD *)a2 + 12);
    v24 = *((_QWORD *)a1 + 10) + *((_DWORD *)a2 + 9) * (int)v3;
    v25 = *((int *)a2 + 45);
    if ( (int)v25 > 0 )
    {
      v6 += v21 * v25;
      v7 += v22 * v25;
      v8 += v23 * *((int *)a2 + 45);
    }
    v26 = (_BYTE *)(3 * *((_DWORD *)a2 + 8) + v24);
    if ( v5 )
    {
      v27 = *((int *)a1 + 22);
      v28 = *((_QWORD *)a2 + 12);
      do
      {
        --v5;
        v29 = v26;
        v30 = &v26[3 * *((_DWORD *)a2 + 10)];
        if ( v26 != v30 )
        {
          do
          {
            *v29 = BYTE6(v6);
            v29[1] = BYTE6(v7);
            v29[2] = BYTE6(v8);
            v29 += 3;
          }
          while ( v29 != v30 );
        }
        v6 += v21;
        v7 += v22;
        v8 += v28;
        v26 += v27;
      }
      while ( v5 );
    }
  }
  else
  {
    v9 = *((int *)a2 + 44);
    v10 = *((_QWORD *)a2 + 14);
    v32 = v10;
    v33 = *((_QWORD *)a2 + 15);
    v34 = *((_QWORD *)a2 + 16);
    v31 = *((_QWORD *)a2 + 6);
    if ( (int)v9 > 0 )
    {
      v7 += *((_QWORD *)a2 + 15) * v9;
      v31 = v6 + v10 * v9;
      v6 = v31;
      v8 += *((_QWORD *)a2 + 16) * v9;
    }
    v11 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v11 - 1) <= 0xD05554 )
    {
      v12 = AllocFreeTmpBuffer((unsigned int)(3 * v11));
      v13 = (const void *)v12;
      if ( v12 )
      {
        v14 = (_BYTE *)v12;
        v15 = (unsigned int)(3 * *((_DWORD *)a2 + 10));
        v16 = (_BYTE *)(v12 + (int)v15);
        if ( (_BYTE *)v12 != v16 )
        {
          v17 = BYTE6(v31);
          v15 = v32;
          do
          {
            v6 += v32;
            *v14 = v17;
            v18 = HIWORD(v7);
            v7 += v33;
            v14[1] = v18;
            v19 = HIWORD(v8);
            v8 += v34;
            v14[2] = v19;
            v14 += 3;
            v17 = BYTE6(v6);
          }
          while ( v14 != v16 );
        }
        for ( i = (char *)(*((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * (int)v3));
              v5;
              --v5 )
        {
          memmove(i, v13, 3 * *((_DWORD *)a2 + 10));
          i += v3;
        }
        FreeTmpBuffer(v13, v15, v14);
      }
    }
  }
}
