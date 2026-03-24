/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0073BB0
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C00731F0 (GreUpdateSpriteVisRgn.c)
 *     CalcVisRgn @ 0x1C0073950 (CalcVisRgn.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C00428B0 (GetMonitorRectForDpiContext.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C00704E0 (IsDpiBoundaryBetweenWindows.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0073088 (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C00730A0 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C0074724 (PhysicalToLogicalInPlaceRect.c)
 *     GreSubtractRgnRectList @ 0x1C00B90E4 (GreSubtractRgnRectList.c)
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z @ 0x1C00D6BF0 (-ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F180C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F1850 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C0113C2C (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C0115D84 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C0152A70 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1C01E5444 (DpiRectContainsRectWithSubpixel.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01E5540 (DpiRectIntersectsRectWithSubpixel.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *const a1, HRGN *a2, int a3)
{
  HRGN *v3; // rbx
  char v4; // di
  HRGN v5; // r13
  __int64 v6; // r8
  HRGN v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  HRGN v13; // r15
  HRGN v14; // rdi
  HRGN v15; // r9
  HRGN v16; // r12
  __int16 v17; // bx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned int v23; // edx
  unsigned int v24; // r8d
  int v25; // ecx
  int v26; // eax
  LONG left; // edx
  LONG v28; // ecx
  LONG v29; // edx
  LONG v30; // ecx
  HRGN v31; // rbx
  LONG v32; // r8d
  LONG v33; // ecx
  LONG v34; // ecx
  LONG v35; // r8d
  _QWORD *v36; // r15
  _QWORD *v37; // r8
  __int64 v38; // r12
  int v39; // ecx
  int v40; // r10d
  HRGN v41; // r14
  int v42; // eax
  HRGN v43; // rbx
  int v44; // esi
  __int64 v45; // rdx
  LONG *v46; // rdi
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // r8d
  unsigned int v51; // r9d
  int v52; // ecx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  unsigned int v57; // ebx
  LONG v59; // eax
  LONG right; // ecx
  unsigned int v61; // r8d
  unsigned int v62; // edx
  int v63; // ecx
  int v64; // eax
  LONG top; // ecx
  LONG bottom; // r8d
  struct tagWND *v67; // rdx
  int v68; // eax
  unsigned int v69; // r13d
  int v70; // r15d
  _BYTE *v71; // rax
  __int64 v72; // rdi
  HRGN v73; // rdx
  __int64 v74; // rsi
  _QWORD *v75; // r14
  __int64 v76; // rbx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 EmptyRgn; // rax
  _BYTE *v80; // r12
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r14
  __int64 v85; // rbx
  int v86; // r12d
  __int64 v87; // rax
  __int64 v88; // rdi
  int v89; // esi
  __int64 v90; // rdx
  __int64 v91; // r8
  int v92; // r14d
  struct tagWND *v93; // r15
  BOOL v94; // edi
  HRGN v95; // r12
  __int64 v96; // rdi
  __int64 *v97; // rbx
  __int64 v98; // r10
  __int64 v99; // rcx
  __int64 v100; // r8
  unsigned int v101; // edx
  unsigned int v102; // r9d
  int v103; // ecx
  int v104; // eax
  int v105; // ecx
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v107; // rbx
  unsigned __int16 v109; // bx
  __int64 v110; // rbx
  int v111; // eax
  __int64 v112; // rbx
  HRGN v113; // rbx
  HRGN v114; // r15
  struct tagWND *v115; // rdi
  int v116; // [rsp+38h] [rbp-D0h]
  HRGN *v117; // [rsp+40h] [rbp-C8h]
  __int128 v118; // [rsp+48h] [rbp-C0h] BYREF
  HRGN v119; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v120; // [rsp+60h] [rbp-A8h]
  struct tagWND *v121; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v122; // [rsp+70h] [rbp-98h] BYREF
  __int64 v123; // [rsp+78h] [rbp-90h]
  HRGN v124; // [rsp+80h] [rbp-88h]
  __int128 v125; // [rsp+88h] [rbp-80h] BYREF
  __int128 v126; // [rsp+98h] [rbp-70h]
  HRGN v127; // [rsp+A8h] [rbp-60h]
  __int128 v128; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v129; // [rsp+C0h] [rbp-48h] BYREF
  struct tagRECT v130; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v131[240]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v132[480]; // [rsp+1D8h] [rbp+D0h] BYREF

  v3 = a2;
  v4 = a3;
  v5 = (HRGN)a1;
  LODWORD(v120) = a3;
  v117 = a2;
  v121 = a1;
  LODWORD(v123) = 0;
  memset(v131, 0, sizeof(v131));
  v6 = *((_QWORD *)v5 + 13);
  v7 = 0LL;
  v116 = 0;
  v124 = 0LL;
  v127 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  if ( !v6 )
    goto LABEL_6;
  v8 = *((_QWORD *)v5 + 3);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 )
      v9 = *(_QWORD *)(v10 + 24);
  }
  if ( v6 == v9
    || (v61 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL),
        v62 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL),
        (((unsigned __int16)(v62 >> 8) ^ (unsigned __int16)(v61 >> 8)) & 0x1FF) == 0)
    && ((v62 & 0xF) != 2 || (v62 & 0x20000000) == 0 ? (v63 = 0) : (v63 = 1),
        (v61 & 0xF) != 2 || (v61 & 0x20000000) == 0 ? (v64 = 0) : (v64 = 1),
        v63 == v64) )
  {
LABEL_6:
    v11 = 0;
  }
  else
  {
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi((struct tagWND *)v5);
    if ( WindowCoordinateSpaceDpi == GetWindowCoordinateSpaceDpi(*((struct tagWND **)v5 + 13)) )
    {
      v107 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v5 + 5) + 256LL));
      if ( !v107
        || *(_QWORD *)(*(_QWORD *)(v107 + 40) + 28LL) == *(_QWORD *)GetMonitorRectForDpiContext(
                                                                      &v128,
                                                                      v107,
                                                                      *(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL)) )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        v116 = 1;
      }
    }
    else
    {
      v11 = 1;
      v116 = 1;
    }
    v3 = v117;
  }
  v12 = *((_QWORD *)v5 + 5);
  LODWORD(v122) = v11;
  if ( (v4 & 1) != 0 )
  {
    v130 = *(struct tagRECT *)(v12 + 88);
  }
  else
  {
    v130 = *(struct tagRECT *)(v12 + 104);
    v59 = *(_DWORD *)(v12 + 88);
    v130.left = _mm_cvtsi128_si32((__m128i)v130);
    if ( v130.left <= v59 )
      v130.left = v59;
    right = v130.right;
    if ( v130.right >= *(_DWORD *)(v12 + 96) )
      right = *(_DWORD *)(v12 + 96);
    v130.right = right;
    if ( v130.left >= right )
      goto LABEL_118;
    top = v130.top;
    bottom = v130.bottom;
    if ( v130.top <= *(_DWORD *)(v12 + 92) )
      top = *(_DWORD *)(v12 + 92);
    v130.top = top;
    if ( v130.bottom >= *(_DWORD *)(v12 + 100) )
      bottom = *(_DWORD *)(v12 + 100);
    v130.bottom = bottom;
    if ( top >= bottom )
LABEL_118:
      v130 = 0LL;
  }
  v13 = v5;
  v14 = (HRGN)*((_QWORD *)v5 + 13);
  v15 = *(HRGN *)(*(_QWORD *)(*((_QWORD *)v5 + 3) + 8LL) + 24LL);
  v119 = v15;
  v16 = (HRGN)*((_QWORD *)v15 + 13);
  *(_QWORD *)&v128 = v16;
  if ( !v14 )
    goto LABEL_177;
  if ( v14 == v16 )
  {
    if ( (*(_WORD *)(v12 + 42) & 0x2FFF) == 0x29D )
    {
LABEL_127:
      v17 = v120;
      goto LABEL_60;
    }
    goto LABEL_177;
  }
  while ( 1 )
  {
    if ( *((HRGN *)v14 + 13) == v16 && (*(_WORD *)(*((_QWORD *)v14 + 5) + 42LL) & 0x2FFF) != 0x29D )
      goto LABEL_176;
    v17 = v120;
    if ( (v120 & 0x1004000) != 0 && (*(_WORD *)(*((_QWORD *)v14 + 5) + 42LL) & 0x2FFF) == 0x29D )
      goto LABEL_60;
    if ( (v120 & 0x4000) != 0 )
    {
      v105 = *(_DWORD *)(*((_QWORD *)v13 + 5) + 24LL);
      if ( ((v105 & 0x80000) != 0 || (v105 & 0x20000000) != 0) && ((v105 & 0x2000000) == 0 || v14 == v15) )
        goto LABEL_60;
    }
    if ( (v120 & 0x8000000) != 0 && (*(_WORD *)(*((_QWORD *)v14 + 5) + 42LL) & 0x2FFF) == 0x29D )
    {
      if ( (unsigned int)IsWindowDesktopComposed(v14) )
        break;
    }
    v18 = *((_QWORD *)v14 + 5);
    if ( *(_QWORD *)(v18 + 168) )
      LODWORD(v123) = 1;
    if ( !v116 )
    {
      v19 = *((_QWORD *)v14 + 13);
      if ( v19 )
      {
        v20 = *((_QWORD *)v14 + 3);
        v21 = 0LL;
        if ( v20 )
        {
          v22 = *(_QWORD *)(v20 + 8);
          if ( v22 )
            v21 = *(_QWORD *)(v22 + 24);
        }
        if ( v19 != v21 )
        {
          v23 = *(_DWORD *)(v18 + 288);
          v24 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 288LL);
          if ( (((unsigned __int16)(v23 >> 8) ^ (unsigned __int16)(v24 >> 8)) & 0x1FF) != 0
            || ((v23 & 0xF) == 2 && (v23 & 0x20000000) != 0 ? (v25 = 1) : (v25 = 0),
                (v24 & 0xF) == 2 && (v24 & 0x20000000) != 0 ? (v26 = 1) : (v26 = 0),
                v25 != v26) )
          {
            v109 = GetWindowCoordinateSpaceDpi((struct tagWND *)v14);
            if ( v109 != GetWindowCoordinateSpaceDpi(*((struct tagWND **)v14 + 13))
              || (v110 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v14 + 5) + 256LL))) != 0
              && *(_QWORD *)(*(_QWORD *)(v110 + 40) + 28LL) != *(_QWORD *)GetMonitorRectForDpiContext(
                                                                            &v129,
                                                                            v110,
                                                                            *(_DWORD *)(*((_QWORD *)v14 + 5) + 288LL)) )
            {
              v116 = 1;
              LODWORD(v122) = 1;
            }
          }
        }
      }
    }
    v118 = *(_OWORD *)(*((_QWORD *)v14 + 5) + 104LL);
    if ( v116 )
    {
      v31 = v5 + 56;
      if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v118, v14 + 56, v14, &v130, v5 + 56, v5) )
        goto LABEL_45;
      LogicalToPhysicalInPlaceRectWithSubpixel(v14, &v118, 0LL);
      PhysicalToLogicalInPlaceRectWithSubpixel(v5, &v118, 0LL);
    }
    else
    {
      PhysicalToLogicalInPlaceRect(v13, &v118);
    }
    left = v130.left;
    v28 = v130.right;
    if ( v130.left <= (int)v118 )
      left = v118;
    v130.left = left;
    if ( v130.right >= SDWORD2(v118) )
      v28 = DWORD2(v118);
    v130.right = v28;
    if ( left >= v28 )
      goto LABEL_175;
    v29 = v130.top;
    v30 = v130.bottom;
    if ( v130.top <= SDWORD1(v118) )
      v29 = DWORD1(v118);
    v130.top = v29;
    if ( v130.bottom >= SHIDWORD(v118) )
      v30 = HIDWORD(v118);
    v130.bottom = v30;
    if ( v29 >= v30 )
    {
LABEL_175:
      v130 = 0LL;
      goto LABEL_176;
    }
    v31 = v5 + 56;
LABEL_45:
    v118 = *(_OWORD *)(*((_QWORD *)v14 + 5) + 88LL);
    if ( v116 )
    {
      if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v118, v14 + 56, v14, &v130, v31, v5) )
        goto LABEL_57;
      LogicalToPhysicalInPlaceRectWithSubpixel(v14, &v118, 0LL);
      PhysicalToLogicalInPlaceRectWithSubpixel(v5, &v118, 0LL);
    }
    else
    {
      PhysicalToLogicalInPlaceRect(v13, &v118);
    }
    v32 = v130.left;
    v33 = v130.right;
    if ( v130.left <= (int)v118 )
      v32 = v118;
    v130.left = v32;
    if ( v130.right >= SDWORD2(v118) )
      v33 = DWORD2(v118);
    v130.right = v33;
    if ( v32 >= v33 )
      goto LABEL_175;
    v34 = v130.top;
    v35 = v130.bottom;
    if ( v130.top <= SDWORD1(v118) )
      v34 = DWORD1(v118);
    v130.top = v34;
    if ( v130.bottom >= SHIDWORD(v118) )
      v35 = HIDWORD(v118);
    v130.bottom = v35;
    if ( v34 >= v35 )
      goto LABEL_175;
LABEL_57:
    v15 = v119;
    v13 = v14;
    v14 = (HRGN)*((_QWORD *)v14 + 13);
    if ( v14 == v16 )
      goto LABEL_127;
  }
  v15 = v119;
LABEL_60:
  v36 = (_QWORD *)*((_QWORD *)v5 + 13);
  v37 = (_QWORD *)v128;
  v38 = 0LL;
  *((_QWORD *)&v126 + 1) = v131;
  v39 = v17 & 0x10;
  *(_QWORD *)((char *)&v125 + 4) = 0x1E00000000LL;
  v40 = 30;
  *(_QWORD *)&v126 = v131;
  v41 = v5;
  if ( v36 != (_QWORD *)v128 )
  {
    v42 = v17 & 0x4000;
    LODWORD(v118) = v42;
    while ( 2 )
    {
      if ( !v42
        || (v55 = *((_QWORD *)v41 + 5), (*(_BYTE *)(v55 + 27) & 0x20) == 0)
        || (*(_DWORD *)(v55 + 24) & 0x2000000) != 0 && v36 != (_QWORD *)v15 )
      {
        if ( !v39 )
          goto LABEL_73;
        v43 = (HRGN)v36[14];
        if ( v43 == v41 )
          goto LABEL_73;
        v44 = 0;
        if ( !v43 )
          goto LABEL_73;
LABEL_66:
        if ( v43 == v41 )
        {
LABEL_70:
          v47 = v116;
          v37 = (_QWORD *)v128;
          if ( v44 )
            v47 = 1;
          v116 = v47;
          LODWORD(v122) = v47;
LABEL_73:
          v48 = v36[5];
          v41 = (HRGN)v36;
          v36 = (_QWORD *)v36[13];
          v39 = *(_BYTE *)(v48 + 31) & 4;
          if ( v36 != v37 )
          {
            v42 = v118;
            v15 = v119;
            continue;
          }
          break;
        }
        v45 = *((_QWORD *)v43 + 5);
        v46 = (LONG *)(v45 + 88);
        if ( !v44 )
        {
          v49 = *((_QWORD *)v5 + 5);
          v50 = *(_DWORD *)(v49 + 288);
          if ( *(_QWORD *)(v49 + 256) == *(_QWORD *)(v45 + 256) )
          {
            v51 = *(_DWORD *)(v45 + 288);
            if ( (((unsigned __int16)(v50 >> 8) ^ (unsigned __int16)(v51 >> 8)) & 0x1FF) == 0 )
            {
              v52 = (v50 & 0xF) == 2 && (v50 & 0x20000000) != 0;
              v53 = (v51 & 0xF) == 2 && (v51 & 0x20000000) != 0;
              if ( v52 == v53 )
                goto LABEL_68;
            }
          }
          else if ( (v50 & 0xF) == 2 && (*(_DWORD *)(v45 + 288) & 0xF) == 2 )
          {
            goto LABEL_68;
          }
          v44 = 1;
        }
LABEL_68:
        if ( (*(_BYTE *)(v45 + 31) & 0x10) != 0 && (*(_BYTE *)(v45 + 26) & 8) == 0 && (*(_BYTE *)(v45 + 24) & 0x20) == 0 )
        {
          if ( v44 )
          {
            v111 = DpiRectIntersectsRectWithSubpixel(v46, v43 + 56, v43, &v130, v5 + 56, v5);
            v40 = DWORD2(v125);
            if ( v111 )
            {
LABEL_92:
              if ( *v46 < v46[2] && v46[1] < v46[3] )
              {
                if ( (_DWORD)v38 == v40 )
                {
                  if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v125) )
                  {
                    v7 = v127;
                    goto LABEL_176;
                  }
                  LODWORD(v38) = DWORD1(v125);
                  v40 = DWORD2(v125);
                }
                v54 = (int)v38;
                v38 = (unsigned int)(v38 + 1);
                DWORD1(v125) = v38;
                *(_QWORD *)(v126 + 8 * v54) = v43;
              }
            }
          }
          else if ( v130.left < *(_DWORD *)(v45 + 96)
                 && *v46 < v130.right
                 && v130.top < *(_DWORD *)(v45 + 100)
                 && *(_DWORD *)(v45 + 92) < v130.bottom )
          {
            goto LABEL_92;
          }
        }
        v43 = (HRGN)*((_QWORD *)v43 + 11);
        if ( !v43 )
          goto LABEL_70;
        goto LABEL_66;
      }
      break;
    }
    v7 = v127;
    LOBYTE(v17) = v120;
    v124 = v127;
  }
  if ( (v17 & 8) != 0 )
  {
    v67 = (struct tagWND *)*((_QWORD *)v5 + 14);
    if ( v67 )
    {
      v68 = ExcludeWindowRects((struct tagWND *)v5, v67, 0LL, &v130, (struct _CalcVisRgnData *)&v125, (int *)&v122);
      v7 = v127;
      if ( !v68 )
        goto LABEL_176;
      v38 = DWORD1(v125);
      v116 = v122;
      v124 = v127;
    }
  }
  if ( (int)v38 > 0 )
  {
    v69 = 0;
    v70 = 0;
    if ( (int)v38 > 30 )
    {
      v71 = (_BYTE *)Win32AllocPoolWithQuota(16LL * (int)v38, 1769370453LL);
      *(_QWORD *)&v118 = v71;
      if ( !v71 )
      {
LABEL_176:
        v3 = v117;
        goto LABEL_177;
      }
    }
    else
    {
      v71 = v132;
      *(_QWORD *)&v118 = v132;
    }
    v72 = v126;
    v73 = (HRGN)v71;
    v74 = v118;
    v75 = (_QWORD *)v126;
    do
    {
      v76 = (int)v69;
      v77 = *(_QWORD *)(*(_QWORD *)v72 + 40LL);
      if ( *(_QWORD *)(v77 + 168) )
      {
        ++v70;
        *v75++ = *(_QWORD *)v72;
      }
      else
      {
        ++v69;
        *(_OWORD *)v73 = *(_OWORD *)(v77 + 88);
        v73 += 4;
        v119 = v73;
        if ( v116 )
        {
          v122 = *(_QWORD *)v72;
          if ( (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v121, v122) )
          {
            v112 = v74 + 16 * v76;
            LogicalToPhysicalInPlaceRectWithSubpixel(v122, v112, 0LL);
            PhysicalToLogicalInPlaceRectWithSubpixel(v121, v112, 0LL);
          }
          v73 = v119;
        }
      }
      v72 += 8LL;
      --v38;
    }
    while ( v38 );
    v7 = v124;
    v3 = v117;
    v78 = (__int64)*v117;
    if ( !*v117 )
    {
      EmptyRgn = CreateEmptyRgn(0LL, v73, v37);
      *v117 = (HRGN)EmptyRgn;
      v78 = EmptyRgn;
    }
    if ( v69 )
    {
      v80 = (_BYTE *)v118;
      GreSubtractRgnRectList(v78, &v130, v118, v69);
    }
    else
    {
      SetRectRgnIndirect(v78, &v130);
      v80 = (_BYTE *)v118;
    }
    if ( !v7 )
    {
      v7 = (HRGN)CreateEmptyRgn(v82, v81, v83);
      v124 = v7;
    }
    v84 = v70;
    if ( v70 <= 0 )
    {
LABEL_154:
      if ( v80 != v132 )
        Win32FreePool(v80);
      v5 = (HRGN)v121;
LABEL_104:
      v56 = *(_QWORD *)(*((_QWORD *)v5 + 5) + 168LL);
      if ( v56 )
        GreCombineRgn(*v3, *v3, v56, 1LL);
      if ( !(_DWORD)v123 || (v85 = *((_QWORD *)v5 + 13), v86 = 0, v87 = v128, v88 = (__int64)v5, v85 == (_QWORD)v128) )
      {
LABEL_107:
        v57 = 1;
        goto LABEL_108;
      }
      v89 = v120;
      while ( 1 )
      {
        v90 = *(_QWORD *)(v85 + 40);
        if ( !*(_QWORD *)(v90 + 168) )
          goto LABEL_164;
        v91 = *(_QWORD *)(v88 + 40);
        if ( (*(_BYTE *)(v91 + 26) & 8) != 0 && (*(_DWORD *)(v91 + 232) & 0x20) == 0 )
          break;
        if ( (v89 & 0x1000000) != 0 )
        {
          v86 = 1;
LABEL_253:
          if ( (*(_WORD *)(v90 + 42) & 0x2FFF) == 0x29D )
            goto LABEL_165;
          goto LABEL_169;
        }
        if ( v86 )
          goto LABEL_253;
LABEL_169:
        v121 = *(struct tagWND **)(v90 + 168);
        if ( (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v5, v85) )
        {
          v115 = 0LL;
          if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v85, &v121, 1LL) )
            v115 = v121;
          v92 = PhysicalToLogicalInPlaceRgnWorker((struct tagWND *)v5, (HRGN *)&v121, 1);
          if ( v92 && v115 )
            GreDeleteObject(v115);
        }
        else
        {
          v92 = PhysicalToLogicalInPlaceRgn(v88, (__int64)&v121);
        }
        v93 = v121;
        v94 = GreCombineRgn(*v117, *v117, v121, 1LL) == 1;
        if ( v92 )
          GreDeleteObject(v93);
        if ( v94 )
        {
LABEL_165:
          v7 = v124;
          goto LABEL_107;
        }
        v87 = v128;
LABEL_164:
        v88 = v85;
        v85 = *(_QWORD *)(v85 + 104);
        if ( v85 == v87 )
          goto LABEL_165;
      }
      v86 = 1;
      goto LABEL_253;
    }
    v95 = (HRGN)v121;
    v96 = 0LL;
    while ( 1 )
    {
      v97 = (__int64 *)(v126 + 8 * v96);
      SetRectRgnIndirect(v7, *(_QWORD *)(*v97 + 40) + 88LL);
      GreCombineRgn(v7, v7, *(_QWORD *)(*(_QWORD *)(*v97 + 40) + 168LL), 1LL);
      if ( v116 )
      {
        v98 = *v97;
        v99 = *((_QWORD *)v95 + 5);
        v100 = *(_QWORD *)(*v97 + 40);
        v101 = *(_DWORD *)(v99 + 288);
        if ( *(_QWORD *)(v99 + 256) == *(_QWORD *)(v100 + 256) )
        {
          v102 = *(_DWORD *)(v100 + 288);
          if ( (((unsigned __int16)(v101 >> 8) ^ (unsigned __int16)(v102 >> 8)) & 0x1FF) != 0
            || ((v101 & 0xF) != 2 || (v101 & 0x20000000) == 0 ? (v103 = 0) : (v103 = 1),
                (v102 & 0xF) != 2 || (v102 & 0x20000000) == 0 ? (v104 = 0) : (v104 = 1),
                v103 != v104) )
          {
LABEL_239:
            v119 = v7;
            v113 = 0LL;
            if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v98, &v119, 1LL) )
              v113 = v119;
            v114 = 0LL;
            if ( (unsigned int)PhysicalToLogicalInPlaceRgnWorker((struct tagWND *)v95, &v119, 1) )
              v114 = v119;
            if ( v119 != v7 )
              GreCombineRgn(v7, v119, 0LL, 5LL);
            if ( v113 )
              GreDeleteObject(v113);
            if ( v114 )
              GreDeleteObject(v114);
          }
        }
        else if ( (v101 & 0xF) != 2 || (*(_DWORD *)(v100 + 288) & 0xF) != 2 )
        {
          goto LABEL_239;
        }
      }
      v3 = v117;
      if ( (unsigned int)GreCombineRgn(*v117, *v117, v7, 4LL) != 1 && ++v96 < v84 )
        continue;
      v80 = (_BYTE *)v118;
      goto LABEL_154;
    }
  }
  if ( *(char *)(*((_QWORD *)v5 + 5) + 19LL) < 0 )
    v130 = 0LL;
  v3 = v117;
  if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(v117, &v130) )
    goto LABEL_104;
LABEL_177:
  SetOrCreateRectRgnIndirectPublic(v3, gZero);
  v57 = 0;
LABEL_108:
  if ( v7 )
    GreDeleteObject(v7);
  if ( (_DWORD)v125 )
    Win32FreePool((void *)v126);
  return v57;
}
