/*
 * XREFs of SetupAAHeader @ 0x1C001CE78
 * Callers:
 *     AAHalftoneBitmap @ 0x1C001AD68 (AAHalftoneBitmap.c)
 * Callees:
 *     ComputeBytesPerScanLine @ 0x1C0019884 (ComputeBytesPerScanLine.c)
 *     _ALIGN_MEM @ 0x1C001D71C (_ALIGN_MEM.c)
 *     ComputeByteOffset @ 0x1C001D74C (ComputeByteOffset.c)
 *     ComputeInputColorInfo @ 0x1C001D7A0 (ComputeInputColorInfo.c)
 *     ComputeAABBP @ 0x1C001D8DC (ComputeAABBP.c)
 *     CheckBMPNeedFixup @ 0x1C00FF2F8 (CheckBMPNeedFixup.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall SetupAAHeader(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall **a4)(__int128 *a1))
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  _BYTE *v8; // r10
  __int64 v9; // rax
  int v10; // esi
  BOOL v11; // ecx
  int v12; // r15d
  int v13; // eax
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // r13
  __int64 v17; // rdx
  int v18; // r14d
  int v19; // eax
  __int64 v20; // r13
  unsigned int *v21; // r8
  bool v22; // zf
  __int16 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // r12
  unsigned int v27; // esi
  char v28; // al
  int v29; // r10d
  __int64 (__fastcall *v30)(); // rdx
  __int64 (__fastcall *v31)(int, int, int, int, int); // rax
  __int64 (__fastcall *v32)(int, int, int, int, int); // rcx
  __int64 v33; // r11
  unsigned int v34; // ecx
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned int v37; // r10d
  __int64 v38; // r11
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // rax
  __int64 v43; // r11
  signed int v44; // r10d
  int v45; // r13d
  int v46; // r12d
  _QWORD *v47; // rsi
  int v48; // r14d
  unsigned __int64 v49; // r11
  unsigned __int64 v50; // rcx
  unsigned int v51; // edx
  unsigned int v52; // ecx
  unsigned int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // r15d
  __int64 v58; // rax
  int *v59; // rsi
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // r15
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  char *v67; // rcx
  size_t v68; // r8
  unsigned int v69; // r13d
  int v70; // ecx
  int v71; // r14d
  int v72; // r10d
  _DWORD *v73; // r9
  int v74; // eax
  __int64 v75; // rdi
  __int64 v76; // rdx
  int v77; // r9d
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rdi
  int v81; // r9d
  __int64 v82; // rcx
  __int64 v83; // rdx
  int v84; // eax
  int v85; // r10d
  int v86; // r11d
  __int64 v87; // rcx
  int v88; // eax
  int v89; // r9d
  int v90; // r10d
  __int64 v91; // rdx
  int v92; // eax
  int v93; // eax
  __int64 (__fastcall **v94)(__int128 *); // rcx
  __int64 (__fastcall *v95)(__int128 *); // rax
  __int64 v96; // rcx
  __int64 result; // rax
  unsigned int v98; // eax
  __int64 v99; // rcx
  unsigned __int64 v100; // rcx
  _QWORD *v101; // rax
  __int64 v102; // r8
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  unsigned __int64 v108; // rcx
  __int64 (__fastcall *v109)(); // r9
  __int64 v110; // rax
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rcx
  unsigned int v115; // eax
  int v116; // ecx
  bool v117; // cf
  int v118; // eax
  __int64 (__fastcall *v119)(); // r9
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // rcx
  int v122; // eax
  unsigned int v123; // ecx
  unsigned __int64 v124; // rcx
  unsigned __int64 v125; // rdx
  unsigned int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rax
  bool v129; // sf
  unsigned int v130; // r12d
  unsigned int v131; // r8d
  int v132; // r15d
  int v133; // r15d
  __int64 v134; // rdx
  _DWORD *v135; // rdi
  __int64 v136; // r8
  int v137; // eax
  int v138; // r15d
  int v139; // r9d
  __int64 v140; // rcx
  _BYTE *v141; // rax
  int *v142; // rcx
  unsigned int v143; // [rsp+60h] [rbp-A0h]
  int v144; // [rsp+64h] [rbp-9Ch] BYREF
  int v145; // [rsp+68h] [rbp-98h] BYREF
  PVOID pv; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v147)(__int128 *); // [rsp+78h] [rbp-88h]
  signed int v148; // [rsp+80h] [rbp-80h] BYREF
  int v149; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v150; // [rsp+88h] [rbp-78h]
  int v151; // [rsp+8Ch] [rbp-74h] BYREF
  int v152; // [rsp+90h] [rbp-70h] BYREF
  int v153; // [rsp+94h] [rbp-6Ch]
  int v154; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v155; // [rsp+9Ch] [rbp-64h]
  __int64 v156; // [rsp+A0h] [rbp-60h]
  _DWORD *v157; // [rsp+A8h] [rbp-58h]
  _QWORD *v158; // [rsp+B0h] [rbp-50h]
  __int64 v159; // [rsp+B8h] [rbp-48h]
  _BYTE *v160; // [rsp+C0h] [rbp-40h]
  __int64 v161; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall **v162)(__int128 *); // [rsp+D0h] [rbp-30h]
  _QWORD v163[18]; // [rsp+E0h] [rbp-20h] BYREF

  v159 = a2;
  v158 = a1;
  v162 = a4;
  memset(v163, 0, sizeof(v163));
  v6 = 0;
  v7 = a1[5];
  v8 = (_BYTE *)a1[2];
  v156 = a1[3];
  v157 = (_DWORD *)a1[4];
  v155 = *(unsigned __int8 *)(v7 + 10);
  v9 = a1[1];
  v151 = 0;
  v152 = 0;
  v160 = v8;
  v10 = *(_DWORD *)(v9 + 56);
  v11 = (*(_BYTE *)(v9 + 24) & 1) == 0;
  v161 = v7;
  v12 = 2 * v11;
  v143 = 2 * v11 + 1;
  LODWORD(v163[0]) = (v10 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*v8 & 0x40) != 0 )
    LODWORD(v163[0]) = 1536;
  if ( (int)ComputeAABBP(v8, v7, v163, v12 == 0) <= 0 )
    return 0LL;
  v13 = v163[0];
  v14 = 3100LL;
  v145 = 3100;
  if ( (v10 & 0x100000) != 0 )
  {
    v13 = LODWORD(v163[0]) | 0x800;
    LODWORD(v163[0]) |= 0x800u;
    if ( (v10 & 0x200000) != 0 )
    {
      v13 |= 0x1000u;
      v14 = 5148LL;
      LODWORD(v163[0]) = v13;
    }
    else
    {
      if ( (v10 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v10 & 0x1000000) != 0 )
      {
        v13 |= 0x100000u;
        LODWORD(v163[0]) = v13;
      }
      v14 = 3868LL;
    }
    v145 = v14;
  }
  if ( (v10 & 0x40000000) != 0 )
    LODWORD(v163[0]) = v13 & 0xFFFFFFE7;
  if ( (int)ALIGN_MEM(&v145, v14) < 0 )
    return 4294967294LL;
  v15 = (_DWORD)a1 + 64;
  v16 = v156;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v156 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v156 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v156 + 32) + 3LL),
    v15,
    a3 + 8);
  v17 = LODWORD(v163[0]);
  *(_BYTE *)(a3 + 8) |= v12 != 0 ? 2 : 6;
  if ( (v10 & 0x4000) != 0 )
  {
    v17 = (unsigned int)v17 | 4;
    LODWORD(v163[0]) = v17;
  }
  if ( (*v160 & 0x40) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    LODWORD(v163[0]) = v17;
  }
  if ( (v17 & 0x200) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    LODWORD(v163[0]) = v17;
  }
  if ( (v17 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v16, v163);
    v17 = LODWORD(v163[0]);
    if ( (v163[0] & 0x80000) != 0 )
    {
      if ( (v10 & 0x80000) != 0 )
        v17 = LODWORD(v163[0]) | 0x200u;
      else
        LODWORD(v17) = v163[0] & 0xFFFFFDFF;
      LODWORD(v163[0]) = v17;
    }
  }
  if ( (v17 & 0x200) != 0 )
  {
    LODWORD(v17) = v17 & 0xFFFFBFFF;
    LODWORD(v163[0]) = v17;
  }
  if ( v157 )
  {
    LODWORD(v17) = v17 | 0x80;
    LODWORD(v163[0]) = v17;
  }
  v18 = v145;
  v19 = *(_DWORD *)(v16 + 12);
  v20 = v159;
  pv = (PVOID)((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD *, int, _DWORD, _DWORD, _QWORD *, _QWORD *, int))v163[2])(
                v159,
                v17,
                &v163[8],
                &v163[9],
                v19,
                v163[12],
                v163[13],
                &v163[10],
                &v163[11],
                v145);
  v21 = (unsigned int *)pv;
  if ( !pv )
  {
    v18 = 0;
    pv = (PVOID)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *, _QWORD *, _DWORD, _DWORD, _DWORD, _QWORD *, _QWORD *, _DWORD))v163[2])(
                  v20,
                  LODWORD(v163[0]),
                  &v163[8],
                  &v163[9],
                  *(_DWORD *)(v156 + 12),
                  v163[12],
                  v163[13],
                  &v163[10],
                  &v163[11],
                  0);
    v21 = (unsigned int *)pv;
    if ( !pv )
      return 4294967294LL;
  }
  if ( !*v21 || !v21[1] )
    goto LABEL_119;
  v22 = v18 == 0;
  *(_QWORD *)(a3 + 304) = v21;
  v23 = v163[0];
  if ( !v22 )
  {
    v24 = *((_QWORD *)v21 + 4);
    *(_QWORD *)(a3 + 376) = v24;
    if ( (v23 & 0x800) == 0 )
      goto LABEL_24;
    v105 = v24 + 3100;
    goto LABEL_139;
  }
  LODWORD(v163[0]) |= 0x80000000;
  v23 = v163[0];
  v24 = v20 + 856;
  *(_QWORD *)(a3 + 376) = v20 + 856;
  if ( (v23 & 0x800) != 0 )
  {
    v106 = *(_QWORD *)(v20 + 7064);
    *(_QWORD *)(a3 + 336) = v106;
    if ( (v10 & 0x200000) != 0 )
    {
      v105 = v106 + 768;
LABEL_139:
      *(_QWORD *)(a3 + 336) = v105;
    }
  }
LABEL_24:
  *(_QWORD *)(a3 + 384) = v24 + 28;
  if ( (v23 & 1) != 0 )
  {
    LODWORD(v163[10]) = LODWORD(v163[14]) - LODWORD(v163[10]) - 1;
    LODWORD(v163[11]) = LODWORD(v163[14]) - LODWORD(v163[11]) - 1;
  }
  v25 = *v21;
  v26 = v21[1];
  v150 = v25;
  v153 = v26;
  v27 = v25 + 6;
  if ( (int)v25 + 6 < (unsigned int)v25 )
    goto LABEL_119;
  v28 = BYTE4(v163[0]);
  v29 = 0;
  v144 = 0;
  v147 = 0LL;
  if ( (v23 & 0x200) != 0 )
  {
    if ( BYTE4(v163[0]) == 1 )
    {
      v147 = (__int64 (__fastcall *)(__int128 *))BltDIB_CY;
    }
    else
    {
      if ( BYTE4(v163[0]) <= 1u )
        goto LABEL_43;
      if ( BYTE4(v163[0]) <= 3u )
      {
        v30 = SkipDIB_CY;
      }
      else
      {
        if ( BYTE4(v163[0]) > 5u )
          goto LABEL_43;
        if ( (v23 & 0x800) != 0 )
        {
          v107 = (unsigned int)(v26 + 6);
          if ( (unsigned int)v107 < (unsigned int)v26 )
            goto LABEL_119;
          v29 = 3 * v107;
          if ( (unsigned __int64)(3 * v107) > 0xFFFFFFFF )
            goto LABEL_119;
        }
        v144 = v29;
        v30 = RepDIB_CY;
      }
      v147 = (__int64 (__fastcall *)(__int128 *))v30;
    }
    if ( BYTE5(v163[0]) )
    {
      if ( BYTE5(v163[0]) == 1 )
      {
        v31 = SkipDIB_CX;
        v32 = GraySkipDIB_CX;
      }
      else
      {
        if ( BYTE5(v163[0]) != 2 )
        {
LABEL_42:
          v28 = -1;
          BYTE4(v163[0]) = -1;
          goto LABEL_43;
        }
        v31 = RepDIB_CX;
        v32 = GrayRepDIB_CX;
      }
    }
    else
    {
      v31 = CopyDIB_CX;
      v32 = (__int64 (__fastcall *)(int, int, int, int, int))GrayCopyDIB_CXGray;
    }
    if ( !v12 )
      v31 = v32;
    v163[1] = v31;
    goto LABEL_42;
  }
LABEL_43:
  if ( !v28 )
  {
    v147 = (__int64 (__fastcall *)(__int128 *))TileDIB_CY;
    if ( v12 )
    {
      v144 = 0;
    }
    else
    {
      if ( (unsigned __int64)(2 * v25) > 0xFFFFFFFF )
      {
LABEL_211:
        v142 = (int *)v21;
        goto LABEL_212;
      }
      v144 = 2 * v25;
    }
    goto LABEL_49;
  }
  if ( v28 == 1 )
  {
    v147 = (__int64 (__fastcall *)(__int128 *))BltDIB_CY;
    goto LABEL_49;
  }
  if ( v28 != 2 )
  {
    switch ( v28 )
    {
      case 3:
        v98 = v21[5];
        v147 = ShrinkDIB_CY_SrkCX;
        v99 = v98 + 2;
        if ( (unsigned int)v99 >= v98 )
        {
          v100 = 36 * v99;
          if ( v100 <= 0xFFFFFFFF && (unsigned int)(v100 + 2048) >= 0x800 )
          {
            v144 = v100 + 2048;
            goto LABEL_49;
          }
        }
        break;
      case 4:
        v119 = GrayExpandDIB_CY;
        if ( v12 )
          v119 = ExpandDIB_CY;
        v147 = (__int64 (__fastcall *)(__int128 *))v119;
        if ( (int)v26 + 6 >= (unsigned int)v26 )
        {
          v33 = v143;
          v120 = v143 * (unsigned __int64)(unsigned int)(v26 + 6);
          if ( v120 <= 0xFFFFFFFF )
          {
            v121 = 6LL * (unsigned int)v120;
            if ( v121 <= 0xFFFFFFFF )
            {
              v122 = -1;
              v123 = v121 + 4096;
              if ( v123 >= 0x1000 )
                v122 = v123;
              v144 = v122;
              if ( v123 >= 0x1000 )
                goto LABEL_50;
            }
          }
        }
        break;
      case 5:
        if ( (v23 & 0x4000) != 0 )
        {
          v33 = v143;
          v108 = v143 * (unsigned __int64)v27;
          if ( v108 <= 0xFFFFFFFF && 5 * (unsigned __int64)(unsigned int)v108 <= 0xFFFFFFFF )
          {
            v144 = 5 * v108;
            v147 = (__int64 (__fastcall *)(__int128 *))FastExpAA_CY;
            goto LABEL_50;
          }
        }
        else
        {
          v109 = GrayExpandDIB_CY_ExpCX;
          if ( v12 )
            v109 = ExpandDIB_CY_ExpCX;
          v110 = (unsigned int)(v26 + 6);
          v147 = (__int64 (__fastcall *)(__int128 *))v109;
          if ( (unsigned int)v110 >= (unsigned int)v26 )
          {
            v33 = v143;
            v111 = v143 * v110;
            if ( v111 <= 0xFFFFFFFF )
            {
              v112 = 4LL * (unsigned int)v111;
              if ( v112 <= 0xFFFFFFFF )
              {
                v113 = v143 * (unsigned __int64)v27;
                if ( v113 <= 0xFFFFFFFF )
                {
                  v114 = 3LL * (unsigned int)v113;
                  if ( v114 <= 0xFFFFFFFF )
                  {
                    v115 = v112 + v114;
                    if ( (int)v112 + (int)v114 >= (unsigned int)v114 )
                    {
                      v116 = v115 + 4096;
                      v117 = v115 >= 0xFFFFF000;
                      v118 = -1;
                      if ( !v117 )
                        v118 = v116;
                      v144 = v118;
                      if ( !v117 )
                        goto LABEL_50;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      default:
LABEL_49:
        v33 = v143;
        goto LABEL_50;
    }
    goto LABEL_119;
  }
  if ( v12 )
  {
    v33 = v143;
    v124 = v143 * (unsigned __int64)v27;
    v147 = (__int64 (__fastcall *)(__int128 *))ShrinkDIB_CY;
    if ( v124 <= 0xFFFFFFFF )
    {
      v125 = 36 * v25;
      goto LABEL_176;
    }
LABEL_119:
    EngFreeMem(v21);
    return 0LL;
  }
  LODWORD(v124) = 12 * v26;
  v147 = (__int64 (__fastcall *)(__int128 *))GrayShrinkDIB_CY;
  if ( (unsigned __int64)(12 * v26) > 0xFFFFFFFF || (int)v26 + 6 < (unsigned int)v26 )
    goto LABEL_119;
  v33 = v143;
  v125 = v143 * (unsigned __int64)(unsigned int)(v26 + 6);
LABEL_176:
  if ( v125 > 0xFFFFFFFF || (unsigned int)v125 >= 0xFFFFF800 || (int)v124 + (int)v125 + 2048 < (unsigned int)v124 )
    goto LABEL_119;
  v144 = v124 + v125 + 2048;
LABEL_50:
  v34 = (v23 & 0x800) != 0 ? v26 : 0;
  *(_BYTE *)(a3 + 96) = v12 != 0 ? 0 : 4;
  *(_DWORD *)(a3 + 152) = v34 * v33;
  v35 = v34 + 8;
  if ( (unsigned int)v35 < v34 )
    goto LABEL_210;
  v36 = v33 * v35;
  if ( v36 > 0xFFFFFFFF )
    goto LABEL_210;
  v145 = v36;
  if ( (int)ALIGN_MEM(&v145, (unsigned int)v36) < 0 )
    goto LABEL_118;
  if ( (int)ALIGN_MEM(&v144, v37) < 0 )
    goto LABEL_118;
  v39 = (unsigned int)(v25 + 8);
  if ( (unsigned int)v39 < v27 )
    goto LABEL_118;
  v40 = v38 * v39;
  if ( v40 > 0xFFFFFFFF )
    goto LABEL_118;
  v149 = v40;
  if ( (int)ALIGN_MEM(&v149, (unsigned int)v40) < 0 )
    goto LABEL_118;
  if ( (unsigned int)v26 >= 0xFFFFFFF6 )
    goto LABEL_118;
  v42 = 4LL * (unsigned int)(v26 + 10);
  if ( v42 > v41 )
    goto LABEL_118;
  v154 = 4 * (v26 + 10);
  if ( (int)ALIGN_MEM(&v154, (unsigned int)v42) < 0 )
    goto LABEL_118;
  if ( (v23 & 0x80u) != 0 )
  {
    v126 = ComputeBytesPerScanLine(1u, 4u, v25);
    v127 = v126 + 4;
    if ( (unsigned int)v127 < v126 )
      goto LABEL_118;
    v148 = v126 + 4;
    if ( (int)ALIGN_MEM(&v148, v127) < 0 )
      goto LABEL_118;
    v44 = v148;
  }
  else
  {
    v44 = 0;
    v148 = 0;
  }
  v45 = v149;
  if ( v149 < v145 )
    v45 = v145;
  if ( (v23 & 0x1800) == 0x800 )
  {
    if ( (int)ALIGN_MEM(&v145, (unsigned int)v26) < 0 )
      goto LABEL_118;
    v46 = v145;
  }
  else
  {
    v46 = 0;
  }
  v47 = v158;
  if ( v155 == 254 && v158[7] && (int)ALIGN_MEM(&v151, 366LL) < 0 )
    goto LABEL_118;
  if ( (v23 & 0x40) != 0 )
  {
    v103 = v150 + 4;
    if ( (unsigned int)v103 < v150 )
      goto LABEL_118;
    v104 = v43 * v103;
    if ( v104 > 0xFFFFFFFF )
      goto LABEL_118;
    v149 = v104;
    if ( (int)ALIGN_MEM(&v149, (unsigned int)v104) < 0 )
      goto LABEL_118;
    v48 = v149;
  }
  else
  {
    v48 = 0;
    v49 = 0xFFFFFFFFLL;
  }
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0
    && (v47[8] & 1) != 0
    && (*(_BYTE *)(a3 + 72) & 1) != 0
    && *((_BYTE *)v47 + 84) != 4
    && (int)ALIGN_MEM(&v152, 3072LL) < 0 )
  {
LABEL_118:
    v21 = (unsigned int *)pv;
LABEL_210:
    v6 = -2;
    goto LABEL_211;
  }
  v50 = 6LL * (unsigned int)v48;
  if ( v50 > v49 )
    goto LABEL_209;
  v51 = v50 + v45;
  if ( (int)v50 + v45 < (unsigned int)v50 )
    goto LABEL_209;
  v52 = v51 + v154;
  if ( v51 + v154 < v51
    || (v53 = v52 + v44, v52 + v44 < v52)
    || (v54 = v53 + v46, v53 + v46 < v53)
    || (v55 = v54 + v152, v54 + v152 < v54)
    || (v56 = v55 + v151, v55 + v151 < v55)
    || (v57 = v144, v56 + v144 < v56)
    || (v58 = ((__int64 (__fastcall *)(__int64, _QWORD, char *, char *, _DWORD, _DWORD, _DWORD, char *, char *, unsigned int))v163[3])(
                v159,
                LODWORD(v163[0]),
                (char *)&v163[8] + 4,
                (char *)&v163[9] + 4,
                *(_DWORD *)(v156 + 16),
                HIDWORD(v163[12]),
                HIDWORD(v163[13]),
                (char *)&v163[10] + 4,
                (char *)&v163[11] + 4,
                v56 + v144),
        (v59 = (int *)v58) == 0LL) )
  {
LABEL_209:
    EngFreeMem(pv);
    return 4294967294LL;
  }
  if ( !*(_DWORD *)v58 || !*(_DWORD *)(v58 + 4) )
  {
    v73 = pv;
    goto LABEL_208;
  }
  *(_QWORD *)(a3 + 312) = v58;
  v60 = *(_QWORD *)(v58 + 32) + v57;
  *(_DWORD *)a3 = v163[0];
  v61 = v150 * v143;
  *(_QWORD *)(a3 + 536) = v60;
  *(_DWORD *)(a3 + 64) = v61;
  v62 = v45 + v60;
  if ( v46 )
  {
    v63 = v153;
    *(_QWORD *)(a3 + 352) = v62;
    *(_QWORD *)(a3 + 344) = v62;
    *(_DWORD *)(a3 + 368) = 1;
    *(_QWORD *)(a3 + 360) = v62 + v63;
    v62 += v46;
  }
  else
  {
    LODWORD(v63) = v153;
  }
  if ( v48 )
  {
    *(_QWORD *)(a3 + 264) = v62;
    v101 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v48;
    v102 = 6LL;
    do
    {
      *v101 = v62;
      v62 += v48;
      ++v101;
      --v102;
    }
    while ( v102 );
  }
  v64 = v151;
  if ( v151 )
  {
    *(_QWORD *)(a3 + 400) = v62;
    v62 += v64;
  }
  v65 = v148;
  if ( v148 )
  {
    *(_QWORD *)(a3 + 208) = v62;
    v62 += v65;
  }
  v66 = v62;
  if ( v152 )
    v62 += v152;
  else
    v66 = *(_QWORD *)(a3 + 384);
  *(_QWORD *)(a3 + 16) = v66;
  v67 = (char *)(v62 + 20);
  v68 = 4LL * (int)v63;
  *(_QWORD *)(a3 + 576) = v67;
  *(_QWORD *)(a3 + 544) = v67;
  *(_QWORD *)(a3 + 560) = v67;
  *(_QWORD *)(a3 + 568) = &v67[v68];
  *(_QWORD *)(a3 + 552) = &v67[v68];
  *(_QWORD *)(a3 + 584) = &v67[v68];
  memset(v67, 255, v68);
  v69 = v163[10];
  v70 = 4;
  if ( SLODWORD(v163[10]) > SLODWORD(v163[11]) )
  {
    v69 = v163[11];
    LODWORD(v163[11]) = v163[10];
    v128 = *(_QWORD *)(a3 + 568) - 4LL;
    LODWORD(v163[10]) = v69;
    *(_QWORD *)(a3 + 576) = v128;
    v70 = -4;
    *(_QWORD *)(a3 + 584) = *(_QWORD *)(a3 + 560) - 4LL;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
  }
  *(_DWORD *)(a3 + 592) = v70;
  v71 = v163[0];
  *(_DWORD *)(a3 + 328) = v69 - LODWORD(v163[16]);
  if ( (v71 & 2) != 0 )
  {
    v72 = HIDWORD(v163[14]) - HIDWORD(v163[10]) - 1;
    HIDWORD(v163[10]) = v72;
    HIDWORD(v163[11]) = HIDWORD(v163[14]) - HIDWORD(v163[11]) - 1;
  }
  else
  {
    v72 = HIDWORD(v163[10]);
  }
  v73 = pv;
  *(_DWORD *)(a3 + 332) = v72 - HIDWORD(v163[16]);
  *(_QWORD *)(a3 + 288) = v163[1];
  *(_DWORD *)(a3 + 56) = *v73;
  v74 = *v59;
  *(_DWORD *)(a3 + 60) = *v59;
  *(_DWORD *)(a3 + 40) = v74;
  if ( (v71 & 0x80u) == 0 )
    goto LABEL_95;
  v129 = v73[30] + LODWORD(v163[17]) < 0;
  v130 = v73[30] + LODWORD(v163[17]);
  v131 = v157[5];
  LODWORD(v163[17]) = v130;
  v132 = v59[30];
  v150 = v131;
  v133 = v132 + HIDWORD(v163[17]);
  HIDWORD(v163[17]) = v133;
  v134 = v73[31] + v130;
  if ( v129 || v133 < 0 || (v135 = v157, (int)v134 > v157[3]) || v133 + v59[31] > v157[4] )
  {
    v6 = -13;
LABEL_208:
    EngFreeMem(v73);
    v142 = v59;
LABEL_212:
    EngFreeMem(v142);
    return v6;
  }
  *(_DWORD *)(a3 + 224) = v131;
  *(_DWORD *)(a3 + 228) = v59[31];
  ComputeByteOffset(1LL, v134, a3 + 4);
  v137 = ComputeByteOffset(1LL, v130, v136);
  v138 = v150 * v133;
  *(_DWORD *)(a3 + 200) = v139 - v137 + 1;
  v140 = v137 + *((_QWORD *)v135 + 3) + v138;
  v141 = v160;
  *(_QWORD *)(a3 + 216) = v140;
  if ( (*v141 & 8) != 0 )
  {
    v71 |= 0x100u;
    LODWORD(v163[0]) = v71;
  }
  LODWORD(v63) = v153;
  *(_QWORD *)(a3 + 184) = v163[4];
  *(_QWORD *)(a3 + 192) = v163[5];
LABEL_95:
  v75 = v156;
  v76 = LODWORD(v163[8]);
  v77 = *(_DWORD *)(v156 + 20);
  *(_DWORD *)(a3 + 68) = v77;
  *(_DWORD *)(a3 + 260) = v77;
  v78 = ComputeByteOffset(*(unsigned __int8 *)(v75 + 10), v76, a3 + 9);
  v79 = *(_QWORD *)(v75 + 24);
  v80 = v161;
  v82 = v81 * HIDWORD(v163[8]) + (__int64)v78;
  *(_QWORD *)(a3 + 232) = v163[6];
  v83 = v82 + v79;
  *(_QWORD *)(a3 + 240) = v163[7];
  *(_QWORD *)(a3 + 48) = v83;
  *(_QWORD *)(a3 + 32) = v83;
  v84 = *(_DWORD *)(v80 + 20);
  if ( v85 > v86 )
    v84 = -v84;
  v87 = v155;
  *(_DWORD *)(a3 + 156) = v84;
  v88 = ComputeByteOffset(v87, v69, a3 + 97);
  v91 = v89 * v90 + (__int64)v88 + *(_QWORD *)(v80 + 24);
  *(_QWORD *)(a3 + 136) = v91;
  *(_QWORD *)(a3 + 120) = v91;
  v92 = *(_DWORD *)(a3 + 156) * v59[1];
  *(_DWORD *)(a3 + 144) = v63;
  *(_QWORD *)(a3 + 320) = v91 + v92;
  v93 = v59[1];
  v94 = v162;
  *(_DWORD *)(a3 + 148) = v93;
  *(_DWORD *)(a3 + 128) = v93;
  v95 = v147;
  *(_DWORD *)a3 = v71;
  *v94 = v95;
  if ( (v71 & 0x400) != 0 )
  {
    *(_BYTE *)(a3 + 8) |= 1u;
    *(_QWORD *)(a3 + 48) += v59[6] * *(_DWORD *)(a3 + 68);
    *(_DWORD *)(a3 + 60) -= v59[6];
  }
  v96 = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 256) = *(_DWORD *)(a3 + 60);
  result = 1LL;
  *(_QWORD *)(a3 + 248) = v96;
  return result;
}
