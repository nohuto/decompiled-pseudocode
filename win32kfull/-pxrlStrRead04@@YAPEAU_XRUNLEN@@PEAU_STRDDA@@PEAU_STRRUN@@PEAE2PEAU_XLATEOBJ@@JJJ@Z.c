/*
 * XREFs of ?pxrlStrRead04@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00D9940
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
  __int64 v10; // rsi
  unsigned __int8 *v12; // r9
  int v13; // ebx
  int v14; // ebp
  struct _XLATEOBJ *v15; // rdi
  int v16; // r15d
  unsigned int *v17; // r12
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r14
  ULONG v21; // eax
  ULONG *v22; // rdi
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // rdi
  unsigned __int8 *v26; // rax
  int v27; // eax
  int v29; // r15d
  unsigned int *v30; // r12
  __int64 v31; // r14
  __int64 v32; // r8
  __int64 v33; // rbx
  unsigned int v34; // eax
  unsigned int *v35; // rdi
  __int64 v36; // rcx
  char v37; // dl
  __int64 v38; // rdi
  unsigned __int8 *v39; // rax
  int v40; // eax
  int v41; // r8d
  int v42; // ebp
  unsigned __int8 *v43; // r12
  int v44; // r15d
  int v45; // eax
  _DWORD *v46; // rdi
  __int64 v47; // r14
  __int64 v48; // rdx
  __int64 v49; // r14
  __int64 v50; // r15
  __int64 v51; // rcx
  __int64 v52; // rax
  _DWORD *v53; // rdi
  __int64 v54; // rax
  char v55; // di
  int v56; // r15d
  unsigned __int8 *v57; // rax
  int v58; // edx
  int *v59; // rax
  int v60; // ecx
  char *v61; // [rsp+0h] [rbp-48h]
  __int64 v62; // [rsp+8h] [rbp-40h]
  int v63; // [rsp+58h] [rbp+10h]
  __int64 v64; // [rsp+60h] [rbp+18h]
  __int64 v65; // [rsp+68h] [rbp+20h]
  int v66; // [rsp+78h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = a6 & 7;
  v12 = &a3[4 * ((__int64)a6 >> 3)];
  v13 = *(_DWORD *)a1;
  if ( a4 )
  {
    v41 = 0;
    v42 = a8 & 0x1F;
    v43 = &a4[4 * ((__int64)a8 >> 5)];
    v44 = *(_DWORD *)v43;
    v66 = *(_DWORD *)v43;
    if ( v8 < a7 )
    {
      v45 = *(_DWORD *)v12;
      v46 = (_DWORD *)((char *)a1 + 32);
      v64 = 0LL;
      v61 = (char *)a1 + 32;
      v47 = v10;
      v63 = *(_DWORD *)v12;
      v65 = v10;
      v48 = a8 & 0x1F;
      while ( 1 )
      {
        v49 = (v45 & (unsigned int)dword_1C031B088[v47]) >> dword_1C031B068[v65];
        if ( a5 )
          LODWORD(v49) = a5->pulXlate[v49];
        if ( (v44 & dword_1C0319320[v48]) != 0 )
        {
          v50 = (unsigned int)*v46;
          if ( (_DWORD)v50 )
          {
            v51 = (unsigned int)v50;
            v52 = v64 + 2;
            v41 += v50;
            v64 += v50;
            v53 = &v9[v52];
            while ( v51 )
            {
              *v53++ = v49;
              --v51;
            }
          }
        }
        else
        {
          if ( v41 > 0 )
          {
            *v9 = v13;
            v13 += v41;
            v9[1] = v41;
            v54 = v41;
            v41 = 0;
            v9 += v54 + 2;
            v64 = 0LL;
          }
          v13 += *v46;
        }
        v61 += 4;
        v55 = v10 + 1;
        v62 = v48 + 1;
        ++v8;
        v56 = v42 + 1;
        if ( v8 >= a7 )
          break;
        v57 = v12 + 4;
        if ( (v55 & 8) != 0 )
          v63 = *(_DWORD *)v57;
        v47 = 0LL;
        if ( (v55 & 8) == 0 )
          v47 = v65 + 1;
        v58 = 0;
        v65 = v47;
        if ( (v55 & 8) == 0 )
        {
          v57 = v12;
          v58 = v10 + 1;
        }
        v12 = v57;
        v59 = (int *)(v43 + 4);
        v60 = v56 & 0x20;
        if ( (v56 & 0x20) != 0 )
          v66 = *v59;
        v46 = v61;
        LODWORD(v10) = v58;
        if ( (v56 & 0x20) == 0 )
          v59 = (int *)v43;
        v42 = 0;
        v43 = (unsigned __int8 *)v59;
        v45 = v63;
        if ( (v56 & 0x20) == 0 )
          v42 = v56;
        v44 = v66;
        v48 = 0LL;
        if ( !v60 )
          v48 = v62;
      }
      if ( v41 > 0 )
      {
        *v9 = v13;
        v9[1] = v41;
        v9 += v41 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = v13;
    v14 = 0;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v13;
    if ( a6 < a7 )
    {
      v15 = a5;
      if ( a5 )
      {
        v16 = *(_DWORD *)v12;
        v17 = (unsigned int *)((char *)a1 + 32);
        v18 = 0LL;
        v19 = a6 & 7;
        while ( 1 )
        {
          v20 = *v17++;
          if ( (_DWORD)v20 )
          {
            v21 = v15->pulXlate[(unsigned __int64)(v16 & (unsigned int)dword_1C031B088[v19]) >> dword_1C031B068[v19]];
            v22 = &v9[v18 + 2];
            v23 = (unsigned int)v20;
            v14 += v20;
            while ( v23 )
            {
              *v22++ = v21;
              --v23;
            }
            v18 += v20;
          }
          ++v8;
          v24 = v10 + 1;
          v25 = v19 + 1;
          if ( v8 >= a7 )
            break;
          v26 = v12 + 4;
          if ( (v24 & 8) != 0 )
            v16 = *(_DWORD *)v26;
          else
            v26 = v12;
          v12 = v26;
          v27 = 0;
          if ( (v24 & 8) == 0 )
            v27 = v10 + 1;
          v19 = 0LL;
          LODWORD(v10) = v27;
          if ( (v24 & 8) == 0 )
            v19 = v25;
          v15 = a5;
        }
      }
      else
      {
        v29 = *(_DWORD *)v12;
        v30 = (unsigned int *)((char *)a1 + 32);
        v31 = 0LL;
        v32 = a6 & 7;
        while ( 1 )
        {
          v33 = *v30++;
          v34 = (v29 & (unsigned int)dword_1C031B088[v32]) >> dword_1C031B068[v32];
          if ( (_DWORD)v33 )
          {
            v35 = &v9[v31 + 2];
            v36 = (unsigned int)v33;
            v14 += v33;
            while ( v36 )
            {
              *v35++ = v34;
              --v36;
            }
            v31 += v33;
          }
          ++v8;
          v37 = v10 + 1;
          v38 = v32 + 1;
          if ( v8 >= a7 )
            break;
          v39 = v12 + 4;
          if ( (v37 & 8) != 0 )
            v29 = *(_DWORD *)v39;
          else
            v39 = v12;
          v12 = v39;
          v40 = 0;
          if ( (v37 & 8) == 0 )
            v40 = v10 + 1;
          v32 = 0LL;
          LODWORD(v10) = v40;
          if ( (v37 & 8) == 0 )
            v32 = v38;
        }
      }
    }
    return (struct _XRUNLEN *)&v9[v14 + 2];
  }
}
