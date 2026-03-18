/*
 * XREFs of BuildExpandAAInfo @ 0x1C00DA2D0
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C006E4F4 (_ALIGN_MEM.c)
 *     DivFD6 @ 0x1C00952E0 (DivFD6.c)
 *     RaisePower @ 0x1C0095584 (RaisePower.c)
 *     BuildRepData @ 0x1C00DA5D0 (BuildRepData.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

_DWORD *__fastcall BuildExpandAAInfo(
        __int64 a1,
        unsigned int a2,
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
  unsigned int v11; // esi
  int v12; // ecx
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  unsigned int v15; // r11d
  signed int v16; // r8d
  int v17; // r14d
  int v18; // r15d
  int v19; // r9d
  int v20; // edi
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned __int64 v23; // rax
  int v24; // r9d
  unsigned int v25; // r14d
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  char *v29; // rax
  __int64 v30; // r8
  _DWORD *v31; // rbx
  _QWORD *v32; // r15
  _OWORD *v33; // r14
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __int16 v39; // cx
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  int *v46; // r14
  int *v47; // r12
  _DWORD *v48; // r13
  _DWORD *v49; // rdx
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  __int64 v53; // rbx
  unsigned __int64 v54; // r10
  unsigned __int64 v55; // rcx
  int *v56; // r11
  __int64 v57; // r10
  __int64 v58; // rax
  int *v59; // r9
  int v60; // esi
  unsigned int *v61; // rdx
  int *v62; // r12
  int v63; // r14d
  int *v64; // rdi
  int v65; // eax
  char v66; // r8
  __int64 v67; // r10
  _QWORD *v68; // rcx
  __int64 v69; // rax
  int v70; // edx
  unsigned int v71; // r12d
  int v72; // eax
  __int64 v73; // r10
  unsigned int v74; // ecx
  unsigned int v75; // r8d
  unsigned int v76; // r11d
  unsigned int v77; // ecx
  signed int v78; // ebx
  int v79; // r12d
  unsigned int v80; // r9d
  unsigned int v81; // r8d
  unsigned int v82; // ecx
  int *v83; // r14
  unsigned int v84; // eax
  unsigned int v85; // r14d
  __int64 v86; // rax
  __int64 v87; // rcx
  int *v88; // rax
  int v89; // ebx
  __int64 v90; // r12
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int128 v95; // rtt
  __int64 v96; // rax
  int v97; // eax
  int v98; // eax
  int v99; // r10d
  int v100; // ecx
  int v101; // r9d
  _DWORD *v102; // rax
  __int64 *v103; // rcx
  int v104; // eax
  int v105; // edx
  __int64 i; // rcx
  __int64 v107; // rcx
  __int16 v108; // ax
  unsigned int v109; // [rsp+20h] [rbp-B9h] BYREF
  int v110; // [rsp+24h] [rbp-B5h]
  unsigned int v111; // [rsp+28h] [rbp-B1h]
  unsigned int v112; // [rsp+2Ch] [rbp-ADh]
  unsigned int v113; // [rsp+30h] [rbp-A9h] BYREF
  unsigned int v114; // [rsp+34h] [rbp-A5h] BYREF
  int v115; // [rsp+38h] [rbp-A1h]
  unsigned int v116; // [rsp+3Ch] [rbp-9Dh]
  int v117; // [rsp+40h] [rbp-99h]
  int v118; // [rsp+44h] [rbp-95h]
  int v119; // [rsp+48h] [rbp-91h]
  _DWORD *v120; // [rsp+50h] [rbp-89h]
  int *v121; // [rsp+58h] [rbp-81h]
  int v122; // [rsp+60h] [rbp-79h]
  int v123; // [rsp+64h] [rbp-75h]
  signed int v124; // [rsp+68h] [rbp-71h]
  int v125; // [rsp+6Ch] [rbp-6Dh]
  __int64 v126; // [rsp+70h] [rbp-69h]
  int *v127; // [rsp+78h] [rbp-61h]
  __int64 v128; // [rsp+80h] [rbp-59h]
  int *v129; // [rsp+88h] [rbp-51h]
  int *v130; // [rsp+90h] [rbp-49h]
  _QWORD *v131; // [rsp+98h] [rbp-41h]
  __int64 v132; // [rsp+A0h] [rbp-39h]
  _DWORD *v133; // [rsp+A8h] [rbp-31h]
  int *v134; // [rsp+B0h] [rbp-29h]
  int *v135; // [rsp+B8h] [rbp-21h]
  _DWORD *v136; // [rsp+C0h] [rbp-19h]
  __int64 v137; // [rsp+C8h] [rbp-11h]
  int v138; // [rsp+150h] [rbp+77h]

  v10 = *a3;
  v11 = 0;
  v12 = *a4;
  v13 = 0;
  v14 = *a4 - *a3;
  v15 = a10;
  v134 = a3;
  v16 = a7 - a6;
  v135 = a4;
  v111 = a2;
  v136 = a8;
  v120 = a9;
  v124 = 0;
  v117 = 0;
  v125 = 0;
  v113 = 0;
  v116 = v10;
  v138 = a7 - a6;
  if ( (int)v14 <= 0 )
    return 0LL;
  v17 = *a8;
  v18 = *a9;
  v19 = 0;
  if ( v10 >= 0 )
    v19 = v10;
  v122 = *a8;
  v115 = v19;
  if ( v12 > a5 )
    v12 = a5;
  v20 = -1;
  v110 = v12;
  v123 = v18;
  v119 = -1;
  v118 = 0;
  if ( v17 >= v18 || (int)v14 >= v16 )
    return 0LL;
  if ( (a2 & 0x4A80) != 0 )
  {
    v21 = v12 - v19;
    v22 = v12 - v19 + 3;
    if ( v22 < v21 )
      return 0LL;
    v23 = 2LL * v22;
    if ( v23 > 0xFFFFFFFF || (int)v23 + 8 < (unsigned int)v23 )
      return 0LL;
    v11 = (v23 + 8) & 0xFFFFFFF8;
  }
  if ( (a2 & 0x4200) != 0 )
  {
    v24 = 0;
    v109 = 0;
    v112 = 0;
  }
  else
  {
    v51 = v14 + v16 - 1;
    if ( v51 < v16 )
      return 0LL;
    v52 = 2LL * (v51 / v14);
    if ( v52 > 0xFFFFFFFF )
      return 0LL;
    if ( !(_DWORD)v52 )
      return 0LL;
    v53 = (unsigned int)(v52 - 1);
    v112 = v52 - 1;
    if ( (unsigned __int64)(4 * v53) > 0xFFFFFFFF )
      return 0LL;
    v109 = 4 * v53;
    if ( (int)ALIGN_MEM(&v109, 4 * (int)v53) < 0 )
      return 0LL;
    if ( 8 * v53 > v54 )
      return 0LL;
    v114 = 8 * v53;
    if ( (int)ALIGN_MEM(&v114, 8 * (int)v53) < 0 )
      return 0LL;
    if ( v109 + v114 < v114 )
      return 0LL;
    v55 = 8LL * (unsigned int)(v18 - v17);
    if ( v55 > 0xFFFFFFFF || (int)ALIGN_MEM(&v113, v55) < 0 )
      return 0LL;
    v13 = v113;
  }
  if ( v15 + 8 >= v15 )
  {
    v25 = (v15 + 8) & 0xFFFFFFF8;
    v26 = v13 + v11;
    if ( v13 + v11 >= v11 )
    {
      v27 = v25 + v26;
      if ( v25 + v26 >= v26 )
      {
        v28 = v27 + v24;
        if ( v27 + v24 >= v27 && v28 + 240 >= v28 )
        {
          v29 = (char *)EngAllocMem(1u, v28 + 240, 0x34355448u);
          v30 = 0LL;
          v133 = v29;
          v31 = v29;
          if ( !v29 )
            return v31;
          v32 = v29 + 240;
          if ( v25 )
          {
            *((_QWORD *)v29 + 4) = v32;
            v32 = (_QWORD *)((char *)v32 + v25);
          }
          if ( v11 )
          {
            v33 = v29 + 48;
            v34 = v115;
            v35 = v122;
            *((_DWORD *)v29 + 13) = v138;
            v36 = v110;
            v31[17] = v110;
            v31[16] = v34;
            v31[18] = v35;
            v31[19] = v123;
            v37 = v116;
            *((_QWORD *)v31 + 12) = (char *)v32 + 2 * (v36 - v34);
            *((_QWORD *)v31 + 11) = v32;
            v32 = (_QWORD *)((char *)v32 + v11);
            v31[12] = v14;
            v38 = BuildRepData(v31 + 12, v37, (unsigned int)a6);
            v30 = 0LL;
            if ( !v38 )
            {
LABEL_109:
              EngFreeMem(v31);
              return 0LL;
            }
            v39 = v111;
            v40 = *((_OWORD *)v31 + 4);
            *((_OWORD *)v31 + 7) = *v33;
            v41 = *((_OWORD *)v31 + 5);
            *((_OWORD *)v31 + 8) = v40;
            v42 = *((_OWORD *)v31 + 6);
            *((_OWORD *)v31 + 9) = v41;
            *((_OWORD *)v31 + 10) = v42;
            v43 = *((_OWORD *)v31 + 8);
            *((_OWORD *)v31 + 11) = *((_OWORD *)v31 + 7);
            v44 = *((_OWORD *)v31 + 9);
            *((_OWORD *)v31 + 12) = v43;
            v45 = *((_OWORD *)v31 + 10);
            *((_OWORD *)v31 + 13) = v44;
            *((_OWORD *)v31 + 14) = v45;
            if ( (v39 & 0x4000) != 0 )
            {
              v31[16] -= *((unsigned __int8 *)v31 + 80);
              v31[17] += *((unsigned __int8 *)v31 + 81);
            }
          }
          else
          {
            v39 = v111;
          }
          if ( !v13 )
          {
            v46 = v134;
            v47 = v135;
            v48 = v136;
            v49 = v120;
            *v134 = v31[16];
            *v47 = v31[17] - 1;
            *v48 = v31[18];
            *v49 = v31[19] - 1;
LABEL_29:
            *v31 = *v47 - *v46 + 1;
            v31[1] = *v49 - *v48 + 1;
            return v31;
          }
          v56 = (int *)v112;
          v57 = 1000000LL;
          v58 = v109;
          v59 = (int *)v112;
          v60 = 4;
          v61 = (unsigned int *)((char *)v32 + v13);
          *((_QWORD *)v31 + 5) = v32;
          v137 = 0LL;
          v131 = (_QWORD *)((char *)v61 + v58);
          v130 = (int *)v61;
          v129 = v56;
          v128 = 1000000LL;
          v62 = (int *)&v61[(unsigned __int64)(unsigned int)v56 >> 1];
          v121 = v62;
          *v62 = 1000000;
          if ( (v39 & 0x200) != 0 )
          {
            *((_WORD *)v31 + 4) |= 4u;
LABEL_59:
            v70 = v138;
            v71 = (unsigned int)v56 >> 1;
            v72 = v138;
            v128 = (int)v14 * v57;
            v73 = 0LL;
            v74 = v14 * ((unsigned int)v56 >> 1);
            v75 = 0;
            v114 = 0;
            v76 = 0;
            v109 = 0;
            v77 = v138 + v74;
            v111 = v77;
            if ( v138 )
            {
              v78 = v116;
              v79 = v71 - v138;
              while ( 1 )
              {
                v116 = v72 - 1;
                ++v79;
                v80 = v112;
                LOWORD(v113) = 0;
                v81 = v77;
                v82 = v77 - v14;
                v83 = 0LL;
                v127 = v130;
                v119 = v79;
                v84 = v82 + v70;
                v129 = 0LL;
                if ( v14 < v111 )
                  v84 = v82;
                v121 = 0LL;
                v111 = v84;
                v132 = 0LL;
                v126 = 0LL;
                if ( v112 )
                {
                  while ( 1 )
                  {
                    v85 = v80--;
                    v86 = *v127++;
                    if ( v81 >= v14 )
                      break;
                    if ( v79 < 0 || v80 >= v79 )
                    {
                      v87 = v86;
                      if ( v81 )
                        v73 += v86 * v81;
                      v88 = (int *)v132;
                      v83 = v121;
                      v132 = v73;
                      v121 = v88;
                      v73 = v87 * (v14 - v81);
                      v129 = v83;
                      v126 = v73;
                      v81 += v70 - v14;
                      if ( !v80 )
                      {
                        v89 = v78 + 1;
                        if ( v89 >= v115 && v89 < v110 )
                        {
                          ++v118;
                          ++v89;
                          v113 = 0x8000;
                          if ( v89 < v115 || v89 >= v110 )
                            LOWORD(v113) = -16384;
                        }
                        v78 = v89 - 1;
                        goto LABEL_85;
                      }
                    }
                    else
                    {
                      v73 += v86 * v14;
                      v81 -= v14;
LABEL_83:
                      v126 = v73;
                      if ( !v80 )
                      {
                        v83 = v129;
                        goto LABEL_85;
                      }
                    }
                  }
                  if ( v81 / v14 <= v85 )
                    v85 = v81 / v14;
                  if ( v112 - v80 == 1 )
                    v90 = 0LL;
                  else
                    v90 = v131[v112 - v80 - 2];
                  v91 = v131[v85 - 2 + v112 - v80] - v90;
                  v79 = v119;
                  v73 = v14 * v91 + v126;
                  v70 = v138;
                  v81 -= v14 * v85;
                  v80 += 1 - v85;
                  v127 += v85 - 1;
                  goto LABEL_83;
                }
LABEL_85:
                if ( v78 < v115 || v78 >= v110 || a6 < v122 || a6 >= v123 )
                {
                  if ( v20 != -1 )
                    goto LABEL_102;
                  v73 = 0LL;
                  goto LABEL_101;
                }
                v92 = v73 << 13;
                v73 = 0LL;
                HIWORD(v137) = v92 / v128;
                v93 = (v92 % v128 + (v132 << 13)) % v128;
                WORD2(v137) = (v92 % v128 + (v132 << 13)) / v128;
                if ( !v121 )
                  break;
                ++v109;
                v95 = v93 + ((_QWORD)v121 << 13);
                v94 = (v93 + ((_QWORD)v121 << 13)) % v128;
                WORD1(v137) = v95 / v128;
                if ( !v83 )
                  goto LABEL_93;
                ++v114;
                v96 = (v94 + ((_QWORD)v83 << 13)) / v128;
LABEL_94:
                LOWORD(v137) = v113 | v96;
                *v32++ = v137;
                v124 = v78;
                v97 = a6;
                v125 = a6;
                if ( v20 != -1 )
                  v97 = v117;
                v117 = v97;
                v98 = v78;
                if ( v20 != -1 )
                  v98 = v20;
                v20 = v98;
LABEL_101:
                v72 = v116;
                v70 = v138;
                v77 = v111;
                ++a6;
                if ( !v116 )
                {
LABEL_102:
                  v31 = v133;
                  v75 = v114;
                  v76 = v109;
                  goto LABEL_103;
                }
              }
              WORD1(v137) = 0;
LABEL_93:
              LOWORD(v96) = 0;
              goto LABEL_94;
            }
LABEL_103:
            if ( v20 != -1 )
            {
              v99 = v115;
              v100 = v124 + 1;
              v101 = v110;
              if ( v124 + 1 < v115 || v100 >= v110 )
                v100 = v124;
              v102 = v120;
              v46 = v134;
              v47 = v135;
              v48 = v136;
              *v134 = v20;
              *v47 = v100;
              *v48 = v117;
              *v102 = v125;
              v103 = (__int64 *)*((_QWORD *)v31 + 5);
              LODWORD(v102) = v118;
              v31[4] = v32 - v103;
              v31[5] = (_DWORD)v102;
              if ( v76 )
                v104 = (v75 != 0) + 3;
              else
                v104 = 2;
              v31[6] = v104;
              v137 = *v103;
              if ( (v137 & 0x8000u) == 0LL )
              {
                if ( v20 + 1 < v99 || v20 + 1 >= v101 )
                  *((_WORD *)v31 + 4) |= 2u;
              }
              else
              {
                --v20;
                v60 = 3;
              }
              v105 = 0;
              for ( i = 0LL; i < (unsigned int)v60; ++i )
              {
                if ( (*((_WORD *)&v137 + i) & 0x3FFF) != 0 )
                  break;
                ++v105;
              }
              if ( v60 <= v105 )
              {
                v108 = *((_WORD *)v31 + 6);
              }
              else
              {
                v107 = (unsigned int)(v60 - v105);
                do
                {
                  if ( v20 < v99 || v20 >= v101 )
                  {
                    *((_WORD *)v31 + 6) += 16;
                  }
                  else
                  {
                    *v46 = v20;
                    ++*((_WORD *)v31 + 6);
                  }
                  v108 = *((_WORD *)v31 + 6);
                  --v20;
                  --v107;
                }
                while ( v107 );
              }
              if ( v108 && v20 >= v99 )
              {
                v49 = v120;
                if ( v20 < v101 )
                {
                  *v46 = v20;
                  *((_WORD *)v31 + 4) |= 1u;
                }
              }
              else
              {
                v49 = v120;
              }
              goto LABEL_29;
            }
            goto LABEL_109;
          }
          v63 = v138 - v14;
          if ( (int)(v138 - v14) <= 0 )
          {
LABEL_56:
            if ( (_DWORD)v56 )
            {
              v68 = v131;
              do
              {
                v69 = *v61++;
                v30 += v69;
                *v68++ = v30;
                v59 = (int *)((char *)v59 - 1);
              }
              while ( v59 );
            }
            goto LABEL_59;
          }
          v64 = (int *)v61;
          while ( 1 )
          {
            if ( --v62 < v64 )
            {
LABEL_55:
              v31 = v133;
              v20 = v119;
              v59 = v129;
              v61 = (unsigned int *)v130;
              LODWORD(v56) = v112;
              goto LABEL_56;
            }
            v65 = DivFD6(v63, v138);
            if ( v65 < 500000 )
              break;
            if ( v65 > 500000 )
            {
              v66 = 1;
              goto LABEL_53;
            }
LABEL_54:
            v63 -= v14;
            v67 = v128;
            v30 = 0LL;
            *++v121 = v65;
            *v62 = v65;
            v57 = v67 + 2LL * v65;
            v128 = v57;
            if ( v63 <= 0 )
              goto LABEL_55;
          }
          v66 = 0;
LABEL_53:
          v65 = RaisePower(v65, 1414214, v66);
          goto LABEL_54;
        }
      }
    }
  }
  return 0LL;
}
