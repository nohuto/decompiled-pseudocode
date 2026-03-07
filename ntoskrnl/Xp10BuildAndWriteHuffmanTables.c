__int64 __fastcall Xp10BuildAndWriteHuffmanTables(int a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  int v8; // r9d
  unsigned __int16 v9; // dx
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // r8
  unsigned int v14; // ecx
  __int64 v15; // r12
  unsigned int v16; // r14d
  _DWORD *v17; // r15
  unsigned __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r10d
  int v23; // r9d
  __int64 v24; // rdx
  unsigned int v25; // r8d
  unsigned int v26; // ecx
  __int64 v27; // rax
  _BYTE *v28; // rdx
  unsigned int v29; // r9d
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r8
  int v32; // ecx
  _BYTE *v33; // r8
  unsigned int v34; // r11d
  unsigned int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rax
  _BYTE *v38; // r8
  unsigned int v39; // edx
  unsigned __int64 v40; // rcx
  unsigned int v41; // eax
  int v42; // ecx
  _BYTE *v43; // r8
  unsigned int v44; // r11d
  unsigned int v45; // esi
  unsigned int v46; // r9d
  unsigned int v47; // r10d
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // r9d
  _BYTE *v51; // r8
  unsigned __int64 v52; // rcx
  unsigned int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rax
  _BYTE *v56; // r8
  unsigned int v57; // edx
  unsigned __int64 v58; // rcx
  int v59; // esi
  unsigned int v60; // r12d
  unsigned __int16 v61; // r13
  int v62; // ecx
  unsigned int v63; // edx
  int v64; // eax
  unsigned int v65; // ecx
  __int64 v66; // rax
  unsigned int v67; // edx
  unsigned int v68; // r11d
  _BYTE *v69; // r8
  unsigned int v70; // r10d
  unsigned int v71; // r9d
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned int v74; // r9d
  _BYTE *v75; // r8
  unsigned __int64 v76; // rcx
  unsigned __int16 v77; // r8
  int v78; // r14d
  unsigned int v79; // r15d
  unsigned int v80; // edx
  unsigned int v81; // esi
  _BYTE *v82; // r9
  unsigned int v83; // edi
  unsigned int v84; // r11d
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned int v87; // r10d
  _BYTE *v88; // r9
  unsigned __int64 v89; // rcx
  unsigned int v90; // r10d
  int v91; // r14d
  unsigned int v92; // r15d
  unsigned int v93; // edx
  unsigned int v94; // esi
  _BYTE *v95; // r8
  unsigned int v96; // edi
  unsigned int v97; // r11d
  __int64 v98; // rax
  __int64 v99; // rax
  unsigned int v100; // r9d
  _BYTE *v101; // r8
  unsigned __int64 v102; // rcx
  unsigned int v103; // r9d
  unsigned int v104; // edi
  unsigned int v105; // edx
  _BYTE *v106; // r8
  unsigned int v107; // esi
  unsigned int v108; // r11d
  __int64 v109; // rax
  __int64 v110; // rax
  unsigned int v111; // r11d
  _BYTE *v112; // r8
  unsigned __int64 v113; // rcx
  __int64 v114; // rdx
  unsigned int v115; // ecx
  int v116; // esi
  unsigned int v117; // edi
  _BYTE *v118; // r8
  unsigned int v119; // r10d
  unsigned int v120; // eax
  unsigned int v121; // r11d
  __int64 v122; // rax
  __int64 v123; // rax
  unsigned int v124; // r10d
  _BYTE *v125; // r8
  unsigned __int64 v126; // rcx
  char v127; // cl
  __int64 v128; // rax
  __int64 v129; // rax
  _BYTE *v130; // r8
  unsigned int v131; // edx
  unsigned __int64 v132; // rcx
  unsigned int v133; // r10d
  unsigned int v134; // r14d
  __int64 v135; // rsi
  __int64 v136; // r12
  unsigned int v137; // r11d
  _BYTE *v138; // r8
  int v139; // r15d
  unsigned int v140; // edi
  unsigned int v141; // eax
  __int64 v142; // rax
  __int64 v143; // rax
  _BYTE *v144; // r8
  unsigned int v145; // edx
  unsigned __int64 v146; // rcx
  _BYTE *v147; // r8
  int v148; // esi
  unsigned int v149; // edi
  __int64 v150; // rax
  __int64 v151; // rax
  unsigned __int64 v152; // rcx
  __int16 v154; // [rsp+30h] [rbp-D0h]
  int v156; // [rsp+38h] [rbp-C8h]
  _DWORD v158[36]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v159[36]; // [rsp+E0h] [rbp-20h] BYREF

  memset(v158, 0, 0x84uLL);
  memset(v159, 0, 0x84uLL);
  v8 = 8;
  v9 = 0;
  while ( v9 < a3 )
  {
    v10 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
    if ( v10 )
    {
      v11 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
      if ( v10 == v8 )
      {
        v11 = 30;
      }
      else
      {
        if ( v9 >= 0x10u )
        {
          v12 = *(_DWORD *)(a2 + 4LL * v9 - 64) & 0x1F;
          if ( v10 == v12 )
          {
            v11 = 31;
          }
          else if ( v10 == v12 + 1 )
          {
            v11 = 32;
          }
        }
        v8 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
      }
      ++v158[v11];
      ++v9;
    }
    else
    {
      v13 = v9;
      while ( v9 < a3 && (*(_DWORD *)(a2 + 4LL * v9) & 0x1F) == 0 )
        ++v9;
      for ( ; (unsigned __int16)(v13 ^ v9) >= 0x10u; v13 = (v13 & 0xFFF0) + 16 )
        ++v158[28];
      v14 = v9 - v13;
      if ( v9 != v13 )
      {
        if ( v14 >= 5 )
          ++v158[29];
        else
          v158[0] += v14;
      }
    }
  }
  v15 = 33LL;
  Xp10BuildHuffmanEncodings(a1, (unsigned int)v158, 33, 8, (__int64)v159);
  v16 = 4;
  v17 = v159;
  do
  {
    v18 = *((unsigned int *)a4 + 2);
    v19 = *v17 & 0x1F;
    v20 = *a4;
    v21 = v18;
    v22 = *((_DWORD *)a4 + 3);
    if ( v19 == v16 )
    {
      v23 = v18;
      v24 = v20 + (v18 >> 3);
      v25 = 1;
      v26 = 8 - (v18 & 7);
      if ( v23 + 1 <= v22 || (v25 = v22 - v23, v22 != v23) )
      {
        if ( v26 >= v25 )
          v26 = v25;
        v27 = v25 - v26;
        v28 = (_BYTE *)(v24 + 1);
        v29 = 0;
        if ( (unsigned int)v27 >= 8 )
        {
          v30 = (unsigned __int64)(unsigned int)v27 >> 3;
          do
          {
            *v28 = v29;
            v27 = (unsigned int)(v27 - 8);
            v29 >>= 8;
            ++v28;
            --v30;
          }
          while ( v30 );
        }
        if ( (_DWORD)v27 )
          *v28 |= (unsigned __int8)v29 & byte_14001BC30[4 * v27];
        *((_DWORD *)a4 + 2) += v25;
      }
    }
    else
    {
      v31 = v18 >> 3;
      v32 = v18 & 7;
      v33 = (_BYTE *)(v20 + v31);
      v34 = 8 - v32;
      v35 = 1;
      if ( v21 + 1 <= v22 || (v35 = v22 - v21, v22 != v21) )
      {
        v36 = v34;
        if ( v34 >= v35 )
          v36 = v35;
        *v33 |= (byte_14001BC30[4 * v36] & 1) << v32;
        v37 = v35 - (unsigned int)v36;
        v38 = v33 + 1;
        v39 = 1u >> v34;
        if ( (unsigned int)v37 >= 8 )
        {
          v40 = (unsigned __int64)(unsigned int)v37 >> 3;
          do
          {
            *v38 = v39;
            v37 = (unsigned int)(v37 - 8);
            v39 >>= 8;
            ++v38;
            --v40;
          }
          while ( v40 );
        }
        if ( (_DWORD)v37 )
          *v38 |= (unsigned __int8)v39 & byte_14001BC30[4 * v37];
        *((_DWORD *)a4 + 2) += v35;
        v21 = *((_DWORD *)a4 + 2);
      }
      v41 = *((_DWORD *)a4 + 3);
      v42 = v21 & 7;
      v43 = (_BYTE *)(*a4 + ((unsigned __int64)v21 >> 3));
      v44 = 8 - v42;
      v45 = v21 + 3;
      if ( v19 <= v16 )
      {
        v53 = 3;
        if ( v45 <= v41 || (v53 = v41 - v21, v41 != v21) )
        {
          v54 = v44;
          if ( v44 >= v53 )
            v54 = v53;
          *v43 |= ((unsigned __int8)v19 & (unsigned __int8)byte_14001BC30[4 * v54]) << v42;
          v55 = v53 - (unsigned int)v54;
          v56 = v43 + 1;
          v57 = v19 >> v44;
          if ( (unsigned int)v55 >= 8 )
          {
            v58 = (unsigned __int64)(unsigned int)v55 >> 3;
            do
            {
              *v56 = v57;
              v55 = (unsigned int)(v55 - 8);
              v57 >>= 8;
              ++v56;
              --v58;
            }
            while ( v58 );
          }
          if ( (_DWORD)v55 )
            *v56 |= (unsigned __int8)v57 & byte_14001BC30[4 * v55];
          *((_DWORD *)a4 + 2) += v53;
        }
      }
      else
      {
        v46 = v19 - 1;
        v47 = 3;
        if ( v45 <= v41 || (v47 = v41 - v21, v41 != v21) )
        {
          v48 = v44;
          if ( v44 >= v47 )
            v48 = v47;
          *v43 |= ((unsigned __int8)v46 & (unsigned __int8)byte_14001BC30[4 * v48]) << v42;
          v49 = v47 - (unsigned int)v48;
          v50 = v46 >> v44;
          v51 = v43 + 1;
          if ( (unsigned int)v49 >= 8 )
          {
            v52 = (unsigned __int64)(unsigned int)v49 >> 3;
            do
            {
              *v51 = v50;
              v49 = (unsigned int)(v49 - 8);
              v50 >>= 8;
              ++v51;
              --v52;
            }
            while ( v52 );
          }
          if ( (_DWORD)v49 )
            *v51 |= (unsigned __int8)v50 & byte_14001BC30[4 * v49];
          *((_DWORD *)a4 + 2) += v47;
        }
      }
      v16 = v19;
    }
    ++v17;
    --v15;
  }
  while ( v15 );
  v59 = 8;
  v154 = 0;
  v60 = a3;
  v61 = 0;
  v156 = 8;
  if ( a3 )
  {
    while ( 1 )
    {
      v62 = *(_DWORD *)(a2 + 4LL * v61) & 0x1F;
      if ( v62 )
      {
        v63 = *(_DWORD *)(a2 + 4LL * v61) & 0x1F;
        if ( v62 == v59 )
        {
          v63 = 30;
        }
        else
        {
          if ( v61 >= 0x10u )
          {
            v64 = *(_DWORD *)(a2 + 4LL * v61 - 64) & 0x1F;
            if ( v62 == v64 )
            {
              v63 = 31;
            }
            else if ( v62 == v64 + 1 )
            {
              v63 = 32;
            }
          }
          v156 = *(_DWORD *)(a2 + 4LL * v61) & 0x1F;
        }
        v65 = *((_DWORD *)a4 + 3);
        v66 = v63;
        v67 = *((_DWORD *)a4 + 2);
        v68 = 8 - (v67 & 7);
        v69 = (_BYTE *)(*a4 + ((unsigned __int64)v67 >> 3));
        v70 = v159[v66] & 0x1F;
        v71 = v159[v66] >> 5;
        if ( v67 + v70 <= v65 || (v70 = v65 - v67, v65 != v67) )
        {
          v72 = v68;
          if ( v68 >= v70 )
            v72 = v70;
          *v69 |= ((unsigned __int8)v71 & (unsigned __int8)byte_14001BC30[4 * v72]) << (v67 & 7);
          v73 = v70 - (unsigned int)v72;
          v74 = v71 >> v68;
          v75 = v69 + 1;
          if ( (unsigned int)v73 >= 8 )
          {
            v76 = (unsigned __int64)(unsigned int)v73 >> 3;
            do
            {
              *v75 = v74;
              v73 = (unsigned int)(v73 - 8);
              v74 >>= 8;
              ++v75;
              --v76;
            }
            while ( v76 );
          }
          if ( (_DWORD)v73 )
            *v75 |= (unsigned __int8)v74 & byte_14001BC30[4 * v73];
          *((_DWORD *)a4 + 2) += v70;
        }
        v154 = ++v61;
        goto LABEL_177;
      }
      v77 = v61;
      if ( v61 < v60 )
      {
        do
        {
          if ( (*(_DWORD *)(a2 + 4LL * v61) & 0x1F) != 0 )
            break;
          ++v61;
        }
        while ( v61 < v60 );
        v154 = v61;
      }
      if ( (unsigned __int16)(v77 ^ v61) >= 0x10u )
      {
        v78 = v159[28] & 0x1F;
        v79 = v159[28] >> 5;
        do
        {
          v80 = *((_DWORD *)a4 + 2);
          v81 = *((_DWORD *)a4 + 3);
          v82 = (_BYTE *)(*a4 + ((unsigned __int64)v80 >> 3));
          v83 = 8 - (v80 & 7);
          v84 = v78;
          if ( v80 + v78 <= v81 || (v84 = v81 - v80, v81 != v80) )
          {
            v85 = v83;
            if ( v83 >= v84 )
              v85 = v84;
            *v82 |= ((unsigned __int8)v79 & (unsigned __int8)byte_14001BC30[4 * v85]) << (v80 & 7);
            v86 = v84 - (unsigned int)v85;
            v87 = v79 >> v83;
            v88 = v82 + 1;
            if ( (unsigned int)v86 >= 8 )
            {
              v89 = (unsigned __int64)(unsigned int)v86 >> 3;
              do
              {
                *v88 = v87;
                v86 = (unsigned int)(v86 - 8);
                v87 >>= 8;
                ++v88;
                --v89;
              }
              while ( v89 );
            }
            if ( (_DWORD)v86 )
              *v88 |= (unsigned __int8)v87 & byte_14001BC30[4 * v86];
            *((_DWORD *)a4 + 2) += v84;
          }
          v77 = (v77 & 0xFFF0) + 16;
        }
        while ( (unsigned __int16)(v77 ^ v61) >= 0x10u );
        v60 = a3;
      }
      v90 = v61 - v77;
      if ( v61 == v77 )
        goto LABEL_177;
      if ( v90 < 5 )
      {
        v91 = v159[0] & 0x1F;
        v92 = v159[0] >> 5;
        do
        {
          v93 = *((_DWORD *)a4 + 2);
          v94 = *((_DWORD *)a4 + 3);
          v95 = (_BYTE *)(*a4 + ((unsigned __int64)v93 >> 3));
          v96 = 8 - (v93 & 7);
          v97 = v91;
          if ( v93 + v91 <= v94 || (v97 = v94 - v93, v94 != v93) )
          {
            v98 = v96;
            if ( v96 >= v97 )
              v98 = v97;
            *v95 |= ((unsigned __int8)v92 & (unsigned __int8)byte_14001BC30[4 * v98]) << (v93 & 7);
            v99 = v97 - (unsigned int)v98;
            v100 = v92 >> v96;
            v101 = v95 + 1;
            if ( (unsigned int)v99 >= 8 )
            {
              v102 = (unsigned __int64)(unsigned int)v99 >> 3;
              do
              {
                *v101 = v100;
                v99 = (unsigned int)(v99 - 8);
                v100 >>= 8;
                ++v101;
                --v102;
              }
              while ( v102 );
            }
            if ( (_DWORD)v99 )
              *v101 |= (unsigned __int8)v100 & byte_14001BC30[4 * v99];
            *((_DWORD *)a4 + 2) += v97;
          }
          --v90;
        }
        while ( v90 );
        v61 = v154;
        v60 = a3;
        goto LABEL_177;
      }
      v103 = *((_DWORD *)a4 + 2);
      v104 = v159[29] & 0x1F;
      v105 = *((_DWORD *)a4 + 3);
      v106 = (_BYTE *)(*a4 + ((unsigned __int64)v103 >> 3));
      v107 = 8 - (v103 & 7);
      v108 = v159[29] >> 5;
      if ( v103 + v104 <= v105 || (v104 = v105 - v103, v105 != v103) )
      {
        v109 = v107;
        if ( v107 >= v104 )
          v109 = v104;
        *v106 |= ((unsigned __int8)v108 & (unsigned __int8)byte_14001BC30[4 * v109]) << (v103 & 7);
        v110 = v104 - (unsigned int)v109;
        v111 = v108 >> v107;
        v112 = v106 + 1;
        if ( (unsigned int)v110 >= 8 )
        {
          v113 = (unsigned __int64)(unsigned int)v110 >> 3;
          do
          {
            *v112 = v111;
            v110 = (unsigned int)(v110 - 8);
            v111 >>= 8;
            ++v112;
            --v113;
          }
          while ( v113 );
        }
        if ( (_DWORD)v110 )
          *v112 |= (unsigned __int8)v111 & byte_14001BC30[4 * v110];
        *((_DWORD *)a4 + 2) += v104;
        v103 = *((_DWORD *)a4 + 2);
      }
      v114 = *a4;
      v115 = *((_DWORD *)a4 + 3);
      v116 = v103 & 7;
      v117 = 8 - v116;
      v118 = (_BYTE *)(*a4 + ((unsigned __int64)v103 >> 3));
      v119 = v90 - 5;
      v120 = v103 + 2;
      v121 = 2;
      if ( v119 >= 3 )
        break;
      if ( v120 > v115 )
      {
        v121 = v115 - v103;
        if ( v115 == v103 )
          goto LABEL_177;
      }
      v122 = v117;
      if ( v117 >= v121 )
        v122 = v121;
      *v118 |= ((unsigned __int8)v119 & (unsigned __int8)byte_14001BC30[4 * v122]) << v116;
      v123 = v121 - (unsigned int)v122;
      v124 = v119 >> v117;
      v125 = v118 + 1;
      if ( (unsigned int)v123 >= 8 )
      {
        v126 = (unsigned __int64)(unsigned int)v123 >> 3;
        do
        {
          *v125 = v124;
          v123 = (unsigned int)(v123 - 8);
          v124 >>= 8;
          ++v125;
          --v126;
        }
        while ( v126 );
      }
      if ( (_DWORD)v123 )
      {
        v127 = byte_14001BC30[4 * v123];
LABEL_175:
        *v125 |= (unsigned __int8)v124 & v127;
      }
LABEL_176:
      *((_DWORD *)a4 + 2) += v121;
LABEL_177:
      v59 = v156;
      if ( v61 >= v60 )
        return 0LL;
    }
    if ( v120 <= v115 || (v121 = v115 - v103, v115 != v103) )
    {
      v128 = v117;
      if ( v117 >= v121 )
        v128 = v121;
      *v118 |= (byte_14001BC30[4 * v128] & 3) << v116;
      v129 = v121 - (unsigned int)v128;
      v130 = v118 + 1;
      v131 = 3u >> v117;
      if ( (unsigned int)v129 >= 8 )
      {
        v132 = (unsigned __int64)(unsigned int)v129 >> 3;
        do
        {
          *v130 = v131;
          v129 = (unsigned int)(v129 - 8);
          v131 >>= 8;
          ++v130;
          --v132;
        }
        while ( v132 );
      }
      if ( (_DWORD)v129 )
        *v130 |= (unsigned __int8)v131 & byte_14001BC30[4 * v129];
      *((_DWORD *)a4 + 2) += v121;
      v103 = *((_DWORD *)a4 + 2);
      v114 = *a4;
      v115 = *((_DWORD *)a4 + 3);
    }
    v133 = v119 - 3;
    v134 = v115;
    v135 = v114;
    if ( v133 >= 7 )
    {
      v136 = v133 / 7;
      do
      {
        v137 = 3;
        v138 = (_BYTE *)(v135 + ((unsigned __int64)v103 >> 3));
        v139 = v103 & 7;
        v115 = v134;
        v114 = v135;
        v140 = 8 - v139;
        if ( v103 + 3 <= v134 || (v141 = v103, v137 = v134 - v103, v134 != v103) )
        {
          v142 = v140;
          if ( v140 >= v137 )
            v142 = v137;
          *v138 |= (byte_14001BC30[4 * v142] & 7) << v139;
          v143 = v137 - (unsigned int)v142;
          v144 = v138 + 1;
          v145 = 7u >> v140;
          if ( (unsigned int)v143 >= 8 )
          {
            v146 = (unsigned __int64)(unsigned int)v143 >> 3;
            do
            {
              *v144 = v145;
              v143 = (unsigned int)(v143 - 8);
              v145 >>= 8;
              ++v144;
              --v146;
            }
            while ( v146 );
          }
          if ( (_DWORD)v143 )
            *v144 |= (unsigned __int8)v145 & byte_14001BC30[4 * v143];
          v114 = *a4;
          *((_DWORD *)a4 + 2) += v137;
          v135 = v114;
          v115 = *((_DWORD *)a4 + 3);
          v134 = v115;
          v141 = *((_DWORD *)a4 + 2);
        }
        v133 -= 7;
        v103 = v141;
        --v136;
      }
      while ( v136 );
      v61 = v154;
      v60 = a3;
    }
    v121 = 3;
    v147 = (_BYTE *)(v114 + ((unsigned __int64)v103 >> 3));
    v148 = v103 & 7;
    v149 = 8 - v148;
    if ( v103 + 3 > v115 )
    {
      v121 = v115 - v103;
      if ( v115 == v103 )
        goto LABEL_177;
    }
    v150 = v149;
    if ( v149 >= v121 )
      v150 = v121;
    *v147 |= ((unsigned __int8)v133 & (unsigned __int8)byte_14001BC30[4 * v150]) << v148;
    v151 = v121 - (unsigned int)v150;
    v124 = v133 >> v149;
    v125 = v147 + 1;
    if ( (unsigned int)v151 >= 8 )
    {
      v152 = (unsigned __int64)(unsigned int)v151 >> 3;
      do
      {
        *v125 = v124;
        v151 = (unsigned int)(v151 - 8);
        v124 >>= 8;
        ++v125;
        --v152;
      }
      while ( v152 );
    }
    if ( !(_DWORD)v151 )
      goto LABEL_176;
    v127 = byte_14001BC30[4 * v151];
    goto LABEL_175;
  }
  return 0LL;
}
