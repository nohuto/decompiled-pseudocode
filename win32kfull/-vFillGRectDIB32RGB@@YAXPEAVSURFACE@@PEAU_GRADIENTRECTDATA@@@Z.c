/*
 * XREFs of ?vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02FA0A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

void __fastcall vFillGRectDIB32RGB(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  __int64 v2; // r12
  int v4; // r13d
  __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rdx
  _DWORD *v11; // r15
  __int64 v12; // rax
  unsigned __int8 v13; // rcx^6
  __int64 v14; // r10
  __int64 v15; // r11
  _DWORD *v16; // r9
  _DWORD *v17; // r8
  unsigned __int64 v18; // rax
  char *v19; // rdi
  char *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r8
  void *v24; // r11
  unsigned int v25; // r10d
  unsigned __int64 v26; // r9
  __int64 v27; // [rsp+60h] [rbp+8h]
  __int64 v28; // [rsp+68h] [rbp+10h]
  __int64 v29; // [rsp+68h] [rbp+10h]
  __int64 v30; // [rsp+70h] [rbp+18h]

  v2 = *((int *)a1 + 22);
  v4 = *((_DWORD *)a2 + 11);
  v5 = *((_QWORD *)a2 + 6);
  v6 = *((_QWORD *)a2 + 7);
  v7 = *((_QWORD *)a2 + 8);
  if ( !*((_DWORD *)a2 + 38) )
  {
    v8 = *((_QWORD *)a1 + 10) + *((_DWORD *)a2 + 9) * (int)v2;
    v9 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v9 - 1) <= 0x9C3FFF )
    {
      v11 = (_DWORD *)AllocFreeTmpBuffer((unsigned int)(4 * v9));
      if ( v11 )
      {
        v12 = *((int *)a2 + 44);
        v13 = BYTE6(v7);
        v14 = *((_QWORD *)a2 + 14);
        v15 = *((_QWORD *)a2 + 15);
        if ( (int)v12 > 0 )
        {
          v5 += v14 * v12;
          v6 += v15 * v12;
          v10 = v7 + *((_QWORD *)a2 + 16) * v12;
          v7 = v10;
          v13 = BYTE6(v10);
        }
        v16 = v11;
        v17 = &v11[*((int *)a2 + 10)];
        if ( v11 != v17 )
        {
          v28 = *((_QWORD *)a2 + 16);
          do
          {
            v18 = HIWORD(v6);
            v7 += v28;
            v6 += v15;
            BYTE6(v18) = BYTE6(v5);
            v5 += v14;
            v10 = BYTE6(v18) | (((unsigned __int8)v18 | (v13 << 8)) << 8);
            v13 = BYTE6(v7);
            *v16++ = v10;
          }
          while ( v16 != v17 );
        }
        v19 = (char *)(v8 + 4LL * *((int *)a2 + 8));
        v20 = &v19[(int)v2 * v4];
        while ( v19 != v20 )
        {
          memmove(v19, v11, 4 * *((_DWORD *)a2 + 10));
          v19 += v2;
        }
        FreeTmpBuffer(v11, v10, v17);
      }
    }
    return;
  }
  v21 = *((int *)a2 + 45);
  v22 = *((_QWORD *)a2 + 10);
  v29 = *((_QWORD *)a2 + 12);
  if ( (int)v21 > 0 )
  {
    v5 += v22 * v21;
    v6 += *((_QWORD *)a2 + 11) * v21;
    v7 += *((_QWORD *)a2 + 12) * v21;
  }
  v23 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * (int)v2);
  if ( v4 )
  {
    v30 = *((int *)a1 + 22);
    v27 = *((_QWORD *)a2 + 11);
    while ( 1 )
    {
      --v4;
      v24 = (void *)v23;
      v25 = BYTE6(v5) | ((BYTE6(v6) | (BYTE6(v7) << 8)) << 8);
      v26 = (unsigned __int64)(4 * *((_DWORD *)a2 + 10)) >> 2;
      if ( v26 )
      {
        if ( (v23 & 4) == 0 )
          goto LABEL_21;
        *(_DWORD *)v23 = v25;
        if ( --v26 )
          break;
      }
LABEL_23:
      v7 += v29;
      v5 += v22;
      v23 += v30;
      v6 += v27;
      if ( !v4 )
        return;
    }
    v24 = (void *)(v23 + 4);
LABEL_21:
    memset64(v24, v25 | ((unsigned __int64)v25 << 32), v26 >> 1);
    if ( (v26 & 1) != 0 )
      *((_DWORD *)v24 + v26 - 1) = v25;
    goto LABEL_23;
  }
}
