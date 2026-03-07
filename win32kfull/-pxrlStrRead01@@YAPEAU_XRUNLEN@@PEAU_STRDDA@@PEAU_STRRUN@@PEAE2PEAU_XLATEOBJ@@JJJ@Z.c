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
  _DWORD *v9; // r14
  unsigned int v10; // r10d
  unsigned __int8 *v12; // rbx
  int v13; // r9d
  __int64 v14; // r8
  int v15; // r13d
  int v16; // r15d
  unsigned int *v17; // rsi
  __int64 v18; // r14
  __int64 v19; // r9
  int v20; // eax
  int *v21; // rdi
  __int64 i; // rcx
  unsigned int v23; // edx
  __int64 v24; // rdi
  unsigned __int8 *v25; // rcx
  int v26; // eax
  ULONG *pulXlate; // rax
  int v29; // esi
  int v30; // ebp
  unsigned __int8 *v31; // r15
  int v32; // edx
  int v33; // edi
  __int64 v34; // r13
  _DWORD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rcx
  int *v39; // rdi
  __int64 v40; // rcx
  ULONG *v41; // rdi
  __int64 v42; // rax
  unsigned int v43; // edx
  __int64 v44; // rdi
  int v45; // r14d
  unsigned __int8 *v46; // rax
  unsigned __int8 *v47; // rax
  int v48; // ecx
  bool v49; // zf
  _DWORD *v50; // [rsp+0h] [rbp-48h]
  __int64 v51; // [rsp+8h] [rbp-40h]
  __int64 v52; // [rsp+8h] [rbp-40h]
  struct _STRRUN *v53; // [rsp+58h] [rbp+10h]
  int v54; // [rsp+58h] [rbp+10h]
  int v55; // [rsp+60h] [rbp+18h]
  _DWORD *v56; // [rsp+68h] [rbp+20h]
  ULONG v57; // [rsp+70h] [rbp+28h]
  int v58; // [rsp+78h] [rbp+30h]

  v53 = a2;
  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v56 = (_DWORD *)((char *)a2 + 8);
  v10 = a6 & 0x1F;
  v12 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v58 = pulXlate[1];
    v57 = *pulXlate;
  }
  else
  {
    v57 = 0;
    v58 = 1;
  }
  v13 = *(_DWORD *)a1;
  v14 = v10;
  if ( a4 )
  {
    v29 = 0;
    v30 = a8 & 0x1F;
    v31 = &a4[4 * ((__int64)a8 >> 5)];
    v32 = *(_DWORD *)v31;
    v54 = *(_DWORD *)v31;
    if ( v8 < a7 )
    {
      v33 = *(_DWORD *)v12;
      v34 = 0LL;
      v55 = *(_DWORD *)v12;
      v35 = (_DWORD *)((char *)a1 + 32);
      v36 = a8 & 0x1F;
      v50 = v35;
      while ( 1 )
      {
        v51 = v36;
        if ( (v32 & dword_1C0319320[v36]) != 0 )
        {
          v37 = (unsigned int)*v35;
          if ( (v33 & dword_1C0319320[v14]) != 0 )
          {
            if ( (_DWORD)v37 )
            {
              v38 = (unsigned int)v37;
              v29 += v37;
              v39 = &v56[v34 + 2];
              v34 += v37;
              while ( v38 )
              {
                *v39++ = v58;
                --v38;
              }
              v35 = v50;
            }
          }
          else if ( (_DWORD)v37 )
          {
            v40 = (unsigned int)*v35;
            v29 += v37;
            v41 = &v56[v34 + 2];
            v34 += v37;
            while ( v40 )
            {
              *v41++ = v57;
              --v40;
            }
            v35 = v50;
          }
        }
        else
        {
          if ( v29 > 0 )
          {
            *v9 = v13;
            v13 += v29;
            v9[1] = v29;
            v42 = v29;
            v29 = 0;
            v56 = &v9[v42 + 2];
            v34 = 0LL;
          }
          v13 += *v35;
        }
        v43 = v10 + 1;
        ++v8;
        v44 = v14 + 1;
        v45 = v30 + 1;
        v52 = v51 + 1;
        v50 = v35 + 1;
        if ( v8 >= a7 )
          break;
        v46 = v12 + 4;
        if ( (v43 & 0x20) != 0 )
          v55 = *(_DWORD *)v46;
        v14 = 0LL;
        if ( (v43 & 0x20) == 0 )
          v14 = v44;
        v10 = 0;
        if ( (v43 & 0x20) == 0 )
        {
          v46 = v12;
          v10 = v43;
        }
        v12 = v46;
        v47 = v31 + 4;
        v48 = v45 & 0x20;
        if ( (v45 & 0x20) != 0 )
        {
          v32 = *(_DWORD *)v47;
          v54 = *(_DWORD *)v47;
        }
        else
        {
          v32 = v54;
        }
        v33 = v55;
        if ( (v45 & 0x20) == 0 )
          v47 = v31;
        v30 = 0;
        v31 = v47;
        if ( (v45 & 0x20) == 0 )
          v30 = v45;
        v9 = v56;
        v36 = 0LL;
        v49 = v48 == 0;
        v35 = v50;
        if ( v49 )
          v36 = v52;
      }
      v9 = v56;
      if ( v29 > 0 )
      {
        *v56 = v13;
        v56[1] = v29;
        return (struct _XRUNLEN *)&v56[v29 + 2];
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  v15 = 0;
  *v9 = v13;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v13;
  if ( v8 >= a7 )
    return (struct _XRUNLEN *)&v9[v15 + 2];
  v16 = *(_DWORD *)v12;
  v17 = (unsigned int *)((char *)a1 + 32);
  v18 = 0LL;
  while ( 1 )
  {
    v19 = *v17;
    if ( (v16 & dword_1C0319320[v14]) != 0 )
    {
      if ( !(_DWORD)v19 )
        goto LABEL_13;
      v20 = v58;
    }
    else
    {
      if ( !(_DWORD)v19 )
        goto LABEL_13;
      v20 = v57;
    }
    v15 += v19;
    v21 = (int *)((char *)a2 + 4 * v18 + 16);
    for ( i = *v17; i; --i )
      *v21++ = v20;
    v18 += v19;
LABEL_13:
    ++v8;
    v23 = v10 + 1;
    v24 = v14 + 1;
    if ( v8 >= a7 )
      break;
    v25 = v12 + 4;
    v26 = v23 & 0x20;
    if ( (v23 & 0x20) != 0 )
      v16 = *(_DWORD *)v25;
    ++v17;
    if ( (v23 & 0x20) == 0 )
      v25 = v12;
    v10 = 0;
    v12 = v25;
    if ( (v23 & 0x20) == 0 )
      v10 = v23;
    a2 = v53;
    v14 = 0LL;
    if ( !v26 )
      v14 = v24;
  }
  v9 = v56;
  return (struct _XRUNLEN *)&v9[v15 + 2];
}
