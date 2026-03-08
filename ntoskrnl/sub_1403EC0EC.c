/*
 * XREFs of sub_1403EC0EC @ 0x1403EC0EC
 * Callers:
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AF7010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_1403EC00C @ 0x1403EC00C (sub_1403EC00C.c)
 *     sub_1403EC068 @ 0x1403EC068 (sub_1403EC068.c)
 *     $$ba @ 0x140B0E898 ($$ba.c)
 *     KeGuardDispatchICall @ 0x140B107A0 (KeGuardDispatchICall.c)
 */

void __fastcall sub_1403EC0EC(__int64 a1, int *a2)
{
  int *v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r8
  unsigned int v5; // edx
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned int *v17; // rcx
  unsigned int *v18; // rsi
  char v19; // r13
  unsigned __int64 v20; // rbp
  __int64 v21; // rdx
  char *v22; // r8
  unsigned int *v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  bool v26; // zf
  char v27; // cl
  char v28; // al
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r9
  int *v32; // rsi
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r10
  __int64 v37; // rdx
  __int64 v38; // r15
  __int64 v39; // r11
  unsigned int v40; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbp
  int *v45; // r12
  __int64 v46; // r9
  _QWORD *v47; // r8
  const char *v48; // rax
  unsigned __int64 v49; // rsi
  int v50; // r11d
  __int64 v51; // rax
  __int64 v52; // rsi
  unsigned __int64 v53; // rcx
  unsigned __int64 k; // rax
  _DWORD *v55; // r15
  unsigned int v56; // esi
  unsigned __int8 v57; // al
  unsigned __int64 v58; // r15
  unsigned __int64 v59; // r13
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 *v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int8 v68; // r12
  unsigned int *v69; // rcx
  unsigned int *v70; // rsi
  char v71; // r13
  unsigned __int64 v72; // rbp
  __int64 v73; // rdx
  char *v74; // r8
  unsigned int *v75; // r9
  __int64 v76; // rcx
  __int64 v77; // rax
  bool v78; // zf
  char v79; // cl
  char v80; // al
  int v81; // r12d
  unsigned __int8 v82; // r13
  unsigned __int64 v83; // rsi
  unsigned __int64 v84; // r15
  int v85; // eax
  __int64 v86; // rsi
  __int64 v87; // rax
  unsigned int v88; // ecx
  char **v89; // r15
  int v90; // r13d
  unsigned int v91; // r11d
  char **v92; // rbp
  char *v93; // r9
  char *v94; // r10
  unsigned __int64 v95; // rax
  int v96; // r12d
  const char *i; // rax
  unsigned __int64 v98; // r13
  unsigned __int64 v99; // r8
  __int64 v100; // rax
  __int64 v101; // r8
  unsigned __int64 v102; // rcx
  unsigned int v103; // r13d
  unsigned __int64 j; // rax
  __int64 v105; // r12
  __int64 v106; // r8
  __int64 *v107; // r9
  unsigned int v108; // ebp
  unsigned int *v109; // rsi
  _DWORD *v110; // r15
  unsigned __int64 v111; // rcx
  __int64 v112; // rdx
  unsigned __int8 v113; // r13
  unsigned __int64 v114; // rbp
  unsigned __int64 v115; // r12
  int v116; // eax
  __int64 v117; // rax
  __int64 *v118; // r10
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rcx
  unsigned __int8 v124; // r13
  unsigned __int64 v125; // rbp
  int v126; // eax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // [rsp+20h] [rbp-C8h]
  __int64 v132; // [rsp+20h] [rbp-C8h]
  __int64 v133; // [rsp+28h] [rbp-C0h]
  int v134; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v135; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v136; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v137; // [rsp+38h] [rbp-B0h]
  _DWORD *v138; // [rsp+38h] [rbp-B0h]
  unsigned int v139; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v140; // [rsp+40h] [rbp-A8h]
  __int64 v141; // [rsp+40h] [rbp-A8h]
  unsigned int v142; // [rsp+48h] [rbp-A0h]
  int v143; // [rsp+4Ch] [rbp-9Ch]
  __int64 v144; // [rsp+50h] [rbp-98h]
  __int64 v145; // [rsp+58h] [rbp-90h]
  __int64 v146; // [rsp+58h] [rbp-90h]
  __int64 v147; // [rsp+60h] [rbp-88h]
  __int64 v148; // [rsp+60h] [rbp-88h]
  __int64 v149; // [rsp+68h] [rbp-80h]
  __int64 v150; // [rsp+70h] [rbp-78h]
  _QWORD v151[2]; // [rsp+78h] [rbp-70h] BYREF
  _BYTE v152[96]; // [rsp+88h] [rbp-60h] BYREF
  unsigned int v154; // [rsp+F8h] [rbp+10h]
  unsigned int v155; // [rsp+100h] [rbp+18h]
  unsigned __int64 v156; // [rsp+100h] [rbp+18h]
  unsigned int v157; // [rsp+100h] [rbp+18h]
  unsigned __int8 v158; // [rsp+108h] [rbp+20h]
  unsigned __int64 v159; // [rsp+108h] [rbp+20h]
  int v160; // [rsp+108h] [rbp+20h]
  unsigned int v161; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  if ( *a2 != 12 )
    goto LABEL_39;
  if ( !*(_QWORD *)(a1 + 2432) )
    goto LABEL_38;
  v4 = *(unsigned int *)(a1 + 2084);
  v5 = *(_DWORD *)(a1 + 2452);
  if ( !(_DWORD)v4 )
  {
    LODWORD(a1) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * v5)) & 0x20;
    *(_DWORD *)(v3 + 2452) = a1;
    goto LABEL_6;
  }
  LOBYTE(a1) = *(_DWORD *)(a1 + 2452);
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)(v5 >> 3)) & 4) != 0 )
  {
LABEL_38:
    *(_DWORD *)(v3 + 2084) = 0;
    return;
  }
LABEL_6:
  if ( (a1 & 4) != 0 )
  {
    v6 = *((_QWORD *)v2 + 4);
    if ( v6 )
    {
      v7 = v6 + v4;
      v8 = ((_WORD)v4 + (_WORD)v6) & 0xFFF;
      v9 = (unsigned int)(v2[10] - v4) + 4095LL;
    }
    else
    {
      v9 = v2[2] & 0xFFF;
      v7 = *((_QWORD *)v2 + 1);
      v8 = (unsigned int)v2[4] + 4095LL;
    }
    v10 = v7 & 0xFFFFFFFFFFFFF000uLL;
    v11 = (unsigned __int64)(v9 + v8) >> 12;
    if ( v11 )
    {
      while ( 1 )
      {
        --v11;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v3 + 688))(v10) && !*(_DWORD *)(v3 + 2296) )
        {
          *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v3 + 2320) = *v2;
          *(_QWORD *)(v3 + 2328) = v10;
          *(_DWORD *)(v3 + 2296) = 1;
          __ba(v3, 0LL, v12, v13);
        }
        *(_DWORD *)(v3 + 2088) += 256;
        v10 += 4096LL;
        v14 = *(_DWORD *)(v3 + 2088);
        if ( v6 )
        {
          *(_DWORD *)(v3 + 2084) += 4096;
          if ( v14 >= *(_DWORD *)(v3 + 2092) )
            break;
        }
        if ( !v11 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( !v6 )
        goto LABEL_20;
    }
    if ( !v11 )
      *(_DWORD *)(v3 + 2084) = 0;
LABEL_20:
    if ( !*(_DWORD *)(v3 + 2084) )
    {
      v15 = *(_QWORD *)(v3 + 1336);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*(void (__fastcall **)(__int64))(v3 + 336))(v15);
      v17 = **(unsigned int ***)(v3 + 1560);
      v18 = v17 + 4;
      v19 = *((_BYTE *)v17 + 12);
      v20 = (unsigned __int64)&v17[6 * *v17 + 4];
      while ( 2 )
      {
        v21 = 24LL;
        v22 = (char *)(v2 + 6);
        v23 = v18;
        while ( 1 )
        {
          v24 = *(_QWORD *)v23;
          v23 += 2;
          v25 = *(_QWORD *)v22;
          v22 += 8;
          if ( v24 != v25 )
            break;
          v21 = (unsigned int)(v21 - 8);
          if ( (unsigned int)v21 < 8 )
          {
            v26 = (_DWORD)v21 == 0;
            while ( !v26 )
            {
              v27 = *(_BYTE *)v23;
              v23 = (unsigned int *)((char *)v23 + 1);
              v28 = *v22++;
              if ( v27 != v28 )
                goto LABEL_29;
              v26 = (_DWORD)v21 == 1;
              v21 = (unsigned int)(v21 - 1);
            }
            goto LABEL_30;
          }
        }
LABEL_29:
        v18 += 6;
        if ( (unsigned __int64)v18 < v20 )
          continue;
        break;
      }
LABEL_30:
      (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v3 + 400))(
        *(_QWORD *)(v3 + 1336),
        v21,
        v22,
        v23);
      __writecr8(CurrentIrql);
      if ( !v19 )
        goto LABEL_35;
      if ( (*(_DWORD *)(v3 + 2452) & 0x10) != 0 && !*(_DWORD *)(v3 + 2296) )
      {
        *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v3 + 2320) = *v2;
        *(_QWORD *)(v3 + 2328) = 1LL;
        *(_DWORD *)(v3 + 2296) = 1;
        __ba(v3, 0LL, v29, v30);
      }
      if ( *((_QWORD *)v2 + 3) != 1LL )
      {
LABEL_35:
        if ( v18 == (unsigned int *)v20 && !*(_DWORD *)(v3 + 2296) )
        {
          *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v3 + 2320) = *v2;
          *(_QWORD *)(v3 + 2328) = v18;
          *(_DWORD *)(v3 + 2296) = 1;
          __ba(v3, 0LL, v29, v30);
        }
      }
    }
    return;
  }
LABEL_39:
  v31 = *((_QWORD *)v2 + 4);
  v32 = v2 + 12;
  v33 = (unsigned int)v2[10];
  v131 = v31;
  v151[0] = v2 + 12;
  v34 = *(unsigned int *)(v3 + 2084);
  v35 = ((unsigned __int64)(v31 & 0xFFF) + v33 + 4095) >> 12;
  v36 = (unsigned int)v35;
  v134 = v35;
  v137 = (unsigned int)v35;
  v37 = (__int64)&v2[5 * (unsigned int)v35 + 12];
  v150 = v37;
  v38 = (__int64)&v2[5 * v34 + 12];
  v39 = v31 + (unsigned int)((_DWORD)v34 << 12);
  v149 = v38;
  v144 = v39;
  if ( ((*(_DWORD *)(v3 + 2448) & 0x40000000) == 0 || (*(_DWORD *)(v3 + 2452) & 0x1000) != 0) && *(_QWORD *)(v3 + 2696) )
  {
    while ( 1 )
    {
      if ( v38 == v37 )
        goto LABEL_82;
      if ( *(_DWORD *)(v3 + 2088) >= *(_DWORD *)(v3 + 2092) )
      {
        *(_DWORD *)(v3 + 2084) = (v38 - v151[0]) / 20;
        return;
      }
      v86 = 0LL;
      if ( v38 == v37 )
        goto LABEL_168;
      v87 = v38;
      do
      {
        if ( *(char *)(v87 + 15) < 0 )
          break;
        v86 = (unsigned int)(v86 + 1);
        v87 = v38 + 20 * v86;
      }
      while ( v87 != v37 );
      if ( !(_DWORD)v86 )
        goto LABEL_168;
      v88 = v86;
      v133 = v38;
      v89 = *(char ***)(v3 + 2696);
      LODWORD(v86) = 0;
      v141 = (__int64)v89;
      v143 = 0;
      v142 = v88;
      v132 = v39;
      do
      {
        v90 = 8;
        if ( v88 < 8 )
          v90 = v88;
        v91 = 0;
        v157 = v90;
        v92 = v89;
        v138 = v152;
        do
        {
          v92[1] = (char *)4096;
          v93 = (char *)(v132 + (v91 << 12));
          *v92 = v93;
          v94 = v93;
          v95 = *(_QWORD *)(v3 + 2072);
          *(_DWORD *)(v3 + 2088) += 4096;
          v96 = *(_DWORD *)(v3 + 2068);
          v159 = v95;
          for ( i = v93; i < v93 + 4096; i += 64 )
            _mm_prefetch(i, 0);
          v98 = v159;
          v99 = v159;
          v160 = 32;
          do
          {
            v100 = 8LL;
            do
            {
              v101 = *((_QWORD *)v94 + 1) ^ __ROL8__(*(_QWORD *)v94 ^ v99, v96);
              v94 += 16;
              v99 = __ROL8__(v101, v96);
              --v100;
            }
            while ( v100 );
            v102 = __ROL8__(v98 ^ (v94 - v93), 17) ^ v98 ^ (v94 - v93);
            v96 = ((unsigned __int8)(((v102 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v102) ^ (unsigned __int8)v96) & 0x3F;
            if ( !v96 )
              LOBYTE(v96) = 1;
            --v160;
          }
          while ( v160 );
          v103 = v157;
          for ( j = v99; ; LODWORD(v99) = j ^ v99 )
          {
            j >>= 31;
            if ( !j )
              break;
          }
          ++v91;
          v92 += 6;
          *v138++ = v99 & 0x7FFFFFFF;
        }
        while ( v91 < v157 );
        v2 = a2;
        v105 = v132;
        v89 = (char **)v141;
        sub_1403EC068(v3, v141, v157);
        v108 = 0;
        v161 = 0;
        if ( v157 )
        {
          v109 = (unsigned int *)v152;
          v110 = (_DWORD *)(v133 + 16);
          while ( 1 )
          {
            v111 = (unsigned int)*v110;
            v139 = *v109;
            if ( *v109 != (*v110 & 0x7FFFFFFF) )
            {
              v112 = v105 + (v108 << 12);
              v147 = v112;
              if ( (*(_DWORD *)(v3 + 2452) & 0x40) != 0 )
              {
                v113 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v114 = v112 & 0xFFFFFFFFFFFFF000uLL;
                v145 = (v112 + 4095) | 0xFFF;
                v135 = (v112 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 2 )
                {
                  v115 = v113;
                  while ( 1 )
                  {
                    v116 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v3 + 1128))(v114, 0LL);
                    if ( v116 != -1073741267 )
                      break;
                    if ( v113 > 1u )
                      goto LABEL_135;
                    v115 = v113;
                    __writecr8(v113);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v116 < 0 )
                  {
                    __writecr8(v115);
                    v111 = (unsigned int)*v110;
                    v103 = v157;
                    v112 = v147;
                    v108 = v161;
                    v105 = v132;
                    break;
                  }
LABEL_135:
                  v114 += 4096LL;
                  v135 += 4096LL;
                  if ( v135 != v145 )
                    continue;
                  goto LABEL_136;
                }
              }
              LODWORD(v111) = v111 & 0x7FFFFFFF;
              if ( !*(_DWORD *)(v3 + 2296) )
              {
                *(_QWORD *)(*(_QWORD *)(v3 + 1416) + 24LL) = v139 ^ v111;
                if ( !*(_DWORD *)(v3 + 2296) )
                {
                  *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v3 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                  v117 = *a2;
                  *(_QWORD *)(v3 + 2328) = v112;
                  *(_QWORD *)(v3 + 2320) = v117;
                  *(_DWORD *)(v3 + 2296) = 1;
                  __ba(v3, 0LL, v106, v107);
                }
              }
            }
            v106 = 16LL;
            v107 = (__int64 *)(v133 + 20LL * v108);
            v118 = (__int64 *)(48LL * v108 + v141 + 16);
            while ( 1 )
            {
              v119 = *v118++;
              v120 = *v107++;
              if ( v119 != v120 )
                break;
              v106 = (unsigned int)(v106 - 8);
              if ( (unsigned int)v106 < 8 )
              {
                if ( !(_DWORD)v106 )
                  goto LABEL_161;
                while ( 1 )
                {
                  v121 = *(unsigned __int8 *)v118;
                  v118 = (__int64 *)((char *)v118 + 1);
                  v122 = *(unsigned __int8 *)v107;
                  v107 = (__int64 *)((char *)v107 + 1);
                  if ( v121 != v122 )
                    goto LABEL_148;
                  v26 = (_DWORD)v106 == 1;
                  v106 = (unsigned int)(v106 - 1);
                  if ( v26 )
                    goto LABEL_161;
                }
              }
            }
LABEL_148:
            v123 = v105 + (v108 << 12);
            v146 = v123;
            if ( (*(_DWORD *)(v3 + 2452) & 0x40) != 0 )
            {
              v124 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v125 = v123 & 0xFFFFFFFFFFFFF000uLL;
              v148 = (v123 + 4095) | 0xFFF;
              v136 = (v123 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 2 )
              {
                v115 = v124;
                while ( 1 )
                {
                  v126 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v3 + 1128))(
                           v125,
                           0LL,
                           v106,
                           v107);
                  if ( v126 != -1073741267 )
                    break;
                  if ( v124 > 1u )
                    goto LABEL_155;
                  v115 = v124;
                  __writecr8(v124);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v126 < 0 )
                {
                  __writecr8(v115);
                  v123 = v146;
                  v108 = v161;
                  goto LABEL_158;
                }
LABEL_155:
                v125 += 4096LL;
                v136 += 4096LL;
                if ( v136 != v148 )
                  continue;
                break;
              }
LABEL_136:
              __writecr8(v115);
              v108 = v161;
              goto LABEL_160;
            }
LABEL_158:
            if ( !*(_DWORD *)(v3 + 2296) )
            {
              *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v3 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
              v127 = *a2;
              *(_QWORD *)(v3 + 2328) = v123;
              *(_QWORD *)(v3 + 2320) = v127;
              *(_DWORD *)(v3 + 2296) = 1;
              __ba(v3, 0LL, v106, v107);
            }
LABEL_160:
            v103 = v157;
LABEL_161:
            v105 = v132;
            ++v108;
            ++v109;
            v161 = v108;
            v110 += 5;
            if ( v108 >= v103 )
            {
              LODWORD(v86) = v143;
              v89 = (char **)v141;
              break;
            }
          }
        }
        v86 = v103 + (unsigned int)v86;
        v143 = v86;
        v132 = (v103 << 12) + v105;
        *(_DWORD *)(v3 + 2088) += v103 << 15;
        v88 = v142 - v103;
        v133 += 20LL * v103;
        v142 -= v103;
      }
      while ( *(_DWORD *)(v3 + 2088) < *(_DWORD *)(v3 + 2092) && v88 );
      v38 = v149;
      v37 = v150;
      v39 = v144;
LABEL_168:
      while ( 1 )
      {
        v128 = v38 + 20 * v86;
        if ( v128 == v37 || *(char *)(v128 + 15) >= 0 )
          break;
        v86 = (unsigned int)(v86 + 1);
      }
      v38 += 20 * v86;
      v39 += (unsigned int)((_DWORD)v86 << 12);
      v149 = v38;
      v144 = v39;
    }
  }
  v40 = 0;
  v154 = 0;
  do
  {
    if ( (unsigned int)v35 <= 0x10 )
    {
      v37 = v40;
      if ( v40 >= (unsigned int)v35 )
        break;
    }
    else
    {
      v41 = __rdtsc();
      v42 = __ROR8__(v41, 3);
      v37 = ((((v42 ^ v41) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v42 ^ v41)))
          % v36;
    }
    v43 = (unsigned int)v37;
    v37 = (unsigned int)((_DWORD)v37 << 12);
    v44 = v31 + (unsigned int)v37;
    v45 = &v32[5 * v43];
    if ( *((char *)v45 + 15) >= 0 )
    {
      *(_DWORD *)(v3 + 2088) += 4096;
      LODWORD(v46) = *(_DWORD *)(v3 + 2068);
      v47 = (_QWORD *)v44;
      v48 = (const char *)v44;
      if ( v44 < (unsigned __int64)(v44 + 4096) )
      {
        do
        {
          _mm_prefetch(v48, 0);
          v48 += 64;
        }
        while ( (unsigned __int64)v48 < v44 + 4096 );
      }
      v49 = *(_QWORD *)(v3 + 2072);
      v50 = 32;
      do
      {
        v51 = 8LL;
        do
        {
          v52 = v47[1] ^ __ROL8__(*v47 ^ v49, v46);
          v47 += 2;
          v49 = __ROL8__(v52, v46);
          --v51;
        }
        while ( v51 );
        v53 = __ROL8__(*(_QWORD *)(v3 + 2072) ^ ((unsigned __int64)v47 - v44), 17) ^ *(_QWORD *)(v3 + 2072) ^ ((unsigned __int64)v47 - v44);
        v46 = ((unsigned __int8)(((v53 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v53) ^ (unsigned __int8)v46) & 0x3F;
        if ( !(_DWORD)v46 )
          v46 = 1LL;
        --v50;
      }
      while ( v50 );
      for ( k = v49; ; LODWORD(v49) = k ^ v49 )
      {
        k >>= 31;
        if ( !k )
          break;
      }
      v55 = v45 + 4;
      v56 = v49 & 0x7FFFFFFF;
      if ( v56 != (v45[4] & 0x7FFFFFFF) )
      {
        v155 = (unsigned int)v45[4] >> 31;
        if ( (*(_DWORD *)(v3 + 2452) & 0x40) != 0 )
        {
          v57 = KeGetCurrentIrql();
          v158 = v57;
          __writecr8(2uLL);
          v58 = v44 & 0xFFFFFFFFFFFFF000uLL;
          v140 = (v44 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v59 = v57;
            while ( 1 )
            {
              v60 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v3 + 1128))(
                      v58,
                      0LL,
                      v47,
                      v46);
              if ( v60 != -1073741267 )
                break;
              if ( !v155 )
                goto LABEL_70;
              v57 = v158;
              if ( v158 > 1u )
                goto LABEL_68;
              v59 = v158;
              __writecr8(v158);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v60 < 0 )
            {
LABEL_70:
              __writecr8(v59);
              v55 = v45 + 4;
              goto LABEL_71;
            }
            v57 = v158;
LABEL_68:
            v46 = 4096LL;
            v58 += 4096LL;
            v140 += 4096LL;
            if ( v140 != ((v44 + 4095) | 0xFFF) )
              continue;
            break;
          }
          __writecr8(v59);
          v55 = v45 + 4;
        }
        else
        {
LABEL_71:
          v61 = (unsigned int)*v55;
          LODWORD(v61) = v61 & 0x7FFFFFFF;
          if ( !*(_DWORD *)(v3 + 2296) )
          {
            *(_QWORD *)(*(_QWORD *)(v3 + 1416) + 24LL) = v61 ^ v56;
            if ( !*(_DWORD *)(v3 + 2296) )
            {
              *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v3 + 2320) = *v2;
              *(_QWORD *)(v3 + 2328) = v44;
              *(_DWORD *)(v3 + 2296) = 1;
              __ba(v3, 0LL, v47, v46);
            }
          }
        }
      }
      sub_1403EC00C(v3, v44, 0x1000u, (__int64)v151);
      v62 = 16LL;
      v63 = v151;
      while ( 1 )
      {
        v64 = *v63++;
        v65 = *(_QWORD *)v45;
        v45 += 2;
        if ( v64 != v65 )
          break;
        v62 = (unsigned int)(v62 - 8);
        if ( (unsigned int)v62 < 8 )
        {
          if ( !(_DWORD)v62 )
            goto LABEL_80;
          while ( 1 )
          {
            v37 = *(unsigned __int8 *)v63;
            v63 = (__int64 *)((char *)v63 + 1);
            v66 = *(unsigned __int8 *)v45;
            v45 = (int *)((char *)v45 + 1);
            if ( v37 != v66 )
              goto LABEL_90;
            v26 = (_DWORD)v62 == 1;
            v62 = (unsigned int)(v62 - 1);
            if ( v26 )
              goto LABEL_80;
          }
        }
      }
LABEL_90:
      v81 = *v55 >> 31;
      if ( (*(_DWORD *)(v3 + 2452) & 0x40) != 0 )
      {
        v82 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v83 = v44 & 0xFFFFFFFFFFFFF000uLL;
        v156 = (v44 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 2 )
        {
          v84 = v82;
          while ( 1 )
          {
            v85 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v3 + 1128))(
                    v83,
                    0LL,
                    v62,
                    v63);
            if ( v85 != -1073741267 )
              break;
            if ( !v81 )
              goto LABEL_100;
            if ( v82 > 1u )
              goto LABEL_98;
            v84 = v82;
            __writecr8(v82);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          if ( v85 < 0 )
          {
LABEL_100:
            __writecr8(v84);
            goto LABEL_101;
          }
LABEL_98:
          v83 += 4096LL;
          v156 += 4096LL;
          if ( v156 != ((v44 + 4095) | 0xFFF) )
            continue;
          break;
        }
        __writecr8(v84);
      }
      else
      {
LABEL_101:
        if ( !*(_DWORD *)(v3 + 2296) )
        {
          *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v3 + 2320) = *v2;
          *(_QWORD *)(v3 + 2328) = v44;
          *(_DWORD *)(v3 + 2296) = 1;
          __ba(v3, 0LL, v62, v63);
        }
      }
LABEL_80:
      *(_DWORD *)(v3 + 2088) += 0x10000;
      v32 = v2 + 12;
      LODWORD(v35) = v134;
      v31 = v131;
      v36 = v137;
    }
    v40 = v154 + 1;
    v154 = v40;
  }
  while ( v40 < 0x10 );
LABEL_82:
  v67 = *(_QWORD *)(v3 + 1336);
  v68 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64))(v3 + 336))(v67, v37);
  v69 = **(unsigned int ***)(v3 + 1560);
  v70 = v69 + 4;
  v71 = *((_BYTE *)v69 + 12);
  v72 = (unsigned __int64)&v69[6 * *v69 + 4];
  while ( 2 )
  {
    v73 = 24LL;
    v74 = (char *)(v2 + 6);
    v75 = v70;
    while ( 1 )
    {
      v76 = *(_QWORD *)v75;
      v75 += 2;
      v77 = *(_QWORD *)v74;
      v74 += 8;
      if ( v76 != v77 )
        break;
      v73 = (unsigned int)(v73 - 8);
      if ( (unsigned int)v73 < 8 )
      {
        v78 = (_DWORD)v73 == 0;
        while ( !v78 )
        {
          v79 = *(_BYTE *)v75;
          v75 = (unsigned int *)((char *)v75 + 1);
          v80 = *v74++;
          if ( v79 != v80 )
            goto LABEL_173;
          v78 = (_DWORD)v73 == 1;
          v73 = (unsigned int)(v73 - 1);
        }
        goto LABEL_174;
      }
    }
LABEL_173:
    v70 += 6;
    if ( (unsigned __int64)v70 < v72 )
      continue;
    break;
  }
LABEL_174:
  (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v3 + 400))(*(_QWORD *)(v3 + 1336), v73, v74, v75);
  __writecr8(v68);
  if ( !v71 )
    goto LABEL_185;
  if ( (*(_DWORD *)(v3 + 2452) & 0x10) != 0 && !*(_DWORD *)(v3 + 2296) )
  {
    *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
    *(_QWORD *)(v3 + 2320) = *v2;
    *(_QWORD *)(v3 + 2328) = 1LL;
    *(_DWORD *)(v3 + 2296) = 1;
    __ba(v3, 0LL, v129, v130);
  }
  if ( *((_QWORD *)v2 + 3) != 1LL )
  {
LABEL_185:
    if ( v70 == (unsigned int *)v72 && !*(_DWORD *)(v3 + 2296) )
    {
      *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v3 + 2320) = *v2;
      *(_QWORD *)(v3 + 2328) = v70;
      *(_DWORD *)(v3 + 2296) = 1;
      __ba(v3, 0LL, v129, v130);
    }
  }
  *(_DWORD *)(v3 + 2084) = 0;
}
