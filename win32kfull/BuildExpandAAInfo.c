/*
 * XREFs of BuildExpandAAInfo @ 0x1C025C820
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     DivFD6 @ 0x1C014AF0C (DivFD6.c)
 *     RaisePower @ 0x1C014B26A (RaisePower.c)
 *     _ALIGN_MEM @ 0x1C014B81A (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C025D17C (BuildRepData.c)
 */

_DWORD *__fastcall BuildExpandAAInfo(
        __int64 a1,
        int a2,
        int *a3,
        int *a4,
        int a5,
        signed int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        unsigned int a10)
{
  int v10; // eax
  __int16 v11; // r10
  unsigned int v12; // esi
  unsigned int v13; // r12d
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // r13d
  int v17; // r15d
  int v18; // r8d
  int v19; // eax
  int v20; // edi
  unsigned __int64 v21; // r11
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  unsigned __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // r10
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // rcx
  int v31; // r10d
  unsigned int v32; // eax
  __int64 v33; // r14
  unsigned int v34; // ecx
  unsigned int v35; // eax
  _DWORD *v36; // rbx
  _QWORD *v37; // r15
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  __int64 v41; // rdx
  __int16 v42; // cx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  unsigned __int64 v49; // r11
  __int64 v50; // r10
  int *v51; // r9
  __int64 v52; // rax
  int v53; // esi
  unsigned int *v54; // rdx
  int *v55; // r12
  int v56; // r14d
  int *v57; // rdi
  int v58; // eax
  char v59; // r8
  __int64 v60; // r10
  __int64 v61; // r8
  _QWORD *v62; // rcx
  __int64 v63; // rax
  int v64; // edx
  unsigned int v65; // r8d
  unsigned int v66; // r12d
  int v67; // eax
  unsigned int v68; // r14d
  unsigned int v69; // r11d
  unsigned int v70; // r14d
  signed int v71; // ebx
  int v72; // r12d
  signed int v73; // r9d
  unsigned int v74; // r10d
  __int64 v75; // r11
  unsigned int v76; // r8d
  unsigned int v77; // ecx
  bool v78; // cf
  unsigned int v79; // r14d
  __int64 v80; // rax
  __int64 v81; // rcx
  int *v82; // rax
  int v83; // r10d
  int v84; // ebx
  __int64 v85; // r12
  __int64 v86; // rdx
  int v87; // ecx
  __int64 v88; // r11
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rax
  int v92; // eax
  int v93; // eax
  int v95; // r9d
  int v96; // ecx
  int *v97; // rax
  int v98; // edx
  int *v99; // r14
  _DWORD *v100; // r12
  _DWORD *v101; // r13
  __int64 *v102; // rcx
  int v103; // eax
  int v104; // edx
  __int64 i; // rcx
  __int64 v106; // rax
  int *v107; // rcx
  unsigned int v108; // [rsp+20h] [rbp-B9h] BYREF
  int v109; // [rsp+24h] [rbp-B5h]
  unsigned int v110; // [rsp+28h] [rbp-B1h]
  int v111; // [rsp+2Ch] [rbp-ADh] BYREF
  unsigned int v112; // [rsp+30h] [rbp-A9h] BYREF
  int v113; // [rsp+34h] [rbp-A5h]
  unsigned int v114; // [rsp+38h] [rbp-A1h]
  int v115; // [rsp+3Ch] [rbp-9Dh]
  int v116; // [rsp+40h] [rbp-99h]
  int v117; // [rsp+44h] [rbp-95h]
  int v118; // [rsp+48h] [rbp-91h]
  int v119; // [rsp+4Ch] [rbp-8Dh]
  int *v120; // [rsp+50h] [rbp-89h]
  int *v121; // [rsp+58h] [rbp-81h]
  int v122; // [rsp+60h] [rbp-79h]
  signed int v123; // [rsp+64h] [rbp-75h]
  int v124; // [rsp+68h] [rbp-71h]
  __int64 v125; // [rsp+70h] [rbp-69h]
  int *v126; // [rsp+78h] [rbp-61h]
  __int64 v127; // [rsp+80h] [rbp-59h]
  int *v128; // [rsp+88h] [rbp-51h]
  int *v129; // [rsp+90h] [rbp-49h]
  _QWORD *v130; // [rsp+98h] [rbp-41h]
  __int64 v131; // [rsp+A0h] [rbp-39h]
  _DWORD *v132; // [rsp+A8h] [rbp-31h]
  int *v133; // [rsp+B0h] [rbp-29h]
  _DWORD *v134; // [rsp+B8h] [rbp-21h]
  _DWORD *v135; // [rsp+C0h] [rbp-19h]
  __int64 v136; // [rsp+C8h] [rbp-11h] BYREF
  int v137; // [rsp+150h] [rbp+77h]

  v10 = *a3;
  v11 = a2;
  v115 = a2;
  v12 = 0;
  v13 = 0;
  v14 = a7 - a6;
  v15 = *a4;
  v16 = *a4 - v10;
  v120 = a4;
  v133 = a3;
  v134 = a8;
  v135 = a9;
  LODWORD(v136) = a10;
  v123 = 0;
  v117 = 0;
  v124 = 0;
  v108 = 0;
  v111 = 0;
  v114 = v10;
  v137 = a7 - a6;
  if ( (int)v16 <= 0 )
    return 0LL;
  v17 = *a8;
  v18 = 0;
  v122 = *a8;
  if ( v10 >= 0 )
    v18 = v10;
  v118 = 0;
  v19 = *a9;
  if ( v15 > a5 )
    v15 = a5;
  v20 = -1;
  v113 = v18;
  v109 = v15;
  v116 = v19;
  v119 = -1;
  if ( v17 >= v19 || (int)v16 >= v14 )
    return 0LL;
  v21 = 0xFFFFFFFFLL;
  if ( (v11 & 0x4A80) != 0 )
  {
    v22 = v15 - v18;
    v23 = v15 - v18 + 3;
    if ( v23 < v22 )
      return 0LL;
    v24 = 2LL * v23;
    if ( v24 > 0xFFFFFFFF || (int)ALIGN_MEM(&v108, v24) < 0 )
      return 0LL;
    v12 = v108;
    v14 = v137;
  }
  if ( (v11 & 0x4200) != 0 )
  {
    v108 = 0;
    v110 = 0;
  }
  else
  {
    v25 = v14 + v16 - 1;
    if ( v25 < v14 )
      return 0LL;
    v26 = 2LL * (v25 / v16);
    if ( v26 > v21 )
      return 0LL;
    if ( !(_DWORD)v26 )
      return 0LL;
    v27 = (unsigned int)(v26 - 1);
    v110 = v26 - 1;
    if ( 4 * v27 > v21 )
      return 0LL;
    v108 = 4 * v27;
    if ( (int)ALIGN_MEM(&v108, 4 * (int)v27) < 0 )
      return 0LL;
    if ( 8 * v28 > v29 )
      return 0LL;
    v112 = 8 * v28;
    if ( (int)ALIGN_MEM(&v112, 8 * (int)v28) < 0 )
      return 0LL;
    if ( v108 + v112 < v112 )
      return 0LL;
    v30 = 8LL * (unsigned int)(v116 - v17);
    if ( v30 > 0xFFFFFFFF || (int)ALIGN_MEM(&v111, v30) < 0 )
      return 0LL;
    v13 = v111;
  }
  if ( (int)ALIGN_MEM(&v136, a10) < 0 )
    return 0LL;
  v32 = v13 + v12;
  if ( v13 + v12 < v12 )
    return 0LL;
  v33 = (unsigned int)v136;
  v34 = v136 + v32;
  if ( (unsigned int)v136 + v32 < v32 )
    return 0LL;
  v35 = v34 + v31;
  if ( v34 + v31 < v34 || v35 + 240 < v35 )
    return 0LL;
  v36 = EngAllocMem(1u, v35 + 240, 0x34355448u);
  v132 = v36;
  if ( v36 )
  {
    v37 = v36 + 60;
    if ( (_DWORD)v33 )
    {
      *((_QWORD *)v36 + 4) = v37;
      v37 = (_QWORD *)((char *)v37 + v33);
    }
    if ( v12 )
    {
      v38 = v113;
      v39 = v122;
      v36[13] = v137;
      v40 = v109;
      v36[17] = v109;
      v36[16] = v38;
      v36[18] = v39;
      v36[19] = v116;
      v41 = v114;
      *((_QWORD *)v36 + 12) = (char *)v37 + 2 * (v40 - v38);
      *((_QWORD *)v36 + 11) = v37;
      v37 = (_QWORD *)((char *)v37 + v12);
      v36[12] = v16;
      if ( !(unsigned int)BuildRepData(v36 + 12, v41, (unsigned int)a6) )
      {
LABEL_101:
        EngFreeMem(v36);
        return 0LL;
      }
      v42 = v115;
      v43 = *((_OWORD *)v36 + 4);
      *((_OWORD *)v36 + 7) = *((_OWORD *)v36 + 3);
      v44 = *((_OWORD *)v36 + 5);
      *((_OWORD *)v36 + 8) = v43;
      v45 = *((_OWORD *)v36 + 6);
      *((_OWORD *)v36 + 9) = v44;
      *((_OWORD *)v36 + 10) = v45;
      v46 = *((_OWORD *)v36 + 8);
      *((_OWORD *)v36 + 11) = *((_OWORD *)v36 + 7);
      v47 = *((_OWORD *)v36 + 9);
      *((_OWORD *)v36 + 12) = v46;
      v48 = *((_OWORD *)v36 + 10);
      *((_OWORD *)v36 + 13) = v47;
      *((_OWORD *)v36 + 14) = v48;
      if ( (v42 & 0x4000) != 0 )
      {
        v36[16] -= *((unsigned __int8 *)v36 + 80);
        v36[17] += *((unsigned __int8 *)v36 + 81);
      }
    }
    else
    {
      v42 = v115;
    }
    if ( !v13 )
    {
      v99 = v133;
      v107 = v120;
      v100 = v134;
      v101 = v135;
      *v133 = v36[16];
      *v107 = v36[17] - 1;
      *v100 = v36[18];
      *v101 = v36[19] - 1;
LABEL_131:
      *v36 = *v107 - *v99 + 1;
      v36[1] = *v101 - *v100 + 1;
      return v36;
    }
    v49 = v110;
    v50 = 1000000LL;
    v136 = 0LL;
    v51 = (int *)v110;
    v52 = v108;
    v53 = 4;
    v54 = (unsigned int *)((char *)v37 + v13);
    *((_QWORD *)v36 + 5) = v37;
    v129 = (int *)v54;
    v130 = (_QWORD *)((char *)v54 + v52);
    v128 = (int *)v49;
    v127 = 1000000LL;
    v55 = (int *)&v54[(unsigned __int64)(unsigned int)v49 >> 1];
    v121 = v55;
    *v55 = 1000000;
    if ( (v42 & 0x200) != 0 )
    {
      *((_WORD *)v36 + 4) |= 4u;
LABEL_55:
      v64 = v137;
      v65 = 0;
      v66 = (unsigned int)v49 >> 1;
      v67 = v137;
      v127 = (int)v16 * v50;
      v68 = v16 * ((unsigned int)v49 >> 1);
      v69 = 0;
      v112 = 0;
      v108 = 0;
      v70 = v137 + v68;
      if ( v137 )
      {
        v71 = v114;
        v72 = v66 - v137;
        v73 = v109;
        while ( 1 )
        {
          v74 = v110;
          v128 = 0LL;
          v75 = 0LL;
          v121 = 0LL;
          ++v72;
          v131 = 0LL;
          v76 = v70;
          v125 = 0LL;
          LOWORD(v111) = 0;
          v77 = v70 - v16;
          v115 = v67 - 1;
          v126 = v129;
          v78 = v16 < v70;
          v119 = v72;
          v70 = v70 - v16 + v64;
          if ( v78 )
            v70 = v77;
          v114 = v70;
          if ( !v110 )
          {
LABEL_80:
            v83 = v113;
            goto LABEL_81;
          }
          do
          {
            while ( 1 )
            {
              v79 = v74--;
              v80 = *v126++;
              if ( v76 >= v16 )
              {
                if ( v76 / v16 <= v79 )
                  v79 = v76 / v16;
                if ( v110 - v74 == 1 )
                  v85 = 0LL;
                else
                  v85 = v130[v110 - v74 - 2];
                v86 = v130[v79 - 2 + v110 - v74] - v85;
                v72 = v119;
                v75 = v16 * v86 + v125;
                v64 = v137;
                v76 -= v16 * v79;
                v74 += 1 - v79;
                v126 += v79 - 1;
                goto LABEL_78;
              }
              if ( v72 < 0 || v74 >= v72 )
                break;
              v75 += v80 * v16;
              v76 -= v16;
LABEL_78:
              v125 = v75;
              if ( !v74 )
              {
                v70 = v114;
                goto LABEL_80;
              }
            }
            v81 = v80;
            if ( v76 )
              v75 += v80 * v76;
            v128 = v121;
            v82 = (int *)v131;
            v131 = v75;
            v121 = v82;
            v75 = v81 * (v16 - v76);
            v125 = v75;
            v76 += v64 - v16;
          }
          while ( v74 );
          v83 = v113;
          v84 = v71 + 1;
          if ( v84 >= v113 )
          {
            if ( v84 >= v109 || (++v118, ++v84, v111 = 0x8000, v84 >= v113) && v84 < v109 )
            {
              v73 = v109;
            }
            else
            {
              v73 = v109;
              LOWORD(v111) = -16384;
            }
          }
          v70 = v114;
          v71 = v84 - 1;
LABEL_81:
          v87 = a6;
          if ( v71 < v83 || v71 >= v73 || a6 < v122 || a6 >= v116 )
          {
            if ( v20 == -1 )
              goto LABEL_97;
            goto LABEL_98;
          }
          v88 = v75 << 13;
          HIWORD(v136) = v88 / v127;
          v89 = v88 % v127 + (v131 << 13);
          WORD2(v136) = v89 / v127;
          if ( v121 )
          {
            ++v108;
            v90 = ((_QWORD)v121 << 13) + v89 % v127;
            WORD1(v136) = v90 / v127;
            LOWORD(v91) = 0;
            if ( v128 )
            {
              ++v112;
              v91 = (((_QWORD)v128 << 13) + v90 % v127) / v127;
            }
          }
          else
          {
            LOWORD(v91) = 0;
            WORD1(v136) = 0;
          }
          v87 = a6;
          LOWORD(v136) = v111 | v91;
          *v37++ = v136;
          v123 = v71;
          v92 = a6;
          v124 = a6;
          if ( v20 != -1 )
            v92 = v117;
          v117 = v92;
          v93 = v71;
          if ( v20 != -1 )
            v93 = v20;
          v20 = v93;
LABEL_97:
          v67 = v115;
          v64 = v137;
          a6 = v87 + 1;
          if ( !v115 )
          {
LABEL_98:
            v36 = v132;
            v65 = v112;
            v69 = v108;
            goto LABEL_100;
          }
        }
      }
      v83 = v113;
LABEL_100:
      if ( v20 == -1 )
        goto LABEL_101;
      v95 = v109;
      v96 = v123 + 1;
      if ( v123 + 1 < v83 || v96 >= v109 )
        v96 = v123;
      v97 = v120;
      v98 = v117;
      v99 = v133;
      v100 = v134;
      v101 = v135;
      *v133 = v20;
      *v97 = v96;
      LODWORD(v97) = v124;
      *v100 = v98;
      *v101 = (_DWORD)v97;
      v102 = (__int64 *)*((_QWORD *)v36 + 5);
      LODWORD(v97) = v118;
      v36[4] = v37 - v102;
      v36[5] = (_DWORD)v97;
      if ( v69 )
        v103 = (v65 != 0) + 3;
      else
        v103 = 2;
      v36[6] = v103;
      v136 = *v102;
      if ( (v136 & 0x8000u) == 0LL )
      {
        if ( v20 + 1 < v83 || v20 + 1 >= v95 )
          *((_WORD *)v36 + 4) |= 2u;
      }
      else
      {
        --v20;
        v53 = 3;
      }
      v104 = 0;
      for ( i = 0LL; i < (unsigned int)v53; ++i )
      {
        if ( (*((_WORD *)&v136 + i) & 0x3FFF) != 0 )
          break;
        ++v104;
      }
      if ( v53 > v104 )
      {
        v106 = (unsigned int)(v53 - v104);
        do
        {
          if ( v20 < v83 || v20 >= v95 )
          {
            *((_WORD *)v36 + 6) += 16;
          }
          else
          {
            *v99 = v20;
            ++*((_WORD *)v36 + 6);
          }
          --v20;
          --v106;
        }
        while ( v106 );
      }
      if ( *((_WORD *)v36 + 6) && v20 >= v83 )
      {
        v107 = v120;
        if ( v20 < v95 )
        {
          *v99 = v20;
          *((_WORD *)v36 + 4) |= 1u;
        }
      }
      else
      {
        v107 = v120;
      }
      goto LABEL_131;
    }
    v56 = v137 - v16;
    if ( (int)(v137 - v16) <= 0 )
    {
LABEL_52:
      v61 = 0LL;
      if ( (_DWORD)v49 )
      {
        v62 = v130;
        do
        {
          v63 = *v54++;
          v61 += v63;
          *v62++ = v61;
          v51 = (int *)((char *)v51 - 1);
        }
        while ( v51 );
      }
      goto LABEL_55;
    }
    v57 = (int *)v54;
    while ( 1 )
    {
      if ( --v55 < v57 )
      {
LABEL_51:
        v36 = v132;
        v20 = v119;
        v51 = v128;
        v54 = (unsigned int *)v129;
        LODWORD(v49) = v110;
        goto LABEL_52;
      }
      v58 = DivFD6(v56, v137);
      if ( v58 < 500000 )
        break;
      if ( v58 > 500000 )
      {
        v59 = 1;
        goto LABEL_49;
      }
LABEL_50:
      v56 -= v16;
      v60 = v127;
      *++v121 = v58;
      *v55 = v58;
      v50 = v60 + 2LL * v58;
      v127 = v50;
      if ( v56 <= 0 )
        goto LABEL_51;
    }
    v59 = 0;
LABEL_49:
    v58 = RaisePower(v58, 1414214, v59);
    goto LABEL_50;
  }
  return v36;
}
