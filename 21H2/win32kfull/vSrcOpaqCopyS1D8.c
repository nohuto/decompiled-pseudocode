/*
 * XREFs of vSrcOpaqCopyS1D8 @ 0x1C0290A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

char __fastcall vSrcOpaqCopyS1D8(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v10; // r14d
  int v11; // esi
  int v12; // ebx
  __int64 v13; // r13
  unsigned int v14; // r9d
  unsigned int v15; // r15d
  _DWORD *v16; // r10
  __int64 v17; // r12
  int v18; // ecx
  unsigned __int8 *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  _DWORD *v26; // r12
  _DWORD *v27; // r13
  _DWORD *v28; // r15
  unsigned int v29; // edx
  unsigned int v30; // r8d
  unsigned int v31; // r9d
  unsigned int v32; // edx
  __int64 v33; // rcx
  unsigned int v34; // ecx
  int v35; // r10d
  __int64 v36; // rdx
  int v37; // r15d
  char *v38; // r9
  int v39; // edi
  _DWORD *v40; // r8
  _DWORD *v41; // rsi
  unsigned __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r15
  int v45; // edi
  int v46; // esi
  int v47; // r10d
  unsigned int v48; // edx
  __int64 v49; // rdi
  int v50; // edx
  int v51; // edx
  int v52; // edx
  int v53; // edx
  int v54; // edx
  int v55; // edx
  char v56; // al
  char v57; // al
  char v58; // al
  unsigned int v59; // ecx
  char v60; // al
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // edx
  int v64; // ecx
  __int64 v65; // r8
  unsigned __int8 *v66; // r9
  __int64 v67; // rdi
  int v68; // r10d
  int v69; // r10d
  int v70; // r10d
  int v71; // r10d
  int v72; // r10d
  int v73; // r10d
  unsigned __int64 v74; // rcx
  int v75; // edx
  unsigned int v76; // ecx
  unsigned int v77; // ecx
  unsigned __int64 v78; // rax
  int v79; // ecx
  __int64 v82; // [rsp+10h] [rbp-91h]
  __int64 v83; // [rsp+18h] [rbp-89h]
  _DWORD *v87; // [rsp+40h] [rbp-61h]
  __int64 v88; // [rsp+48h] [rbp-59h]
  _DWORD v89[2]; // [rsp+58h] [rbp-49h]
  int v90; // [rsp+60h] [rbp-41h]
  int v91; // [rsp+64h] [rbp-3Dh]
  int v92; // [rsp+68h] [rbp-39h]
  int v93; // [rsp+6Ch] [rbp-35h]
  int v94; // [rsp+70h] [rbp-31h]
  int v95; // [rsp+74h] [rbp-2Dh]
  int v96; // [rsp+78h] [rbp-29h]
  int v97; // [rsp+7Ch] [rbp-25h]
  int v98; // [rsp+80h] [rbp-21h]
  int v99; // [rsp+84h] [rbp-1Dh]
  int v100; // [rsp+88h] [rbp-19h]
  int v101; // [rsp+8Ch] [rbp-15h]
  int v102; // [rsp+90h] [rbp-11h]
  int v103; // [rsp+94h] [rbp-Dh]

  v10 = a5;
  v11 = a6;
  v12 = a3;
  v13 = a4;
  v14 = (a5 + 7) & 0xFFFFFFF8;
  v15 = (a6 & 0xFFFFFFF8) - v14;
  v89[0] = ((a10 | (a10 << 8)) << 16) | a10 | (a10 << 8);
  v96 = a9 | (v89[0] << 8);
  v92 = a10 | (v96 << 8);
  v98 = a9 | (v92 << 8);
  v93 = a10 | (v98 << 8);
  v90 = a10 | (v93 << 8);
  v97 = a9 | (v90 << 8);
  v100 = a9 | (v97 << 8);
  v102 = a9 | (v100 << 8);
  v103 = a9 | (v102 << 8);
  v95 = a10 | (v103 << 8);
  v99 = a9 | (v95 << 8);
  v101 = a9 | (v99 << 8);
  v94 = a10 | (v101 << 8);
  v91 = a10 | (v94 << 8);
  v89[1] = a10 | (v91 << 8);
  v16 = (_DWORD *)(v13 + v14);
  v17 = a8 * a7;
  v88 = v17;
  v87 = (_DWORD *)((char *)v16 + v17);
  v18 = a3 - (v15 >> 3);
  v19 = (unsigned __int8 *)(a1 + ((__int64)(a2 + 7) >> 3));
  LODWORD(v20) = a7 - v15;
  if ( (a6 & 0xFFFFFFF8) > v14 )
  {
    v21 = ((a6 & 0xFFFFFFF8) - v14) & 0xFFFFFFF0;
    v22 = ((a6 & 0xFFFFFFF8) - v14) & 0xFFFFFFE0;
    v23 = (int)v20;
    v24 = v18;
    v83 = (int)v20;
    v82 = v18;
    v25 = v15;
    do
    {
      v26 = (_DWORD *)((char *)v16 + v22);
      v27 = (_DWORD *)((char *)v16 + v25);
      v28 = (_DWORD *)((char *)v16 + v21);
      if ( v16 != (_DWORD *)((char *)v16 + v22) )
      {
        do
        {
          v29 = v19[1];
          v20 = *v19;
          v30 = v19[2];
          v31 = v19[3];
          v19 += 4;
          *v16 = v89[v20 >> 4];
          v16[1] = v89[v20 & 0xF];
          v16[2] = v89[(unsigned __int64)v29 >> 4];
          v16[3] = v89[v29 & 0xF];
          v16[4] = v89[(unsigned __int64)v30 >> 4];
          v16[5] = v89[v30 & 0xF];
          v16[6] = v89[(unsigned __int64)v31 >> 4];
          LODWORD(v20) = v89[v31 & 0xF];
          v16[7] = v20;
          v16 += 8;
        }
        while ( v16 != v26 );
        v23 = v83;
        v24 = v82;
      }
      while ( v16 != v28 )
      {
        v32 = v19[1];
        v20 = (unsigned __int64)*v19 >> 4;
        v33 = *v19 & 0xF;
        v19 += 2;
        *v16 = v89[v20];
        v16[1] = v89[v33];
        v16[2] = v89[(unsigned __int64)v32 >> 4];
        LODWORD(v20) = v89[v32 & 0xF];
        v16[3] = v20;
        v16 += 4;
      }
      while ( v16 != v27 )
      {
        v34 = *v19++;
        *v16 = v89[(unsigned __int64)v34 >> 4];
        LODWORD(v20) = v89[v34 & 0xF];
        v16[1] = v20;
        v16 += 2;
      }
      v16 = (_DWORD *)((char *)v16 + v23);
      v19 += v24;
    }
    while ( v16 != v87 );
    v12 = a3;
    v11 = a6;
    v10 = a5;
    v17 = v88;
    v13 = a4;
  }
  v35 = v11 & 7;
  v36 = v10 & 7;
  if ( (v10 & 7) == 0 )
    goto LABEL_45;
  v37 = a2;
  v38 = (char *)(a1 + ((__int64)a2 >> 3));
  LODWORD(v20) = v10 ^ (v11 - 1);
  if ( (v20 & 0xFFFFFFFC) == 0 )
  {
    v39 = gTextLeftMask[2 * (v10 & 3)] & gTextRightMask[2 * (v11 & 3)];
    v40 = (_DWORD *)(v13 + (v10 & 0xFFFFFFFFFFFFFFFCuLL));
    v41 = (_DWORD *)((char *)v40 + v17);
    do
    {
      v42 = (unsigned __int8)*v38;
      if ( (unsigned int)v36 >= 4 )
        v20 = v42 & 0xF;
      else
        v20 = v42 >> 4;
      v38 += v12;
      LODWORD(v20) = v89[v20] & v39;
      *v40 = v20 | ~v39 & *v40;
      v40 = (_DWORD *)((char *)v40 + a7);
    }
    while ( v40 != v41 );
    return v20;
  }
  v43 = v13 + (v10 & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (v10 & 0xFFFFFFF8) == ((v11 - 1) & 0xFFFFFFF8) )
  {
    v44 = v17 + v43;
    v45 = gTextRightMask[2 * (v11 & 7)] & gTextLeftMask[2 * v36];
    v46 = dword_1C02FB444[2 * (v11 & 7)] & dword_1C02FB484[2 * v36];
    v47 = ~(gTextRightMask[2 * v35] & gTextLeftMask[2 * v36]);
    do
    {
      v48 = (unsigned __int8)*v38;
      v38 += v12;
      LODWORD(v20) = *(_DWORD *)(v43 + 4) & ~v46;
      *(_DWORD *)v43 = v47 & *(_DWORD *)v43 | v45 & v89[(unsigned __int64)v48 >> 4];
      *(_DWORD *)(v43 + 4) = v20 | v46 & v89[v48 & 0xF];
      v43 += a7;
    }
    while ( v43 != v44 );
    return v20;
  }
  v49 = v17 + v43;
  v50 = v36 - 1;
  if ( !v50 )
  {
    do
    {
      v63 = (unsigned __int8)*v38;
      v38 += v12;
      v64 = v89[(unsigned __int64)v63 >> 4];
      *(_BYTE *)(v43 + 1) = BYTE1(v64);
      LODWORD(v20) = v89[v63 & 0xF];
      *(_DWORD *)(v43 + 4) = v20;
      *(_WORD *)(v43 + 2) = HIWORD(v64);
      v43 += a7;
    }
    while ( v43 != v49 );
    goto LABEL_45;
  }
  v51 = v50 - 1;
  if ( !v51 )
  {
    do
    {
      v62 = (unsigned __int8)*v38;
      v38 += v12;
      *(_WORD *)(v43 + 2) = HIWORD(v89[(unsigned __int64)v62 >> 4]);
      LODWORD(v20) = v89[v62 & 0xF];
      *(_DWORD *)(v43 + 4) = v20;
      v43 += a7;
    }
    while ( v43 != v49 );
    goto LABEL_45;
  }
  v52 = v51 - 1;
  if ( !v52 )
  {
    do
    {
      v61 = (unsigned __int8)*v38;
      v38 += v12;
      *(_BYTE *)(v43 + 3) = HIBYTE(v89[(unsigned __int64)v61 >> 4]);
      LODWORD(v20) = v89[v61 & 0xF];
      *(_DWORD *)(v43 + 4) = v20;
      v43 += a7;
    }
    while ( v43 != v49 );
LABEL_45:
    v37 = a2;
    goto LABEL_46;
  }
  v53 = v52 - 1;
  if ( v53 )
  {
    v54 = v53 - 1;
    if ( v54 )
    {
      v55 = v54 - 1;
      if ( v55 )
      {
        if ( v55 == 1 )
        {
          do
          {
            v56 = *v38;
            v38 += v12;
            LOBYTE(v20) = HIBYTE(v89[v56 & 0xF]);
            *(_BYTE *)(v43 + 7) = v20;
            v43 += a7;
          }
          while ( v43 != v49 );
        }
      }
      else
      {
        do
        {
          v57 = *v38;
          v38 += v12;
          LOWORD(v20) = HIWORD(v89[v57 & 0xF]);
          *(_WORD *)(v43 + 6) = v20;
          v43 += a7;
        }
        while ( v43 != v49 );
      }
      goto LABEL_46;
    }
    do
    {
      v58 = *v38;
      v38 += v12;
      v59 = v89[v58 & 0xF];
      LODWORD(v20) = v59 >> 8;
      *(_BYTE *)(v43 + 5) = BYTE1(v59);
      *(_WORD *)(v43 + 6) = HIWORD(v59);
      v43 += a7;
    }
    while ( v43 != v49 );
    goto LABEL_45;
  }
  do
  {
    v60 = *v38;
    v38 += v12;
    LODWORD(v20) = v89[v60 & 0xF];
    *(_DWORD *)(v43 + 4) = v20;
    v43 += a7;
  }
  while ( v43 != v49 );
LABEL_46:
  if ( (v11 & 7) != 0 )
  {
    v65 = a4 + (v11 & 0xFFFFFFFFFFFFFFF8uLL);
    v66 = (unsigned __int8 *)(a1 + ((__int64)(v37 + v11 - v10) >> 3));
    v67 = v17 + v65;
    v68 = v35 - 1;
    if ( v68 )
    {
      v69 = v68 - 1;
      if ( v69 )
      {
        v70 = v69 - 1;
        if ( v70 )
        {
          v71 = v70 - 1;
          if ( v71 )
          {
            v72 = v71 - 1;
            if ( v72 )
            {
              v73 = v72 - 1;
              if ( v73 )
              {
                if ( v73 == 1 )
                {
                  do
                  {
                    v74 = *v66;
                    v66 += v12;
                    v75 = v89[v74 & 0xF];
                    LODWORD(v20) = v89[v74 >> 4];
                    *(_WORD *)(v65 + 4) = v75;
                    *(_BYTE *)(v65 + 6) = BYTE2(v75);
                    *(_DWORD *)v65 = v20;
                    v65 += a7;
                  }
                  while ( v65 != v67 );
                }
              }
              else
              {
                do
                {
                  v76 = *v66;
                  v66 += v12;
                  *(_DWORD *)v65 = v89[(unsigned __int64)v76 >> 4];
                  LOWORD(v20) = v89[v76 & 0xF];
                  *(_WORD *)(v65 + 4) = v20;
                  v65 += a7;
                }
                while ( v65 != v67 );
              }
            }
            else
            {
              do
              {
                v77 = *v66;
                v66 += v12;
                *(_DWORD *)v65 = v89[(unsigned __int64)v77 >> 4];
                LOBYTE(v20) = v89[v77 & 0xF];
                *(_BYTE *)(v65 + 4) = v20;
                v65 += a7;
              }
              while ( v65 != v67 );
            }
          }
          else
          {
            do
            {
              v20 = *v66;
              v66 += v12;
              LODWORD(v20) = v89[v20 >> 4];
              *(_DWORD *)v65 = v20;
              v65 += a7;
            }
            while ( v65 != v67 );
          }
        }
        else
        {
          do
          {
            v78 = *v66;
            v66 += v12;
            v20 = v78 >> 4;
            v79 = v89[v20];
            *(_WORD *)v65 = v79;
            *(_BYTE *)(v65 + 2) = BYTE2(v79);
            v65 += a7;
          }
          while ( v65 != v67 );
        }
      }
      else
      {
        do
        {
          v20 = *v66;
          v66 += v12;
          LOWORD(v20) = v89[v20 >> 4];
          *(_WORD *)v65 = v20;
          v65 += a7;
        }
        while ( v65 != v67 );
      }
    }
    else
    {
      do
      {
        v20 = *v66;
        v66 += v12;
        LOBYTE(v20) = v89[v20 >> 4];
        *(_BYTE *)v65 = v20;
        v65 += a7;
      }
      while ( v65 != v67 );
    }
  }
  return v20;
}
