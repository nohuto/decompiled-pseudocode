/*
 * XREFs of ?pxrlStrRead16@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E3DB0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead16(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  int v8; // r15d
  _DWORD *v9; // rbx
  int v10; // esi
  int v11; // r12d
  unsigned __int8 *v12; // r14
  __int64 v13; // r8
  unsigned int *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rcx
  _DWORD *v17; // rdx
  __int64 v18; // r13
  unsigned int *v19; // r12
  __int64 v20; // rbp
  __int64 v21; // r15
  ULONG v22; // eax
  ULONG *v23; // rdi
  __int64 v24; // rcx
  int v26; // r13d
  unsigned __int8 *v27; // r8
  int v28; // r11d
  __int64 v29; // rdx
  __int64 v30; // r10
  char *v31; // r9
  ULONG v32; // ecx
  ULONG v33; // eax
  __int64 v34; // r11
  ULONG v35; // eax
  ULONG *v36; // rdi
  __int64 v37; // rcx
  int v38; // edx
  __int64 v39; // rdi
  int *v40; // rax
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // [rsp+20h] [rbp-48h]
  __int64 v44; // [rsp+78h] [rbp+10h]
  char *v45; // [rsp+80h] [rbp+18h]
  unsigned __int8 *v46; // [rsp+88h] [rbp+20h]
  int v47; // [rsp+98h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = 0;
  v11 = *(_DWORD *)a1;
  v12 = &a3[2 * a6];
  if ( a4 )
  {
    v26 = a8 & 0x1F;
    v27 = &a4[4 * ((__int64)a8 >> 5)];
    v28 = *(_DWORD *)v27;
    v47 = *(_DWORD *)v27;
    v46 = v27;
    if ( v8 < a7 )
    {
      v29 = 0LL;
      v30 = a8 & 0x1F;
      v31 = (char *)a1 + 32;
      v44 = 0LL;
      v45 = (char *)a1 + 32;
      while ( 1 )
      {
        v32 = *(unsigned __int16 *)v12;
        v12 += 2;
        v43 = v30;
        if ( pxlo )
        {
          v33 = XLATEOBJ_iXlate(pxlo, v32);
          v27 = v46;
          v32 = v33;
          v31 = v45;
          v30 = v43;
          v29 = v44;
          v28 = v47;
        }
        if ( (v28 & dword_1C0319320[v30]) != 0 )
        {
          v34 = *(unsigned int *)v31;
          if ( (_DWORD)v34 )
          {
            v35 = v32;
            v36 = &v9[v29 + 2];
            v37 = (unsigned int)v34;
            v10 += v34;
            v44 += v34;
            while ( v37 )
            {
              *v36++ = v35;
              --v37;
            }
          }
          v28 = v47;
        }
        else
        {
          if ( v10 > 0 )
          {
            v42 = v10;
            *v9 = v11;
            v11 += v10;
            v9[1] = v10;
            v10 = 0;
            v9 += v42 + 2;
            v44 = 0LL;
          }
          v11 += *(_DWORD *)v31;
        }
        v31 += 4;
        v38 = v26 + 1;
        ++v8;
        v45 = v31;
        v39 = v30 + 1;
        if ( v8 >= a7 )
          break;
        v40 = (int *)(v27 + 4);
        v41 = v38 & 0x20;
        if ( (v38 & 0x20) != 0 )
        {
          v28 = *v40;
          v47 = *v40;
        }
        else
        {
          v40 = (int *)v27;
        }
        v26 = 0;
        v46 = (unsigned __int8 *)v40;
        v27 = (unsigned __int8 *)v40;
        if ( (v38 & 0x20) == 0 )
          v26 = v38;
        v29 = v44;
        v30 = 0LL;
        if ( !v41 )
          v30 = v39;
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
    if ( a6 != a7 )
    {
      if ( pxlo )
      {
        v18 = 0LL;
        v19 = (unsigned int *)((char *)a1 + 32);
        v20 = (unsigned int)(a7 - a6);
        do
        {
          v21 = *v19++;
          if ( (_DWORD)v21 )
          {
            v22 = XLATEOBJ_iXlate(pxlo, *(unsigned __int16 *)v12);
            v23 = &v9[v18 + 2];
            v24 = (unsigned int)v21;
            v10 += v21;
            while ( v24 )
            {
              *v23++ = v22;
              --v24;
            }
            v18 += v21;
          }
          v12 += 2;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        v13 = 0LL;
        v14 = (unsigned int *)((char *)a1 + 32);
        v15 = (unsigned int)(a7 - a6);
        do
        {
          v16 = *v14++;
          if ( (_DWORD)v16 )
          {
            v10 += v16;
            v17 = &v9[v13 + 2];
            v13 += v16;
            do
            {
              *v17++ = *(unsigned __int16 *)v12;
              LODWORD(v16) = v16 - 1;
            }
            while ( (_DWORD)v16 );
          }
          v12 += 2;
          --v15;
        }
        while ( v15 );
      }
    }
    return (struct _XRUNLEN *)&v9[v10 + 2];
  }
}
