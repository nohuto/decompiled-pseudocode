/*
 * XREFs of ?pxrlStrRead01@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00721B0
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
  int v8; // r15d
  _DWORD *v9; // r10
  unsigned int v10; // r14d
  unsigned __int8 *v12; // rsi
  ULONG *pulXlate; // rax
  int v14; // ebx
  __int64 v15; // r11
  int v16; // ebp
  int v17; // r12d
  unsigned int *v18; // rbx
  __int64 v19; // r8
  int v20; // eax
  int *v21; // rdi
  __int64 k; // rcx
  unsigned int v23; // edx
  __int64 v24; // rdi
  unsigned __int8 *v25; // rax
  int v27; // r8d
  int v28; // ebp
  int v29; // edi
  int v30; // edx
  __int64 v31; // r12
  _DWORD *v32; // rcx
  __int64 v33; // r13
  __int64 v34; // r9
  int *v35; // rdi
  __int64 i; // rcx
  ULONG *v37; // rdi
  __int64 j; // rcx
  __int64 v39; // rax
  unsigned int v40; // edx
  __int64 v41; // rdi
  int v42; // r9d
  unsigned __int8 *v43; // rax
  unsigned __int8 *v44; // rax
  unsigned __int8 *v45; // [rsp+0h] [rbp-48h]
  __int64 v46; // [rsp+8h] [rbp-40h]
  char *v47; // [rsp+58h] [rbp+10h]
  int v48; // [rsp+58h] [rbp+10h]
  int v49; // [rsp+60h] [rbp+18h]
  _DWORD *v50; // [rsp+68h] [rbp+20h]
  ULONG v51; // [rsp+70h] [rbp+28h]
  int v52; // [rsp+78h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v47 = (char *)a2 + 8;
  v10 = a6 & 0x1F;
  v12 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v52 = pulXlate[1];
    v51 = *pulXlate;
  }
  else
  {
    v51 = 0;
    v52 = 1;
  }
  v14 = *(_DWORD *)a1;
  v15 = v10;
  if ( a4 )
  {
    v27 = 0;
    v28 = a8 & 0x1F;
    v29 = *(_DWORD *)&a4[4 * ((__int64)a8 >> 5)];
    v48 = v29;
    v45 = &a4[4 * ((__int64)a8 >> 5)];
    if ( v8 < a7 )
    {
      v30 = *(_DWORD *)v12;
      v31 = 0LL;
      v32 = (_DWORD *)((char *)a1 + 32);
      v49 = *(_DWORD *)v12;
      v50 = v32;
      v33 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v29 & dword_1C0319790[v33]) != 0 )
        {
          v34 = (unsigned int)*v32;
          if ( (v30 & dword_1C0319790[v15]) != 0 )
          {
            if ( (_DWORD)v34 )
            {
              v35 = &v9[v31 + 2];
              for ( i = (unsigned int)v34; i; --i )
                *v35++ = v52;
              v32 = v50;
              v27 += v34;
              v31 += v34;
            }
          }
          else if ( (_DWORD)v34 )
          {
            v37 = &v9[v31 + 2];
            for ( j = (unsigned int)*v32; j; --j )
              *v37++ = v51;
            v32 = v50;
            v27 += v34;
            v31 += v34;
          }
        }
        else
        {
          if ( v27 > 0 )
          {
            *v9 = v14;
            v14 += v27;
            v9[1] = v27;
            v39 = v27;
            v27 = 0;
            v9 += v39 + 2;
            v31 = 0LL;
          }
          v14 += *v32;
        }
        ++v8;
        v46 = v33 + 1;
        v40 = v10 + 1;
        v50 = v32 + 1;
        v41 = v15 + 1;
        v42 = v28 + 1;
        if ( v8 >= a7 )
          break;
        v43 = v12 + 4;
        if ( (v40 & 0x20) != 0 )
          v49 = *(_DWORD *)v43;
        v15 = 0LL;
        if ( (v40 & 0x20) == 0 )
          v15 = v41;
        v10 = 0;
        if ( (v40 & 0x20) == 0 )
        {
          v43 = v12;
          v10 = v40;
        }
        v12 = v43;
        v44 = v45 + 4;
        if ( (v42 & 0x20) != 0 )
        {
          v29 = *(_DWORD *)v44;
          v48 = *(_DWORD *)v44;
        }
        else
        {
          v29 = v48;
        }
        if ( (v42 & 0x20) == 0 )
          v44 = v45;
        v30 = v49;
        v28 = 0;
        v45 = v44;
        if ( (v42 & 0x20) == 0 )
          v28 = v42;
        v33 = 0LL;
        ++v32;
        if ( (v42 & 0x20) == 0 )
          v33 = v46;
      }
      if ( v27 > 0 )
      {
        *v9 = v14;
        v9[1] = v27;
        v9 += v27 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  *v9 = v14;
  v16 = 0;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v14;
  if ( v8 >= a7 )
    return (struct _XRUNLEN *)&v9[v16 + 2];
  v17 = *(_DWORD *)v12;
  v18 = (unsigned int *)((char *)a1 + 32);
  while ( 1 )
  {
    v19 = *v18;
    if ( (v17 & dword_1C0319790[v15]) != 0 )
    {
      if ( !(_DWORD)v19 )
        goto LABEL_16;
      v20 = v52;
    }
    else
    {
      if ( !(_DWORD)v19 )
        goto LABEL_16;
      v20 = v51;
    }
    v16 += v19;
    v21 = (int *)((char *)a2 + 4 * (_QWORD)a4 + 16);
    for ( k = *v18; k; --k )
      *v21++ = v20;
    a4 += v19;
LABEL_16:
    ++v8;
    v23 = v10 + 1;
    v24 = v15 + 1;
    if ( v8 >= a7 )
      break;
    v25 = v12 + 4;
    if ( (v23 & 0x20) != 0 )
      v17 = *(_DWORD *)v25;
    ++v18;
    if ( (v23 & 0x20) == 0 )
      v25 = v12;
    v10 = 0;
    v12 = v25;
    if ( (v23 & 0x20) == 0 )
      v10 = v23;
    v15 = 0LL;
    if ( (v23 & 0x20) == 0 )
      v15 = v24;
  }
  v9 = v47;
  return (struct _XRUNLEN *)&v9[v16 + 2];
}
