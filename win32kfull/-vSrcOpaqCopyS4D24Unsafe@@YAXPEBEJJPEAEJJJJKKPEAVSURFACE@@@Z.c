void __fastcall vSrcOpaqCopyS4D24Unsafe(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  _DWORD *v14; // r15
  const unsigned __int8 *v15; // rsi
  unsigned __int8 *v16; // rdi
  signed int v17; // ecx
  unsigned int v18; // r9d
  int v19; // r10d
  int v20; // r8d
  int v21; // r13d
  int v22; // edx
  const unsigned __int8 *v23; // r14
  unsigned __int8 *v24; // rbx
  unsigned __int8 *v25; // rcx
  unsigned __int8 *v26; // rcx
  _BYTE *v27; // rbx
  unsigned __int8 *v28; // rcx
  unsigned __int8 v29; // al
  unsigned __int8 *v30; // rbx
  int i; // r12d
  unsigned __int64 v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // r9d
  unsigned int v35; // r10d
  int v36; // edx
  _DWORD *v37; // rbx
  unsigned __int8 *v38; // rcx
  unsigned __int8 v39; // al
  unsigned __int8 *v40; // rbx
  _BYTE *v41; // rbx
  char *v42; // rcx
  char v43; // al
  char *v44; // rbx
  _BYTE *v45; // rbx
  unsigned __int8 *v46; // r14
  char *v47; // rcx
  char v48; // al
  char *v49; // rbx
  unsigned __int8 *v50; // rcx
  unsigned __int8 v51; // al
  unsigned __int8 *v52; // rdi
  unsigned __int8 *v53; // rcx
  unsigned __int8 v54; // al
  unsigned __int8 *v55; // rdi
  int v56; // [rsp+48h] [rbp-60h]
  int v57; // [rsp+4Ch] [rbp-5Ch]

  v14 = pvFillOpaqTable(4LL, a9, a10, a11);
  v15 = &a1[a2 / 2];
  v16 = &a4[3 * a5];
  v17 = (a5 + 3) & 0xFFFFFFFC;
  v18 = a6 & 0xFFFFFFFC;
  if ( v17 <= (int)(a6 & 0xFFFFFFFC) )
  {
    v19 = v17 - a5;
    v57 = v17 - a5;
    v20 = (int)(v18 - v17) / 4;
    v56 = v20;
    v21 = a6 - v18;
    v22 = a8;
    while ( 1 )
    {
      if ( !v22 )
        return;
      v23 = v15;
      v24 = v16;
      if ( v19 == 1 )
        goto LABEL_9;
      if ( v19 == 2 )
        goto LABEL_8;
      if ( v19 == 3 )
        break;
LABEL_10:
      for ( i = 0; i < v20; ++i )
      {
        v32 = *v23;
        v33 = v23[1];
        v23 += 2;
        v34 = v14[v32 & 0xF];
        v35 = v14[(unsigned __int64)v33 >> 4];
        v36 = v14[v33 & 0xF];
        *(_DWORD *)v24 = v14[v32 >> 4] + (v34 << 24);
        v37 = v24 + 4;
        *v37++ = (v34 >> 8) + (v35 << 16);
        *v37 = HIWORD(v35) + (v36 << 8);
        v24 = (unsigned __int8 *)(v37 + 1);
        v20 = v56;
      }
      if ( v21 )
      {
        v38 = (unsigned __int8 *)&v14[(unsigned __int64)*v23 >> 4];
        v39 = *v38++;
        *v24 = v39;
        v40 = v24 + 1;
        *v40++ = *v38;
        *v40 = v38[1];
        v41 = v40 + 1;
        if ( v21 != 1 )
        {
          v42 = (char *)&v14[*v23 & 0xF];
          v43 = *v42++;
          *v41 = v43;
          v44 = v41 + 1;
          *v44++ = *v42;
          *v44 = v42[1];
          v45 = v44 + 1;
          v46 = (unsigned __int8 *)(v23 + 1);
          if ( v21 != 2 )
          {
            v47 = (char *)&v14[(unsigned __int64)*v46 >> 4];
            v48 = *v47++;
            *v45 = v48;
            v49 = v45 + 1;
            *v49 = *v47;
            v49[1] = v47[1];
          }
        }
      }
      v22 = --a8;
      v15 += a3;
      v16 += a7;
      v19 = v57;
    }
    v25 = (unsigned __int8 *)&v14[*v15 & 0xF];
    *v16 = *v25;
    v16[1] = v25[1];
    v16[2] = v25[2];
    v24 = v16 + 3;
    v23 = v15 + 1;
LABEL_8:
    v26 = (unsigned __int8 *)&v14[(unsigned __int64)*v23 >> 4];
    *v24 = *v26;
    v27 = v24 + 1;
    *v27++ = v26[1];
    *v27 = v26[2];
    v24 = v27 + 1;
LABEL_9:
    v28 = (unsigned __int8 *)&v14[*v23 & 0xF];
    v29 = *v28++;
    *v24 = v29;
    v30 = v24 + 1;
    *v30++ = *v28;
    *v30 = v28[1];
    v24 = v30 + 1;
    ++v23;
    goto LABEL_10;
  }
  if ( (a5 & 3) == 1 )
  {
    v50 = (unsigned __int8 *)&v14[*v15 & 0xF];
    v51 = *v50++;
    *v16 = v51;
    v52 = v16 + 1;
    *v52++ = *v50;
    *v52 = v50[1];
    v16 = v52 + 1;
    if ( a5 + 1 == a6 )
      return;
    ++v15;
  }
  else if ( (a5 & 3) != 2 )
  {
    return;
  }
  v53 = (unsigned __int8 *)&v14[(unsigned __int64)*v15 >> 4];
  v54 = *v53++;
  *v16 = v54;
  v55 = v16 + 1;
  *v55 = *v53;
  v55[1] = v53[1];
}
