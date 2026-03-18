/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C004BDA0
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C004A690 (GreUpdateSpriteVisRgn.c)
 *     CalcVisRgn @ 0x1C004B8D0 (CalcVisRgn.c)
 * Callees:
 *     ?ExcludeWindowRects@@YAHPEBUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z @ 0x1C0048F40 (-ExcludeWindowRects@@YAHPEBUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C00490B4 (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C004A600 (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C004A618 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C004C854 (PhysicalToLogicalInPlaceRect.c)
 *     GreSubtractRgnRectList @ 0x1C008BE50 (GreSubtractRgnRectList.c)
 *     GetMonitorRectForDpi @ 0x1C00B0924 (GetMonitorRectForDpi.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00FD674 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00FD738 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00FECAC (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C0100464 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C0141050 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1C01DF5F4 (DpiRectContainsRectWithSubpixel.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01DF6F0 (DpiRectIntersectsRectWithSubpixel.c)
 */

__int64 __fastcall CalcVisRgnWorker(const struct tagWND *a1, HRGN *a2, int a3)
{
  HRGN v3; // r13
  __int64 v4; // rax
  HRGN v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // r12d
  int v9; // r10d
  __int64 v10; // r8
  HRGN v11; // r14
  HRGN v12; // rdi
  _BYTE *v13; // r11
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  LONG left; // edx
  LONG v20; // ecx
  LONG v21; // edx
  LONG v22; // ecx
  HRGN v23; // rbx
  LONG v24; // ecx
  LONG v25; // edx
  LONG v26; // ecx
  LONG v27; // edx
  const struct tagWND *v28; // r12
  const struct tagWND *v29; // rdi
  int v30; // r8d
  int v31; // ecx
  int v32; // r9d
  HRGN v33; // rsi
  int v34; // r15d
  HRGN v35; // rbx
  int v36; // r14d
  __int64 v37; // rdx
  LONG *v38; // rdi
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  HRGN *v45; // r14
  __int64 v46; // r8
  unsigned int v47; // ebx
  LONG right; // edx
  LONG v50; // ecx
  LONG top; // ecx
  LONG bottom; // edx
  const struct tagWND *v53; // rdx
  int v54; // eax
  unsigned int v55; // r12d
  int v56; // r14d
  _BYTE *v57; // rbx
  const struct tagWND **v58; // rdi
  _OWORD *v59; // r13
  const struct tagWND *v60; // r11
  const struct tagWND **v61; // rsi
  __int64 v62; // r15
  __int64 v63; // rcx
  _QWORD *v64; // rdi
  __int64 v65; // rcx
  __int64 EmptyRgn; // rax
  __int64 v67; // rsi
  __int64 v68; // r9
  __int64 v69; // r10
  const struct tagWND *v70; // rbx
  int v71; // r12d
  HRGN v72; // r9
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // r9
  int v76; // esi
  HRGN v77; // rcx
  HRGN v78; // r14
  BOOL v79; // edi
  __int64 v80; // rbx
  _QWORD *v81; // r12
  __int64 *v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // r9
  __int64 v85; // rcx
  unsigned int v86; // eax
  int v87; // ecx
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // r8
  unsigned __int16 v92; // bx
  __int64 v93; // rax
  __int64 v94; // rbx
  __int64 v95; // r8
  int v96; // eax
  _BYTE *v97; // rbx
  HRGN v98; // rdi
  HRGN v99; // r14
  HRGN v100; // rdi
  int v101; // [rsp+38h] [rbp-D0h]
  int v103[2]; // [rsp+40h] [rbp-C8h] BYREF
  const struct tagWND *v104; // [rsp+48h] [rbp-C0h] BYREF
  struct tagWND *v105[2]; // [rsp+50h] [rbp-B8h] BYREF
  HRGN v106; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v107; // [rsp+68h] [rbp-A0h]
  HRGN *v108; // [rsp+70h] [rbp-98h]
  _QWORD *v109; // [rsp+78h] [rbp-90h]
  HRGN v110; // [rsp+80h] [rbp-88h]
  __int128 v111; // [rsp+88h] [rbp-80h] BYREF
  __int128 v112; // [rsp+98h] [rbp-70h]
  HRGN v113; // [rsp+A8h] [rbp-60h]
  __int64 v114; // [rsp+B0h] [rbp-58h] BYREF
  struct tagRECT v115; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v116[240]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v117[480]; // [rsp+1C8h] [rbp+C0h] BYREF

  v3 = (HRGN)a1;
  v108 = a2;
  v104 = a1;
  LODWORD(v106) = 0;
  memset(v116, 0, sizeof(v116));
  v4 = *((_QWORD *)v3 + 13);
  v5 = 0LL;
  v110 = 0LL;
  v113 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  if ( !v4
    || (v6 = *((_QWORD *)v3 + 3)) != 0 && (v7 = *(_QWORD *)(v6 + 8)) != 0 && v4 == *(_QWORD *)(v7 + 24)
    || (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)v3 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v4 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
  {
    v8 = 0;
    v101 = 0;
    goto LABEL_6;
  }
  WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi((const struct tagWND *)v3);
  if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((const struct tagWND **)v3 + 13)) )
    goto LABEL_181;
  v89 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v3 + 5) + 256LL));
  v8 = 0;
  v90 = v89;
  v101 = 0;
  if ( !v89 )
    goto LABEL_6;
  v91 = *(_DWORD *)(*((_QWORD *)v3 + 5) + 288LL) >> 8;
  LOWORD(v91) = v91 & 0x1FF;
  GetMonitorRectForDpi(v105, v89, v91);
  if ( *(struct tagWND **)(*(_QWORD *)(v90 + 40) + 28LL) != v105[0] )
  {
LABEL_181:
    v8 = 1;
    v101 = 1;
    goto LABEL_6;
  }
  v101 = 0;
LABEL_6:
  v9 = a3;
  v10 = *((_QWORD *)v3 + 5);
  v103[0] = v8;
  if ( (a3 & 1) != 0 )
  {
    v115 = *(struct tagRECT *)(v10 + 88);
  }
  else
  {
    v115 = *(struct tagRECT *)(v10 + 104);
    right = v115.right;
    v50 = _mm_cvtsi128_si32((__m128i)v115);
    if ( v50 <= *(_DWORD *)(v10 + 88) )
      v50 = *(_DWORD *)(v10 + 88);
    v115.left = v50;
    if ( v115.right >= *(_DWORD *)(v10 + 96) )
      right = *(_DWORD *)(v10 + 96);
    v115.right = right;
    if ( v50 >= right )
      goto LABEL_109;
    top = v115.top;
    bottom = v115.bottom;
    if ( v115.top <= *(_DWORD *)(v10 + 92) )
      top = *(_DWORD *)(v10 + 92);
    v115.top = top;
    if ( v115.bottom >= *(_DWORD *)(v10 + 100) )
      bottom = *(_DWORD *)(v10 + 100);
    v115.bottom = bottom;
    if ( top >= bottom )
LABEL_109:
      v115 = 0LL;
  }
  v11 = v3;
  v12 = (HRGN)*((_QWORD *)v3 + 13);
  v13 = *(_BYTE **)(*(_QWORD *)(*((_QWORD *)v3 + 3) + 8LL) + 24LL);
  v107 = v13;
  v14 = (_QWORD *)*((_QWORD *)v13 + 13);
  v109 = v14;
  if ( !v12 )
    goto LABEL_151;
  if ( v12 == (HRGN)v14 )
  {
    if ( (*(_WORD *)(v10 + 42) & 0x2FFF) == 0x29D )
      goto LABEL_51;
    goto LABEL_151;
  }
  while ( 1 )
  {
    if ( *((_QWORD **)v12 + 13) == v14 && (*(_WORD *)(*((_QWORD *)v12 + 5) + 42LL) & 0x2FFF) != 0x29D )
      goto LABEL_151;
    if ( (v9 & 0x1004000) != 0 && (*(_WORD *)(*((_QWORD *)v12 + 5) + 42LL) & 0x2FFF) == 0x29D )
      goto LABEL_51;
    if ( (v9 & 0x4000) != 0 )
    {
      v87 = *(_DWORD *)(*((_QWORD *)v11 + 5) + 24LL);
      if ( ((v87 & 0x80000) != 0 || (v87 & 0x20000000) != 0) && ((v87 & 0x2000000) == 0 || v12 == (HRGN)v13) )
        goto LABEL_51;
    }
    if ( (v9 & 0x8000000) != 0
      && (*(_WORD *)(*((_QWORD *)v12 + 5) + 42LL) & 0x2FFF) == 0x29D
      && (unsigned int)IsWindowDesktopComposed(v12) )
    {
      break;
    }
    v15 = *((_QWORD *)v12 + 5);
    if ( *(_QWORD *)(v15 + 168) )
      LODWORD(v106) = 1;
    if ( !v8 )
    {
      v16 = *((_QWORD *)v12 + 13);
      if ( v16 )
      {
        v17 = *((_QWORD *)v12 + 3);
        if ( (!v17 || (v18 = *(_QWORD *)(v17 + 8)) == 0 || v16 != *(_QWORD *)(v18 + 24))
          && (((unsigned __int16)(*(_DWORD *)(v15 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v16 + 40)
                                                                                              + 288LL) >> 8)) & 0x1FF) != 0 )
        {
          v92 = GetWindowCoordinateSpaceDpi((const struct tagWND *)v12);
          if ( v92 != GetWindowCoordinateSpaceDpi(*((const struct tagWND **)v12 + 13))
            || (v93 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v12 + 5) + 256LL)), (v94 = v93) != 0)
            && (v95 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 288LL) >> 8,
                LOWORD(v95) = v95 & 0x1FF,
                GetMonitorRectForDpi(&v114, v93, v95),
                *(_QWORD *)(*(_QWORD *)(v94 + 40) + 28LL) != v114) )
          {
            v8 = 1;
            v101 = 1;
            v103[0] = 1;
          }
        }
      }
    }
    *(_OWORD *)v105 = *(_OWORD *)(*((_QWORD *)v12 + 5) + 104LL);
    if ( v8 )
    {
      v23 = v3 + 56;
      if ( (unsigned int)DpiRectContainsRectWithSubpixel(v105, v12 + 56, v12, &v115, v3 + 56, v3) )
        goto LABEL_36;
      LogicalToPhysicalInPlaceRectWithSubpixel(v12, v105, 0LL);
      PhysicalToLogicalInPlaceRectWithSubpixel(v3, v105, 0LL);
    }
    else
    {
      PhysicalToLogicalInPlaceRect(v11, v105);
    }
    left = v115.left;
    v20 = v115.right;
    if ( v115.left <= SLODWORD(v105[0]) )
      left = (LONG)v105[0];
    v115.left = left;
    if ( v115.right >= SLODWORD(v105[1]) )
      v20 = (LONG)v105[1];
    v115.right = v20;
    if ( left >= v20 )
      goto LABEL_150;
    v21 = v115.top;
    v22 = v115.bottom;
    if ( v115.top <= SHIDWORD(v105[0]) )
      v21 = HIDWORD(v105[0]);
    v115.top = v21;
    if ( v115.bottom >= SHIDWORD(v105[1]) )
      v22 = HIDWORD(v105[1]);
    v115.bottom = v22;
    if ( v21 >= v22 )
    {
LABEL_150:
      v115 = 0LL;
      goto LABEL_151;
    }
    v23 = v3 + 56;
LABEL_36:
    *(_OWORD *)v105 = *(_OWORD *)(*((_QWORD *)v12 + 5) + 88LL);
    if ( v8 )
    {
      if ( (unsigned int)DpiRectContainsRectWithSubpixel(v105, v12 + 56, v12, &v115, v23, v3) )
        goto LABEL_48;
      LogicalToPhysicalInPlaceRectWithSubpixel(v12, v105, 0LL);
      PhysicalToLogicalInPlaceRectWithSubpixel(v3, v105, 0LL);
    }
    else
    {
      PhysicalToLogicalInPlaceRect(v11, v105);
    }
    v24 = v115.left;
    v25 = v115.right;
    if ( v115.left <= SLODWORD(v105[0]) )
      v24 = (LONG)v105[0];
    v115.left = v24;
    if ( v115.right >= SLODWORD(v105[1]) )
      v25 = (LONG)v105[1];
    v115.right = v25;
    if ( v24 >= v25 )
      goto LABEL_150;
    v26 = v115.top;
    v27 = v115.bottom;
    if ( v115.top <= SHIDWORD(v105[0]) )
      v26 = HIDWORD(v105[0]);
    v115.top = v26;
    if ( v115.bottom >= SHIDWORD(v105[1]) )
      v27 = HIDWORD(v105[1]);
    v115.bottom = v27;
    if ( v26 >= v27 )
      goto LABEL_150;
LABEL_48:
    v14 = v109;
    v11 = v12;
    v12 = (HRGN)*((_QWORD *)v12 + 13);
    v9 = a3;
    v13 = v107;
    if ( v12 == (HRGN)v109 )
      goto LABEL_51;
  }
  LOWORD(v9) = a3;
  v13 = v107;
LABEL_51:
  v28 = (const struct tagWND *)*((_QWORD *)v3 + 13);
  v29 = (const struct tagWND *)v109;
  v30 = 0;
  *((_QWORD *)&v112 + 1) = v116;
  v31 = v9 & 0x10;
  *(_QWORD *)((char *)&v111 + 4) = 0x1E00000000LL;
  v32 = 30;
  *(_QWORD *)&v112 = v116;
  v33 = v3;
  if ( v28 != (const struct tagWND *)v109 )
  {
    v34 = v9 & 0x4000;
    while ( 2 )
    {
      if ( !v34
        || (v44 = *((_QWORD *)v33 + 5), (*(_BYTE *)(v44 + 27) & 0x20) == 0)
        || (*(_DWORD *)(v44 + 24) & 0x2000000) != 0 && v28 != (const struct tagWND *)v13 )
      {
        if ( !v31 )
          goto LABEL_64;
        v35 = (HRGN)*((_QWORD *)v28 + 14);
        if ( v35 == v33 )
          goto LABEL_64;
        v36 = 0;
        if ( !v35 )
          goto LABEL_64;
LABEL_57:
        if ( v35 == v33 )
        {
LABEL_61:
          v39 = v101;
          v29 = (const struct tagWND *)v109;
          if ( v36 )
            v39 = 1;
          v101 = v39;
          v103[0] = v39;
LABEL_64:
          v40 = *((_QWORD *)v28 + 5);
          v33 = (HRGN)v28;
          v28 = (const struct tagWND *)*((_QWORD *)v28 + 13);
          v31 = *(_BYTE *)(v40 + 31) & 4;
          if ( v28 != v29 )
          {
            v13 = v107;
            continue;
          }
          break;
        }
        v37 = *((_QWORD *)v35 + 5);
        v38 = (LONG *)(v37 + 88);
        if ( v36 )
        {
LABEL_59:
          if ( (*(_BYTE *)(v37 + 31) & 0x10) != 0
            && (*(_BYTE *)(v37 + 26) & 8) == 0
            && (*(_BYTE *)(v37 + 24) & 0x20) == 0 )
          {
            if ( v36 )
            {
              v96 = DpiRectIntersectsRectWithSubpixel(v38, v35 + 56, v35, &v115, v3 + 56, v3);
              v30 = DWORD1(v111);
              v32 = DWORD2(v111);
              if ( v96 )
              {
LABEL_76:
                if ( *v38 < v38[2] && v38[1] < v38[3] )
                {
                  if ( v30 == v32 )
                  {
                    if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v111) )
                    {
                      v5 = v113;
                      goto LABEL_151;
                    }
                    v30 = DWORD1(v111);
                    v32 = DWORD2(v111);
                  }
                  v43 = v30++;
                  DWORD1(v111) = v30;
                  *(_QWORD *)(v112 + 8 * v43) = v35;
                }
              }
            }
            else if ( v115.left < *(_DWORD *)(v37 + 96)
                   && *v38 < v115.right
                   && v115.top < *(_DWORD *)(v37 + 100)
                   && *(_DWORD *)(v37 + 92) < v115.bottom )
            {
              goto LABEL_76;
            }
          }
          v35 = (HRGN)*((_QWORD *)v35 + 11);
          if ( !v35 )
            goto LABEL_61;
          goto LABEL_57;
        }
        v41 = *((_QWORD *)v3 + 5);
        v42 = *(_DWORD *)(v41 + 288);
        if ( *(_QWORD *)(v41 + 256) == *(_QWORD *)(v37 + 256) )
        {
          if ( (((unsigned __int16)(v42 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v37 + 288) >> 8)) & 0x1FF) == 0 )
          {
LABEL_68:
            v30 = DWORD1(v111);
            goto LABEL_59;
          }
        }
        else if ( (v42 & 0xF) == 2 && (*(_DWORD *)(v37 + 288) & 0xF) == 2 )
        {
          goto LABEL_68;
        }
        v36 = 1;
        goto LABEL_68;
      }
      break;
    }
    v5 = v113;
    LOBYTE(v9) = a3;
    v110 = v113;
  }
  if ( (v9 & 8) != 0 )
  {
    v53 = (const struct tagWND *)*((_QWORD *)v3 + 14);
    if ( v53 )
    {
      v54 = ExcludeWindowRects((const struct tagWND *)v3, v53, 0LL, &v115, (struct _CalcVisRgnData *)&v111, v103);
      v5 = v113;
      if ( !v54 )
        goto LABEL_151;
      v30 = DWORD1(v111);
      v101 = v103[0];
      v110 = v113;
    }
  }
  if ( v30 > 0 )
  {
    v55 = 0;
    v56 = 0;
    if ( v30 > 30 )
    {
      v107 = (_BYTE *)Win32AllocPoolWithQuotaZInit(16LL * v30, 1769370453LL);
      v57 = v107;
      if ( !v107 )
        goto LABEL_151;
      v30 = DWORD1(v111);
    }
    else
    {
      v57 = v117;
      v107 = v117;
    }
    if ( v30 > 0 )
    {
      v58 = (const struct tagWND **)v112;
      v59 = v57;
      v60 = v104;
      v61 = (const struct tagWND **)v112;
      v62 = (unsigned int)v30;
      do
      {
        v63 = *((_QWORD *)*v58 + 5);
        if ( *(_QWORD *)(v63 + 168) )
        {
          ++v56;
          *v61++ = *v58;
        }
        else
        {
          ++v55;
          *v59++ = *(_OWORD *)(v63 + 88);
          if ( v101 && IsDpiBoundaryBetweenWindows(v60, *v58) )
          {
            v97 = &v57[16 * v68];
            LogicalToPhysicalInPlaceRectWithSubpixel(v69, v97, 0LL);
            PhysicalToLogicalInPlaceRectWithSubpixel(v104, v97, 0LL);
            v60 = v104;
            v57 = v107;
          }
        }
        ++v58;
        --v62;
      }
      while ( v62 );
      v5 = v110;
      v3 = (HRGN)v104;
    }
    v64 = v108;
    v65 = (__int64)*v108;
    if ( !*v108 )
    {
      EmptyRgn = CreateEmptyRgn();
      *v64 = EmptyRgn;
      v65 = EmptyRgn;
    }
    if ( v55 )
      GreSubtractRgnRectList(v65, &v115, v57, v55);
    else
      SetRectRgnIndirect(v65, &v115);
    if ( !v5 )
    {
      v5 = (HRGN)CreateEmptyRgn();
      v110 = v5;
    }
    v67 = v56;
    if ( v56 <= 0 )
    {
LABEL_129:
      if ( v57 != v117 )
        Win32FreePool(v57);
      v45 = v108;
      v29 = (const struct tagWND *)v109;
LABEL_88:
      v46 = *(_QWORD *)(*((_QWORD *)v3 + 5) + 168LL);
      if ( v46 )
        GreCombineRgn(*v45, *v45, v46, 1LL);
      if ( !(_DWORD)v106 || (v70 = (const struct tagWND *)*((_QWORD *)v3 + 13), v71 = 0, v72 = v3, v70 == v29) )
      {
LABEL_91:
        v47 = 1;
        goto LABEL_92;
      }
      while ( 1 )
      {
        v73 = *((_QWORD *)v70 + 5);
        v106 = *(HRGN *)(v73 + 168);
        if ( !v106 )
          goto LABEL_139;
        v74 = *((_QWORD *)v72 + 5);
        if ( (*(_BYTE *)(v74 + 26) & 8) != 0 && (*(_DWORD *)(v74 + 232) & 2) == 0 )
          break;
        if ( (a3 & 0x1000000) != 0 )
        {
          v71 = 1;
LABEL_172:
          if ( (*(_WORD *)(v73 + 42) & 0x2FFF) == 0x29D )
            goto LABEL_140;
          goto LABEL_144;
        }
        if ( v71 )
          goto LABEL_172;
LABEL_144:
        if ( IsDpiBoundaryBetweenWindows((const struct tagWND *)v3, v70) )
        {
          v100 = 0LL;
          if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v70, &v106, 1LL) )
            v100 = v106;
          v76 = PhysicalToLogicalInPlaceRgnWorker((const struct tagWND *)v3, &v106, 1);
          if ( v76 && v100 )
            GreDeleteObject(v100);
        }
        else
        {
          v76 = PhysicalToLogicalInPlaceRgn(v75, (__int64)&v106);
        }
        v77 = *v45;
        v78 = v106;
        v79 = GreCombineRgn(v77, v77, v106, 1LL) == 1;
        if ( v76 )
          GreDeleteObject(v78);
        if ( v79 )
        {
LABEL_140:
          v5 = v110;
          goto LABEL_91;
        }
        v29 = (const struct tagWND *)v109;
LABEL_139:
        v45 = v108;
        v72 = (HRGN)v70;
        v70 = (const struct tagWND *)*((_QWORD *)v70 + 13);
        if ( v70 == v29 )
          goto LABEL_140;
      }
      v71 = 1;
      goto LABEL_172;
    }
    v80 = 0LL;
    v81 = v64;
    while ( 1 )
    {
      v82 = (__int64 *)(v112 + 8 * v80);
      SetRectRgnIndirect(v5, *(_QWORD *)(*v82 + 40) + 88LL);
      GreCombineRgn(v5, v5, *(_QWORD *)(*(_QWORD *)(*v82 + 40) + 168LL), 1LL);
      if ( v101 )
      {
        v83 = *((_QWORD *)v3 + 5);
        v84 = *v82;
        v85 = *(_QWORD *)(*v82 + 40);
        v86 = *(_DWORD *)(v83 + 288);
        if ( *(_QWORD *)(v83 + 256) == *(_QWORD *)(v85 + 256) )
        {
          if ( (((unsigned __int16)(v86 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v85 + 288) >> 8)) & 0x1FF) != 0 )
            goto LABEL_203;
        }
        else if ( (v86 & 0xF) != 2 || (*(_DWORD *)(v85 + 288) & 0xF) != 2 )
        {
LABEL_203:
          v104 = (const struct tagWND *)v5;
          v98 = 0LL;
          if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v84, &v104, 1LL) )
            v98 = (HRGN)v104;
          v99 = 0LL;
          if ( (unsigned int)PhysicalToLogicalInPlaceRgnWorker((const struct tagWND *)v3, (HRGN *)&v104, 1) )
            v99 = (HRGN)v104;
          if ( v104 != (const struct tagWND *)v5 )
            GreCombineRgn(v5, v104, 0LL, 5LL);
          if ( v98 )
            GreDeleteObject(v98);
          if ( v99 )
            GreDeleteObject(v99);
        }
      }
      if ( (unsigned int)GreCombineRgn(*v81, *v81, v5, 4LL) != 1 && ++v80 < v67 )
        continue;
      v57 = v107;
      goto LABEL_129;
    }
  }
  if ( *(char *)(*((_QWORD *)v3 + 5) + 19LL) < 0 )
    v115 = 0LL;
  v45 = v108;
  if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(v108, &v115) )
    goto LABEL_88;
LABEL_151:
  SetOrCreateRectRgnIndirectPublic(v108, gZero);
  v47 = 0;
LABEL_92:
  if ( v5 )
    GreDeleteObject(v5);
  if ( (_DWORD)v111 )
    Win32FreePool(v112);
  return v47;
}
