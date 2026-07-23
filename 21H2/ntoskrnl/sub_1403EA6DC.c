/*
 * XREFs of sub_1403EA6DC @ 0x1403EA6DC
 * Callers:
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F9010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_1403EA5FC @ 0x1403EA5FC (sub_1403EA5FC.c)
 *     sub_1403EA65C @ 0x1403EA65C (sub_1403EA65C.c)
 *     $$b8 @ 0x140A103CC ($$b8.c)
 *     KeGuardDispatchICall @ 0x140A12330 (KeGuardDispatchICall.c)
 */

void __fastcall sub_1403EA6DC(__int64 a1, int *a2)
{
  int *v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r8
  unsigned int v5; // edx
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned int *v17; // rcx
  unsigned int *v18; // rdi
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
  int *v32; // r15
  __int64 v33; // rcx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // r11
  unsigned int v39; // eax
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbp
  int *v44; // r13
  __int64 v45; // r9
  _QWORD *v46; // r8
  const char *v47; // rax
  unsigned __int64 v48; // rdi
  int v49; // r11d
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned __int64 v53; // rcx
  unsigned __int64 i; // rax
  _DWORD *v55; // r15
  unsigned int v56; // edi
  unsigned __int8 v57; // al
  unsigned __int64 v58; // r15
  unsigned __int64 v59; // r12
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  unsigned __int8 *v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int8 v68; // r12
  unsigned int *v69; // rcx
  unsigned int *v70; // rdi
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
  unsigned __int64 v83; // rdi
  unsigned __int64 v84; // r15
  int v85; // eax
  __int64 v86; // rbp
  __int64 v87; // rax
  char **v88; // rax
  unsigned int v89; // ecx
  int v90; // r15d
  unsigned int v91; // r11d
  __int64 v92; // rdi
  _DWORD *v93; // r13
  char **v94; // r15
  char *v95; // r9
  char *v96; // r10
  unsigned __int64 v97; // rax
  int v98; // r12d
  const char *j; // rax
  unsigned __int64 v100; // r14
  unsigned __int64 v101; // r8
  __int64 v102; // rax
  __int64 v103; // r8
  unsigned __int64 v104; // rcx
  unsigned __int64 v105; // rax
  __int64 v106; // r13
  unsigned int v107; // r15d
  __int64 *v108; // r9
  unsigned int v109; // r12d
  unsigned int *v110; // rbp
  _DWORD *v111; // rdi
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  unsigned __int8 v115; // r13
  unsigned __int64 v116; // r15
  unsigned __int64 v117; // r12
  int v118; // eax
  __int64 v119; // r8
  __int64 *v120; // r10
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rcx
  unsigned __int8 v126; // r13
  unsigned __int64 v127; // r15
  int v128; // eax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // [rsp+20h] [rbp-C8h]
  __int64 v134; // [rsp+20h] [rbp-C8h]
  __int64 v135; // [rsp+28h] [rbp-C0h]
  int v136; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v137; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v138; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v139; // [rsp+38h] [rbp-B0h]
  __int64 v140; // [rsp+38h] [rbp-B0h]
  unsigned int v141; // [rsp+40h] [rbp-A8h]
  int v142; // [rsp+44h] [rbp-A4h]
  __int64 v143; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v144; // [rsp+50h] [rbp-98h]
  unsigned int v145; // [rsp+50h] [rbp-98h]
  __int64 v146; // [rsp+58h] [rbp-90h]
  __int64 v147; // [rsp+58h] [rbp-90h]
  __int64 v148; // [rsp+60h] [rbp-88h]
  __int64 v149; // [rsp+60h] [rbp-88h]
  __int64 v150; // [rsp+68h] [rbp-80h]
  __int64 v151; // [rsp+70h] [rbp-78h]
  int *v152; // [rsp+78h] [rbp-70h]
  _BYTE v153[16]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v154[88]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v156; // [rsp+F8h] [rbp+10h]
  unsigned int v157; // [rsp+100h] [rbp+18h]
  unsigned __int64 v158; // [rsp+100h] [rbp+18h]
  unsigned int v159; // [rsp+100h] [rbp+18h]
  unsigned __int8 v160; // [rsp+108h] [rbp+20h]
  unsigned __int64 v161; // [rsp+108h] [rbp+20h]
  int v162; // [rsp+108h] [rbp+20h]
  unsigned int v163; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  if ( *a2 == 12 )
  {
    if ( *(_QWORD *)(a1 + 2432) )
    {
      v4 = *(unsigned int *)(a1 + 2084);
      v5 = *(_DWORD *)(a1 + 2452);
      LOBYTE(a1) = v5;
      if ( !(_DWORD)v4 )
      {
        LODWORD(a1) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * v5)) & 0x20;
        *(_DWORD *)(v3 + 2452) = a1;
        goto LABEL_6;
      }
      if ( (((unsigned __int8)v5 ^ (unsigned __int8)(v5 >> 3)) & 4) == 0 )
      {
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
          while ( v11 )
          {
            --v11;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v3 + 688))(v10) && !*(_DWORD *)(v3 + 2296) )
            {
              *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v3 + 2320) = *v2;
              *(_QWORD *)(v3 + 2328) = v10;
              *(_DWORD *)(v3 + 2296) = 1;
              __b8(v3, 0LL, v12, v13);
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
          }
          if ( v6 && !v11 )
            *(_DWORD *)(v3 + 2084) = 0;
          if ( !*(_DWORD *)(v3 + 2084) )
          {
            v15 = *(_QWORD *)(v3 + 1344);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            (*(void (__fastcall **)(__int64))(v3 + 336))(v15);
            v17 = **(unsigned int ***)(v3 + 1552);
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
              *(_QWORD *)(v3 + 1344),
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
              __b8(v3, 0LL, v29, v30);
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
                __b8(v3, 0LL, v29, v30);
              }
            }
          }
          return;
        }
        goto LABEL_39;
      }
    }
    *(_DWORD *)(v3 + 2084) = 0;
    return;
  }
LABEL_39:
  v31 = *((_QWORD *)v2 + 4);
  v32 = v2 + 12;
  v133 = v31;
  v152 = v2 + 12;
  v33 = *(unsigned int *)(v3 + 2084);
  v34 = ((v31 & 0xFFF) + (unsigned __int64)(unsigned int)v2[10] + 4095) >> 12;
  v35 = (unsigned int)v34;
  v136 = v34;
  v144 = (unsigned int)v34;
  v36 = (__int64)&v2[5 * (unsigned int)v34 + 12];
  v151 = v36;
  v37 = (__int64)&v2[5 * v33 + 12];
  v38 = v31 + (unsigned int)((_DWORD)v33 << 12);
  v150 = v37;
  v143 = v38;
  if ( (*(_DWORD *)(v3 + 2448) & 0x40000000) != 0 && (*(_DWORD *)(v3 + 2452) & 0x1000) == 0 || !*(_QWORD *)(v3 + 2696) )
  {
    v39 = 0;
    v156 = 0;
    do
    {
      if ( (unsigned int)v34 <= 0x10 )
      {
        v36 = v39;
        if ( v39 >= (unsigned int)v34 )
          goto LABEL_82;
      }
      else
      {
        v40 = __rdtsc();
        v41 = __ROR8__(v40, 3);
        v36 = ((((v41 ^ v40) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v41 ^ v40)))
            % v35;
      }
      v42 = (unsigned int)v36;
      v36 = (unsigned int)((_DWORD)v36 << 12);
      v43 = v31 + (unsigned int)v36;
      v44 = &v32[5 * v42];
      if ( *((char *)v44 + 15) >= 0 )
      {
        *(_DWORD *)(v3 + 2088) += 4096;
        LODWORD(v45) = *(_DWORD *)(v3 + 2068);
        v46 = (_QWORD *)v43;
        v47 = (const char *)v43;
        if ( v43 < (unsigned __int64)(v43 + 4096) )
        {
          do
          {
            _mm_prefetch(v47, 0);
            v47 += 64;
          }
          while ( (unsigned __int64)v47 < v43 + 4096 );
        }
        v48 = *(_QWORD *)(v3 + 2072);
        v49 = 32;
        do
        {
          v50 = 8LL;
          do
          {
            v51 = v48 ^ *v46;
            v52 = v46[1];
            v46 += 2;
            v48 = __ROL8__(__ROL8__(v51, v45) ^ v52, v45);
            --v50;
          }
          while ( v50 );
          v53 = __ROL8__(*(_QWORD *)(v3 + 2072) ^ ((unsigned __int64)v46 - v43), 17) ^ *(_QWORD *)(v3 + 2072) ^ ((unsigned __int64)v46 - v43);
          v45 = ((unsigned __int8)(((v53 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v53) ^ (unsigned __int8)v45) & 0x3F;
          if ( !(_DWORD)v45 )
            v45 = 1LL;
          --v49;
        }
        while ( v49 );
        for ( i = v48; ; LODWORD(v48) = i ^ v48 )
        {
          i >>= 31;
          if ( !i )
            break;
        }
        v55 = v44 + 4;
        v56 = v48 & 0x7FFFFFFF;
        if ( v56 != (v44[4] & 0x7FFFFFFF) )
        {
          v157 = (unsigned int)v44[4] >> 31;
          if ( (*(_DWORD *)(v3 + 2452) & 0x40) != 0 )
          {
            v57 = KeGetCurrentIrql();
            v160 = v57;
            __writecr8(2uLL);
            v58 = v43 & 0xFFFFFFFFFFFFF000uLL;
            v139 = (v43 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 2 )
            {
              v59 = v57;
              while ( 1 )
              {
                v60 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v3 + 1128))(
                        v58,
                        0LL,
                        v46,
                        v45);
                if ( v60 != -1073741267 )
                  break;
                if ( !v157 )
                  goto LABEL_70;
                v57 = v160;
                if ( v160 > 1u )
                  goto LABEL_68;
                v59 = v160;
                __writecr8(v160);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v60 < 0 )
              {
LABEL_70:
                __writecr8(v59);
                v55 = v44 + 4;
                goto LABEL_71;
              }
              v57 = v160;
LABEL_68:
              v58 += 4096LL;
              v139 += 4096LL;
              if ( v139 != ((v43 + 4095) | 0xFFF) )
                continue;
              break;
            }
            __writecr8(v59);
            v55 = v44 + 4;
          }
          else
          {
LABEL_71:
            v61 = (unsigned int)*v55;
            LODWORD(v61) = v61 & 0x7FFFFFFF;
            if ( !*(_DWORD *)(v3 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v3 + 1424) + 24LL) = v61 ^ v56;
              if ( !*(_DWORD *)(v3 + 2296) )
              {
                *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v3 + 2320) = *v2;
                *(_QWORD *)(v3 + 2328) = v43;
                *(_DWORD *)(v3 + 2296) = 1;
                __b8(v3, 0LL, v46, v45);
              }
            }
          }
        }
        sub_1403EA5FC(v3, v43, 0x1000u, (__int64)v153);
        v62 = 16LL;
        v63 = v153;
        while ( 1 )
        {
          v64 = *(_QWORD *)v63;
          v63 += 8;
          v65 = *(_QWORD *)v44;
          v44 += 2;
          if ( v64 != v65 )
            break;
          v62 = (unsigned int)(v62 - 8);
          if ( (unsigned int)v62 < 8 )
          {
            if ( !(_DWORD)v62 )
              goto LABEL_80;
            while ( 1 )
            {
              v36 = *v63++;
              v66 = *(unsigned __int8 *)v44;
              v44 = (int *)((char *)v44 + 1);
              if ( v36 != v66 )
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
          v83 = v43 & 0xFFFFFFFFFFFFF000uLL;
          v158 = (v43 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v84 = v82;
            while ( 1 )
            {
              v85 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int8 *))(v3 + 1128))(
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
            v158 += 4096LL;
            if ( v158 != ((v43 + 4095) | 0xFFF) )
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
            *(_QWORD *)(v3 + 2328) = v43;
            *(_DWORD *)(v3 + 2296) = 1;
            __b8(v3, 0LL, v62, v63);
          }
        }
LABEL_80:
        *(_DWORD *)(v3 + 2088) += 0x10000;
        v32 = v2 + 12;
        LODWORD(v34) = v136;
        v31 = v133;
        v35 = v144;
      }
      v39 = v156 + 1;
      v156 = v39;
    }
    while ( v39 < 0x10 );
    goto LABEL_82;
  }
  if ( v37 == v36 )
    goto LABEL_82;
  do
  {
    if ( *(_DWORD *)(v3 + 2088) >= *(_DWORD *)(v3 + 2092) )
      break;
    v86 = 0LL;
    if ( v37 == v36 )
      goto LABEL_169;
    v87 = v37;
    do
    {
      if ( *(char *)(v87 + 15) < 0 )
        break;
      v86 = (unsigned int)(v86 + 1);
      v87 = v37 + 20 * v86;
    }
    while ( v87 != v36 );
    if ( !(_DWORD)v86 )
      goto LABEL_169;
    v88 = *(char ***)(v3 + 2696);
    v89 = v86;
    LODWORD(v86) = 0;
    v141 = v89;
    v142 = 0;
    v135 = v37;
    v134 = v38;
    v140 = (__int64)v88;
    do
    {
      v90 = 8;
      if ( v89 < 8 )
        v90 = v89;
      v91 = 0;
      v159 = v90;
      v92 = v134;
      v93 = v154;
      v94 = v88;
      do
      {
        v94[1] = (char *)4096;
        v95 = (char *)(v92 + (v91 << 12));
        *v94 = v95;
        v96 = v95;
        v97 = *(_QWORD *)(v3 + 2072);
        *(_DWORD *)(v3 + 2088) += 4096;
        v98 = *(_DWORD *)(v3 + 2068);
        v161 = v97;
        for ( j = v95; j < v95 + 4096; j += 64 )
          _mm_prefetch(j, 0);
        v100 = v161;
        v101 = v161;
        v162 = 32;
        do
        {
          v102 = 8LL;
          do
          {
            v103 = *((_QWORD *)v96 + 1) ^ __ROL8__(*(_QWORD *)v96 ^ v101, v98);
            v96 += 16;
            v101 = __ROL8__(v103, v98);
            --v102;
          }
          while ( v102 );
          v104 = __ROL8__(v100 ^ (v96 - v95), 17) ^ v100 ^ (v96 - v95);
          v98 = ((unsigned __int8)(((v104 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v104) ^ (unsigned __int8)v98) & 0x3F;
          if ( !v98 )
            LOBYTE(v98) = 1;
          --v162;
        }
        while ( v162 );
        v105 = v101;
        v92 = v134;
        while ( 1 )
        {
          v105 >>= 31;
          if ( !v105 )
            break;
          LODWORD(v101) = v105 ^ v101;
        }
        ++v91;
        *v93 = v101 & 0x7FFFFFFF;
        v94 += 6;
        ++v93;
      }
      while ( v91 < v159 );
      v2 = a2;
      v106 = v134;
      v107 = v159;
      sub_1403EA65C(v3, v140, v159);
      v109 = 0;
      v163 = 0;
      if ( v159 )
      {
        v110 = (unsigned int *)v154;
        v111 = (_DWORD *)(v135 + 16);
        while ( 1 )
        {
          v112 = *v110;
          v113 = (unsigned int)*v111;
          v145 = v112;
          if ( (_DWORD)v112 != (*v111 & 0x7FFFFFFF) )
          {
            v114 = v106 + (v109 << 12);
            v148 = v114;
            if ( (*(_DWORD *)(v3 + 2452) & 0x40) != 0 )
            {
              v115 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v116 = v114 & 0xFFFFFFFFFFFFF000uLL;
              v146 = (v114 + 4095) | 0xFFF;
              v137 = (v114 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 2 )
              {
                v117 = v115;
                while ( 1 )
                {
                  v118 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v3 + 1128))(v116, 0LL);
                  if ( v118 != -1073741267 )
                    break;
                  if ( v115 > 1u )
                    goto LABEL_136;
                  v117 = v115;
                  __writecr8(v115);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v118 < 0 )
                {
                  __writecr8(v117);
                  v113 = (unsigned int)*v111;
                  v107 = v159;
                  v112 = v145;
                  v114 = v148;
                  v109 = v163;
                  v106 = v134;
                  break;
                }
LABEL_136:
                v116 += 4096LL;
                v137 += 4096LL;
                if ( v137 != v146 )
                  continue;
                goto LABEL_137;
              }
            }
            LODWORD(v113) = v113 & 0x7FFFFFFF;
            if ( !*(_DWORD *)(v3 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v3 + 1424) + 24LL) = v112 ^ v113;
              if ( !*(_DWORD *)(v3 + 2296) )
              {
                *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v3 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v3 + 2320) = *a2;
                *(_QWORD *)(v3 + 2328) = v114;
                *(_DWORD *)(v3 + 2296) = 1;
                __b8(v3, 0LL, v114, v108);
              }
            }
          }
          v119 = 16LL;
          v108 = (__int64 *)(v135 + 20LL * v109);
          v120 = (__int64 *)(48LL * v109 + v140 + 16);
          while ( 1 )
          {
            v121 = *v120++;
            v122 = *v108++;
            if ( v121 != v122 )
              break;
            v119 = (unsigned int)(v119 - 8);
            if ( (unsigned int)v119 < 8 )
            {
              if ( !(_DWORD)v119 )
                goto LABEL_162;
              while ( 1 )
              {
                v123 = *(unsigned __int8 *)v120;
                v120 = (__int64 *)((char *)v120 + 1);
                v124 = *(unsigned __int8 *)v108;
                v108 = (__int64 *)((char *)v108 + 1);
                if ( v123 != v124 )
                  goto LABEL_149;
                v26 = (_DWORD)v119 == 1;
                v119 = (unsigned int)(v119 - 1);
                if ( v26 )
                  goto LABEL_162;
              }
            }
          }
LABEL_149:
          v125 = v106 + (v109 << 12);
          v147 = v125;
          if ( (*(_DWORD *)(v3 + 2452) & 0x40) != 0 )
          {
            v126 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v127 = v125 & 0xFFFFFFFFFFFFF000uLL;
            v149 = (v125 + 4095) | 0xFFF;
            v138 = (v125 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 2 )
            {
              v117 = v126;
              while ( 1 )
              {
                v128 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v3 + 1128))(
                         v127,
                         0LL,
                         v119,
                         v108);
                if ( v128 != -1073741267 )
                  break;
                if ( v126 > 1u )
                  goto LABEL_156;
                v117 = v126;
                __writecr8(v126);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v128 < 0 )
              {
                __writecr8(v117);
                v125 = v147;
                v109 = v163;
                goto LABEL_159;
              }
LABEL_156:
              v127 += 4096LL;
              v138 += 4096LL;
              if ( v138 != v149 )
                continue;
              break;
            }
LABEL_137:
            __writecr8(v117);
            v109 = v163;
            goto LABEL_161;
          }
LABEL_159:
          if ( !*(_DWORD *)(v3 + 2296) )
          {
            *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v3 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
            v129 = *a2;
            *(_QWORD *)(v3 + 2328) = v125;
            *(_QWORD *)(v3 + 2320) = v129;
            *(_DWORD *)(v3 + 2296) = 1;
            __b8(v3, 0LL, v119, v108);
          }
LABEL_161:
          v107 = v159;
LABEL_162:
          v106 = v134;
          ++v109;
          ++v110;
          v163 = v109;
          v111 += 5;
          if ( v109 >= v107 )
          {
            LODWORD(v86) = v142;
            break;
          }
        }
      }
      v86 = v107 + (unsigned int)v86;
      v142 = v86;
      v134 = (v107 << 12) + v106;
      *(_DWORD *)(v3 + 2088) += v107 << 15;
      v89 = v141 - v107;
      v135 += 20LL * v107;
      v141 -= v107;
      if ( *(_DWORD *)(v3 + 2088) >= *(_DWORD *)(v3 + 2092) )
        break;
      v88 = (char **)v140;
    }
    while ( v89 );
    v37 = v150;
    v36 = v151;
    v38 = v143;
LABEL_169:
    while ( 1 )
    {
      v130 = v37 + 20 * v86;
      if ( v130 == v36 || *(char *)(v130 + 15) >= 0 )
        break;
      v86 = (unsigned int)(v86 + 1);
    }
    v38 += (unsigned int)((_DWORD)v86 << 12);
    v143 = v38;
    v37 += 20 * v86;
    v150 = v37;
  }
  while ( v37 != v36 );
  if ( v37 != v36 )
  {
    *(_DWORD *)(v3 + 2084) = (v37 - (__int64)v152) / 20;
    return;
  }
LABEL_82:
  v67 = *(_QWORD *)(v3 + 1344);
  v68 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64))(v3 + 336))(v67, v36);
  v69 = **(unsigned int ***)(v3 + 1552);
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
  (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v3 + 400))(*(_QWORD *)(v3 + 1344), v73, v74, v75);
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
    __b8(v3, 0LL, v131, v132);
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
      __b8(v3, 0LL, v131, v132);
    }
  }
  *(_DWORD *)(v3 + 2084) = 0;
}
