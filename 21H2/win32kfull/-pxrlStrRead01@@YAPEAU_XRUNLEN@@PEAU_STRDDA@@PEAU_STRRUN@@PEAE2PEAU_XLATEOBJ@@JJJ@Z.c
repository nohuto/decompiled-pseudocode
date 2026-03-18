/*
 * XREFs of ?pxrlStrRead01@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00DFAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01(
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
  unsigned int v10; // esi
  unsigned __int8 *v13; // r15
  int v14; // r9d
  __int64 v15; // r14
  int v16; // ebx
  int v17; // r12d
  unsigned int *v18; // r13
  int v19; // r10d
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // eax
  int *v24; // rdi
  __int64 j; // rcx
  unsigned int v26; // edx
  __int64 v27; // rdi
  unsigned __int8 *v28; // rax
  ULONG *pulXlate; // rax
  int v31; // r8d
  int v32; // ebx
  unsigned __int8 *v33; // rdx
  int v34; // edi
  __int64 v35; // r12
  _DWORD *v36; // rcx
  __int64 v37; // r13
  __int64 v38; // rbp
  int v39; // eax
  int *v40; // rdi
  __int64 i; // rcx
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rsi
  int v45; // edi
  __int64 v46; // rbp
  int v47; // ecx
  unsigned __int8 *v48; // rax
  int v49; // ecx
  unsigned __int8 *v50; // rax
  bool v51; // zf
  unsigned __int8 *v52; // [rsp+0h] [rbp-48h]
  __int64 v53; // [rsp+58h] [rbp+10h]
  int v54; // [rsp+58h] [rbp+10h]
  char *v55; // [rsp+60h] [rbp+18h]
  int v56; // [rsp+60h] [rbp+18h]
  _DWORD *v57; // [rsp+68h] [rbp+20h]
  ULONG v58; // [rsp+70h] [rbp+28h]
  int v59; // [rsp+78h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v55 = (char *)a2 + 8;
  v10 = a6 & 0x1F;
  v13 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v59 = pulXlate[1];
    v58 = *pulXlate;
  }
  else
  {
    v58 = 0;
    v59 = 1;
  }
  v14 = *(_DWORD *)a1;
  v15 = v10;
  if ( a4 )
  {
    v31 = 0;
    v32 = a8 & 0x1F;
    v33 = &a4[4 * ((__int64)a8 >> 5)];
    v34 = *(_DWORD *)v33;
    v56 = *(_DWORD *)v33;
    v52 = v33;
    if ( v8 >= a7 )
      return (struct _XRUNLEN *)v9;
    v35 = 0LL;
    v36 = (_DWORD *)((char *)a1 + 32);
    v54 = *(_DWORD *)v13;
    v57 = v36;
    v37 = a8 & 0x1F;
    while ( 1 )
    {
      if ( (dword_1C02ED6E0[v37] & v34) != 0 )
      {
        v38 = (unsigned int)*v36;
        if ( (dword_1C02ED6E0[v15] & v54) != 0 )
        {
          if ( !(_DWORD)v38 )
            goto LABEL_43;
          v39 = v59;
        }
        else
        {
          if ( !(_DWORD)v38 )
            goto LABEL_43;
          v39 = v58;
        }
        v33 = v52;
        v40 = &v9[v35 + 2];
        for ( i = (unsigned int)*v36; i; --i )
          *v40++ = v39;
        v36 = v57;
        v31 += v38;
        v35 += v38;
      }
      else
      {
        if ( v31 > 0 )
        {
          *v9 = v14;
          v14 += v31;
          v9[1] = v31;
          v42 = v31;
          v31 = 0;
          v9 += v42 + 2;
          v35 = 0LL;
        }
        v14 += *v36;
      }
LABEL_43:
      v43 = v10 + 1;
      ++v8;
      v57 = v36 + 1;
      v44 = v15 + 1;
      v45 = v32 + 1;
      v46 = v37 + 1;
      if ( v8 >= a7 )
      {
        if ( v31 > 0 )
        {
          *v9 = v14;
          v9[1] = v31;
          v9 += v31 + 2;
        }
        return (struct _XRUNLEN *)v9;
      }
      v47 = v43 & 0x20;
      if ( (v43 & 0x20) != 0 )
        v54 = *((_DWORD *)v13 + 1);
      v15 = 0LL;
      if ( (v43 & 0x20) == 0 )
        v15 = v44;
      v10 = 0;
      if ( (v43 & 0x20) == 0 )
        v10 = v43;
      v48 = v13 + 4;
      if ( !v47 )
        v48 = v13;
      v13 = v48;
      v49 = v45 & 0x20;
      if ( (v45 & 0x20) != 0 )
        v56 = *((_DWORD *)v33 + 1);
      v50 = v33 + 4;
      if ( (v45 & 0x20) == 0 )
        v50 = v33;
      v32 = 0;
      v52 = v50;
      v33 = v50;
      if ( (v45 & 0x20) == 0 )
        v32 = v45;
      v34 = v56;
      v37 = 0LL;
      v51 = v49 == 0;
      v36 = v57;
      if ( v51 )
        v37 = v46;
    }
  }
  v16 = 0;
  *v9 = v14;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v14;
  if ( v8 >= a7 )
    return (struct _XRUNLEN *)&v9[v16 + 2];
  v17 = *(_DWORD *)v13;
  v18 = (unsigned int *)((char *)a1 + 32);
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  while ( 1 )
  {
    v22 = *v18;
    ++v19;
    v53 = v20 + 1;
    if ( (v17 & dword_1C02ED6E0[v15]) != 0 )
    {
      if ( !(_DWORD)v22 )
        goto LABEL_13;
      v23 = v59;
    }
    else
    {
      if ( !(_DWORD)v22 )
        goto LABEL_13;
      v23 = v58;
    }
    v16 += v22;
    v24 = (int *)((char *)a2 + 4 * v21 + 16);
    for ( j = *v18; j; --j )
      *v24++ = v23;
    v21 += v22;
LABEL_13:
    ++v8;
    v26 = v10 + 1;
    v27 = v15 + 1;
    if ( v8 >= a7 )
      break;
    if ( (v26 & 0x20) != 0 )
      v17 = *((_DWORD *)v13 + 1);
    ++v18;
    v28 = v13 + 4;
    if ( (v26 & 0x20) == 0 )
      v28 = v13;
    v10 = 0;
    v13 = v28;
    v20 = v53;
    if ( (v26 & 0x20) == 0 )
      v10 = v26;
    v15 = 0LL;
    if ( (v26 & 0x20) == 0 )
      v15 = v27;
  }
  v9 = v55;
  return (struct _XRUNLEN *)&v9[v16 + 2];
}
