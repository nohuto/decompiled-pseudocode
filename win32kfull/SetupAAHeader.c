__int64 __fastcall SetupAAHeader(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall **a4)())
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int128 *v8; // r10
  __int64 v9; // rax
  int v10; // esi
  BOOL v11; // ecx
  int v12; // r15d
  __int32 v14; // eax
  unsigned int v15; // edx
  _BYTE *v16; // rax
  __int64 v17; // r13
  __int64 v18; // rdx
  int v19; // r14d
  int v20; // eax
  __int64 v21; // r13
  unsigned int *v22; // r12
  bool v23; // zf
  __int16 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // r13
  unsigned int v30; // edx
  __int8 v31; // r8
  __int64 v32; // rax
  __int64 (__fastcall *v33)(); // r8
  __int64 (__fastcall *v34)(int, int, int, int, int); // rax
  __int64 (__fastcall *v35)(int, int, int, int, int); // rcx
  __int64 v36; // rsi
  unsigned __int64 v37; // rcx
  __int64 (__fastcall *v38)(); // r8
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned int v44; // eax
  __int64 (__fastcall *v45)(); // r8
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  bool v48; // cf
  unsigned int v49; // eax
  __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  unsigned int v54; // ecx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned int v57; // r10d
  unsigned int v58; // r11d
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r10
  unsigned __int64 v62; // rax
  unsigned int v63; // eax
  signed int v64; // r15d
  int v65; // r11d
  int v66; // r10d
  unsigned int v67; // r13d
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned int v70; // r14d
  int v71; // r12d
  unsigned __int64 v72; // rcx
  unsigned int v73; // edx
  unsigned int v74; // ecx
  unsigned int v75; // eax
  unsigned int v76; // ecx
  unsigned int v77; // eax
  unsigned int v78; // ecx
  unsigned int v79; // r15d
  __int64 v80; // rax
  int *v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rcx
  unsigned int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // r9
  __int64 v90; // rax
  __int64 v91; // rdx
  char *v92; // rcx
  size_t v93; // r8
  int v94; // r12d
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // eax
  __int32 v98; // r15d
  int v99; // r11d
  int v100; // r14d
  _DWORD *v101; // r9
  int v102; // eax
  bool v103; // sf
  int v104; // r13d
  int v105; // r8d
  int v106; // r12d
  int v107; // r12d
  int v108; // edx
  _BYTE *v109; // r8
  int v110; // eax
  int v111; // r12d
  int v112; // r10d
  _DWORD *v113; // r8
  __int64 v114; // rcx
  __int128 *v115; // rax
  __int64 v116; // rdi
  int v117; // edx
  int v118; // r10d
  int v119; // eax
  int v120; // r10d
  __int64 v121; // rcx
  __int64 v122; // rdi
  int v123; // eax
  int v124; // r11d
  unsigned int v125; // ecx
  int v126; // eax
  int v127; // r10d
  int v128; // r11d
  __int64 v129; // rdx
  int v130; // eax
  __int64 (__fastcall **v131)(); // rcx
  int v132; // eax
  __int64 (__fastcall *v133)(); // rax
  PVOID v134; // rcx
  unsigned int v135; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v136; // [rsp+64h] [rbp-9Ch]
  int v137; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall *v138)(); // [rsp+70h] [rbp-90h]
  signed int v139; // [rsp+78h] [rbp-88h] BYREF
  int v140; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v141; // [rsp+80h] [rbp-80h] BYREF
  int v142; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v143; // [rsp+88h] [rbp-78h]
  int v144; // [rsp+8Ch] [rbp-74h]
  int v145; // [rsp+90h] [rbp-70h]
  int v146; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v147; // [rsp+98h] [rbp-68h]
  __int64 v148; // [rsp+A0h] [rbp-60h]
  PVOID pv; // [rsp+A8h] [rbp-58h]
  _DWORD *v150; // [rsp+B0h] [rbp-50h]
  _QWORD *v151; // [rsp+B8h] [rbp-48h]
  __int64 v152; // [rsp+C0h] [rbp-40h]
  __int128 *v153; // [rsp+C8h] [rbp-38h]
  _BYTE *v154; // [rsp+D0h] [rbp-30h]
  __int64 v155; // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall **v156)(); // [rsp+E0h] [rbp-20h]
  __m128i v157; // [rsp+F0h] [rbp-10h] BYREF
  __int64 (__fastcall *v158)(__int64, __int64, int *, _BYTE *, int, int, int, int *, int *, int); // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v159)(__int64, _QWORD, int *, char *, _DWORD, int, int, int *, int *, unsigned int); // [rsp+108h] [rbp+8h]
  __int64 v160; // [rsp+110h] [rbp+10h]
  __int64 v161; // [rsp+118h] [rbp+18h]
  __int64 v162; // [rsp+120h] [rbp+20h]
  __int64 v163; // [rsp+128h] [rbp+28h]
  int v164; // [rsp+130h] [rbp+30h] BYREF
  int v165; // [rsp+134h] [rbp+34h] BYREF
  _BYTE v166[4]; // [rsp+138h] [rbp+38h] BYREF
  char v167[4]; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v168; // [rsp+140h] [rbp+40h] BYREF
  int v169; // [rsp+144h] [rbp+44h] BYREF
  int v170; // [rsp+148h] [rbp+48h] BYREF
  int v171; // [rsp+14Ch] [rbp+4Ch] BYREF
  int v172; // [rsp+150h] [rbp+50h]
  int v173; // [rsp+154h] [rbp+54h]
  int v174; // [rsp+158h] [rbp+58h]
  int v175; // [rsp+15Ch] [rbp+5Ch]
  int v176; // [rsp+160h] [rbp+60h]
  int v177; // [rsp+164h] [rbp+64h]
  int v178; // [rsp+170h] [rbp+70h]
  int v179; // [rsp+174h] [rbp+74h]
  int v180; // [rsp+178h] [rbp+78h]
  int v181; // [rsp+17Ch] [rbp+7Ch]

  v152 = a2;
  v151 = a1;
  v156 = a4;
  memset_0(&v157, 0, 0x90uLL);
  v6 = 0;
  v7 = a1[5];
  v8 = (__int128 *)a1[2];
  v148 = a1[3];
  v150 = (_DWORD *)a1[4];
  v147 = *(unsigned __int8 *)(v7 + 10);
  v9 = a1[1];
  v141 = 0;
  v146 = 0;
  v153 = v8;
  v10 = *(_DWORD *)(v9 + 56);
  v11 = (*(_BYTE *)(v9 + 24) & 1) == 0;
  v155 = v7;
  v12 = 2 * v11;
  v136 = 2 * v11 + 1;
  v157.m128i_i32[0] = (v10 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*(_BYTE *)v8 & 0x40) != 0 )
    v157.m128i_i32[0] = 1536;
  if ( (int)ComputeAABBP(v8, v7, &v157, v12 == 0) <= 0 )
    return 0LL;
  v14 = v157.m128i_i32[0];
  v15 = 3100;
  v137 = 3100;
  if ( (v10 & 0x100000) != 0 )
  {
    v14 = v157.m128i_i32[0] | 0x800;
    v157.m128i_i32[0] |= 0x800u;
    if ( (v10 & 0x200000) != 0 )
    {
      v14 |= 0x1000u;
      v15 = 5148;
      v157.m128i_i32[0] = v14;
    }
    else
    {
      if ( (v10 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v10 & 0x1000000) != 0 )
      {
        v14 |= 0x100000u;
        v157.m128i_i32[0] = v14;
      }
      v15 = 3868;
    }
    v137 = v15;
  }
  if ( (v10 & 0x40000000) != 0 )
    v157.m128i_i32[0] = v14 & 0xFFFFFFE7;
  if ( (int)ALIGN_MEM(&v137, v15) < 0 )
    return 4294967294LL;
  v16 = a1 + 8;
  v17 = v148;
  v154 = v16;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v148 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v148 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v148 + 32) + 3LL),
    v16,
    a3 + 8);
  v18 = v157.m128i_u32[0];
  *(_BYTE *)(a3 + 8) |= v12 != 0 ? 2 : 6;
  if ( (v10 & 0x4000) != 0 )
  {
    v18 = (unsigned int)v18 | 4;
    v157.m128i_i32[0] = v18;
  }
  if ( (*(_BYTE *)v153 & 0x40) != 0 )
  {
    v18 = (unsigned int)v18 & 0xFFFFFFBF;
    v157.m128i_i32[0] = v18;
  }
  if ( (v18 & 0x200) != 0 )
  {
    v18 = (unsigned int)v18 & 0xFFFFFFBF;
    v157.m128i_i32[0] = v18;
  }
  if ( (v18 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v17, (unsigned int *)&v157);
    v18 = v157.m128i_u32[0];
    if ( (v157.m128i_i32[0] & 0x80000) != 0 )
    {
      if ( (v10 & 0x80000) != 0 )
        v18 = v157.m128i_i32[0] | 0x200u;
      else
        LODWORD(v18) = v157.m128i_i32[0] & 0xFFFFFDFF;
      v157.m128i_i32[0] = v18;
    }
  }
  if ( (v18 & 0x200) != 0 )
  {
    LODWORD(v18) = v18 & 0xFFFFBFFF;
    v157.m128i_i32[0] = v18;
  }
  if ( v150 )
  {
    LODWORD(v18) = v18 | 0x80;
    v157.m128i_i32[0] = v18;
  }
  v19 = v137;
  v20 = *(_DWORD *)(v17 + 12);
  v21 = v152;
  pv = (PVOID)v158(v152, v18, &v164, v166, v20, v172, v174, &v168, &v170, v137);
  v22 = (unsigned int *)pv;
  if ( !pv )
  {
    v19 = 0;
    pv = (PVOID)v158(v21, v157.m128i_u32[0], &v164, v166, *(_DWORD *)(v148 + 12), v172, v174, &v168, &v170, 0);
    v22 = (unsigned int *)pv;
    if ( !pv )
      return 4294967294LL;
  }
  if ( !*v22 || !v22[1] )
    goto LABEL_207;
  v23 = v19 == 0;
  *(_QWORD *)(a3 + 304) = v22;
  v24 = v157.m128i_i16[0];
  if ( !v23 )
  {
    v25 = *((_QWORD *)v22 + 4);
    *(_QWORD *)(a3 + 376) = v25;
    if ( (v24 & 0x800) == 0 )
      goto LABEL_44;
    v26 = v25 + 3100;
    goto LABEL_43;
  }
  v157.m128i_i32[0] |= 0x80000000;
  v24 = v157.m128i_i16[0];
  v25 = v21 + 856;
  *(_QWORD *)(a3 + 376) = v21 + 856;
  if ( (v24 & 0x800) != 0 )
  {
    v27 = *(_QWORD *)(v21 + 7064);
    *(_QWORD *)(a3 + 336) = v27;
    if ( (v10 & 0x200000) != 0 )
    {
      v26 = v27 + 768;
LABEL_43:
      *(_QWORD *)(a3 + 336) = v26;
    }
  }
LABEL_44:
  *(_QWORD *)(a3 + 384) = v25 + 28;
  if ( (v24 & 1) != 0 )
  {
    v168 = v176 - v168 - 1;
    v170 = v176 - v170 - 1;
  }
  v28 = *v22;
  v29 = v22[1];
  v143 = v28;
  v144 = v29;
  v30 = v28 + 6;
  if ( (int)v28 + 6 < (unsigned int)v28 )
    goto LABEL_207;
  v135 = 0;
  v138 = 0LL;
  if ( (v24 & 0x200) != 0 )
  {
    v31 = v157.m128i_i8[4];
    if ( v157.m128i_u8[4] == 1 )
    {
      v138 = BltDIB_CY;
    }
    else
    {
      if ( v157.m128i_u8[4] == 2 || v157.m128i_u8[4] == 3 )
      {
        v33 = SkipDIB_CY;
      }
      else
      {
        if ( (unsigned int)v157.m128i_u8[4] - 4 > 1 )
          goto LABEL_71;
        if ( (v24 & 0x800) != 0 )
        {
          v32 = (unsigned int)(v29 + 6);
          if ( (unsigned int)v32 < (unsigned int)v29 || (unsigned __int64)(3 * v32) > 0xFFFFFFFF )
            goto LABEL_207;
          v135 = 3 * v32;
        }
        v33 = RepDIB_CY;
      }
      v138 = v33;
    }
    if ( v157.m128i_i8[5] )
    {
      if ( v157.m128i_u8[5] == 1 )
      {
        v34 = SkipDIB_CX;
        v35 = GraySkipDIB_CX;
      }
      else
      {
        if ( v157.m128i_u8[5] != 2 )
        {
LABEL_69:
          v31 = -1;
          v157.m128i_i8[4] = -1;
          goto LABEL_71;
        }
        v34 = RepDIB_CX;
        v35 = GrayRepDIB_CX;
      }
    }
    else
    {
      v34 = (__int64 (__fastcall *)(int, int, int, int, int))CopyDIB_CX;
      v35 = (__int64 (__fastcall *)(int, int, int, int, int))GrayCopyDIB_CXGray;
    }
    if ( !v12 )
      v34 = v35;
    v157.m128i_i64[1] = (__int64)v34;
    goto LABEL_69;
  }
  v31 = v157.m128i_i8[4];
LABEL_71:
  switch ( v31 )
  {
    case 0:
      v138 = TileDIB_CY;
      if ( v12 )
      {
        v135 = 0;
      }
      else
      {
        if ( (unsigned __int64)(2 * v28) > 0xFFFFFFFF )
          goto LABEL_207;
        v135 = 2 * v28;
      }
      goto LABEL_113;
    case 1:
      v138 = BltDIB_CY;
      goto LABEL_113;
    case 2:
      if ( v12 )
      {
        v36 = v136;
        v52 = v136 * (unsigned __int64)v30;
        v138 = ShrinkDIB_CY;
        if ( v52 > 0xFFFFFFFF )
          goto LABEL_207;
        v53 = 36 * v28;
      }
      else
      {
        v138 = GrayShrinkDIB_CY;
        LODWORD(v52) = 12 * v29;
        if ( (unsigned __int64)(12 * v29) > 0xFFFFFFFF || (int)v29 + 6 < (unsigned int)v29 )
          goto LABEL_207;
        v36 = v136;
        v53 = v136 * (unsigned __int64)(unsigned int)(v29 + 6);
      }
      if ( v53 > 0xFFFFFFFF || (unsigned int)v53 >= 0xFFFFF800 )
        goto LABEL_207;
      v44 = v52 + v53 + 2048;
      v48 = v44 < (unsigned int)v52;
      goto LABEL_97;
    case 3:
      v49 = v22[5];
      v138 = ShrinkDIB_CY_SrkCX;
      v50 = v49 + 2;
      if ( (unsigned int)v50 < v49 )
        goto LABEL_207;
      v51 = 36 * v50;
      if ( v51 > 0xFFFFFFFF || (unsigned int)v51 >= 0xFFFFF800 )
        goto LABEL_207;
      v135 = v51 + 2048;
      goto LABEL_113;
    case 4:
      v45 = GrayExpandDIB_CY;
      if ( v12 )
        v45 = ExpandDIB_CY;
      v138 = v45;
      if ( (int)v29 + 6 < (unsigned int)v29 )
        goto LABEL_207;
      v36 = v136;
      v46 = v136 * (unsigned __int64)(unsigned int)(v29 + 6);
      if ( v46 > 0xFFFFFFFF )
        goto LABEL_207;
      v47 = 6LL * (unsigned int)v46;
      if ( v47 > 0xFFFFFFFF )
        goto LABEL_207;
      v44 = v47 + 4096;
LABEL_96:
      v48 = v44 < 0x1000;
LABEL_97:
      if ( !v48 )
      {
        v135 = v44;
        goto LABEL_114;
      }
LABEL_207:
      EngFreeMem(v22);
      return 0LL;
  }
  if ( v31 != 5 )
  {
LABEL_113:
    v36 = v136;
    goto LABEL_114;
  }
  if ( (v24 & 0x4000) == 0 )
  {
    v38 = GrayExpandDIB_CY_ExpCX;
    if ( v12 )
      v38 = ExpandDIB_CY_ExpCX;
    v39 = (unsigned int)(v29 + 6);
    v138 = v38;
    if ( (unsigned int)v39 < (unsigned int)v29 )
      goto LABEL_207;
    v36 = v136;
    v40 = v136 * v39;
    if ( v40 > 0xFFFFFFFF )
      goto LABEL_207;
    v41 = 4LL * (unsigned int)v40;
    if ( v41 > 0xFFFFFFFF )
      goto LABEL_207;
    v42 = v136 * (unsigned __int64)(unsigned int)(v28 + 6);
    if ( v42 > 0xFFFFFFFF )
      goto LABEL_207;
    v43 = 3LL * (unsigned int)v42;
    if ( v43 > 0xFFFFFFFF || (int)v41 + (int)v43 < (unsigned int)v43 )
      goto LABEL_207;
    v44 = v41 + v43 + 4096;
    goto LABEL_96;
  }
  v36 = v136;
  v37 = v136 * (unsigned __int64)v30;
  if ( v37 > 0xFFFFFFFF || 5 * (unsigned __int64)(unsigned int)v37 > 0xFFFFFFFF )
    goto LABEL_207;
  v135 = 5 * v37;
  v138 = FastExpAA_CY;
LABEL_114:
  v54 = (v24 & 0x800) != 0 ? v29 : 0;
  *(_BYTE *)(a3 + 96) = v12 != 0 ? 0 : 4;
  *(_DWORD *)(a3 + 152) = v36 * v54;
  v55 = v54 + 8;
  if ( (unsigned int)v55 < v54 )
    goto LABEL_206;
  v56 = v36 * v55;
  if ( v56 > 0xFFFFFFFF )
    goto LABEL_206;
  v137 = v56;
  if ( (int)ALIGN_MEM(&v137, v56) < 0 )
    goto LABEL_206;
  if ( (int)ALIGN_MEM(&v135, v57) < 0 )
    goto LABEL_206;
  v59 = v58 + 2;
  if ( (unsigned int)v59 < v58 )
    goto LABEL_206;
  v60 = v36 * v59;
  if ( v60 > 0xFFFFFFFF )
    goto LABEL_206;
  v140 = v60;
  if ( (int)ALIGN_MEM(&v140, v60) < 0 )
    goto LABEL_206;
  if ( (unsigned int)v29 >= 0xFFFFFFF6 )
    goto LABEL_206;
  v62 = 4LL * (unsigned int)(v29 + 10);
  if ( v62 > v61 )
    goto LABEL_206;
  v142 = 4 * (v29 + 10);
  if ( (int)ALIGN_MEM(&v142, v62) < 0 )
    goto LABEL_206;
  if ( (v24 & 0x80u) == 0 )
  {
    v64 = 0;
    v139 = 0;
  }
  else
  {
    v63 = ComputeBytesPerScanLine(1u, 4u, v143);
    if ( v63 + 4 < v63 )
      goto LABEL_206;
    v139 = v63 + 4;
    if ( (int)ALIGN_MEM(&v139, v63 + 4) < 0 )
      goto LABEL_206;
    v64 = v139;
  }
  v65 = v140;
  if ( v140 < v137 )
    v65 = v137;
  v145 = v65;
  if ( (v24 & 0x1800) == 0x800 )
  {
    if ( (int)ALIGN_MEM(&v137, v29) < 0 )
      goto LABEL_206;
    v66 = v137;
    v140 = v137;
  }
  else
  {
    v66 = 0;
    v140 = 0;
  }
  if ( v147 == 254 && v151[7] )
  {
    if ( (int)ALIGN_MEM(&v141, 0x16Eu) < 0 )
      goto LABEL_206;
    v67 = v141;
  }
  else
  {
    v67 = 0;
  }
  if ( (v24 & 0x40) != 0 )
  {
    v68 = v143 + 4;
    if ( (unsigned int)v68 < v143 )
      goto LABEL_206;
    v69 = v36 * v68;
    if ( v69 > 0xFFFFFFFF )
      goto LABEL_206;
    v141 = v69;
    if ( (int)ALIGN_MEM(&v141, v69) < 0 )
      goto LABEL_206;
    v70 = v141;
  }
  else
  {
    v70 = 0;
  }
  if ( (*(_BYTE *)(a3 + 8) & 4) == 0 || (*v154 & 1) == 0 || (*(_BYTE *)(a3 + 72) & 1) == 0 || *((_BYTE *)v151 + 84) == 4 )
  {
    v71 = 0;
    goto LABEL_157;
  }
  if ( (int)ALIGN_MEM(&v146, 0xC00u) < 0 )
  {
LABEL_206:
    v134 = v22;
    goto LABEL_204;
  }
  v71 = v146;
LABEL_157:
  v72 = 6LL * v70;
  if ( v72 > 0xFFFFFFFF )
    goto LABEL_203;
  v73 = v72 + v65;
  if ( (int)v72 + v65 < (unsigned int)v72 )
    goto LABEL_203;
  v74 = v73 + v142;
  if ( v73 + v142 < v73
    || (v75 = v74 + v64, v74 + v64 < v74)
    || (v76 = v75 + v66, v75 + v66 < v75)
    || (v77 = v76 + v71, v76 + v71 < v76)
    || (v78 = v77 + v67, v77 + v67 < v77)
    || (v79 = v135, v78 + v135 < v78)
    || (v80 = v159(v152, v157.m128i_u32[0], &v165, v167, *(_DWORD *)(v148 + 16), v173, v175, &v169, &v171, v78 + v135),
        (v81 = (int *)v80) == 0LL) )
  {
LABEL_203:
    v134 = pv;
LABEL_204:
    EngFreeMem(v134);
    return 4294967294LL;
  }
  if ( !*(_DWORD *)v80 || !*(_DWORD *)(v80 + 4) )
  {
    v101 = pv;
    goto LABEL_202;
  }
  v82 = v140;
  *(_QWORD *)(a3 + 312) = v80;
  v83 = *(_QWORD *)(v80 + 32) + v79;
  *(_DWORD *)a3 = v157.m128i_i32[0];
  v84 = v143 * v136;
  *(_QWORD *)(a3 + 536) = v83;
  *(_DWORD *)(a3 + 64) = v84;
  v85 = v145 + v83;
  if ( (_DWORD)v82 )
  {
    v86 = v144;
    *(_QWORD *)(a3 + 352) = v85;
    *(_QWORD *)(a3 + 344) = v85;
    *(_DWORD *)(a3 + 368) = 1;
    v87 = v85 + v86;
    v85 += v82;
    *(_QWORD *)(a3 + 360) = v87;
  }
  else
  {
    LODWORD(v86) = v144;
  }
  if ( v70 )
  {
    *(_QWORD *)(a3 + 264) = v85;
    v88 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v70;
    v89 = 6LL;
    do
    {
      *v88 = v85;
      v85 += (int)v70;
      ++v88;
      --v89;
    }
    while ( v89 );
  }
  if ( v67 )
  {
    *(_QWORD *)(a3 + 400) = v85;
    v85 += (int)v67;
  }
  v90 = v139;
  if ( v139 )
  {
    *(_QWORD *)(a3 + 208) = v85;
    v85 += v90;
  }
  v91 = v85;
  if ( v71 )
    v85 += v71;
  else
    v91 = *(_QWORD *)(a3 + 384);
  *(_QWORD *)(a3 + 16) = v91;
  v92 = (char *)(v85 + 20);
  *(_QWORD *)(a3 + 576) = v92;
  *(_QWORD *)(a3 + 544) = v92;
  *(_QWORD *)(a3 + 560) = v92;
  v93 = 4LL * (int)v86;
  *(_QWORD *)(a3 + 568) = &v92[v93];
  *(_QWORD *)(a3 + 552) = &v92[v93];
  *(_QWORD *)(a3 + 584) = &v92[v93];
  memset_0(v92, 255, v93);
  v94 = v168;
  v142 = v168;
  if ( v168 <= v170 )
  {
    v97 = 4;
  }
  else
  {
    v94 = v170;
    v170 = v168;
    v95 = *(_QWORD *)(a3 + 568) - 4LL;
    v142 = v94;
    *(_QWORD *)(a3 + 576) = v95;
    v96 = *(_QWORD *)(a3 + 560) - 4LL;
    v168 = v94;
    *(_QWORD *)(a3 + 584) = v96;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
    v97 = -4;
  }
  *(_DWORD *)(a3 + 592) = v97;
  v98 = v157.m128i_i32[0];
  *(_DWORD *)(a3 + 328) = v94 - v178;
  if ( (v98 & 2) != 0 )
  {
    v99 = v177 - v169 - 1;
    v100 = v177 - v171 - 1;
    v169 = v99;
    v171 = v100;
  }
  else
  {
    v100 = v171;
    v99 = v169;
  }
  v101 = pv;
  *(_DWORD *)(a3 + 332) = v99 - v179;
  *(_QWORD *)(a3 + 288) = v157.m128i_i64[1];
  *(_DWORD *)(a3 + 56) = *v101;
  v102 = *v81;
  *(_DWORD *)(a3 + 60) = *v81;
  *(_DWORD *)(a3 + 40) = v102;
  if ( (v98 & 0x80u) == 0 )
    goto LABEL_195;
  v103 = v101[30] + v180 < 0;
  v104 = v101[30] + v180;
  v105 = v150[5];
  v180 = v104;
  v106 = v81[30];
  v145 = v105;
  v107 = v106 + v181;
  v181 = v107;
  v108 = v101[31] + v104;
  if ( v103 || v107 < 0 || v108 > v150[3] || v107 + v81[31] > v150[4] )
  {
    v6 = -13;
LABEL_202:
    EngFreeMem(v101);
    EngFreeMem(v81);
    return v6;
  }
  *(_DWORD *)(a3 + 224) = v105;
  *(_DWORD *)(a3 + 228) = v81[31];
  ComputeByteOffset(1u, v108, (_BYTE *)(a3 + 4));
  v110 = ComputeByteOffset(1u, v104, v109);
  v111 = v145 * v107;
  v113 = v150;
  *(_DWORD *)(a3 + 200) = v112 - v110 + 1;
  v114 = v110 + *((_QWORD *)v113 + 3) + v111;
  v115 = v153;
  *(_QWORD *)(a3 + 216) = v114;
  if ( (*(_BYTE *)v115 & 8) != 0 )
  {
    v98 |= 0x100u;
    v157.m128i_i32[0] = v98;
  }
  v94 = v142;
  *(_QWORD *)(a3 + 184) = v160;
  *(_QWORD *)(a3 + 192) = v161;
LABEL_195:
  v116 = v148;
  v117 = v164;
  v118 = *(_DWORD *)(v148 + 20);
  *(_DWORD *)(a3 + 68) = v118;
  *(_DWORD *)(a3 + 260) = v118;
  v119 = ComputeByteOffset(*(unsigned __int8 *)(v116 + 10), v117, (_BYTE *)(a3 + 9));
  v121 = *(_QWORD *)(v116 + 24) + v120 * v165 + (__int64)v119;
  v122 = v155;
  *(_QWORD *)(a3 + 232) = v162;
  *(_QWORD *)(a3 + 240) = v163;
  *(_QWORD *)(a3 + 48) = v121;
  *(_QWORD *)(a3 + 32) = v121;
  v123 = *(_DWORD *)(v122 + 20);
  if ( v124 > v100 )
    v123 = -v123;
  v125 = v147;
  *(_DWORD *)(a3 + 156) = v123;
  v126 = ComputeByteOffset(v125, v94, (_BYTE *)(a3 + 97));
  v129 = *(_QWORD *)(v122 + 24) + v127 * v128 + (__int64)v126;
  *(_QWORD *)(a3 + 136) = v129;
  *(_QWORD *)(a3 + 120) = v129;
  v130 = v144;
  *(_QWORD *)(a3 + 320) = v129 + *(_DWORD *)(a3 + 156) * v81[1];
  v131 = v156;
  *(_DWORD *)(a3 + 144) = v130;
  v132 = v81[1];
  *(_DWORD *)(a3 + 148) = v132;
  *(_DWORD *)(a3 + 128) = v132;
  v133 = v138;
  *(_DWORD *)a3 = v98;
  *v131 = v133;
  if ( (v98 & 0x400) != 0 )
  {
    *(_BYTE *)(a3 + 8) |= 1u;
    *(_QWORD *)(a3 + 48) += v81[6] * *(_DWORD *)(a3 + 68);
    *(_DWORD *)(a3 + 60) -= v81[6];
  }
  *(_QWORD *)(a3 + 248) = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 256) = *(_DWORD *)(a3 + 60);
  return 1LL;
}
