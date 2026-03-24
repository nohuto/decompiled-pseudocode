/*
 * XREFs of ?vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z @ 0x1C01518A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // rdi
  int v2; // r10d
  int v3; // r15d
  unsigned int v4; // esi
  char *v5; // rdx
  int v6; // r12d
  char v7; // r8
  char v8; // r9
  char v9; // al
  int v10; // r8d
  __int64 v11; // r13
  char v12; // r14
  int v13; // eax
  char v14; // cl
  char v15; // r9
  int v16; // r11d
  __int64 v17; // rdx
  _BYTE *v18; // r9
  __int64 v19; // rcx
  _BYTE *v20; // r8
  int v21; // eax
  unsigned __int8 v22; // bl
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned int v27; // ecx
  unsigned __int64 v28; // rax
  char v29; // si
  __int64 v30; // r14
  _BYTE *v31; // rbx
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rdx
  int v34; // r11d
  int v35; // ebx
  int *v36; // r8
  char *v37; // r9
  char v38; // di
  char v39; // al
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  int v42; // ecx
  unsigned __int8 v43; // al
  int v44; // ecx
  char v45; // r13
  unsigned __int64 v46; // rdx
  int v47; // ecx
  int v48; // r11d
  int v49; // ebx
  int *v50; // r8
  _BYTE *v51; // r9
  unsigned __int8 v52; // al
  int v53; // ecx
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  int v57; // ecx
  char v58; // [rsp+0h] [rbp-48h]
  int v59; // [rsp+4h] [rbp-44h]
  int v60; // [rsp+8h] [rbp-40h]
  char v61; // [rsp+Ch] [rbp-3Ch]
  int v62; // [rsp+18h] [rbp-30h]
  int v63; // [rsp+1Ch] [rbp-2Ch]
  __int64 v64; // [rsp+20h] [rbp-28h]
  __int64 v65; // [rsp+30h] [rbp-18h]
  char v67; // [rsp+98h] [rbp+50h]
  char v68; // [rsp+A0h] [rbp+58h]
  char v69; // [rsp+A1h] [rbp+59h]
  char v70; // [rsp+A2h] [rbp+5Ah]
  char v71; // [rsp+A3h] [rbp+5Bh]
  unsigned int v72; // [rsp+A8h] [rbp+60h]

  v1 = a1;
  v63 = *((_DWORD *)a1 + 13);
  v2 = *((_DWORD *)a1 + 12);
  v3 = *((_DWORD *)a1 + 11);
  v4 = v2 & 7;
  v5 = *(char **)(*(_QWORD *)a1 + 16LL);
  v6 = *((_DWORD *)a1 + 10);
  v72 = v4;
  v7 = *v5;
  v8 = v5[4];
  LOBYTE(v5) = 16 * *v5;
  v60 = v6;
  v68 = v7 | (unsigned __int8)v5;
  v69 = v8 | (unsigned __int8)v5;
  v9 = v7 | (16 * v8);
  v10 = *((_DWORD *)a1 + 14);
  v70 = v9;
  v11 = v10 & 7;
  v71 = v8 | (16 * v8);
  v12 = (v2 & 7) - v11 + 8;
  v13 = *((_DWORD *)a1 + 7);
  if ( v4 >= (unsigned int)v11 )
    v12 = v4 - v11;
  v62 = *((_DWORD *)a1 + 7);
  v14 = 8 - v12;
  v61 = v12;
  v58 = 8 - v12;
  v15 = v10 + v13;
  v59 = v10 + v13;
  if ( (v10 + v13) >> 3 == v10 >> 3 )
  {
    v22 = 0;
    v67 = 0;
  }
  else
  {
    v16 = *((_DWORD *)v1 + 8);
    LODWORD(v17) = ((v10 + v13) >> 3) - ((v10 + 7) >> 3);
    v18 = (_BYTE *)(*((_QWORD *)v1 + 2) + (((__int64)(v10 + 7) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    LODWORD(v19) = v3 - 4 * v17;
    v20 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(v2 + (-(int)v11 & 7)) >> 3));
    v21 = v6 - v17;
    v22 = 1;
    v67 = 1;
    if ( v16 )
    {
      v19 = (int)v19;
      if ( v12 )
      {
        v17 = (int)v17;
        v29 = v12;
        v30 = v21;
        v65 = (int)v17;
        do
        {
          v31 = &v20[v17];
          --v16;
          v32 = *v20 << v29;
          if ( v20 != &v20[v17] )
          {
            do
            {
              v33 = v32 | ((unsigned __int64)(unsigned __int8)*++v20 >> v58);
              *v18 = *(&v68 + (v33 >> 6));
              v18[1] = *(&v68 + ((v33 >> 4) & 3));
              v18[2] = *(&v68 + ((v33 >> 2) & 3));
              v18[3] = *(&v68 + (v33 & 3));
              v18 += 4;
              v32 = *v20 << v29;
            }
            while ( v20 != v31 );
            v17 = v65;
          }
          v18 += (int)v19;
          v20 += v30;
        }
        while ( v16 );
        v1 = a1;
        v12 = v61;
      }
      else
      {
        v23 = (int)v17;
        v24 = v21;
        v64 = (int)v19;
        do
        {
          --v16;
          v25 = v23;
          v26 = 0LL;
          if ( v20 > &v20[v23] )
            v25 = 0LL;
          if ( v25 )
          {
            do
            {
              v27 = (unsigned __int8)*v20;
              ++v26;
              v28 = (unsigned __int8)*v20++;
              *v18 = *(&v68 + (v28 >> 6));
              v18[1] = *(&v68 + ((v27 >> 4) & 3));
              v18[2] = *(&v68 + ((v27 >> 2) & 3));
              v18[3] = *(&v68 + (v27 & 3));
              v18 += 4;
            }
            while ( v26 != v25 );
            v19 = v64;
          }
          v18 += v19;
          v20 += v24;
        }
        while ( v16 );
      }
      v6 = v60;
      v22 = 1;
      v4 = v72;
    }
    v14 = v58;
    v15 = v59;
  }
  if ( (unsigned int)v11 | v22 ^ 1 )
  {
    v34 = dword_1C02FB488[v11];
    if ( !v22 )
      v34 &= dword_1C02FB410[v15 & 7];
    v35 = *((_DWORD *)v1 + 8);
    v36 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)*((int *)v1 + 14) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v37 = (char *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    if ( !v35 )
      goto LABEL_39;
    if ( v4 < (unsigned int)v11 )
    {
      v45 = v14;
      do
      {
        v46 = (unsigned __int64)(unsigned __int8)*v37 >> v45;
        v37 += v6;
        v47 = ~v34 & *v36;
        LOBYTE(v72) = *(&v68 + (v46 >> 6));
        BYTE1(v72) = *(&v68 + ((v46 >> 4) & 3));
        BYTE2(v72) = *(&v68 + ((v46 >> 2) & 3));
        HIBYTE(v72) = *(&v68 + (v46 & 3));
        v72 &= v34;
        *v36 = v72 | v47;
        v36 = (int *)((char *)v36 + v3);
        --v35;
      }
      while ( v35 );
    }
    else
    {
      if ( (int)(v4 + v62) <= 8 )
      {
        do
        {
          v43 = *v37 << v12;
          v37 += v6;
          LOBYTE(v72) = *(&v68 + ((unsigned __int64)v43 >> 6));
          BYTE1(v72) = *(&v68 + (((unsigned __int64)v43 >> 4) & 3));
          BYTE2(v72) = *(&v68 + (((unsigned __int64)v43 >> 2) & 3));
          v44 = *v36;
          HIBYTE(v72) = *(&v68 + (v43 & 3));
          v72 &= v34;
          *v36 = v72 | ~v34 & v44;
          v36 = (int *)((char *)v36 + v3);
          --v35;
        }
        while ( v35 );
        goto LABEL_38;
      }
      v38 = v14;
      do
      {
        v39 = *v37;
        v40 = (unsigned __int8)v37[1];
        v37 += v6;
        v41 = (unsigned __int8)(v39 << v12) | (v40 >> v38);
        v42 = ~v34 & *v36;
        LOBYTE(v72) = *(&v68 + (v41 >> 6));
        BYTE1(v72) = *(&v68 + ((v41 >> 4) & 3));
        BYTE2(v72) = *(&v68 + ((v41 >> 2) & 3));
        HIBYTE(v72) = *(&v68 + (v41 & 3));
        v72 &= v34;
        *v36 = v72 | v42;
        v36 = (int *)((char *)v36 + v3);
        --v35;
      }
      while ( v35 );
      v6 = v60;
    }
    v12 = v61;
LABEL_38:
    v1 = a1;
LABEL_39:
    v22 = v67;
  }
  if ( (v59 & 7) != 0 )
  {
    if ( v22 )
    {
      v48 = *((_DWORD *)v1 + 8);
      v49 = dword_1C02FB410[v59 & 7];
      v50 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)v59 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
      v51 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((*((int *)v1 + 13) - 1LL) >> 3));
      if ( v48 )
      {
        if ( (((_BYTE)v63 - 1) & 7u) < (((_BYTE)v59 - 1) & 7u) )
        {
          do
          {
            v54 = (unsigned __int8)(*(v51 - 1) << v12);
            v55 = (unsigned __int8)*v51;
            v51 += v6;
            v56 = (v55 >> v58) | v54;
            v57 = ~v49 & *v50;
            LOBYTE(v72) = *(&v68 + (v56 >> 6));
            BYTE1(v72) = *(&v68 + ((v56 >> 4) & 3));
            BYTE2(v72) = *(&v68 + ((v56 >> 2) & 3));
            HIBYTE(v72) = *(&v68 + (v56 & 3));
            v72 &= v49;
            *v50 = v72 | v57;
            v50 = (int *)((char *)v50 + v3);
            --v48;
          }
          while ( v48 );
        }
        else
        {
          do
          {
            v52 = *v51 << v12;
            v51 += v6;
            LOBYTE(v72) = *(&v68 + ((unsigned __int64)v52 >> 6));
            BYTE1(v72) = *(&v68 + (((unsigned __int64)v52 >> 4) & 3));
            BYTE2(v72) = *(&v68 + (((unsigned __int64)v52 >> 2) & 3));
            v53 = *v50;
            HIBYTE(v72) = *(&v68 + (v52 & 3));
            v72 &= v49;
            *v50 = v72 | ~v49 & v53;
            v50 = (int *)((char *)v50 + v3);
            --v48;
          }
          while ( v48 );
        }
      }
    }
  }
}
