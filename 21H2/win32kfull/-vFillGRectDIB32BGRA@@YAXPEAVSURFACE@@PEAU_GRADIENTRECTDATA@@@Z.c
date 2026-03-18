/*
 * XREFs of ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C00E4030
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 */

void __fastcall vFillGRectDIB32BGRA(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v3; // r14d
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // r11
  void *v15; // r15
  unsigned int v16; // esi
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  int v19; // ecx
  int *v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r13
  int *v27; // r11
  int *v28; // r12
  __int64 v29; // rbp
  unsigned __int8 v30; // rax^6
  int v31; // r10d
  unsigned __int64 v32; // rax
  int v33; // r9d
  char *v34; // rdi
  char *i; // rbp
  __int64 v36; // [rsp+20h] [rbp-58h]
  __int64 v37; // [rsp+80h] [rbp+8h]
  int v38; // [rsp+88h] [rbp+10h]
  __int64 v39; // [rsp+88h] [rbp+10h]
  __int64 v40; // [rsp+90h] [rbp+18h]
  __int64 v41; // [rsp+98h] [rbp+20h]

  v3 = *((_DWORD *)a1 + 22);
  v4 = *((_DWORD *)a2 + 11);
  v38 = v4;
  if ( *((_DWORD *)a2 + 38) )
  {
    v5 = *((int *)a2 + 45);
    v6 = *((_QWORD *)a2 + 12);
    v7 = *((_QWORD *)a2 + 13);
    v8 = *((_QWORD *)a2 + 6);
    v9 = *((_QWORD *)a2 + 7);
    v10 = *((_QWORD *)a2 + 8);
    v11 = *((_QWORD *)a2 + 9);
    v12 = *((_QWORD *)a2 + 10);
    v13 = *((_QWORD *)a2 + 11);
    v37 = *((_QWORD *)a2 + 12);
    v39 = v7;
    if ( (int)v5 > 0 )
    {
      v8 += v12 * v5;
      v9 += v13 * v5;
      v10 += v6 * v5;
      v11 += v7 * v5;
    }
    v14 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(v3 * *((_DWORD *)a2 + 9));
    if ( v4 )
    {
      v40 = *((int *)a1 + 22);
      while ( 1 )
      {
        --v4;
        v15 = (void *)v14;
        v16 = BYTE6(v10) | ((BYTE6(v9) | ((BYTE6(v8) | (BYTE6(v11) << 8)) << 8)) << 8);
        v17 = (unsigned __int64)(4 * *((_DWORD *)a2 + 10)) >> 2;
        if ( v17 )
        {
          if ( (v14 & 4) == 0 )
            goto LABEL_8;
          *(_DWORD *)v14 = v16;
          if ( --v17 )
            break;
        }
LABEL_10:
        v10 += v37;
        v8 += v12;
        v11 += v39;
        v9 += v13;
        v14 += v40;
        if ( !v4 )
          return;
      }
      v15 = (void *)(v14 + 4);
LABEL_8:
      memset64(v15, v16 | ((unsigned __int64)v16 << 32), v17 >> 1);
      if ( (v17 & 1) != 0 )
        *((_DWORD *)v15 + v17 - 1) = v16;
      goto LABEL_10;
    }
  }
  else
  {
    v18 = *((_QWORD *)a1 + 10) + v3 * *((_DWORD *)a2 + 9);
    v19 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v19 - 1) <= 0x9C3FFF )
    {
      v20 = (int *)AllocFreeTmpBuffer((unsigned int)(4 * v19));
      if ( v20 )
      {
        v21 = *((int *)a2 + 44);
        v22 = *((_QWORD *)a2 + 6);
        v23 = *((_QWORD *)a2 + 7);
        v24 = *((_QWORD *)a2 + 8);
        v25 = *((_QWORD *)a2 + 9);
        v26 = *((_QWORD *)a2 + 14);
        v36 = *((_QWORD *)a2 + 17);
        if ( (int)v21 > 0 )
        {
          v22 += v26 * v21;
          v23 += *((_QWORD *)a2 + 15) * v21;
          v24 += *((_QWORD *)a2 + 16) * v21;
          v25 += *((_QWORD *)a2 + 17) * v21;
        }
        v27 = v20;
        v28 = &v20[*((int *)a2 + 10)];
        if ( v20 != v28 )
        {
          v41 = *((_QWORD *)a2 + 16);
          v29 = *((_QWORD *)a2 + 15);
          do
          {
            v30 = BYTE6(v25);
            v25 += v36;
            v31 = v30;
            v32 = HIWORD(v22);
            v22 += v26;
            BYTE6(v32) = BYTE6(v23);
            v23 += v29;
            v33 = BYTE6(v32);
            BYTE6(v32) = BYTE6(v24);
            v24 += v41;
            *v27++ = BYTE6(v32) | ((v33 | (((unsigned __int8)v32 | (v31 << 8)) << 8)) << 8);
          }
          while ( v27 != v28 );
          v4 = v38;
        }
        v34 = (char *)(v18 + 4LL * *((int *)a2 + 8));
        for ( i = &v34[v3 * v4]; v34 != i; v34 += v3 )
          memmove(v34, v20, 4 * *((_DWORD *)a2 + 10));
        FreeTmpBuffer(v20);
      }
    }
  }
}
