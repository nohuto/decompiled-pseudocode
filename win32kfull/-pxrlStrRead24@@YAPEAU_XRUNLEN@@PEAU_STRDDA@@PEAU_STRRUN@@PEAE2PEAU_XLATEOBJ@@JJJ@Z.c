/*
 * XREFs of ?pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E4270
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead24(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int iColor,
        int a7,
        int a8)
{
  __int64 v8; // r12
  _DWORD *v9; // rbx
  int v10; // r14d
  int v11; // r13d
  unsigned __int8 *v12; // rsi
  __int64 v13; // r10
  unsigned int *v14; // r8
  __int64 v15; // r11
  __int64 v16; // r9
  int *v17; // rdi
  __int64 v18; // rcx
  unsigned int *v19; // r13
  __int64 v20; // r15
  __int64 v21; // r12
  ULONG v22; // eax
  __int64 v23; // rcx
  ULONG *v24; // rdi
  unsigned int v26; // r8d
  __int64 v27; // rax
  unsigned __int8 *v28; // r9
  ULONG v29; // r11d
  char *v30; // r10
  __int64 v31; // rdx
  __int16 v32; // ax
  unsigned __int8 v33; // cl
  ULONG v34; // eax
  ULONG v35; // ecx
  __int64 v36; // r11
  __int64 v37; // rax
  ULONG *v38; // rdi
  ULONG v39; // eax
  __int64 i; // rcx
  unsigned int v41; // edx
  ULONG *v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  char *v45; // [rsp+20h] [rbp-10h]
  unsigned __int8 *v46; // [rsp+28h] [rbp-8h]
  ULONG v47; // [rsp+78h] [rbp+48h]
  __int64 v48; // [rsp+78h] [rbp+48h]
  __int64 v49; // [rsp+80h] [rbp+50h]
  __int64 v50; // [rsp+88h] [rbp+58h]
  ULONG iColora; // [rsp+98h] [rbp+68h]
  int v52; // [rsp+A8h] [rbp+78h]

  v8 = iColor;
  v9 = (_DWORD *)((char *)a2 + 8);
  HIBYTE(iColor) = 0;
  v10 = 0;
  HIBYTE(v47) = 0;
  v11 = *(_DWORD *)a1;
  v12 = &a3[2 * v8 + v8];
  if ( a4 )
  {
    v26 = a8 & 0x1F;
    v27 = (__int64)a8 >> 5;
    v52 = v26;
    v28 = &a4[4 * v27];
    v29 = *(_DWORD *)v28;
    iColora = *(_DWORD *)v28;
    v46 = v28;
    if ( (int)v8 < a7 )
    {
      v49 = 0LL;
      v30 = (char *)a1 + 32;
      v45 = (char *)a1 + 32;
      v31 = v26;
      while ( 1 )
      {
        v32 = *(_WORD *)v12;
        v33 = v12[2];
        v12 += 3;
        LOWORD(v47) = v32;
        BYTE2(v47) = v33;
        v50 = v31;
        if ( pxlo )
        {
          v34 = XLATEOBJ_iXlate(pxlo, v47);
          v26 = v52;
          v35 = v34;
          v28 = v46;
          v30 = v45;
          v31 = v50;
          v29 = iColora;
          HIBYTE(v47) = HIBYTE(v34);
        }
        else
        {
          v35 = v47;
        }
        if ( (v29 & dword_1C0319320[v31]) != 0 )
        {
          v36 = *(unsigned int *)v30;
          if ( (_DWORD)v36 )
          {
            v10 += v36;
            v37 = v49 + 2;
            v49 += v36;
            v38 = &v9[v37];
            v39 = v35;
            for ( i = (unsigned int)v36; i; --i )
              *v38++ = v39;
          }
          v29 = iColora;
        }
        else
        {
          if ( v10 > 0 )
          {
            *v9 = v11;
            v11 += v10;
            v9[1] = v10;
            v44 = v10;
            v10 = 0;
            v9 += v44 + 2;
            v49 = 0LL;
          }
          v11 += *(_DWORD *)v30;
        }
        v41 = v26 + 1;
        v30 += 4;
        LODWORD(v8) = v8 + 1;
        v45 = v30;
        if ( (int)v8 >= a7 )
          break;
        v42 = (ULONG *)(v28 + 4);
        v43 = v41 & 0x20;
        if ( (v41 & 0x20) != 0 )
        {
          v29 = *v42;
          iColora = *v42;
        }
        else
        {
          v42 = (ULONG *)v28;
        }
        v26 = 0;
        v46 = (unsigned __int8 *)v42;
        v28 = (unsigned __int8 *)v42;
        if ( (v41 & 0x20) == 0 )
          v26 = v41;
        v31 = 0LL;
        v52 = v26;
        if ( !v43 )
          v31 = v50 + 1;
      }
      if ( v10 > 0 )
      {
        *v9 = v11;
        v9[1] = v10;
        v9 += v10 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = v11;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    if ( (_DWORD)v8 != a7 )
    {
      if ( pxlo )
      {
        v48 = 0LL;
        v19 = (unsigned int *)((char *)a1 + 32);
        v20 = (unsigned int)(a7 - v8);
        do
        {
          v21 = *v19++;
          if ( (_DWORD)v21 )
          {
            LOWORD(iColor) = *(_WORD *)v12;
            BYTE2(iColor) = v12[2];
            v22 = XLATEOBJ_iXlate(pxlo, iColor);
            v10 += v21;
            HIBYTE(iColor) = HIBYTE(v22);
            v23 = (unsigned int)v21;
            v24 = &v9[v48 + 2];
            v48 += v21;
            while ( v23 )
            {
              *v24++ = v22;
              --v23;
            }
          }
          v12 += 3;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        v13 = 0LL;
        v14 = (unsigned int *)((char *)a1 + 32);
        v15 = (unsigned int)(a7 - v8);
        do
        {
          v16 = *v14++;
          LOWORD(iColor) = *(_WORD *)v12;
          BYTE2(iColor) = v12[2];
          if ( (_DWORD)v16 )
          {
            v17 = (int *)((char *)a2 + 4 * v13 + 16);
            v18 = (unsigned int)v16;
            v10 += v16;
            while ( v18 )
            {
              *v17++ = iColor;
              --v18;
            }
            v13 += v16;
          }
          v12 += 3;
          --v15;
        }
        while ( v15 );
      }
    }
    return (struct _XRUNLEN *)&v9[v10 + 2];
  }
}
