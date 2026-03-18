/*
 * XREFs of ?pxrlStrRead04@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00A33C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead04(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // r11d
  _DWORD *v9; // r10
  int v10; // ebx
  __int64 v12; // rsi
  unsigned __int8 *v13; // r9
  int v14; // ebp
  struct _XLATEOBJ *v15; // rdi
  unsigned int *v16; // r12
  int v17; // r15d
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // rbx
  unsigned int v21; // eax
  unsigned int *v22; // rdi
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // rdi
  unsigned __int8 *v26; // rax
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // r14
  ULONG v30; // eax
  ULONG *v31; // rdi
  __int64 v32; // rcx
  char v33; // dl
  __int64 v34; // rdi
  unsigned __int8 *v35; // rax
  int v36; // eax
  int v38; // r8d
  int v39; // ebp
  unsigned __int8 *v40; // r12
  int v41; // r15d
  int v42; // eax
  _DWORD *v43; // rdi
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // rcx
  __int64 v49; // rax
  _DWORD *v50; // rdi
  __int64 v51; // rax
  char v52; // di
  int v53; // r15d
  unsigned __int8 *v54; // rax
  int v55; // edx
  int *v56; // rax
  int v57; // ecx
  char *v58; // [rsp+0h] [rbp-48h]
  __int64 v59; // [rsp+8h] [rbp-40h]
  int v60; // [rsp+58h] [rbp+10h]
  __int64 v61; // [rsp+60h] [rbp+18h]
  __int64 v62; // [rsp+68h] [rbp+20h]
  int v63; // [rsp+78h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = *(_DWORD *)a1;
  v12 = a6 & 7;
  v13 = &a3[4 * ((__int64)a6 >> 3)];
  if ( a4 )
  {
    v38 = 0;
    v39 = a8 & 0x1F;
    v40 = &a4[4 * ((__int64)a8 >> 5)];
    v41 = *(_DWORD *)v40;
    v63 = *(_DWORD *)v40;
    if ( v8 < a7 )
    {
      v42 = *(_DWORD *)v13;
      v43 = (_DWORD *)((char *)a1 + 32);
      v61 = 0LL;
      v58 = (char *)a1 + 32;
      v44 = v12;
      v60 = *(_DWORD *)v13;
      v62 = v12;
      v45 = a8 & 0x1F;
      while ( 1 )
      {
        v46 = (v42 & (unsigned int)dword_1C0319768[v44]) >> dword_1C0319748[v62];
        if ( a5 )
          LODWORD(v46) = a5->pulXlate[v46];
        if ( (v41 & dword_1C0319790[v45]) != 0 )
        {
          v47 = (unsigned int)*v43;
          if ( (_DWORD)v47 )
          {
            v48 = (unsigned int)v47;
            v49 = v61 + 2;
            v38 += v47;
            v61 += v47;
            v50 = &v9[v49];
            while ( v48 )
            {
              *v50++ = v46;
              --v48;
            }
          }
        }
        else
        {
          if ( v38 > 0 )
          {
            *v9 = v10;
            v10 += v38;
            v9[1] = v38;
            v51 = v38;
            v38 = 0;
            v9 += v51 + 2;
            v61 = 0LL;
          }
          v10 += *v43;
        }
        v58 += 4;
        v52 = v12 + 1;
        v59 = v45 + 1;
        ++v8;
        v53 = v39 + 1;
        if ( v8 >= a7 )
          break;
        v54 = v13 + 4;
        if ( (v52 & 8) != 0 )
          v60 = *(_DWORD *)v54;
        v44 = 0LL;
        if ( (v52 & 8) == 0 )
          v44 = v62 + 1;
        v55 = 0;
        v62 = v44;
        if ( (v52 & 8) == 0 )
        {
          v54 = v13;
          v55 = v12 + 1;
        }
        v13 = v54;
        v56 = (int *)(v40 + 4);
        v57 = v53 & 0x20;
        if ( (v53 & 0x20) != 0 )
          v63 = *v56;
        v43 = v58;
        LODWORD(v12) = v55;
        if ( (v53 & 0x20) == 0 )
          v56 = (int *)v40;
        v39 = 0;
        v40 = (unsigned __int8 *)v56;
        v42 = v60;
        if ( (v53 & 0x20) == 0 )
          v39 = v53;
        v41 = v63;
        v45 = 0LL;
        if ( !v57 )
          v45 = v59;
      }
      if ( v38 > 0 )
      {
        *v9 = v10;
        v9[1] = v38;
        v9 += v38 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = v10;
    v14 = 0;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v10;
    if ( a6 < a7 )
    {
      v15 = a5;
      v16 = (unsigned int *)((char *)a1 + 32);
      v17 = *(_DWORD *)v13;
      v18 = a6 & 7;
      if ( a5 )
      {
        v28 = 0LL;
        while ( 1 )
        {
          v29 = *v16++;
          if ( (_DWORD)v29 )
          {
            v30 = v15->pulXlate[(unsigned __int64)(v17 & (unsigned int)dword_1C0319768[v18]) >> dword_1C0319748[v18]];
            v31 = &v9[v28 + 2];
            v32 = (unsigned int)v29;
            v14 += v29;
            while ( v32 )
            {
              *v31++ = v30;
              --v32;
            }
            v28 += v29;
          }
          ++v8;
          v33 = v12 + 1;
          v34 = v18 + 1;
          if ( v8 >= a7 )
            break;
          v35 = v13 + 4;
          if ( (v33 & 8) != 0 )
            v17 = *(_DWORD *)v35;
          else
            v35 = v13;
          v13 = v35;
          v36 = 0;
          if ( (v33 & 8) == 0 )
            v36 = v12 + 1;
          v18 = 0LL;
          LODWORD(v12) = v36;
          if ( (v33 & 8) == 0 )
            v18 = v34;
          v15 = a5;
        }
      }
      else
      {
        v19 = 0LL;
        while ( 1 )
        {
          v20 = *v16++;
          v21 = (v17 & (unsigned int)dword_1C0319768[v18]) >> dword_1C0319748[v18];
          if ( (_DWORD)v20 )
          {
            v22 = &v9[v19 + 2];
            v23 = (unsigned int)v20;
            v14 += v20;
            while ( v23 )
            {
              *v22++ = v21;
              --v23;
            }
            v19 += v20;
          }
          ++v8;
          v24 = v12 + 1;
          v25 = v18 + 1;
          if ( v8 >= a7 )
            break;
          v26 = v13 + 4;
          if ( (v24 & 8) != 0 )
            v17 = *(_DWORD *)v26;
          else
            v26 = v13;
          v13 = v26;
          v27 = 0;
          if ( (v24 & 8) == 0 )
            v27 = v12 + 1;
          v18 = 0LL;
          LODWORD(v12) = v27;
          if ( (v24 & 8) == 0 )
            v18 = v25;
        }
      }
    }
    return (struct _XRUNLEN *)&v9[v14 + 2];
  }
}
