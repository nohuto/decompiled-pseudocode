/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0053AA0
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C00535C0 (CalcVisRgn.c)
 * Callees:
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C005004C (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0052AEC (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C0052B04 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C005460C (PhysicalToLogicalInPlaceRect.c)
 *     GetMonitorRectForDpi @ 0x1C00A2698 (GetMonitorRectForDpi.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00A35E4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00A3628 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00A3840 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00C972C (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C00DB9C4 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C01A9118 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1C01BAA00 (DpiRectContainsRectWithSubpixel.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01BAAFC (DpiRectIntersectsRectWithSubpixel.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *a1, HRGN *a2, int a3)
{
  struct tagWND *v3; // r14
  int v4; // r15d
  __int64 v5; // rcx
  HRGN v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // r10d
  HRGN v10; // r9
  __int64 v11; // rdx
  struct tagWND *v12; // r13
  HRGN v13; // rdi
  HRGN v14; // r8
  HRGN v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  HRGN v20; // r14
  char *v21; // r15
  HRGN v22; // r14
  struct tagWND *v23; // r11
  char v24; // cl
  struct tagWND *v25; // r15
  int v26; // r13d
  int v27; // ecx
  int v28; // r10d
  struct tagWND *v29; // rsi
  int v30; // r12d
  struct tagWND *v31; // rbx
  int v32; // r14d
  __int64 v33; // rdx
  LONG *v34; // rdi
  unsigned int v35; // eax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // r12d
  int v41; // edx
  HRGN *v42; // r14
  __int64 v43; // r8
  unsigned int v44; // edi
  __int64 v46; // rax
  char *v47; // rdi
  __int64 v48; // rbx
  int v49; // esi
  __int64 v50; // rdx
  LONG *v51; // rdi
  unsigned int v52; // eax
  __int64 v53; // rcx
  LONG right; // r8d
  LONG v55; // ecx
  LONG top; // ecx
  LONG v57; // eax
  LONG bottom; // edx
  int v59; // ebx
  int v60; // esi
  struct _RECTL *v61; // r12
  const struct tagWND **v62; // rdi
  struct _RECTL *v63; // r14
  __int64 v64; // r15
  const struct tagWND **v65; // r13
  const struct tagWND *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // r10
  HRGN *v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rcx
  HRGN v73; // rax
  struct tagWND *v74; // rsi
  int v75; // r15d
  const struct tagWND *v76; // r13
  struct tagWND *v77; // r9
  const struct tagWND *v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // r9
  int v82; // esi
  HRGN v83; // rcx
  HRGN v84; // r14
  BOOL v85; // edi
  __int64 i; // rdi
  const struct tagWND **v87; // rsi
  __int64 v88; // r9
  int v89; // ecx
  int v90; // ebx
  LONG left; // edx
  LONG v92; // ecx
  LONG v93; // edx
  LONG v94; // ecx
  int v95; // ebx
  LONG v96; // ecx
  LONG v97; // r8d
  LONG v98; // ecx
  LONG v99; // edx
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // r8
  int v104; // eax
  unsigned __int16 v105; // bx
  __int64 v106; // rax
  __int64 v107; // rbx
  __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // rax
  struct tagWND *v111; // rcx
  int v112; // eax
  int v113; // eax
  struct _RECTL *v114; // rbx
  HRGN v115; // rsi
  HRGN v116; // r14
  HRGN v117; // rdi
  unsigned int v118; // [rsp+38h] [rbp-D0h]
  HRGN v119; // [rsp+40h] [rbp-C8h] BYREF
  HRGN EmptyRgn; // [rsp+48h] [rbp-C0h]
  struct tagWND *v121; // [rsp+50h] [rbp-B8h]
  __int64 v122; // [rsp+58h] [rbp-B0h]
  HRGN v123; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v124; // [rsp+68h] [rbp-A0h] BYREF
  HRGN *v125; // [rsp+78h] [rbp-90h]
  int v126; // [rsp+80h] [rbp-88h]
  __int128 v127; // [rsp+88h] [rbp-80h] BYREF
  __int128 v128; // [rsp+98h] [rbp-70h]
  HRGN v129; // [rsp+A8h] [rbp-60h]
  struct tagWND *v130; // [rsp+B0h] [rbp-58h]
  struct _RECTL *v131; // [rsp+B8h] [rbp-50h]
  _QWORD v132[2]; // [rsp+C0h] [rbp-48h] BYREF
  int v133; // [rsp+D0h] [rbp-38h]
  __int64 v134; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v135; // [rsp+E8h] [rbp-20h] BYREF
  struct _RECTL v136; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v137[240]; // [rsp+108h] [rbp+0h] BYREF
  struct _RECTL v138; // [rsp+1F8h] [rbp+F0h] BYREF

  v3 = a1;
  v4 = a3;
  LODWORD(v122) = a3;
  v125 = a2;
  v121 = a1;
  v136 = 0LL;
  v126 = 0;
  memset_0(v137, 0, sizeof(v137));
  v5 = *((_QWORD *)v3 + 13);
  v6 = 0LL;
  EmptyRgn = 0LL;
  v129 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  if ( !v5
    || (v7 = *((_QWORD *)v3 + 3)) != 0 && (v8 = *(_QWORD *)(v7 + 8)) != 0 && v5 == *(_QWORD *)(v8 + 24)
    || (v46 = *(_QWORD *)(v5 + 40),
        v47 = (char *)v3 + 40,
        v119 = (HRGN)((char *)v3 + 40),
        (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)v3 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v46 + 288) >> 8)) & 0x1FF) == 0) )
  {
    v9 = 0;
    v10 = (HRGN)((char *)v3 + 40);
    v119 = (HRGN)((char *)v3 + 40);
    v118 = 0;
    goto LABEL_6;
  }
  WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v3);
  if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((const struct tagWND **)v3 + 13)) )
    goto LABEL_208;
  v101 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)v47 + 256LL));
  v9 = 0;
  v102 = v101;
  v118 = 0;
  if ( v101 )
  {
    v103 = *(_DWORD *)(*(_QWORD *)v47 + 288LL) >> 8;
    LOWORD(v103) = v103 & 0x1FF;
    GetMonitorRectForDpi(&v134, v101, v103);
    if ( *(_QWORD *)(*(_QWORD *)(v102 + 40) + 28LL) == v134 )
    {
      v9 = 0;
      v118 = 0;
      goto LABEL_207;
    }
LABEL_208:
    v9 = 1;
    v118 = 1;
  }
LABEL_207:
  v6 = EmptyRgn;
  v10 = (HRGN)((char *)v3 + 40);
LABEL_6:
  v11 = *(_QWORD *)v10;
  if ( (v4 & 1) != 0 )
  {
    v136 = *(struct _RECTL *)(v11 + 88);
  }
  else
  {
    v136 = *(struct _RECTL *)(v11 + 104);
    right = v136.right;
    v55 = _mm_cvtsi128_si32((__m128i)v136);
    if ( v55 <= *(_DWORD *)(v11 + 88) )
      v55 = *(_DWORD *)(v11 + 88);
    v136.left = v55;
    if ( v136.right >= *(_DWORD *)(v11 + 96) )
      right = *(_DWORD *)(v11 + 96);
    v136.right = right;
    if ( v55 >= right )
      goto LABEL_110;
    top = v136.top;
    if ( v136.top <= *(_DWORD *)(v11 + 92) )
      top = *(_DWORD *)(v11 + 92);
    v136.top = top;
    v57 = *(_DWORD *)(v11 + 100);
    bottom = v136.bottom;
    if ( v136.bottom >= v57 )
      bottom = v57;
    v136.bottom = bottom;
    if ( top >= bottom )
LABEL_110:
      v136 = 0LL;
  }
  v12 = v3;
  v13 = (HRGN)*((_QWORD *)v3 + 13);
  v14 = *(HRGN *)(*(_QWORD *)(*((_QWORD *)v3 + 3) + 8LL) + 24LL);
  v123 = v14;
  v15 = (HRGN)*((_QWORD *)v14 + 13);
  v130 = (struct tagWND *)v15;
  if ( !v13 )
    goto LABEL_200;
  if ( v13 == v15 )
  {
    if ( (*(_WORD *)(*(_QWORD *)v10 + 42LL) & 0x2FFF) != 0x29D )
      goto LABEL_200;
    goto LABEL_28;
  }
  while ( 1 )
  {
    if ( *((HRGN *)v13 + 13) == v15 && (*(_WORD *)(*((_QWORD *)v13 + 5) + 42LL) & 0x2FFF) != 0x29D )
      goto LABEL_199;
    if ( (v4 & 0x1004000) != 0 && (*(_WORD *)(*((_QWORD *)v13 + 5) + 42LL) & 0x2FFF) == 0x29D )
      goto LABEL_27;
    if ( (v4 & 0x4000) != 0 )
    {
      v89 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 24LL);
      if ( ((v89 & 0x80000) != 0 || (v89 & 0x20000000) != 0) && ((v89 & 0x2000000) == 0 || v13 == v14) )
        goto LABEL_27;
    }
    if ( (v4 & 0x8000000) != 0 && (*(_WORD *)(*((_QWORD *)v13 + 5) + 42LL) & 0x2FFF) == 0x29D )
      break;
LABEL_15:
    v16 = *((_QWORD *)v13 + 5);
    if ( *(_QWORD *)(v16 + 168) )
      v126 = 1;
    if ( !v9 )
    {
      v17 = *((_QWORD *)v13 + 13);
      if ( !v17 )
        goto LABEL_24;
      v18 = *((_QWORD *)v13 + 3);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 8);
        if ( v19 )
        {
          if ( v17 == *(_QWORD *)(v19 + 24) )
            goto LABEL_24;
        }
      }
      v20 = v10;
      if ( (((unsigned __int16)(*(_DWORD *)(v16 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v17 + 40)
                                                                                            + 288LL) >> 8)) & 0x1FF) == 0 )
      {
        v3 = v121;
LABEL_24:
        v21 = (char *)v3 + 224;
        v124 = *(_OWORD *)(v16 + 104);
        goto LABEL_25;
      }
      v105 = GetWindowCoordinateSpaceDpi((const struct tagWND *)v13);
      if ( v105 != GetWindowCoordinateSpaceDpi(*((const struct tagWND **)v13 + 13)) )
        goto LABEL_219;
      v106 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v13 + 5) + 256LL));
      v119 = v20;
      v107 = v106;
      if ( v106 )
      {
        v108 = *(_DWORD *)(*((_QWORD *)v13 + 5) + 288LL) >> 8;
        LOWORD(v108) = v108 & 0x1FF;
        GetMonitorRectForDpi(&v135, v106, v108);
        if ( *(_QWORD *)(*(_QWORD *)(v107 + 40) + 28LL) == v135 )
        {
          v109 = *((_QWORD *)v13 + 5);
          v21 = (char *)v121 + 224;
          v119 = v20;
          v124 = *(_OWORD *)(v109 + 104);
          goto LABEL_25;
        }
LABEL_219:
        v110 = *((_QWORD *)v13 + 5);
        v90 = 0;
        v111 = v121;
        v118 = 1;
        v119 = v20;
        v21 = (char *)v121 + 224;
        v124 = *(_OWORD *)(v110 + 104);
LABEL_221:
        v22 = v13 + 56;
        if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v124, v13 + 56, v13, &v136, v21, v111) )
        {
          v90 = 1;
        }
        else
        {
          LogicalToPhysicalInPlaceRectWithSubpixel(v13, &v124, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(v121, &v124, 0LL);
        }
        if ( v90 )
          goto LABEL_184;
        goto LABEL_174;
      }
      v3 = v121;
      v9 = v118;
    }
    v21 = (char *)v3 + 224;
    v90 = 0;
    v124 = *(_OWORD *)(*((_QWORD *)v13 + 5) + 104LL);
    if ( v9 )
    {
      v111 = v121;
      goto LABEL_221;
    }
LABEL_25:
    PhysicalToLogicalInPlaceRect(v12, &v124);
    v22 = v13 + 56;
LABEL_174:
    left = v136.left;
    v92 = v136.right;
    if ( v136.left <= (int)v124 )
      left = v124;
    v136.left = left;
    if ( v136.right >= SDWORD2(v124) )
      v92 = DWORD2(v124);
    v136.right = v92;
    if ( left >= v92 )
      goto LABEL_198;
    v93 = v136.top;
    v94 = v136.bottom;
    if ( v136.top <= SDWORD1(v124) )
      v93 = DWORD1(v124);
    v136.top = v93;
    if ( v136.bottom >= SHIDWORD(v124) )
      v94 = HIDWORD(v124);
    v136.bottom = v94;
    if ( v93 >= v94 )
    {
LABEL_198:
      v136 = 0LL;
LABEL_199:
      v6 = EmptyRgn;
      goto LABEL_200;
    }
LABEL_184:
    v95 = 0;
    v124 = *(_OWORD *)(*((_QWORD *)v13 + 5) + 88LL);
    if ( v118 )
    {
      if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v124, v22, v13, &v136, v21, v121) )
      {
        v3 = v121;
        v95 = 1;
      }
      else
      {
        LogicalToPhysicalInPlaceRectWithSubpixel(v13, &v124, 0LL);
        v3 = v121;
        PhysicalToLogicalInPlaceRectWithSubpixel(v121, &v124, 0LL);
      }
      if ( v95 )
        goto LABEL_196;
    }
    else
    {
      PhysicalToLogicalInPlaceRect(v12, &v124);
      v3 = v121;
    }
    v96 = v136.left;
    v97 = v136.right;
    if ( v136.left <= (int)v124 )
      v96 = v124;
    v136.left = v96;
    if ( v136.right >= SDWORD2(v124) )
      v97 = DWORD2(v124);
    v136.right = v97;
    if ( v96 >= v97 )
      goto LABEL_198;
    v98 = v136.top;
    v99 = v136.bottom;
    if ( v136.top <= SDWORD1(v124) )
      v98 = DWORD1(v124);
    v136.top = v98;
    if ( v136.bottom >= SHIDWORD(v124) )
      v99 = HIDWORD(v124);
    v136.bottom = v99;
    if ( v98 >= v99 )
      goto LABEL_198;
LABEL_196:
    v15 = (HRGN)v130;
    v12 = (struct tagWND *)v13;
    v13 = (HRGN)*((_QWORD *)v13 + 13);
    v14 = v123;
    v10 = v119;
    v4 = v122;
    if ( v13 == (HRGN)v130 )
      goto LABEL_27;
    v9 = v118;
  }
  v104 = IsWindowDesktopComposed(v13);
  v10 = v119;
  if ( !v104 )
  {
    v9 = v118;
    goto LABEL_15;
  }
  v14 = v123;
LABEL_27:
  v6 = EmptyRgn;
LABEL_28:
  v23 = v130;
  v24 = v4;
  *((_QWORD *)&v128 + 1) = v137;
  v25 = (struct tagWND *)*((_QWORD *)v3 + 13);
  v26 = 0;
  *(_QWORD *)&v128 = v137;
  v27 = v24 & 0x10;
  *(_QWORD *)((char *)&v127 + 4) = 0x1E00000000LL;
  v28 = 30;
  v29 = v3;
  if ( v25 == v130 )
    goto LABEL_59;
  v30 = v122 & 0x4000;
  while ( 2 )
  {
    if ( v30 )
    {
      v39 = *((_QWORD *)v29 + 5);
      if ( (*(_BYTE *)(v39 + 27) & 0x20) != 0
        && ((*(_DWORD *)(v39 + 24) & 0x2000000) == 0 || v25 == (struct tagWND *)v14) )
      {
        break;
      }
    }
    if ( !v27 )
      goto LABEL_43;
    v31 = (struct tagWND *)*((_QWORD *)v25 + 14);
    if ( v31 == v29 )
      goto LABEL_43;
    v32 = 0;
    if ( !v31 )
      goto LABEL_43;
    while ( 2 )
    {
      if ( v31 != v29 )
      {
        v33 = *((_QWORD *)v31 + 5);
        v34 = (LONG *)(v33 + 88);
        if ( !v32 )
        {
          v35 = *(_DWORD *)(*(_QWORD *)v10 + 288LL);
          if ( *(_QWORD *)(*(_QWORD *)v10 + 256LL) == *(_QWORD *)(v33 + 256) )
          {
            if ( (((unsigned __int16)(v35 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v33 + 288) >> 8)) & 0x1FF) == 0 )
              goto LABEL_38;
LABEL_111:
            v32 = 1;
            goto LABEL_38;
          }
          if ( (v35 & 0xF) != 2 || (*(_DWORD *)(v33 + 288) & 0xF) != 2 )
            goto LABEL_111;
        }
LABEL_38:
        if ( (*(_BYTE *)(v33 + 31) & 0x10) != 0 && (*(_BYTE *)(v33 + 26) & 8) == 0 && (*(_BYTE *)(v33 + 24) & 0x20) == 0 )
        {
          if ( v32 )
          {
            v112 = DpiRectIntersectsRectWithSubpixel(v34, (char *)v31 + 224, v31, &v136, (char *)v121 + 224, v121);
            v10 = v119;
            v28 = DWORD2(v127);
            if ( v112 )
            {
LABEL_52:
              if ( *v34 < v34[2] && v34[1] < v34[3] )
              {
                if ( v26 == v28 )
                {
                  if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v127) )
                  {
LABEL_242:
                    v6 = v129;
                    goto LABEL_200;
                  }
                  v26 = DWORD1(v127);
                  v10 = v119;
                  v28 = DWORD2(v127);
                }
                v38 = v26++;
                DWORD1(v127) = v26;
                v119 = v10;
                *(_QWORD *)(v128 + 8 * v38) = v31;
              }
            }
          }
          else if ( v136.left < *(_DWORD *)(v33 + 96)
                 && *v34 < v136.right
                 && v136.top < *(_DWORD *)(v33 + 100)
                 && *(_DWORD *)(v33 + 92) < v136.bottom )
          {
            goto LABEL_52;
          }
        }
        v31 = (struct tagWND *)*((_QWORD *)v31 + 11);
        if ( !v31 )
          break;
        continue;
      }
      break;
    }
    v36 = v118;
    v23 = v130;
    if ( v32 )
      v36 = 1;
    v118 = v36;
LABEL_43:
    v37 = *((_QWORD *)v25 + 5);
    v29 = v25;
    v25 = (struct tagWND *)*((_QWORD *)v25 + 13);
    v14 = v123;
    v27 = *(_BYTE *)(v37 + 31) & 4;
    if ( v25 != v23 )
      continue;
    break;
  }
  v6 = v129;
  v3 = v121;
  EmptyRgn = v129;
LABEL_59:
  v40 = v122;
  if ( (v122 & 8) == 0 )
  {
LABEL_60:
    v41 = v118;
    goto LABEL_61;
  }
  v48 = *((_QWORD *)v3 + 14);
  if ( !v48 )
  {
    v6 = EmptyRgn;
    goto LABEL_60;
  }
  v49 = 0;
  while ( 2 )
  {
    v50 = *(_QWORD *)(v48 + 40);
    v51 = (LONG *)(v50 + 88);
    if ( !v49 )
    {
      v52 = *(_DWORD *)(*(_QWORD *)v10 + 288LL);
      if ( *(_QWORD *)(*(_QWORD *)v10 + 256LL) == *(_QWORD *)(v50 + 256) )
      {
        if ( (((unsigned __int16)(v52 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v50 + 288) >> 8)) & 0x1FF) == 0 )
          goto LABEL_79;
      }
      else if ( (v52 & 0xF) == 2 && (*(_DWORD *)(v50 + 288) & 0xF) == 2 )
      {
        goto LABEL_79;
      }
      v49 = 1;
    }
LABEL_79:
    if ( (*(_BYTE *)(v50 + 31) & 0x10) != 0 && (*(_BYTE *)(v50 + 26) & 8) == 0 && (*(_BYTE *)(v50 + 24) & 0x20) == 0 )
    {
      if ( v49 )
      {
        v113 = DpiRectIntersectsRectWithSubpixel(v51, v48 + 224, v48, &v136, (char *)v3 + 224, v3);
        v10 = v119;
        v28 = DWORD2(v127);
        if ( v113 )
        {
LABEL_94:
          if ( *v51 < v51[2] && v51[1] < v51[3] )
          {
            if ( v26 == v28 )
            {
              if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v127) )
                goto LABEL_242;
              v26 = DWORD1(v127);
              v10 = v119;
              v28 = DWORD2(v127);
            }
            v53 = v26++;
            DWORD1(v127) = v26;
            v119 = v10;
            *(_QWORD *)(v128 + 8 * v53) = v48;
          }
        }
      }
      else if ( v136.left < *(_DWORD *)(v50 + 96)
             && *v51 < v136.right
             && v136.top < *(_DWORD *)(v50 + 100)
             && *(_DWORD *)(v50 + 92) < v136.bottom )
      {
        goto LABEL_94;
      }
    }
    v48 = *(_QWORD *)(v48 + 88);
    if ( v48 )
      continue;
    break;
  }
  v41 = v118;
  v6 = v129;
  if ( v49 )
    v41 = 1;
  v119 = v10;
  v118 = v41;
  EmptyRgn = v129;
LABEL_61:
  if ( v26 > 0 )
  {
    v59 = 0;
    v60 = 0;
    LODWORD(v123) = 0;
    if ( v26 > 30 )
    {
      v131 = (struct _RECTL *)Win32AllocPoolWithQuotaZInit(16LL * v26, 1769370453LL);
      v61 = v131;
      if ( !v131 )
        goto LABEL_199;
      v41 = v118;
    }
    else
    {
      v61 = &v138;
      v131 = &v138;
    }
    v62 = (const struct tagWND **)v128;
    v63 = v61;
    v64 = (unsigned int)v26;
    v65 = (const struct tagWND **)v128;
    do
    {
      v66 = *v62;
      v67 = *((_QWORD *)*v62 + 5);
      if ( *(_QWORD *)(v67 + 168) )
      {
        ++v59;
        *v65 = v66;
        LODWORD(v123) = v59;
        ++v65;
      }
      else
      {
        ++v60;
        *v63++ = *(struct _RECTL *)(v67 + 88);
        if ( v41 && IsDpiBoundaryBetweenWindows(v121, *v62) )
        {
          v114 = &v61[v69];
          LogicalToPhysicalInPlaceRectWithSubpixel(v68, v114, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(v121, v114, 0LL);
          v59 = (int)v123;
        }
      }
      v41 = v118;
      ++v62;
      --v64;
    }
    while ( v64 );
    v70 = v125;
    if ( !*v125 )
      *v70 = (HRGN)CreateEmptyRgn(v66, v118);
    if ( v60 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v132, *v70, 0, 0);
      if ( v132[0] && !RGNOBJAPI::bSubtract((RGNOBJAPI *)v132, &v136, v61, v60) && v132[0] )
        RGNOBJ::vSet((RGNOBJ *)v132);
      if ( !v133 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v132);
      if ( v132[0] )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v132[0] + 12LL));
        v73 = v129;
        EmptyRgn = v129;
LABEL_129:
        if ( !v73 )
          EmptyRgn = (HRGN)CreateEmptyRgn(v72, v71);
        v42 = v125;
        if ( v59 > 0 )
        {
          for ( i = 0LL; i < v59; ++i )
          {
            v87 = (const struct tagWND **)(v128 + 8 * i);
            SetRectRgnIndirect(EmptyRgn, *((_QWORD *)*v87 + 5) + 88LL);
            GreCombineRgn(EmptyRgn, EmptyRgn, *(_QWORD *)(*((_QWORD *)*v87 + 5) + 168LL), 1LL);
            if ( v118 )
            {
              if ( IsDpiBoundaryBetweenWindows(v121, *v87) )
              {
                v123 = EmptyRgn;
                v115 = 0LL;
                if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v88, &v123, 1LL) )
                  v115 = v123;
                v116 = 0LL;
                if ( (unsigned int)PhysicalToLogicalInPlaceRgnWorker(v121, &v123, 1) )
                  v116 = v123;
                if ( v123 != EmptyRgn )
                  GreCombineRgn(EmptyRgn, v123, 0LL, 5LL);
                if ( v115 )
                  GreDeleteObject(v115);
                if ( v116 )
                  GreDeleteObject(v116);
              }
              v42 = v125;
            }
            if ( (unsigned int)GreCombineRgn(*v42, *v42, EmptyRgn, 4LL) == 1 )
              break;
          }
          v61 = v131;
        }
        if ( v61 != &v138 )
          Win32FreePool(v61);
        v40 = v122;
LABEL_65:
        v43 = *(_QWORD *)(*(_QWORD *)v119 + 168LL);
        if ( v43 )
          GreCombineRgn(*v42, *v42, v43, 1LL);
        if ( !v126
          || (v74 = v121,
              v75 = 0,
              v76 = v130,
              v77 = v121,
              v78 = (const struct tagWND *)*((_QWORD *)v121 + 13),
              v78 == v130) )
        {
LABEL_68:
          v6 = EmptyRgn;
          v44 = 1;
          goto LABEL_69;
        }
        while ( 1 )
        {
          v79 = *((_QWORD *)v78 + 5);
          v119 = *(HRGN *)(v79 + 168);
          if ( !v119 )
            goto LABEL_138;
          v80 = *((_QWORD *)v77 + 5);
          if ( (*(_BYTE *)(v80 + 26) & 8) != 0 && (*(_DWORD *)(v80 + 232) & 2) == 0 )
            break;
          if ( (v40 & 0x1000000) != 0 )
          {
            v75 = 1;
            goto LABEL_162;
          }
          if ( v75 )
            goto LABEL_162;
LABEL_143:
          if ( IsDpiBoundaryBetweenWindows(v74, v78) )
          {
            v117 = 0LL;
            if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v78, &v119, 1LL) )
              v117 = v119;
            v82 = PhysicalToLogicalInPlaceRgnWorker(v74, &v119, 1);
            if ( v82 && v117 )
              GreDeleteObject(v117);
          }
          else
          {
            v82 = PhysicalToLogicalInPlaceRgn(v81, (__int64)&v119);
          }
          v83 = *v42;
          v84 = v119;
          v85 = GreCombineRgn(v83, v83, v119, 1LL) == 1;
          if ( v82 )
            GreDeleteObject(v84);
          if ( v85 )
            goto LABEL_68;
          v74 = v121;
          v42 = v125;
LABEL_138:
          v77 = v78;
          v78 = (const struct tagWND *)*((_QWORD *)v78 + 13);
          if ( v78 == v76 )
            goto LABEL_68;
        }
        v75 = 1;
LABEL_162:
        if ( (*(_WORD *)(v79 + 42) & 0x2FFF) == 0x29D )
          goto LABEL_68;
        goto LABEL_143;
      }
    }
    else
    {
      SetRectRgnIndirect(*v70, &v136);
    }
    v73 = EmptyRgn;
    goto LABEL_129;
  }
  if ( *(char *)(*(_QWORD *)v10 + 19LL) < 0 )
    v136 = 0LL;
  v42 = v125;
  if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(v125, &v136) )
    goto LABEL_65;
LABEL_200:
  SetOrCreateRectRgnIndirectPublic(v125, gZero);
  v44 = 0;
LABEL_69:
  if ( v6 )
    GreDeleteObject(v6);
  if ( (_DWORD)v127 )
    Win32FreePool((void *)v128);
  return v44;
}
