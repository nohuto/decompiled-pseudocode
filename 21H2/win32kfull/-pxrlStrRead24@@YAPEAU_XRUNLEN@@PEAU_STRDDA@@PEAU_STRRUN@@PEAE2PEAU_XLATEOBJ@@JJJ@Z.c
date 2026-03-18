/*
 * XREFs of ?pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0125670
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00D5950 (XLATEOBJ_iXlate.c)
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
  int v11; // r12d
  unsigned __int8 *v12; // rbx
  unsigned __int8 *v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned int *v17; // r9
  __int64 v18; // r8
  int *v19; // rdi
  __int64 v20; // rcx
  unsigned int *v22; // r12
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
  __int16 v33; // ax
  unsigned __int8 v34; // cl
  ULONG v35; // eax
  ULONG v36; // ecx
  __int64 v37; // r11
  __int64 v38; // rax
  ULONG *v39; // rdi
  ULONG v40; // eax
  __int64 i; // rcx
  unsigned int v42; // edx
  int v43; // ecx
  unsigned __int8 *v44; // rax
  unsigned __int8 *v45; // [rsp+20h] [rbp-58h]
  __int64 v46; // [rsp+28h] [rbp-50h]
  char *v47; // [rsp+30h] [rbp-48h]
  ULONG v48; // [rsp+88h] [rbp+10h]
  __int64 v49; // [rsp+88h] [rbp+10h]
  int v50; // [rsp+90h] [rbp+18h]
  __int64 v51; // [rsp+98h] [rbp+20h]
  ULONG iColora; // [rsp+A8h] [rbp+30h]
  int v53; // [rsp+B8h] [rbp+40h]

  v8 = iColor;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = 0;
  v11 = *(_DWORD *)a1;
  v12 = &a3[2 * iColor];
  HIBYTE(iColor) = 0;
  v13 = &v12[v8];
  HIBYTE(v48) = 0;
  if ( a4 )
  {
    v27 = 0;
    iColora = 0;
    v28 = (__int64)a8 >> 5;
    v29 = a8 & 0x1F;
    v53 = v29;
    v30 = &a4[4 * v28];
    v50 = *(_DWORD *)v30;
    v45 = v30;
    if ( (int)v8 < a7 )
    {
      v31 = (char *)a1 + 32;
      v51 = 0LL;
      v47 = (char *)a1 + 32;
      v32 = v29;
      while ( 1 )
      {
        v33 = *(_WORD *)v13;
        v34 = v13[2];
        v13 += 3;
        LOWORD(v48) = v33;
        BYTE2(v48) = v34;
        v46 = v32;
        if ( pxlo )
        {
          v35 = XLATEOBJ_iXlate(pxlo, v48);
          v27 = iColora;
          v36 = v35;
          v29 = v53;
          v31 = v47;
          v32 = v46;
          v30 = v45;
          HIBYTE(v48) = HIBYTE(v35);
        }
        else
        {
          v36 = v48;
        }
        if ( (dword_1C02ED6E0[v32] & v50) != 0 )
        {
          v37 = *(unsigned int *)v31;
          if ( (_DWORD)v37 )
          {
            v27 += v37;
            v38 = v51 + 2;
            iColora = v27;
            v51 += v37;
            v39 = &v9[v38];
            v40 = v36;
            for ( i = (unsigned int)v37; i; --i )
              *v39++ = v40;
          }
          v30 = v45;
        }
        else
        {
          if ( v27 > 0 )
          {
            *v9 = v11;
            v9[1] = v27;
            iColora = 0;
            v51 = 0LL;
            v9 += v27 + 2;
            v11 += v27;
            v27 = 0;
          }
          v11 += *(_DWORD *)v31;
        }
        v42 = v29 + 1;
        v31 += 4;
        LODWORD(v8) = v8 + 1;
        v47 = v31;
        if ( (int)v8 >= a7 )
          break;
        v43 = v42 & 0x20;
        if ( (v42 & 0x20) != 0 )
          v50 = *((_DWORD *)v30 + 1);
        v44 = v30 + 4;
        v29 = 0;
        if ( (v42 & 0x20) == 0 )
        {
          v29 = v42;
          v44 = v30;
        }
        v32 = 0LL;
        v45 = v44;
        if ( !v43 )
          v32 = v46 + 1;
        v53 = v29;
        v30 = v44;
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
        v49 = 0LL;
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
            v26 = &v9[v49 + 2];
            v49 += v23;
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
