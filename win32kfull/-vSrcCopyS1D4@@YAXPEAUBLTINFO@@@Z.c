void __fastcall vSrcCopyS1D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r15
  int v2; // r10d
  char *v3; // rsi
  int v4; // r13d
  _QWORD *v5; // rdi
  char *v6; // rdx
  int *v7; // r14
  char v8; // r8
  char v9; // r9
  char v10; // al
  int v11; // r8d
  char v12; // cl
  unsigned int v13; // r9d
  unsigned int v14; // r11d
  char v15; // bl
  int v16; // ecx
  int v17; // edx
  __int64 v18; // rdx
  _BYTE *v19; // r9
  int v20; // eax
  int v21; // r10d
  int v22; // ecx
  _BYTE *v23; // r8
  int v24; // eax
  __int64 v25; // r13
  __int64 v26; // r11
  _BYTE *v27; // rdx
  unsigned int v28; // ecx
  unsigned __int8 v29; // r8
  int v30; // r10d
  int v31; // eax
  int v32; // r11d
  char *v33; // r9
  int *v34; // r8
  __int64 v35; // rsi
  char v36; // al
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  int v39; // ecx
  char v40; // r12
  __int64 v41; // rbx
  _BYTE *v42; // r11
  unsigned __int8 v43; // al
  unsigned __int64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // r13
  unsigned __int8 v47; // al
  int v48; // ecx
  __int64 v49; // r15
  unsigned __int64 v50; // rdx
  int v51; // ecx
  int v52; // r10d
  int v53; // r11d
  int *v54; // r8
  _BYTE *v55; // r9
  unsigned __int8 v56; // al
  int v57; // ecx
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdx
  int v61; // ecx
  int v62; // [rsp+0h] [rbp-58h]
  int v63; // [rsp+4h] [rbp-54h]
  char v64; // [rsp+8h] [rbp-50h]
  char v65; // [rsp+Ch] [rbp-4Ch]
  int v66; // [rsp+10h] [rbp-48h]
  char *v67; // [rsp+18h] [rbp-40h]
  unsigned int v68; // [rsp+20h] [rbp-38h]
  int v69; // [rsp+24h] [rbp-34h]
  int v70; // [rsp+28h] [rbp-30h]
  __int64 v71; // [rsp+30h] [rbp-28h]
  char v73; // [rsp+A8h] [rbp+50h]
  char v74; // [rsp+B0h] [rbp+58h]
  char v75; // [rsp+B1h] [rbp+59h]
  char v76; // [rsp+B2h] [rbp+5Ah]
  char v77; // [rsp+B3h] [rbp+5Bh]
  __int64 v78; // [rsp+B8h] [rbp+60h]

  v1 = a1;
  v70 = *((_DWORD *)a1 + 13);
  v2 = *((_DWORD *)a1 + 12);
  v3 = (char *)a1 + 8;
  v4 = *((_DWORD *)a1 + 11);
  v5 = (_QWORD *)((char *)a1 + 16);
  v6 = *(char **)(*(_QWORD *)a1 + 16LL);
  v7 = (int *)((char *)a1 + 32);
  v62 = v4;
  v67 = (char *)a1 + 8;
  v8 = *v6;
  v9 = v6[4];
  LOBYTE(v6) = 16 * *v6;
  v74 = v8 | (unsigned __int8)v6;
  v10 = v8 | (16 * v9);
  v75 = v9 | (unsigned __int8)v6;
  v11 = *((_DWORD *)a1 + 14);
  v12 = v9 | (16 * v9);
  v76 = v10;
  v13 = v2 & 7;
  v77 = v12;
  LODWORD(v78) = v13;
  v14 = v11 & 7;
  v68 = v14;
  v15 = (v2 & 7) - v14 + 8;
  if ( v13 >= v14 )
    v15 = (v2 & 7) - v14;
  v16 = *((_DWORD *)v1 + 10);
  v64 = v15;
  v65 = 8 - v15;
  v69 = *((_DWORD *)v1 + 7);
  v66 = v11 + v69;
  v17 = (v11 + v69) >> 3;
  v63 = v16;
  if ( v17 == v11 >> 3 )
  {
    v29 = 0;
    v73 = 0;
  }
  else
  {
    v73 = 1;
    LODWORD(v18) = v17 - ((v11 + 7) >> 3);
    v19 = (_BYTE *)(*v5 + (((__int64)(v11 + 7) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v20 = v2 + (-v14 & 7);
    v21 = *v7;
    v22 = v4 - 4 * v18;
    v23 = (_BYTE *)(*(_QWORD *)v3 + ((__int64)v20 >> 3));
    v24 = v63 - v18;
    if ( v15 )
    {
      if ( v21 )
      {
        v18 = (int)v18;
        v40 = v15;
        v41 = v24;
        v71 = (int)v18;
        do
        {
          v42 = &v23[v18];
          --v21;
          v43 = *v23 << v40;
          if ( v23 != &v23[v18] )
          {
            do
            {
              v44 = v43 | ((unsigned __int64)(unsigned __int8)*++v23 >> v65);
              *v19 = *(&v74 + (v44 >> 6));
              v19[1] = *(&v74 + ((v44 >> 4) & 3));
              v19[2] = *(&v74 + ((v44 >> 2) & 3));
              v19[3] = *(&v74 + (v44 & 3));
              v19 += 4;
              v43 = *v23 << v40;
            }
            while ( v23 != v42 );
            v18 = v71;
          }
          v19 += v22;
          v23 += v41;
        }
        while ( v21 );
        v3 = v67;
        v1 = a1;
        v15 = v64;
      }
    }
    else
    {
      if ( v21 )
      {
        v25 = (int)v18;
        v26 = v22;
        do
        {
          --v21;
          v27 = &v23[v25];
          while ( v23 != v27 )
          {
            v28 = (unsigned __int8)*v23;
            *v19 = *(&v74 + ((unsigned __int64)(unsigned __int8)*v23 >> 6));
            v19[1] = *(&v74 + ((v28 >> 4) & 3));
            v19[2] = *(&v74 + ((v28 >> 2) & 3));
            v19[3] = *(&v74 + (v28 & 3));
            v19 += 4;
            ++v23;
          }
          v19 += v26;
          v23 += v24;
        }
        while ( v21 );
        v4 = v62;
      }
      v67 = v3;
    }
    v16 = v63;
    v29 = 1;
    v13 = v78;
  }
  if ( v68 | v29 ^ 1 )
  {
    v30 = dword_1C032AF20[v68];
    if ( !v29 )
      v30 &= dword_1C032AF00[v66 & 7];
    v31 = v13 + v69;
    v32 = *v7;
    v33 = (char *)(*(_QWORD *)v3 + ((__int64)*((int *)v1 + 12) >> 3));
    v34 = (int *)(*v5 + (((__int64)*((int *)v1 + 14) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    if ( !*v7 )
      goto LABEL_38;
    if ( (unsigned int)v78 < v68 )
    {
      v49 = v16;
      do
      {
        v50 = (unsigned __int64)(unsigned __int8)*v33 >> v65;
        v33 += v49;
        v51 = ~v30 & *v34;
        LOBYTE(v78) = *(&v74 + (v50 >> 6));
        BYTE1(v78) = *(&v74 + ((v50 >> 4) & 3));
        BYTE2(v78) = *(&v74 + ((v50 >> 2) & 3));
        BYTE3(v78) = *(&v74 + (v50 & 3));
        LODWORD(v78) = v30 & v78;
        *v34 = v78 | v51;
        v34 = (int *)((char *)v34 + v4);
        --v32;
      }
      while ( v32 );
    }
    else
    {
      if ( v31 <= 8 )
      {
        v45 = v4;
        v46 = v16;
        do
        {
          v47 = *v33 << v15;
          v33 += v46;
          LOBYTE(v78) = *(&v74 + ((unsigned __int64)v47 >> 6));
          BYTE1(v78) = *(&v74 + (((unsigned __int64)v47 >> 4) & 3));
          BYTE2(v78) = *(&v74 + (((unsigned __int64)v47 >> 2) & 3));
          v48 = *v34;
          BYTE3(v78) = *(&v74 + (v47 & 3));
          LODWORD(v78) = v30 & v78;
          *v34 = v78 | ~v30 & v48;
          v34 = (int *)((char *)v34 + v45);
          --v32;
        }
        while ( v32 );
        goto LABEL_37;
      }
      v78 = v62;
      v35 = v16;
      do
      {
        v36 = *v33;
        v37 = (unsigned __int8)v33[1];
        v33 += v35;
        v38 = (unsigned __int8)(v36 << v15) | (v37 >> v65);
        v39 = ~v30 & *v34;
        LOBYTE(v78) = *(&v74 + (v38 >> 6));
        BYTE1(v78) = *(&v74 + ((v38 >> 4) & 3));
        BYTE2(v78) = *(&v74 + ((v38 >> 2) & 3));
        BYTE3(v78) = *(&v74 + (v38 & 3));
        LODWORD(v78) = v30 & v78;
        *v34 = v78 | v39;
        v34 = (int *)((char *)v34 + v62);
        --v32;
      }
      while ( v32 );
      v3 = v67;
    }
    v1 = a1;
LABEL_37:
    v4 = v62;
    v15 = v64;
LABEL_38:
    v29 = v73;
  }
  if ( (v66 & 7) != 0 )
  {
    if ( v29 )
    {
      v52 = *v7;
      v53 = dword_1C032AF00[v66 & 7];
      v54 = (int *)(*v5 + (((__int64)v66 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
      v55 = (_BYTE *)(*(_QWORD *)v3 + ((*((int *)v1 + 13) - 1LL) >> 3));
      if ( *v7 )
      {
        if ( (((_BYTE)v70 - 1) & 7u) < (((_BYTE)v66 - 1) & 7u) )
        {
          do
          {
            v58 = (unsigned __int8)(*(v55 - 1) << v15);
            v59 = (unsigned __int8)*v55;
            v55 += v63;
            v60 = (v59 >> v65) | v58;
            v61 = ~v53 & *v54;
            LOBYTE(v78) = *(&v74 + (v60 >> 6));
            BYTE1(v78) = *(&v74 + ((v60 >> 4) & 3));
            BYTE2(v78) = *(&v74 + ((v60 >> 2) & 3));
            BYTE3(v78) = *(&v74 + (v60 & 3));
            LODWORD(v78) = v53 & v78;
            *v54 = v78 | v61;
            v54 = (int *)((char *)v54 + v4);
            --v52;
          }
          while ( v52 );
        }
        else
        {
          do
          {
            v56 = *v55 << v15;
            v55 += v63;
            LOBYTE(v78) = *(&v74 + ((unsigned __int64)v56 >> 6));
            BYTE1(v78) = *(&v74 + (((unsigned __int64)v56 >> 4) & 3));
            BYTE2(v78) = *(&v74 + (((unsigned __int64)v56 >> 2) & 3));
            v57 = *v54;
            BYTE3(v78) = *(&v74 + (v56 & 3));
            LODWORD(v78) = v53 & v78;
            *v54 = v78 | ~v53 & v57;
            v54 = (int *)((char *)v54 + v4);
            --v52;
          }
          while ( v52 );
        }
      }
    }
  }
}
