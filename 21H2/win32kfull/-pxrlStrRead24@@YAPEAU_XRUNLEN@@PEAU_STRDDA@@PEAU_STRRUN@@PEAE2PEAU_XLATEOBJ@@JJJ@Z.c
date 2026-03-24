/*
 * XREFs of ?pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0138AD0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C8500 (XLATEOBJ_iXlate.c)
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
  __int64 v8; // r15
  _DWORD *v9; // r14
  int v10; // esi
  int v11; // r13d
  unsigned __int8 *v12; // rbx
  unsigned __int8 *v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned int *v17; // r9
  __int64 v18; // r8
  int *v19; // rdi
  __int64 v20; // rcx
  unsigned int *v22; // r13
  __int64 v23; // r15
  ULONG v24; // eax
  __int64 v25; // rcx
  ULONG *v26; // rdi
  int v27; // r8d
  __int64 v28; // rax
  unsigned int v29; // r10d
  unsigned __int8 *v30; // r11
  char *v31; // r9
  __int64 v32; // rdx
  unsigned __int8 v33; // al
  ULONG v34; // eax
  ULONG v35; // ecx
  __int64 v36; // r11
  __int64 v37; // rax
  ULONG *v38; // rdi
  ULONG v39; // eax
  __int64 i; // rcx
  unsigned int v41; // edx
  int v42; // ecx
  unsigned __int8 *v43; // rax
  unsigned __int8 *v44; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+28h] [rbp-50h]
  char *v46; // [rsp+30h] [rbp-48h]
  ULONG v47; // [rsp+88h] [rbp+10h]
  __int64 v48; // [rsp+88h] [rbp+10h]
  int v49; // [rsp+90h] [rbp+18h]
  __int64 v50; // [rsp+98h] [rbp+20h]
  ULONG iColora; // [rsp+A8h] [rbp+30h]
  int v52; // [rsp+B8h] [rbp+40h]

  v8 = iColor;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = 0;
  v11 = *(_DWORD *)a1;
  v12 = &a3[2 * iColor];
  HIBYTE(iColor) = 0;
  v13 = &v12[v8];
  HIBYTE(v47) = 0;
  if ( a4 )
  {
    v27 = 0;
    iColora = 0;
    v28 = (__int64)a8 >> 5;
    v29 = a8 & 0x1F;
    v52 = v29;
    v30 = &a4[4 * v28];
    v49 = *(_DWORD *)v30;
    v44 = v30;
    if ( (int)v8 < a7 )
    {
      v31 = (char *)a1 + 32;
      v50 = 0LL;
      v46 = (char *)a1 + 32;
      v32 = v29;
      while ( 1 )
      {
        LOWORD(v47) = *(_WORD *)v13;
        v33 = v13[2];
        v13 += 3;
        BYTE2(v47) = v33;
        v45 = v32;
        if ( pxlo )
        {
          v34 = XLATEOBJ_iXlate(pxlo, v47);
          v27 = iColora;
          v35 = v34;
          v29 = v52;
          v31 = v46;
          v32 = v45;
          v30 = v44;
          HIBYTE(v47) = HIBYTE(v34);
        }
        else
        {
          v35 = v47;
        }
        if ( (dword_1C02F0B60[v32] & v49) != 0 )
        {
          v36 = *(unsigned int *)v31;
          if ( (_DWORD)v36 )
          {
            v27 += v36;
            v37 = v50 + 2;
            iColora = v27;
            v50 += v36;
            v38 = &v9[v37];
            v39 = v35;
            for ( i = (unsigned int)v36; i; --i )
              *v38++ = v39;
          }
          v30 = v44;
        }
        else
        {
          if ( v27 > 0 )
          {
            *v9 = v11;
            v9[1] = v27;
            iColora = 0;
            v50 = 0LL;
            v9 += v27 + 2;
            v11 += v27;
            v27 = 0;
          }
          v11 += *(_DWORD *)v31;
        }
        v41 = v29 + 1;
        v31 += 4;
        LODWORD(v8) = v8 + 1;
        v46 = v31;
        if ( (int)v8 >= a7 )
          break;
        v42 = v41 & 0x20;
        if ( (v41 & 0x20) != 0 )
          v49 = *((_DWORD *)v30 + 1);
        v43 = v30 + 4;
        v29 = 0;
        if ( (v41 & 0x20) == 0 )
        {
          v29 = v41;
          v43 = v30;
        }
        v32 = 0LL;
        v44 = v43;
        if ( !v42 )
          v32 = v45 + 1;
        v52 = v29;
        v30 = v43;
      }
      if ( v27 > 0 )
      {
        *v9 = v11;
        v9[1] = v27;
        v9 += v27 + 2;
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
      v14 = (unsigned int)(a7 - v8);
      if ( pxlo )
      {
        v48 = 0LL;
        v22 = (unsigned int *)((char *)a1 + 32);
        do
        {
          v23 = *v22++;
          if ( (_DWORD)v23 )
          {
            LOWORD(iColor) = *(_WORD *)v13;
            BYTE2(iColor) = v13[2];
            v24 = XLATEOBJ_iXlate(pxlo, iColor);
            v10 += v23;
            HIBYTE(iColor) = HIBYTE(v24);
            v25 = (unsigned int)v23;
            v26 = &v9[v48 + 2];
            v48 += v23;
            while ( v25 )
            {
              *v26++ = v24;
              --v25;
            }
          }
          v13 += 3;
          --v14;
        }
        while ( v14 );
      }
      else
      {
        v15 = 0LL;
        v16 = (unsigned int)v14;
        v17 = (unsigned int *)((char *)a1 + 32);
        do
        {
          v18 = *v17++;
          LOWORD(iColor) = *(_WORD *)v13;
          BYTE2(iColor) = v13[2];
          if ( (_DWORD)v18 )
          {
            v19 = (int *)((char *)a2 + 4 * v15 + 16);
            v20 = (unsigned int)v18;
            v10 += v18;
            while ( v20 )
            {
              *v19++ = iColor;
              --v20;
            }
            v15 += v18;
          }
          v13 += 3;
          --v16;
        }
        while ( v16 );
      }
    }
    return (struct _XRUNLEN *)&v9[v10 + 2];
  }
}
