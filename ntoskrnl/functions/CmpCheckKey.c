__int64 __fastcall CmpCheckKey(
        ULONG_PTR BugCheckParameter3,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        PRTL_BITMAP BitMapHeader,
        __int64 a7)
{
  char v8; // r12
  __int64 CellFlat; // rax
  __int64 v15; // r14
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // edx
  int v20; // edi
  int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // ecx
  int v24; // eax
  __int64 CellPaged; // rax
  int v26; // eax
  _BYTE *v27; // rdx
  unsigned int v28; // ecx
  unsigned int v29; // edi
  int v30; // r15d
  int v31; // eax
  char v32; // al
  char v33; // al
  int v34; // eax
  __int64 v35; // rax
  char v36; // cl
  int v37; // eax
  __int64 v38; // rax
  __int16 v39; // ax
  int v40; // r12d
  int v41; // eax
  __int16 v42; // ax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r15
  ULONG_PTR v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r12
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // r15
  int v55; // eax
  unsigned __int16 v56; // cx
  int v57; // eax
  __int16 v58; // cx
  unsigned int v59; // r12d
  int v60; // eax
  int v61; // eax
  int v62; // edx
  NTSTATUS v63; // eax
  __int64 v64; // r9
  __int64 *v65; // rdx
  __int64 v66; // r12
  int v67; // r12d
  unsigned int v68; // edi
  bool v69; // zf
  __int64 v70; // rax
  __int64 v71; // r15
  int v72; // eax
  char v73; // r15
  unsigned int v74; // r13d
  int v75; // eax
  int v76; // eax
  int v77; // eax
  __int64 v78; // rax
  _DWORD *v79; // r13
  __int64 v80; // rdx
  unsigned int *v81; // r15
  _WORD *v82; // r12
  int v83; // eax
  RTL_BITMAP *v84; // r14
  ULONG_PTR v85; // rdx
  _WORD *v86; // rax
  __int16 *v87; // r12
  unsigned int v88; // edx
  __int16 v89; // r9
  int v90; // r8d
  int v91; // ecx
  int v92; // eax
  __int16 v93; // ax
  int v94; // ecx
  int v95; // eax
  int v96; // r13d
  int v97; // r12d
  _WORD *v98; // rdi
  ULONG_PTR v99; // rdx
  __int64 v100; // rax
  _WORD *v101; // r14
  int IndexElementSize; // eax
  int v103; // r10d
  unsigned int v104; // r9d
  int v105; // eax
  int v106; // eax
  bool v107; // cl
  bool v108; // al
  _DWORD *v109; // r14
  int v110; // eax
  int v111; // eax
  ULONG_PTR v112; // [rsp+20h] [rbp-91h]
  int v113; // [rsp+20h] [rbp-91h]
  int v114; // [rsp+20h] [rbp-91h]
  int v115; // [rsp+20h] [rbp-91h]
  int v116; // [rsp+50h] [rbp-61h]
  __int64 v117; // [rsp+58h] [rbp-59h] BYREF
  __int64 v118; // [rsp+60h] [rbp-51h] BYREF
  _WORD *v119; // [rsp+68h] [rbp-49h]
  __int64 v120; // [rsp+70h] [rbp-41h] BYREF
  __int64 v121; // [rsp+78h] [rbp-39h] BYREF
  __int64 v122; // [rsp+80h] [rbp-31h] BYREF
  __int64 v123; // [rsp+88h] [rbp-29h] BYREF
  unsigned int v124; // [rsp+90h] [rbp-21h]
  __int64 v125; // [rsp+98h] [rbp-19h] BYREF
  __int64 v126; // [rsp+A0h] [rbp-11h] BYREF
  unsigned int v127; // [rsp+A8h] [rbp-9h] BYREF
  UINT puResult; // [rsp+ACh] [rbp-5h] BYREF
  _BYTE *v129; // [rsp+B0h] [rbp-1h]
  unsigned int v130; // [rsp+B8h] [rbp+7h]
  ULONG_PTR BugCheckParameter4; // [rsp+BCh] [rbp+Bh]
  char v134; // [rsp+130h] [rbp+7Fh]

  v122 = 0xFFFFFFFFLL;
  v8 = 0;
  v121 = 0LL;
  v125 = 0xFFFFFFFFLL;
  v120 = 0xFFFFFFFFLL;
  v118 = 0xFFFFFFFFLL;
  v126 = 0xFFFFFFFFLL;
  v134 = 0;
  v119 = 0LL;
  if ( a7 )
  {
    *(_DWORD *)(a7 + 240) = a3;
    *(_QWORD *)(a7 + 248) = 0LL;
    *(_QWORD *)(a7 + 256) = 0LL;
    *(_DWORD *)(a7 + 264) = -1;
  }
  if ( !HvIsCellAllocated(BugCheckParameter3, a3, BitMapHeader) )
  {
    SetFailureLocation(a7, 0, 14, -1073741492, 0);
    return 3221225804LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a3, (unsigned int *)&v125);
  v15 = CellFlat;
  if ( !CellFlat )
  {
    SetFailureLocation(a7, 0, 14, -1073741670, 16);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = CellFlat;
  v16 = -4 - *(_DWORD *)(CellFlat - 4);
  if ( v16 - 76 > 0x410 )
  {
    v113 = 32;
    goto LABEL_461;
  }
  v17 = *(unsigned __int16 *)(CellFlat + 72);
  if ( !(_WORD)v17 || v17 + 76 > v16 )
  {
    v113 = 48;
    goto LABEL_461;
  }
  if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
  {
    if ( (unsigned __int16)v17 <= 0x100u )
    {
      if ( *(_BYTE *)(CellFlat + 76) )
      {
        v18 = 0;
        while ( *(_BYTE *)(v18 + CellFlat + 76) != 92 )
        {
          if ( ++v18 >= v17 )
            goto LABEL_24;
        }
        v113 = 1280;
      }
      else
      {
        v113 = 64;
      }
    }
    else
    {
      v113 = 53;
    }
    goto LABEL_461;
  }
  if ( (unsigned __int16)v17 > 0x200u )
  {
    v113 = 69;
    goto LABEL_461;
  }
  if ( (v17 & 1) != 0 )
  {
    v113 = 80;
    goto LABEL_461;
  }
  if ( !*(_WORD *)(CellFlat + 76) )
  {
    v113 = 96;
    goto LABEL_461;
  }
  v22 = v17 >> 1;
  v23 = 0;
  if ( v22 )
  {
    while ( *(_WORD *)(CellFlat + 2LL * v23 + 76) != 92 )
    {
      if ( ++v23 >= v22 )
        goto LABEL_24;
    }
    v113 = 1296;
LABEL_461:
    v20 = -1073741492;
    SetFailureLocation(a7, 0, 14, -1073741492, v113);
    goto LABEL_462;
  }
LABEL_24:
  v19 = a2 & 0x20000;
  v116 = a2 & 0x20000;
  if ( *(_WORD *)CellFlat != 27502 )
  {
    v134 = 1;
    v20 = -1073741492;
    v8 = 1;
    if ( v19 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 144);
      goto LABEL_462;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 112);
    v21 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
    v20 = v21;
    if ( v21 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v21, 128);
      goto LABEL_462;
    }
    v19 = a2 & 0x20000;
    *(_WORD *)v15 = 27502;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v15 + 13) & 3) != 0 )
  {
    v134 = 1;
    v20 = -1073741492;
    v8 = 1;
    if ( v19 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 148);
      goto LABEL_462;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 146);
    v24 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
    v20 = v24;
    if ( v24 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v24, 150);
      goto LABEL_462;
    }
    *(_BYTE *)(v15 + 13) &= 0xFCu;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  if ( a4 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, a4);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3, a4, (unsigned int *)&v120);
    if ( (*(_BYTE *)(CellPaged + 13) & 3) != 3 || (((*(_BYTE *)(v15 + 13) & 3) - 1) & 0xFD) == 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v120);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v120);
      goto LABEL_69;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v120);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v120);
    v20 = -1073741492;
    v8 = 1;
    v134 = 1;
    if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 156);
      goto LABEL_462;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 152);
    v26 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
    v20 = v26;
    if ( v26 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v26, 154);
      goto LABEL_462;
    }
    *(_BYTE *)(v15 + 13) |= 3u;
LABEL_68:
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_69:
    v27 = (_BYTE *)(v15 + 13);
    v129 = (_BYTE *)(v15 + 13);
    goto LABEL_70;
  }
  v32 = *(_BYTE *)(v15 + 13);
  v27 = (_BYTE *)(v15 + 13);
  v129 = (_BYTE *)(v15 + 13);
  v33 = v32 & 3;
  if ( v33 )
  {
    v27 = (_BYTE *)(v15 + 13);
    v129 = (_BYTE *)(v15 + 13);
    if ( v33 != 2 )
    {
      v20 = -1073741492;
      v8 = 1;
      v134 = 1;
      if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 492);
        goto LABEL_462;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 484);
      v34 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
      v20 = v34;
      if ( v34 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v34, 488);
        goto LABEL_462;
      }
      *(_BYTE *)(v15 + 13) = *(_BYTE *)(v15 + 13) & 0xFC | 2;
      goto LABEL_68;
    }
  }
LABEL_70:
  v28 = *(unsigned __int16 *)(v15 + 74);
  v29 = *(_DWORD *)(v15 + 48);
  v30 = *(_DWORD *)(v15 + 44);
  v130 = *(_DWORD *)(v15 + 36);
  LODWORD(BugCheckParameter4) = *(_DWORD *)(v15 + 40);
  v124 = v28;
  if ( !v28 )
  {
    if ( v29 != -1 )
    {
      v8 = 1;
      v134 = 1;
      v20 = -1073741492;
      if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 228);
        goto LABEL_462;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 232);
      v43 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
      v20 = v43;
      if ( v43 < 0 )
      {
        SetFailureLocation(a7, 1, 14, v43, 236);
        goto LABEL_462;
      }
      *(_DWORD *)(v15 + 48) = -1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    goto LABEL_116;
  }
  if ( v29 == -1 )
  {
    v8 = 1;
    v134 = 1;
    v20 = -1073741492;
    if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 157);
      goto LABEL_462;
    }
    SetFailureLocation(a7, 0, 14, -1073741492, 155);
    v31 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
    v20 = v31;
    if ( v31 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v31, 159);
      goto LABEL_462;
    }
    v124 = 0;
    *(_WORD *)(v15 + 74) = 0;
    goto LABEL_116;
  }
  if ( (*v27 & 3) == 1 )
  {
    v114 = 158;
LABEL_106:
    v20 = -1073741492;
    v8 = 1;
    v134 = 1;
    SetFailureLocation(a7, 1, 14, -1073741492, v114);
LABEL_107:
    if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 192);
      goto LABEL_462;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 160);
    v37 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
    v20 = v37;
    if ( v37 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v37, 176);
      goto LABEL_462;
    }
    *(_DWORD *)(v15 + 48) = -1;
    *(_WORD *)(v15 + 74) = 0;
    v38 = *(_QWORD *)(BugCheckParameter3 + 64);
    v124 = 0;
    *(_DWORD *)(v38 + 4088) |= 4u;
    goto LABEL_116;
  }
  if ( !HvIsCellAllocated(BugCheckParameter3, v29, BitMapHeader) )
  {
    v8 = 1;
    v20 = -1073741492;
    v134 = 1;
    goto LABEL_107;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v35 = HvpGetCellFlat(BugCheckParameter3, v29);
  else
    v35 = HvpGetCellPaged(BugCheckParameter3, v29, (unsigned int *)&v126);
  if ( !v35 )
  {
    v20 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 208);
    goto LABEL_462;
  }
  v36 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
  if ( v124 > -4 - *(_DWORD *)(v35 - 4) )
  {
    if ( v36 )
      HvpReleaseCellFlat(BugCheckParameter3, &v126);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v126);
    v114 = 224;
    goto LABEL_106;
  }
  if ( v36 )
    HvpReleaseCellFlat(BugCheckParameter3, &v126);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v126);
LABEL_116:
  if ( v30 == -1 )
  {
    SetFailureLocation(a7, 1, 14, -1073741492, 256);
    goto LABEL_144;
  }
  if ( a4 == -1 )
  {
    v39 = *(_WORD *)(v15 + 2);
    if ( (v39 & 0x50) == 0 )
    {
      v134 = v8;
      v40 = v116;
      if ( (v39 & 2) == 0 )
        goto LABEL_201;
      v134 = 1;
      v20 = -1073741492;
      if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 480);
        goto LABEL_462;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 448);
      v41 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
      v20 = v41;
      if ( v41 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v41, 464);
        goto LABEL_462;
      }
      v42 = -3;
      goto LABEL_130;
    }
    v113 = 432;
    goto LABEL_461;
  }
  if ( !v116 && (BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0) && a5 )
    goto LABEL_144;
  while ( 1 )
  {
    if ( *(_DWORD *)(v15 + 16) != a4 )
    {
      v20 = -1073741492;
      v134 = 1;
      if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 352);
        goto LABEL_462;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 320);
      v52 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
      v20 = v52;
      if ( v52 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v52, 336);
        goto LABEL_462;
      }
      *(_DWORD *)(v15 + 16) = a4;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v53 = HvpGetCellFlat(BugCheckParameter3, a4);
    else
      v53 = HvpGetCellPaged(BugCheckParameter3, a4, (unsigned int *)&v120);
    v54 = v53;
    if ( !v53 )
    {
      v20 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 368);
      goto LABEL_462;
    }
    v55 = *(_DWORD *)(v53 + 52);
    v56 = 2 * *(_WORD *)(v15 + 72);
    if ( (*(_BYTE *)(v15 + 2) & 0x20) == 0 )
      v56 = *(_WORD *)(v15 + 72);
    if ( (unsigned __int16)v55 < (unsigned int)v56 )
    {
      v20 = -1073741492;
      v134 = 1;
      if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 370);
LABEL_209:
        v65 = &v120;
        goto LABEL_444;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 372);
      v57 = HvMarkCellDirty(BugCheckParameter3, a4, 0LL);
      v20 = v57;
      if ( v57 < 0 )
      {
        SetFailureLocation(a7, 1, 14, v57, 374);
        v65 = &v120;
        goto LABEL_444;
      }
      v58 = 2 * *(_WORD *)(v15 + 72);
      if ( (*(_BYTE *)(v15 + 2) & 0x20) == 0 )
        v58 = *(_WORD *)(v15 + 72);
      *(_WORD *)(v54 + 52) = v58;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    v59 = v124;
    if ( *(_DWORD *)(v54 + 56) < v124 )
    {
      v20 = -1073741492;
      v134 = 1;
      if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 376);
        goto LABEL_209;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 378);
      v60 = HvMarkCellDirty(BugCheckParameter3, a4, 0LL);
      v20 = v60;
      if ( v60 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v60, 380);
        goto LABEL_209;
      }
      *(_DWORD *)(v54 + 56) = v59;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v120);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v120);
    v40 = v116;
    if ( (*(_BYTE *)(v15 + 2) & 0xE) != 0 )
    {
      v134 = 1;
      v20 = -1073741492;
      if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 416);
        goto LABEL_462;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 384);
      v61 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
      v20 = v61;
      if ( v61 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v61, 400);
        goto LABEL_462;
      }
      v42 = -15;
LABEL_130:
      *(_WORD *)(v15 + 2) &= v42;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
LABEL_201:
    v62 = *(_DWORD *)(v15 + 44);
    v127 = 0;
    puResult = 0;
    if ( CmpFindSecurityCellCacheIndex(BugCheckParameter3, v62, &v127) )
      break;
LABEL_204:
    SetFailureLocation(a7, 1, 14, -1073741492, 496);
LABEL_144:
    if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 304);
      v20 = -1073741492;
      goto LABEL_462;
    }
    v123 = 0xFFFFFFFFLL;
    v117 = 0xFFFFFFFFLL;
    if ( a4 == -1 )
    {
      v113 = 272;
      goto LABEL_461;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v44 = HvpGetCellFlat(BugCheckParameter3, a4);
    else
      v44 = HvpGetCellPaged(BugCheckParameter3, a4, (unsigned int *)&v123);
    v45 = v44;
    if ( !v44 )
    {
      v20 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 276);
      goto LABEL_462;
    }
    v46 = *(unsigned int *)(v44 + 44);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v47 = HvpGetCellFlat(BugCheckParameter3, v46);
    else
      v47 = HvpGetCellPaged(BugCheckParameter3, v46, (unsigned int *)&v117);
    v48 = v47;
    if ( !v47 )
    {
      v20 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 280);
      v65 = &v123;
      goto LABEL_444;
    }
    v49 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
    v20 = v49;
    if ( v49 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v49, 284);
LABEL_451:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v117);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v117);
      v65 = &v123;
LABEL_444:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v65);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v65);
      goto LABEL_462;
    }
    v50 = HvMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v45 + 44), 0LL);
    v20 = v50;
    if ( v50 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v50, 288);
      goto LABEL_451;
    }
    v51 = CmpKeySecurityIncrementReferenceCount(v48, BugCheckParameter3, *(_DWORD *)(v45 + 44));
    v20 = v51;
    if ( v51 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v51, 292);
      goto LABEL_451;
    }
    *(_DWORD *)(v15 + 44) = *(_DWORD *)(v45 + 44);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v117);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v117);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v123);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v123);
    v134 = 1;
  }
  v63 = RtlUIntAdd(
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v127 + 8) + 28LL),
          1u,
          &puResult);
  if ( v63 < 0 )
  {
    if ( v63 != -1073741275 )
    {
      v20 = -1073741492;
      SetFailureLocation(a7, 1, 14, -1073741492, 500);
      goto LABEL_462;
    }
    goto LABEL_204;
  }
  *(_DWORD *)(v64 + 28) = puResult;
  if ( (*(_BYTE *)(v15 + 2) & 0x40) != 0 )
  {
    v73 = 1;
    v20 = -1073741492;
    v134 = 1;
    if ( v40 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 648);
      goto LABEL_462;
    }
    v74 = a3;
    v77 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
    v20 = v77;
    if ( v77 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v77, 652);
      goto LABEL_462;
    }
    *(_WORD *)(v15 + 2) &= ~0x40u;
    *(_DWORD *)(v15 + 36) = 0;
    *(_DWORD *)(v15 + 40) = -1;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v66 = v130;
    if ( !v130 )
    {
LABEL_245:
      v67 = v116;
      goto LABEL_246;
    }
    if ( (*v129 & 3) == 1 )
    {
      v20 = -1073741492;
      v134 = 1;
      SetFailureLocation(a7, 1, 14, -1073741492, 504);
      v67 = v116;
      goto LABEL_249;
    }
    v68 = BugCheckParameter4;
    if ( !HvIsCellAllocated(BugCheckParameter3, (unsigned int)BugCheckParameter4, BitMapHeader) )
    {
      v20 = -1073741492;
      v134 = 1;
      SetFailureLocation(a7, 1, 14, -1073741492, 512);
      v67 = v116;
      goto LABEL_249;
    }
    v69 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v117 = 0xFFFFFFFFLL;
    if ( v69 )
      v70 = HvpGetCellPaged(BugCheckParameter3, v68, (unsigned int *)&v117);
    else
      v70 = HvpGetCellFlat(BugCheckParameter3, v68);
    v71 = v70;
    if ( !v70 )
    {
      v20 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 528);
      goto LABEL_462;
    }
    if ( (unsigned __int64)(4 * v66) > 0xFFFFFFFF || 4 * (int)v66 > (unsigned int)(-4 - *(_DWORD *)(v70 - 4)) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v117);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v117);
      v20 = -1073741492;
      v115 = 544;
    }
    else
    {
      LODWORD(v112) = a3;
      v20 = CmpCheckValueList(
              BugCheckParameter3,
              (*(_BYTE *)(v15 + 2) & 0x10) != 0,
              v70,
              v66,
              v112,
              a2,
              BitMapHeader,
              a7,
              &v121,
              (unsigned int *)&v121 + 1);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v117);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v117);
      if ( v20 == -2147483606 )
      {
        v134 = 1;
        goto LABEL_245;
      }
      if ( v20 >= 0 )
        goto LABEL_245;
      if ( v20 != -1073741492 )
        goto LABEL_462;
      if ( a7 )
        *(_QWORD *)(a7 + 248) = v71;
      v115 = 560;
    }
    v134 = 1;
    SetFailureLocation(a7, 1, 14, -1073741492, v115);
    v67 = v116;
    while ( 1 )
    {
LABEL_249:
      if ( v67 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, v20, 592);
        goto LABEL_462;
      }
      v72 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
      v20 = v72;
      if ( v72 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v72, 576);
        goto LABEL_462;
      }
      *(_DWORD *)(v15 + 40) = -1;
      *(_DWORD *)(v15 + 36) = 0;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_246:
      if ( *(_DWORD *)(v15 + 36) )
        break;
      if ( *(_DWORD *)(v15 + 40) == -1 )
      {
        v121 = 0LL;
        break;
      }
      v20 = -1073741492;
      v134 = 1;
      SetFailureLocation(a7, 1, 14, -1073741492, 608);
    }
    if ( *(_DWORD *)(v15 + 60) >= (unsigned int)v121 )
    {
      v73 = v134;
      v74 = a3;
    }
    else
    {
      v73 = 1;
      v20 = -1073741492;
      v134 = 1;
      if ( v67 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 610);
        goto LABEL_462;
      }
      v74 = a3;
      v75 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
      v20 = v75;
      if ( v75 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v75, 612);
        goto LABEL_462;
      }
      *(_DWORD *)(v15 + 60) = v121;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( *(_DWORD *)(v15 + 64) >= HIDWORD(v121) )
    {
      if ( !v67 )
        goto LABEL_275;
    }
    else
    {
      v73 = 1;
      v20 = -1073741492;
      v134 = 1;
      if ( v67 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 614);
        goto LABEL_462;
      }
      v76 = HvMarkCellDirty(BugCheckParameter3, v74, 0LL);
      v20 = v76;
      if ( v76 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v76, 616);
        goto LABEL_462;
      }
      *(_DWORD *)(v15 + 64) = HIDWORD(v121);
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_275:
      if ( *(_DWORD *)(v15 + 60) != (_DWORD)v121 && (int)HvMarkCellDirty(BugCheckParameter3, v74, 0LL) >= 0 )
        *(_DWORD *)(v15 + 60) = v121;
      if ( *(_DWORD *)(v15 + 64) != HIDWORD(v121) && (int)HvMarkCellDirty(BugCheckParameter3, v74, 0LL) >= 0 )
        *(_DWORD *)(v15 + 64) = HIDWORD(v121);
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v125);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v125);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v78 = HvpGetCellFlat(BugCheckParameter3, v74);
  else
    v78 = HvpGetCellPaged(BugCheckParameter3, v74, (unsigned int *)&v125);
  v117 = v78;
  v79 = (_DWORD *)v78;
  if ( !v78 )
  {
    SetFailureLocation(a7, 0, 14, -1073741670, 688);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v78;
  v80 = a3;
  if ( (a3 & 0x80000000) != 0 )
  {
    if ( *(_DWORD *)(v78 + 20) )
    {
      v113 = 704;
      goto LABEL_461;
    }
LABEL_420:
    v82 = v119;
    goto LABEL_421;
  }
  if ( !*(_DWORD *)(v78 + 20) )
    goto LABEL_420;
  v81 = (unsigned int *)(v78 + 28);
  if ( (*(_BYTE *)(v78 + 13) & 3) == 1 )
  {
    v82 = v119;
    v20 = -1073741492;
    v83 = 712;
    goto LABEL_413;
  }
  v84 = BitMapHeader;
  if ( !HvIsCellAllocated(BugCheckParameter3, *v81, BitMapHeader) )
  {
    v82 = v119;
    v20 = -1073741492;
    v83 = 720;
    goto LABEL_413;
  }
  v85 = *v81;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v86 = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v85);
  else
    v86 = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v85, (unsigned int *)&v118);
  v119 = v86;
  v87 = v86;
  if ( !v86 )
  {
    v20 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 736);
    goto LABEL_462;
  }
  v88 = -4 - *((_DWORD *)v86 - 1);
  if ( v88 < 8 )
    goto LABEL_409;
  v89 = *v86;
  v90 = (unsigned __int16)v86[1];
  v91 = 8;
  v69 = ((*v86 - 26220) & 0xFDFF) == 0;
  v92 = 8;
  if ( !v69 )
    v92 = 4;
  if ( (unsigned __int64)(unsigned int)(v90 * v92) + 4 < 4 )
    goto LABEL_409;
  if ( ((v89 - 26220) & 0xFDFF) != 0 )
    v91 = 4;
  if ( (unsigned __int64)(unsigned int)(v90 * v91) + 4 > v88 )
  {
LABEL_409:
    v20 = -1073741492;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v118);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v118);
    v82 = 0LL;
    v83 = 752;
    goto LABEL_413;
  }
  if ( !(_WORD)v90 )
  {
    v20 = -1073741492;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v118);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v118);
    v119 = 0LL;
    v83 = 784;
    v82 = 0LL;
    goto LABEL_413;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 256) = v87;
  v93 = *v87;
  if ( *v87 != 26988 && v93 != 26220 && v93 != 26732 && v93 != 26994 )
  {
    v20 = -1073741492;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v118);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v118);
    v119 = 0LL;
    v83 = 992;
    v82 = 0LL;
    goto LABEL_413;
  }
  v94 = (unsigned __int16)v87[1];
  if ( v93 != 26994 )
  {
    if ( v94 != v79[5] )
    {
      v20 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v118);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v118);
      v119 = 0LL;
      v83 = 816;
      v82 = 0LL;
      goto LABEL_413;
    }
    v95 = CmpCheckLeaf(BugCheckParameter3, a2, v87, *v81, a7);
    v20 = v95;
    if ( v95 == -2147483606 )
    {
      v73 = 1;
LABEL_405:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v118);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v118);
      v80 = a3;
      v82 = 0LL;
      goto LABEL_421;
    }
    if ( v95 < 0 )
    {
      if ( v95 == -1073741492 )
      {
        v82 = v119;
        v83 = 832;
        goto LABEL_413;
      }
      goto LABEL_443;
    }
LABEL_404:
    v73 = v134;
    goto LABEL_405;
  }
  v96 = 0;
  v97 = 0;
  if ( !(_WORD)v94 )
  {
LABEL_398:
    if ( *(_DWORD *)(v117 + 20) != v96 )
    {
      v20 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v118);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v118);
      v79 = (_DWORD *)v117;
      v119 = 0LL;
      v83 = 960;
      v82 = 0LL;
      goto LABEL_413;
    }
    v79 = (_DWORD *)v117;
    goto LABEL_404;
  }
  while ( 2 )
  {
    if ( a7 )
      *(_DWORD *)(a7 + 264) = v97;
    v98 = &v119[2 * v97];
    if ( !HvIsCellAllocated(BugCheckParameter3, *((unsigned int *)v98 + 1), v84) )
    {
      v20 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v118);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v118);
      v79 = (_DWORD *)v117;
      v119 = 0LL;
      v83 = 848;
      v82 = 0LL;
      goto LABEL_413;
    }
    v99 = *((unsigned int *)v98 + 1);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v100 = HvpGetCellFlat(BugCheckParameter3, v99);
    else
      v100 = HvpGetCellPaged(BugCheckParameter3, v99, (unsigned int *)&v122);
    v101 = (_WORD *)v100;
    if ( !v100 )
    {
      v20 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 864);
      goto LABEL_443;
    }
    if ( (unsigned int)(-4 - *(_DWORD *)(v100 - 4)) < 8
      || (CmpGetIndexElementSize(v100),
          IndexElementSize = CmpGetIndexElementSize(v101),
          (unsigned __int64)(unsigned int)(v103 * IndexElementSize) + 4 > v104) )
    {
      v20 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v122);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v122);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v118);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v118);
      v79 = (_DWORD *)v117;
      v119 = 0LL;
      v83 = 880;
      v82 = 0LL;
      goto LABEL_413;
    }
    if ( !(_WORD)v103 )
    {
      v20 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v122);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v122);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v118);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v118);
      v79 = (_DWORD *)v117;
      v119 = 0LL;
      v83 = 912;
      v82 = 0LL;
      goto LABEL_413;
    }
    if ( ((*v101 - 26220) & 0xFCFF) != 0 || *v101 == 26476 )
    {
      v20 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v122);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v122);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v118);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v118);
      v79 = (_DWORD *)v117;
      v119 = 0LL;
      v83 = 944;
      v82 = 0LL;
      goto LABEL_413;
    }
    v105 = CmpCheckLeaf(BugCheckParameter3, a2, v101, *((_DWORD *)v98 + 1), a7);
    v20 = v105;
    if ( v105 == -2147483606 )
    {
      v134 = 1;
LABEL_359:
      v96 += (unsigned __int16)v101[1];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v122);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v122);
      if ( ++v97 >= (unsigned int)(unsigned __int16)v119[1] )
        goto LABEL_398;
      v84 = BitMapHeader;
      continue;
    }
    break;
  }
  if ( v105 >= 0 )
    goto LABEL_359;
  if ( v105 != -1073741492 )
    goto LABEL_443;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v122);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v122);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v118);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v118);
  v79 = (_DWORD *)v117;
  v119 = 0LL;
  v83 = 952;
  v82 = 0LL;
LABEL_413:
  SetFailureLocation(a7, 1, 14, v20, v83);
  if ( v116 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
  {
LABEL_419:
    SetFailureLocation(a7, 0, 14, v20, 1040);
    goto LABEL_442;
  }
  SetFailureLocation(a7, 1, 14, v20, 1008);
  v106 = HvMarkCellDirty(BugCheckParameter3, a3, 0LL);
  v20 = v106;
  if ( v106 < 0 )
  {
    SetFailureLocation(a7, 0, 14, v106, 1024);
    goto LABEL_442;
  }
  v80 = a3;
  v79[5] = 0;
  *v81 = -1;
  v73 = 1;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_421:
  v107 = v79[8] != -1 || v79[6];
  if ( (a2 & 0x40000) != 0 && v107 )
  {
    v20 = -1073741492;
    goto LABEL_419;
  }
  v108 = (a2 & 2) != 0;
  if ( (a2 & 0xD) != 0 && v107 )
    v108 = 1;
  v109 = (_DWORD *)(BugCheckParameter3 + 220);
  if ( (a2 & 8) != 0 && *v109 < 4u || v108 )
  {
    v110 = HvMarkCellDirty(BugCheckParameter3, v80, 0LL);
    v20 = v110;
    if ( v110 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v110, 1056);
      goto LABEL_442;
    }
    v79[6] = 0;
    if ( (a2 & 4) != 0 && *v109 >= 4u )
      v111 = -1163005939;
    else
      v111 = -1;
    v79[8] = v111;
  }
  v20 = v73 != 0 ? 0x8000002A : 0;
LABEL_442:
  if ( v82 )
  {
LABEL_443:
    v65 = &v118;
    goto LABEL_444;
  }
LABEL_462:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v125);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v125);
  return (unsigned int)v20;
}
