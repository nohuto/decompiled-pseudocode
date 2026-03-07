void __fastcall vSrcCopyS1D24(struct BLTINFO *a1)
{
  int v1; // r8d
  struct BLTINFO *v2; // r9
  BOOL v3; // r13d
  int v4; // r10d
  unsigned int v5; // r11d
  unsigned int v6; // ebx
  int v7; // r15d
  __int64 v8; // r12
  unsigned int v9; // r14d
  char v10; // si
  int v11; // edx
  int v12; // r11d
  __int64 v13; // rdx
  _BYTE *v14; // r8
  _BYTE *v15; // r10
  int v16; // eax
  _BYTE *v17; // r13
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r15
  unsigned __int8 v23; // al
  _BYTE *v24; // r9
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int8 v29; // dl
  int v30; // r10d
  _BYTE *v31; // r8
  _BYTE *v32; // rdx
  char v33; // r13
  __int64 v34; // r14
  _BYTE *v35; // r14
  _BYTE *v36; // rdi
  unsigned __int8 i; // r11
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // r15
  _BYTE *v43; // rdi
  unsigned __int8 v44; // r11
  unsigned __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rax
  unsigned __int8 v49; // bl
  _BYTE *v50; // r11
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // r10d
  _BYTE *v54; // r8
  __int64 v55; // rax
  _BYTE *v56; // rdx
  unsigned int v57; // ecx
  unsigned int v58; // eax
  bool v59; // cf
  unsigned int v60; // eax
  __int64 v61; // r13
  unsigned __int8 v62; // r11
  _BYTE *k; // r9
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rbx
  _BYTE *v67; // rbx
  _BYTE *v68; // r11
  unsigned __int8 j; // r9
  unsigned __int64 v70; // rcx
  __int64 v71; // rcx
  char v72; // [rsp+0h] [rbp-60h]
  char v73; // [rsp+4h] [rbp-5Ch]
  __int64 v74; // [rsp+8h] [rbp-58h]
  int v75; // [rsp+10h] [rbp-50h]
  struct BLTINFO *v76; // [rsp+18h] [rbp-48h]
  __int64 v77; // [rsp+18h] [rbp-48h]
  unsigned int v78; // [rsp+20h] [rbp-40h]
  __int64 v79; // [rsp+30h] [rbp-30h]
  struct BLTINFO *v80; // [rsp+38h] [rbp-28h]
  unsigned int v81; // [rsp+40h] [rbp-20h]
  __int64 v82; // [rsp+48h] [rbp-18h]

  v1 = *((_DWORD *)a1 + 14);
  v2 = a1;
  v3 = 1;
  v4 = *((_DWORD *)a1 + 12);
  v5 = *((_DWORD *)a1 + 7);
  v6 = v1 & 7;
  v7 = *((_DWORD *)a1 + 11);
  v8 = *((int *)a1 + 10);
  v9 = v4 & 7;
  v80 = a1;
  v81 = v5 + v1;
  v82 = **(_QWORD **)(*(_QWORD *)a1 + 16LL);
  v78 = v9;
  v75 = v7;
  v10 = (v4 & 7) - (v1 & 7) + 8;
  if ( v9 >= v6 )
    v10 = v9 - v6;
  v11 = (int)(v5 + v1) >> 3;
  v73 = 8 - v10;
  if ( v11 == v1 >> 3 )
  {
    v29 = 0;
    v72 = 0;
    v3 = (int)(v5 + v9) > 8;
  }
  else
  {
    v12 = *((_DWORD *)a1 + 8);
    v72 = 1;
    LODWORD(v13) = v11 - ((v1 + 7) >> 3);
    v14 = (_BYTE *)(*((_QWORD *)a1 + 2) + (int)(3 * ((v1 + 7) & 0xFFFFFFF8)));
    LODWORD(a1) = v7 - 24 * v13;
    v15 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(int)(v4 + (-v6 & 7)) >> 3));
    v16 = v8 - v13;
    if ( v12 )
    {
      v13 = (int)v13;
      a1 = (struct BLTINFO *)(int)a1;
      v74 = (int)v13;
      v76 = (struct BLTINFO *)(int)a1;
      v79 = v16;
      if ( v10 )
      {
        v21 = (int)a1;
        v22 = v16;
        do
        {
          v23 = *v15 << v10;
          --v12;
          if ( v15 != &v15[v13] )
          {
            v24 = &v15[v13];
            do
            {
              v25 = v23 | ((unsigned __int64)(unsigned __int8)*++v15 >> v73);
              v26 = (v25 >> 5) & 4;
              *v14 = *((_BYTE *)&v82 + v26);
              v14[1] = *((_BYTE *)&v82 + v26 + 1);
              v14[2] = *((_BYTE *)&v82 + v26 + 2);
              v14[3] = *((_BYTE *)&v82 + ((v25 >> 4) & 4));
              v14[4] = *((_BYTE *)&v82 + ((v25 >> 4) & 4) + 1);
              v14[5] = *((_BYTE *)&v82 + ((v25 >> 4) & 4) + 2);
              v14[6] = *((_BYTE *)&v82 + ((v25 >> 3) & 4));
              v14[7] = *((_BYTE *)&v82 + ((v25 >> 3) & 4) + 1);
              v14[8] = *((_BYTE *)&v82 + ((v25 >> 3) & 4) + 2);
              v14[9] = *((_BYTE *)&v82 + ((v25 >> 2) & 4));
              v14[10] = *((_BYTE *)&v82 + ((v25 >> 2) & 4) + 1);
              v14[11] = *((_BYTE *)&v82 + ((v25 >> 2) & 4) + 2);
              v14[12] = *((_BYTE *)&v82 + ((v25 >> 1) & 4));
              v14[13] = *((_BYTE *)&v82 + ((v25 >> 1) & 4) + 1);
              v14[14] = *((_BYTE *)&v82 + ((v25 >> 1) & 4) + 2);
              v14[15] = *((_BYTE *)&v82 + (v25 & 4));
              v14[16] = *((_BYTE *)&v82 + (v25 & 4) + 1);
              v14[17] = *((_BYTE *)&v82 + (v25 & 4) + 2);
              v27 = v25 & 2;
              v28 = v25 & 1;
              v14[18] = *((_BYTE *)&v82 + 2 * v27);
              v14[19] = *((_BYTE *)&v82 + 2 * v27 + 1);
              v14[20] = *((_BYTE *)&v82 + 2 * v27 + 2);
              v14[21] = *((_BYTE *)&v82 + 4 * v28);
              v14[22] = *((_BYTE *)&v82 + 4 * v28 + 1);
              v14[23] = *((_BYTE *)&v82 + 4 * v28 + 2);
              v14 += 24;
              v23 = *v15 << v10;
            }
            while ( v15 != v24 );
            v22 = v79;
            v13 = v74;
          }
          v14 += v21;
          v15 += v22;
        }
        while ( v12 );
        v2 = v80;
        v7 = v75;
      }
      else
      {
        do
        {
          --v12;
          if ( v15 != &v15[v13] )
          {
            v17 = &v15[v13];
            do
            {
              v18 = (unsigned __int8)*v15++;
              *v14 = *((_BYTE *)&v82 + ((v18 >> 5) & 4));
              v14[1] = *((_BYTE *)&v82 + ((v18 >> 5) & 4) + 1);
              v14[2] = *((_BYTE *)&v82 + ((v18 >> 5) & 4) + 2);
              v14[3] = *((_BYTE *)&v82 + ((v18 >> 4) & 4));
              v14[4] = *((_BYTE *)&v82 + ((v18 >> 4) & 4) + 1);
              v14[5] = *((_BYTE *)&v82 + ((v18 >> 4) & 4) + 2);
              v14[6] = *((_BYTE *)&v82 + ((v18 >> 3) & 4));
              v14[7] = *((_BYTE *)&v82 + ((v18 >> 3) & 4) + 1);
              v14[8] = *((_BYTE *)&v82 + ((v18 >> 3) & 4) + 2);
              v14[9] = *((_BYTE *)&v82 + ((v18 >> 2) & 4));
              v14[10] = *((_BYTE *)&v82 + ((v18 >> 2) & 4) + 1);
              v14[11] = *((_BYTE *)&v82 + ((v18 >> 2) & 4) + 2);
              v14[12] = *((_BYTE *)&v82 + ((v18 >> 1) & 4));
              v14[13] = *((_BYTE *)&v82 + ((v18 >> 1) & 4) + 1);
              v14[14] = *((_BYTE *)&v82 + ((v18 >> 1) & 4) + 2);
              v14[15] = *((_BYTE *)&v82 + (v18 & 4));
              v14[16] = *((_BYTE *)&v82 + (v18 & 4) + 1);
              v14[17] = *((_BYTE *)&v82 + (v18 & 4) + 2);
              v19 = v18 & 2;
              v20 = v18 & 1;
              v14[18] = *((_BYTE *)&v82 + 2 * v19);
              v14[19] = *((_BYTE *)&v82 + 2 * v19 + 1);
              v14[20] = *((_BYTE *)&v82 + 2 * v19 + 2);
              v14[21] = *((_BYTE *)&v82 + 4 * v20);
              v14[22] = *((_BYTE *)&v82 + 4 * v20 + 1);
              v14[23] = *((_BYTE *)&v82 + 4 * v20 + 2);
              v14 += 24;
            }
            while ( v15 != v17 );
            a1 = v76;
            v13 = v74;
          }
          v14 = &v14[(_QWORD)a1];
          v15 += v16;
        }
        while ( v12 );
      }
      v3 = 1;
      v9 = v78;
    }
    v29 = 1;
    v5 = 8 - v6;
  }
  if ( !(v6 | v29 ^ 1) )
    goto LABEL_44;
  v30 = *((_DWORD *)v2 + 8);
  v31 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
  v32 = (_BYTE *)(*((_QWORD *)v2 + 2) + 3 * *((_DWORD *)v2 + 14));
  if ( !v30 )
  {
LABEL_43:
    v29 = v72;
LABEL_44:
    v33 = 8 - v10;
    goto LABEL_45;
  }
  if ( v9 <= v6 )
  {
    v47 = (int)(3 * v5);
    v48 = v8;
    do
    {
      --v30;
      v49 = *v31 << v9;
      v50 = v32;
      if ( v32 != &v32[v47] )
      {
        do
        {
          v51 = v49;
          v49 *= 2;
          v52 = (v51 >> 5) & 4;
          *v50 = *((_BYTE *)&v82 + v52);
          v50[1] = *((_BYTE *)&v82 + v52 + 1);
          v50[2] = *((_BYTE *)&v82 + v52 + 2);
          v50 += 3;
        }
        while ( v50 != &v32[v47] );
        v48 = v8;
      }
      v32 += v7;
      v31 += v48;
    }
    while ( v30 );
    goto LABEL_42;
  }
  if ( !v3 )
  {
    v40 = v7;
    v41 = v8;
    v42 = (int)(3 * v5);
    do
    {
      --v30;
      v43 = v32;
      v44 = *v31 << v10 << v6;
      if ( v32 != &v32[v42] )
      {
        do
        {
          v45 = v44;
          v44 *= 2;
          v46 = (v45 >> 5) & 4;
          *v43 = *((_BYTE *)&v82 + v46);
          v43[1] = *((_BYTE *)&v82 + v46 + 1);
          v43[2] = *((_BYTE *)&v82 + v46 + 2);
          v43 += 3;
        }
        while ( v43 != &v32[v42] );
        v41 = v8;
      }
      v32 += v40;
      v31 += v41;
    }
    while ( v30 );
    v7 = v75;
LABEL_42:
    v2 = v80;
    goto LABEL_43;
  }
  v33 = 8 - v10;
  v34 = (int)(3 * v5);
  v77 = v34;
  do
  {
    --v30;
    v35 = &v32[v34];
    v36 = v32;
    for ( i = ((unsigned __int8)(*v31 << v10) | (unsigned __int8)(v31[1] >> v73)) << v6; v36 != v35; v36 += 3 )
    {
      v38 = i;
      i *= 2;
      v39 = (v38 >> 5) & 4;
      *v36 = *((_BYTE *)&v82 + v39);
      v36[1] = *((_BYTE *)&v82 + v39 + 1);
      v36[2] = *((_BYTE *)&v82 + v39 + 2);
    }
    v34 = v77;
    v32 += v7;
    v31 += v8;
  }
  while ( v30 );
  v2 = v80;
  v7 = v75;
  v29 = v72;
LABEL_45:
  if ( (v81 & 7) != 0 )
  {
    if ( v29 )
    {
      v53 = *((_DWORD *)v2 + 8);
      v54 = (_BYTE *)(*((_QWORD *)v2 + 2) + (int)(3 * (v81 & 0xFFFFFFF8)));
      v55 = *((int *)v2 + 13);
      v56 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v55 - 1) >> 3));
      v57 = ((_BYTE)v81 - 1) & 7;
      v58 = ((_BYTE)v55 - 1) & 7;
      if ( v53 )
      {
        v59 = v58 < v57;
        v60 = v57 + 1;
        if ( v59 )
        {
          v66 = 3 * v60;
          do
          {
            --v53;
            v67 = &v54[v66];
            v68 = v54;
            for ( j = (*v56 >> v33) | (*(v56 - 1) << v10); v68 != v67; v68 += 3 )
            {
              v70 = j;
              j *= 2;
              v71 = (v70 >> 5) & 4;
              *v68 = *((_BYTE *)&v82 + v71);
              v68[1] = *((_BYTE *)&v82 + v71 + 1);
              v68[2] = *((_BYTE *)&v82 + v71 + 2);
            }
            v66 = 3 * v60;
            v54 += v7;
            v56 += v8;
          }
          while ( v53 );
        }
        else
        {
          v61 = 3 * v60;
          do
          {
            --v53;
            v62 = *v56 << v10;
            for ( k = v54; k != &v54[v61]; k += 3 )
            {
              v64 = v62;
              v62 *= 2;
              v65 = (v64 >> 5) & 4;
              *k = *((_BYTE *)&v82 + v65);
              k[1] = *((_BYTE *)&v82 + v65 + 1);
              k[2] = *((_BYTE *)&v82 + v65 + 2);
            }
            v54 += v7;
            v56 += v8;
          }
          while ( v53 );
        }
      }
    }
  }
}
