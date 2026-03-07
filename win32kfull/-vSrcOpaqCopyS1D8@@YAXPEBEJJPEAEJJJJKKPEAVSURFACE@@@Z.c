void __fastcall vSrcOpaqCopyS1D8(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10)
{
  int v10; // r14d
  int v11; // esi
  int v12; // ebx
  unsigned __int8 *v13; // r13
  unsigned int v14; // r9d
  unsigned int v15; // r15d
  unsigned __int8 *v16; // r10
  __int64 v17; // r12
  int v18; // ecx
  const unsigned __int8 *v19; // rdi
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  unsigned __int8 *v26; // r12
  unsigned __int8 *v27; // r13
  unsigned __int8 *v28; // r15
  unsigned int v29; // edx
  unsigned __int64 v30; // rax
  unsigned int v31; // r8d
  unsigned int v32; // r9d
  unsigned int v33; // edx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // ecx
  int v37; // r10d
  __int64 v38; // rdx
  int v39; // r15d
  const unsigned __int8 *v40; // r9
  int v41; // edi
  int *v42; // r8
  int *v43; // rsi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int8 *v46; // r8
  unsigned __int8 *v47; // r15
  int v48; // edi
  int v49; // esi
  int v50; // r10d
  unsigned int v51; // edx
  int v52; // eax
  unsigned __int8 *v53; // rdi
  int v54; // edx
  int v55; // edx
  int v56; // edx
  int v57; // edx
  int v58; // edx
  int v59; // edx
  unsigned __int8 v60; // al
  unsigned __int8 v61; // al
  unsigned __int8 v62; // al
  int v63; // ecx
  unsigned __int8 v64; // al
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // edx
  int v68; // ecx
  unsigned __int8 *v69; // r8
  const unsigned __int8 *v70; // r9
  unsigned __int8 *v71; // rdi
  int v72; // r10d
  int v73; // r10d
  int v74; // r10d
  int v75; // r10d
  int v76; // r10d
  int v77; // r10d
  unsigned __int64 v78; // rcx
  int v79; // edx
  int v80; // eax
  unsigned int v81; // ecx
  unsigned int v82; // ecx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  int v85; // ecx
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v89; // [rsp+10h] [rbp-91h]
  __int64 v90; // [rsp+18h] [rbp-89h]
  unsigned __int8 *v94; // [rsp+40h] [rbp-61h]
  __int64 v95; // [rsp+48h] [rbp-59h]
  _DWORD v96[2]; // [rsp+58h] [rbp-49h]
  unsigned int v97; // [rsp+60h] [rbp-41h]
  unsigned int v98; // [rsp+64h] [rbp-3Dh]
  unsigned int v99; // [rsp+68h] [rbp-39h]
  unsigned int v100; // [rsp+6Ch] [rbp-35h]
  unsigned int v101; // [rsp+70h] [rbp-31h]
  unsigned int v102; // [rsp+74h] [rbp-2Dh]
  unsigned int v103; // [rsp+78h] [rbp-29h]
  unsigned int v104; // [rsp+7Ch] [rbp-25h]
  unsigned int v105; // [rsp+80h] [rbp-21h]
  unsigned int v106; // [rsp+84h] [rbp-1Dh]
  unsigned int v107; // [rsp+88h] [rbp-19h]
  unsigned int v108; // [rsp+8Ch] [rbp-15h]
  unsigned int v109; // [rsp+90h] [rbp-11h]
  unsigned int v110; // [rsp+94h] [rbp-Dh]

  v10 = a5;
  v11 = a6;
  v12 = a3;
  v13 = a4;
  v14 = (a5 + 7) & 0xFFFFFFF8;
  v15 = (a6 & 0xFFFFFFF8) - v14;
  v96[0] = ((a10 | (a10 << 8)) << 16) | a10 | (a10 << 8);
  v103 = a9 | (v96[0] << 8);
  v99 = a10 | (v103 << 8);
  v105 = a9 | (v99 << 8);
  v100 = a10 | (v105 << 8);
  v97 = a10 | (v100 << 8);
  v104 = a9 | (v97 << 8);
  v107 = a9 | (v104 << 8);
  v109 = a9 | (v107 << 8);
  v110 = a9 | (v109 << 8);
  v102 = a10 | (v110 << 8);
  v106 = a9 | (v102 << 8);
  v108 = a9 | (v106 << 8);
  v101 = a10 | (v108 << 8);
  v98 = a10 | (v101 << 8);
  v96[1] = a10 | (v98 << 8);
  v16 = &v13[v14];
  v17 = a8 * a7;
  v95 = v17;
  v94 = &v16[v17];
  v18 = a3 - (v15 >> 3);
  v19 = &a1[(__int64)(a2 + 7) >> 3];
  v20 = a7 - v15;
  if ( (a6 & 0xFFFFFFF8) > v14 )
  {
    v21 = ((a6 & 0xFFFFFFF8) - v14) & 0xFFFFFFF0;
    v22 = ((a6 & 0xFFFFFFF8) - v14) & 0xFFFFFFE0;
    v23 = v20;
    v24 = v18;
    v90 = v20;
    v89 = v18;
    v25 = v15;
    do
    {
      v26 = &v16[v22];
      v27 = &v16[v25];
      v28 = &v16[v21];
      if ( v16 != &v16[v22] )
      {
        do
        {
          v29 = v19[1];
          v30 = *v19;
          v31 = v19[2];
          v32 = v19[3];
          v19 += 4;
          *(_DWORD *)v16 = v96[v30 >> 4];
          *((_DWORD *)v16 + 1) = v96[v30 & 0xF];
          *((_DWORD *)v16 + 2) = v96[(unsigned __int64)v29 >> 4];
          *((_DWORD *)v16 + 3) = v96[v29 & 0xF];
          *((_DWORD *)v16 + 4) = v96[(unsigned __int64)v31 >> 4];
          *((_DWORD *)v16 + 5) = v96[v31 & 0xF];
          *((_DWORD *)v16 + 6) = v96[(unsigned __int64)v32 >> 4];
          *((_DWORD *)v16 + 7) = v96[v32 & 0xF];
          v16 += 32;
        }
        while ( v16 != v26 );
        v23 = v90;
        v24 = v89;
      }
      while ( v16 != v28 )
      {
        v33 = v19[1];
        v34 = (unsigned __int64)*v19 >> 4;
        v35 = *v19 & 0xF;
        v19 += 2;
        *(_DWORD *)v16 = v96[v34];
        *((_DWORD *)v16 + 1) = v96[v35];
        *((_DWORD *)v16 + 2) = v96[(unsigned __int64)v33 >> 4];
        *((_DWORD *)v16 + 3) = v96[v33 & 0xF];
        v16 += 16;
      }
      while ( v16 != v27 )
      {
        v36 = *v19++;
        *(_DWORD *)v16 = v96[(unsigned __int64)v36 >> 4];
        *((_DWORD *)v16 + 1) = v96[v36 & 0xF];
        v16 += 8;
      }
      v16 += v23;
      v19 += v24;
    }
    while ( v16 != v94 );
    v12 = a3;
    v11 = a6;
    v10 = a5;
    v17 = v95;
    v13 = a4;
  }
  v37 = v11 & 7;
  v38 = v10 & 7;
  if ( (v10 & 7) == 0 )
    goto LABEL_45;
  v39 = a2;
  v40 = &a1[(__int64)a2 >> 3];
  if ( ((v10 ^ (v11 - 1)) & 0xFFFFFFFC) == 0 )
  {
    v41 = dword_1C032A350[2 * (v10 & 3)] & dword_1C032A3F0[2 * (v11 & 3)];
    v42 = (int *)&v13[v10 & 0xFFFFFFFFFFFFFFFCuLL];
    v43 = (int *)((char *)v42 + v17);
    do
    {
      v44 = *v40;
      if ( (unsigned int)v38 >= 4 )
        v45 = v44 & 0xF;
      else
        v45 = v44 >> 4;
      v40 += v12;
      *v42 = v96[v45] & v41 | ~v41 & *v42;
      v42 = (int *)((char *)v42 + a7);
    }
    while ( v42 != v43 );
    return;
  }
  v46 = &v13[v10 & 0xFFFFFFFFFFFFFFF8uLL];
  if ( (v10 & 0xFFFFFFF8) == ((v11 - 1) & 0xFFFFFFF8) )
  {
    v47 = &v46[v17];
    v48 = dword_1C032A3F0[2 * (v11 & 7)] & dword_1C032A350[2 * v38];
    v49 = dword_1C032A3F4[2 * (v11 & 7)] & dword_1C032A354[2 * v38];
    v50 = ~(dword_1C032A3F0[2 * v37] & dword_1C032A350[2 * v38]);
    do
    {
      v51 = *v40;
      v40 += v12;
      v52 = *((_DWORD *)v46 + 1) & ~v49;
      *(_DWORD *)v46 = v50 & *(_DWORD *)v46 | v48 & v96[(unsigned __int64)v51 >> 4];
      *((_DWORD *)v46 + 1) = v52 | v49 & v96[v51 & 0xF];
      v46 += a7;
    }
    while ( v46 != v47 );
    return;
  }
  v53 = &v46[v17];
  v54 = v38 - 1;
  if ( !v54 )
  {
    do
    {
      v67 = *v40;
      v40 += v12;
      v68 = v96[(unsigned __int64)v67 >> 4];
      v46[1] = BYTE1(v68);
      *((_DWORD *)v46 + 1) = v96[v67 & 0xF];
      *((_WORD *)v46 + 1) = HIWORD(v68);
      v46 += a7;
    }
    while ( v46 != v53 );
    goto LABEL_45;
  }
  v55 = v54 - 1;
  if ( !v55 )
  {
    do
    {
      v66 = *v40;
      v40 += v12;
      *((_WORD *)v46 + 1) = HIWORD(v96[(unsigned __int64)v66 >> 4]);
      *((_DWORD *)v46 + 1) = v96[v66 & 0xF];
      v46 += a7;
    }
    while ( v46 != v53 );
    goto LABEL_45;
  }
  v56 = v55 - 1;
  if ( !v56 )
  {
    do
    {
      v65 = *v40;
      v40 += v12;
      v46[3] = HIBYTE(v96[(unsigned __int64)v65 >> 4]);
      *((_DWORD *)v46 + 1) = v96[v65 & 0xF];
      v46 += a7;
    }
    while ( v46 != v53 );
LABEL_45:
    v39 = a2;
    goto LABEL_46;
  }
  v57 = v56 - 1;
  if ( v57 )
  {
    v58 = v57 - 1;
    if ( v58 )
    {
      v59 = v58 - 1;
      if ( v59 )
      {
        if ( v59 == 1 )
        {
          do
          {
            v60 = *v40;
            v40 += v12;
            v46[7] = HIBYTE(v96[v60 & 0xF]);
            v46 += a7;
          }
          while ( v46 != v53 );
        }
      }
      else
      {
        do
        {
          v61 = *v40;
          v40 += v12;
          *((_WORD *)v46 + 3) = HIWORD(v96[v61 & 0xF]);
          v46 += a7;
        }
        while ( v46 != v53 );
      }
      goto LABEL_46;
    }
    do
    {
      v62 = *v40;
      v40 += v12;
      v63 = v96[v62 & 0xF];
      v46[5] = BYTE1(v63);
      *((_WORD *)v46 + 3) = HIWORD(v63);
      v46 += a7;
    }
    while ( v46 != v53 );
    goto LABEL_45;
  }
  do
  {
    v64 = *v40;
    v40 += v12;
    *((_DWORD *)v46 + 1) = v96[v64 & 0xF];
    v46 += a7;
  }
  while ( v46 != v53 );
LABEL_46:
  if ( (v11 & 7) != 0 )
  {
    v69 = &a4[v11 & 0xFFFFFFFFFFFFFFF8uLL];
    v70 = &a1[(__int64)(v39 + v11 - v10) >> 3];
    v71 = &v69[v17];
    v72 = v37 - 1;
    if ( v72 )
    {
      v73 = v72 - 1;
      if ( v73 )
      {
        v74 = v73 - 1;
        if ( v74 )
        {
          v75 = v74 - 1;
          if ( v75 )
          {
            v76 = v75 - 1;
            if ( v76 )
            {
              v77 = v76 - 1;
              if ( v77 )
              {
                if ( v77 == 1 )
                {
                  do
                  {
                    v78 = *v70;
                    v70 += v12;
                    v79 = v96[v78 & 0xF];
                    v80 = v96[v78 >> 4];
                    *((_WORD *)v69 + 2) = v79;
                    v69[6] = BYTE2(v79);
                    *(_DWORD *)v69 = v80;
                    v69 += a7;
                  }
                  while ( v69 != v71 );
                }
              }
              else
              {
                do
                {
                  v81 = *v70;
                  v70 += v12;
                  *(_DWORD *)v69 = v96[(unsigned __int64)v81 >> 4];
                  *((_WORD *)v69 + 2) = v96[v81 & 0xF];
                  v69 += a7;
                }
                while ( v69 != v71 );
              }
            }
            else
            {
              do
              {
                v82 = *v70;
                v70 += v12;
                *(_DWORD *)v69 = v96[(unsigned __int64)v82 >> 4];
                v69[4] = v96[v82 & 0xF];
                v69 += a7;
              }
              while ( v69 != v71 );
            }
          }
          else
          {
            do
            {
              v83 = *v70;
              v70 += v12;
              *(_DWORD *)v69 = v96[v83 >> 4];
              v69 += a7;
            }
            while ( v69 != v71 );
          }
        }
        else
        {
          do
          {
            v84 = *v70;
            v70 += v12;
            v85 = v96[v84 >> 4];
            *(_WORD *)v69 = v85;
            v69[2] = BYTE2(v85);
            v69 += a7;
          }
          while ( v69 != v71 );
        }
      }
      else
      {
        do
        {
          v86 = *v70;
          v70 += v12;
          *(_WORD *)v69 = v96[v86 >> 4];
          v69 += a7;
        }
        while ( v69 != v71 );
      }
    }
    else
    {
      do
      {
        v87 = *v70;
        v70 += v12;
        *v69 = v96[v87 >> 4];
        v69 += a7;
      }
      while ( v69 != v71 );
    }
  }
}
