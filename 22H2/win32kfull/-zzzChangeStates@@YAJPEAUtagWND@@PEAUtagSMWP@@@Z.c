/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006DF90 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     DecomposeWindowIfNeeded @ 0x1C0035294 (DecomposeWindowIfNeeded.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00372FC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C0037474 (PWInsertAfter.c)
 *     PostShellHookMessages @ 0x1C0043540 (PostShellHookMessages.c)
 *     SetVisible @ 0x1C004BCA0 (SetVisible.c)
 *     ComposeWindowIfNeeded @ 0x1C004C260 (ComposeWindowIfNeeded.c)
 *     OffsetChildren @ 0x1C004C97C (OffsetChildren.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     IsTrayWindow @ 0x1C005EA90 (IsTrayWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0067530 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z @ 0x1C006A054 (-ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z.c)
 *     GetNewMonitor @ 0x1C006BEBC (GetNewMonitor.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006ECE8 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006F670 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     LinkWindow @ 0x1C006FC60 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C007061C (IsChildWindowDpiBoundary.c)
 *     xxxInternalInvalidate @ 0x1C00724E0 (xxxInternalInvalidate.c)
 *     GreClientRgnUpdated @ 0x1C0075010 (GreClientRgnUpdated.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     UnlinkWindow @ 0x1C007E8D8 (UnlinkWindow.c)
 *     zzzCalcStartCursorHide @ 0x1C007FBF0 (zzzCalcStartCursorHide.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     UpdateSprite @ 0x1C00BE6C4 (UpdateSprite.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00EF608 (DeleteOrSetRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C00EFEEC (SetOldRedirectionBitmap.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00F12BC (UpdateMonitorForWindowAndChildren.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F14BC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F1500 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     RecreateRedirectionBitmap @ 0x1C00F1598 (RecreateRedirectionBitmap.c)
 *     SelectWindowRgn @ 0x1C011172C (SelectWindowRgn.c)
 *     ?ReValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C01138FC (-ReValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C0118A6C (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     CreateSpb @ 0x1C01617C0 (CreateSpb.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     InvalidateGDIWindows @ 0x1C01E8450 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  struct tagWND *v2; // r14
  unsigned int v3; // r12d
  int v4; // r15d
  struct tagSMWP *v5; // r13
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rdi
  int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r13d
  __int64 DesktopWindow; // rax
  int v16; // r8d
  int v17; // r9d
  int v18; // r11d
  int v19; // ebx
  _DWORD *v20; // rdx
  int v21; // r15d
  int v22; // ecx
  unsigned int v23; // r15d
  int v24; // r12d
  unsigned int v25; // r12d
  _DWORD *v26; // rax
  _DWORD *v27; // rdx
  int v28; // ecx
  int v29; // ecx
  __int128 v30; // xmm0
  __int64 v31; // rcx
  int v32; // eax
  int v33; // r11d
  __int64 v34; // rdx
  __int64 v35; // rcx
  BOOL v36; // r14d
  __int64 v37; // r8
  __int64 v38; // rdx
  int v39; // ebx
  int v40; // eax
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rbx
  BOOL v44; // eax
  __int64 v45; // r14
  struct tagRECT *v46; // rdx
  __int64 NewMonitor; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 *v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  int v55; // edx
  struct tagCVR *v57; // rcx
  int v58; // r8d
  __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // eax
  unsigned int v65; // edx
  int v66; // ebx
  int v67; // eax
  __int64 v68; // rdx
  int v69; // r8d
  int v70; // eax
  int v71; // edx
  __int64 v72; // rax
  __int64 i; // rbx
  int v74; // eax
  unsigned int v75; // ecx
  __int64 v76; // rax
  int v77; // ecx
  int v78; // r15d
  int v79; // r12d
  int v80; // ecx
  __int64 v81; // rcx
  char v82; // bl
  _DWORD *v83; // rdx
  char v84; // bl
  int v85; // eax
  __int64 v86; // r8
  __int64 v87; // rbx
  __int64 v88; // rcx
  int v89; // r8d
  int v90; // r9d
  __int64 v91; // r10
  int v92; // r11d
  __int64 v93; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v96; // rcx
  __int64 CurrentThreadProcess; // rax
  int v98; // [rsp+20h] [rbp-E0h]
  int updated; // [rsp+60h] [rbp-A0h]
  int v100; // [rsp+64h] [rbp-9Ch]
  int v101; // [rsp+68h] [rbp-98h]
  unsigned int v102; // [rsp+6Ch] [rbp-94h]
  __int64 v105; // [rsp+80h] [rbp-80h] BYREF
  int v106; // [rsp+88h] [rbp-78h]
  int v107; // [rsp+8Ch] [rbp-74h]
  int v108; // [rsp+90h] [rbp-70h]
  struct tagSIZE v109; // [rsp+98h] [rbp-68h] BYREF
  struct tagPOINT v110; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v111; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v112; // [rsp+B8h] [rbp-48h] BYREF
  int v113; // [rsp+C0h] [rbp-40h]
  int v114; // [rsp+C4h] [rbp-3Ch]
  char v115[8]; // [rsp+C8h] [rbp-38h] BYREF
  char v116[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v117; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v118; // [rsp+E8h] [rbp-18h]
  _QWORD v119[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v120; // [rsp+108h] [rbp+8h] BYREF
  __int128 v121; // [rsp+118h] [rbp+18h] BYREF
  struct tagRECT v122; // [rsp+128h] [rbp+28h] BYREF
  __int128 v123; // [rsp+138h] [rbp+38h] BYREF
  __int128 v124; // [rsp+148h] [rbp+48h]

  v2 = a1;
  v3 = 0;
  updated = 0;
  v119[2] = 0LL;
  v4 = 0;
  v100 = 0;
  v106 = 0;
  v118 = 0LL;
  v5 = a2;
  v117 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v116);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v119[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v119;
  v119[1] = v2;
  HMLockObject(v2);
  v9 = (__int64 *)*((_QWORD *)v5 + 5);
  v10 = *((_DWORD *)v5 + 7) - 1;
  v108 = v10;
  if ( v10 < 0 )
    goto LABEL_66;
  do
  {
    v8 = *v9;
    v101 = 0;
    v102 = 0;
    v105 = 0LL;
    if ( !v8 )
      goto LABEL_63;
    LOBYTE(v7) = 1;
    v11 = HMValidateHandleNoSecure(v8, v7);
    if ( !v11 || !(unsigned int)IsStillWindowC((HWND)v9[1]) )
    {
      *((_DWORD *)v9 + 8) = 6159;
      *v9 = 0LL;
    }
    v8 = v9[4] & 0x18E7;
    if ( (_DWORD)v8 == 6151 )
    {
      *((_DWORD *)v9 + 8) |= 8u;
      goto LABEL_63;
    }
    if ( (_DWORD)v8 == 6147
      && (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 19LL) & 4) == 0
      && (unsigned int)ValidateZorder((struct tagCVR *)v9) )
    {
      *((_DWORD *)v9 + 8) |= 0xCu;
      v8 = v9[12];
      if ( v8 )
      {
        GreDeleteObject(v8);
        v9[12] = 0LL;
      }
      goto LABEL_63;
    }
    v12 = 6147LL;
    if ( (v9[4] & 0x1803) != 0x1803 )
    {
      v13 = *(_QWORD *)(v11 + 40);
      if ( (*(_BYTE *)(v13 + 27) & 0x20) == 0 && (*(_BYTE *)(v13 + 26) & 8) == 0
        || (v14 = *(_DWORD *)(v13 + 100) - *(_DWORD *)(v13 + 92),
            v107 = *(_DWORD *)(v13 + 96) - *(_DWORD *)(v13 + 88),
            v107 == *((_DWORD *)v9 + 6))
        && v14 == *((_DWORD *)v9 + 7) )
      {
        v14 = HIDWORD(v105);
        v107 = v105;
      }
      else
      {
        v101 = 1;
      }
      if ( *(_DWORD *)(v13 + 88) != *((_DWORD *)v9 + 4) || *(_DWORD *)(v13 + 92) != *((_DWORD *)v9 + 5) )
        v102 = 1;
      v111 = *(_OWORD *)(*((_QWORD *)v2 + 5) + 104LL);
      if ( (unsigned int)IsChildWindowDpiBoundary((struct tagWND *)v11) )
      {
        v93 = 0LL;
        if ( (*((_DWORD *)v9 + 39) & 0x100) == 0 )
        {
          v93 = v11 + 224;
          *(_DWORD *)(v11 + 228) = 0;
          *(_DWORD *)(v11 + 224) = 0;
        }
        LogicalToPhysicalInPlaceRectWithSubpixel(v2, &v111, v93);
        PhysicalToLogicalInPlaceRectWithSubpixel(v11, &v111, v93);
        v106 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 88LL) = *((_DWORD *)v9 + 4);
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 92LL) = *((_DWORD *)v9 + 5);
      DesktopWindow = GetDesktopWindow(v11);
      v18 = DWORD1(v111);
      v19 = v111;
      if ( v2 != (struct tagWND *)DesktopWindow )
      {
        *(_DWORD *)(*(_QWORD *)(v11 + 40) + 88LL) += v111;
        *(_DWORD *)(*(_QWORD *)(v11 + 40) + 92LL) += v18;
      }
      v20 = *(_DWORD **)(v11 + 40);
      v21 = v20[22];
      v22 = *((_DWORD *)v9 + 6) + v21;
      v23 = v21 - v16;
      v24 = v20[23];
      v20[24] = v22;
      v25 = v24 - v17;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 100LL) = *((_DWORD *)v9 + 7) + *(_DWORD *)(*(_QWORD *)(v11 + 40) + 92LL);
      v26 = *(_DWORD **)(v11 + 40);
      v27 = v26;
      v28 = v26[22];
      if ( v26[24] < v28 )
      {
        v26[24] = v28;
        v26 = *(_DWORD **)(v11 + 40);
        v27 = v26;
      }
      v29 = v26[23];
      if ( v26[25] < v29 )
      {
        v26[25] = v29;
        v27 = *(_DWORD **)(v11 + 40);
      }
      if ( v11 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
      {
        if ( v2 != (struct tagWND *)GetDesktopWindow(v11) )
        {
          v89 -= v19;
          v90 -= v92;
        }
        if ( v89 | v90 )
        {
          *(_DWORD *)(v91 + 316) += v89;
          *(_DWORD *)(v91 + 320) += v90;
          v27 = *(_DWORD **)(v11 + 40);
        }
      }
      v30 = *(_OWORD *)(v27 + 26);
      v27[26] = *((_DWORD *)v9 + 10);
      v31 = *(_QWORD *)(v11 + 40);
      v32 = *((_DWORD *)v9 + 11);
      v124 = v30;
      *(_DWORD *)(v31 + 108) = v32;
      if ( v2 != (struct tagWND *)GetDesktopWindow(v11) )
      {
        *(_DWORD *)(*(_QWORD *)(v11 + 40) + 104LL) += v19;
        *(_DWORD *)(*(_QWORD *)(v11 + 40) + 108LL) += v33;
      }
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 112LL) = *((_DWORD *)v9 + 12) + *(_DWORD *)(*(_QWORD *)(v11 + 40) + 104LL);
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 116LL) = *((_DWORD *)v9 + 13) + *(_DWORD *)(*(_QWORD *)(v11 + 40) + 108LL);
      v34 = *(_QWORD *)(v11 + 40);
      v35 = v124 - *(_QWORD *)(v34 + 104);
      if ( (_QWORD)v124 == *(_QWORD *)(v34 + 104) )
        v35 = *((_QWORD *)&v124 + 1) - *(_QWORD *)(v34 + 112);
      v36 = v35 == 0;
      if ( (unsigned int)ShouldRemoveMonitorRgn((struct tagWND *)v11) )
        SelectWindowRgn((struct tagWND *)v11);
      if ( v101 )
      {
        *((_DWORD *)v9 + 39) |= 1u;
        v81 = *(_QWORD *)(v11 + 40);
        if ( (*(_BYTE *)(v81 + 27) & 0x20) != 0 && (v82 = *(_BYTE *)(v81 + 26), (v82 & 0x20) == 0) )
        {
          v84 = v82 & 8;
          v105 = 0LL;
          v85 = RecreateRedirectionBitmap((struct tagWND *)v11, 0, (unsigned __int64)&v105 & -(__int64)(v84 != 0));
          updated = v85;
          if ( v84 && v85 >= 0 )
          {
            v87 = v105;
            if ( v105 )
            {
              if ( (unsigned int)SetOldRedirectionBitmap(v11, v105, v86, 0LL) )
                v87 = 0LL;
            }
            else
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v115);
              xxxInternalInvalidate((struct tagWND *)v11, (HRGN)1, 0x401u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v115);
            }
          }
          else
          {
            v87 = v105;
          }
          if ( v87 )
            DeleteOrSetRedirectionBitmap(v11, v87, 1LL, 0LL);
        }
        else if ( (unsigned int)IsWindowDesktopComposed(v11) )
        {
          v83 = *(_DWORD **)(v11 + 40);
          v109.cx = v83[24] - v83[22];
          v109.cy = v83[25] - v83[23];
          updated = UpdateSprite(
                      *(HDEV *)(gpDispInfo + 40LL),
                      (struct tagWND *)v11,
                      0LL,
                      &v109,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0,
                      0LL);
        }
      }
      if ( v23 || v25 )
      {
        v61 = *(_QWORD *)(v11 + 40);
        v37 = 1LL;
        v62 = *(_QWORD *)(v61 + 168);
        if ( v62 <= 1 || (*(_BYTE *)(v61 + 21) & 8) != 0 )
          goto LABEL_31;
        GreOffsetRgn(v62, v23, v25);
      }
      v37 = 1LL;
LABEL_31:
      v38 = *((unsigned int *)v9 + 18);
      if ( v9[9] || v106 )
      {
        v60 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 136LL);
        if ( v60 > 1 )
        {
          GreOffsetRgn(v60, v38, *((unsigned int *)v9 + 19));
          LODWORD(v38) = *((_DWORD *)v9 + 18);
        }
        OffsetChildren((struct tagWND *)v11, v38, *((_DWORD *)v9 + 19), 0LL, v98);
      }
      v12 = v102;
      if ( v102 || !v36 || v23 || v25 )
      {
        v38 = *(_QWORD *)(v11 + 40);
        v39 = 0;
        v110 = *(struct tagPOINT *)(v38 + 88);
        v121 = 0LL;
        if ( v102 )
        {
          v40 = *(_DWORD *)(v38 + 232);
          if ( (v40 & 0x8000) != 0 )
          {
            *(_DWORD *)(v38 + 232) = v40 & 0xFFFF7FFF;
            PostShellHookMessages(0x36uLL, *(_QWORD *)v11);
            v38 = *(_QWORD *)(v11 + 40);
          }
          if ( (*(_BYTE *)(v38 + 26) & 8) != 0 )
          {
            if ( v101 )
            {
              v77 = *(_DWORD *)(v38 + 96) - *(_DWORD *)(v38 + 88);
              v78 = -v23;
              v79 = -v25;
              v112 = 0LL;
              v113 = v77;
              v80 = *(_DWORD *)(v38 + 100) - *(_DWORD *)(v38 + 92);
              DWORD2(v121) = v78 + v107;
              v114 = v80;
              HIDWORD(v121) = v79 + v14;
              *(_QWORD *)&v121 = __PAIR64__(v79, v78);
              IntersectRect(&v121, &v121, &v112);
            }
            if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
            {
              InvalidateGDIWindows(v11, v38, v37);
              GreClientRgnUpdated(1LL);
            }
            if ( !v101 || (v39 = 1, (unsigned int)IsWindowDesktopComposed(v11)) )
              v39 = 0;
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 26LL) & 8) != 0 )
          updated = UpdateSprite(
                      *(HDEV *)(gpDispInfo + 40LL),
                      (struct tagWND *)v11,
                      &v110,
                      0LL,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0,
                      (struct tagRECT *)((unsigned __int64)&v121 & -(__int64)(v39 != 0)));
        if ( v102 )
          goto LABEL_41;
      }
      if ( v101 )
      {
LABEL_41:
        v12 = *(_QWORD *)(v11 + 40);
        if ( (*(_BYTE *)(v12 + 27) & 0x20) != 0 && (*(_BYTE *)(v12 + 26) & 0x20) == 0 )
        {
          v12 = gptiCurrent;
          v76 = *(_QWORD *)(gptiCurrent + 672LL);
          if ( (!v76 || (*(_DWORD *)(v76 + 196) & 0x100000) == 0)
            && !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter(v11, v38, v37) )
          {
            *(_DWORD *)(*(_QWORD *)(v11 + 40) + 232LL) &= ~0x80000u;
            RecreateRedirectionBitmap((struct tagWND *)v11, 0, 0LL);
          }
        }
      }
      v4 = v100;
      v3 = updated;
      v2 = a1;
      v5 = a2;
    }
    if ( (v9[4] & 4) != 0 )
      goto LABEL_44;
    if ( !(unsigned int)ReValidateZorder((struct tagCVR *)v9) )
      goto LABEL_163;
    if ( !(unsigned int)ValidateWindowPos(v57, v2) )
    {
      v58 = *((_DWORD *)v9 + 8);
LABEL_163:
      *((_DWORD *)v9 + 8) = v58 | 4;
      SetOrClrWF(0, v11, 0x304u, 1);
      goto LABEL_44;
    }
    UnlinkWindow(v11, v2);
    PWInsertAfter(v9[1], v59);
    LinkWindow((struct tagWND *)v11);
    v100 = v4 + 1;
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 19LL) & 4) != 0 )
    {
      SetOrClrWF(0, v11, 0x304u, 1);
      *(_BYTE *)(*(_QWORD *)(v11 + 40) + 24LL) ^= 8u;
    }
LABEL_44:
    if ( (*((_DWORD *)v9 + 39) & 0x20) != 0 )
    {
      v41 = ValidateHmonitor(v9[16]);
      v42 = *((_DWORD *)v9 + 39);
      v43 = v41;
      v122 = 0LL;
      if ( (v42 & 0x80u) != 0 )
        v122 = *(struct tagRECT *)(v9 + 17);
      v44 = IsRectEmptyInl(&v122);
      v45 = 0LL;
      v46 = &v122;
      if ( v44 )
        v46 = 0LL;
      NewMonitor = GetNewMonitor((struct tagWND *)v11, v46);
      if ( NewMonitor && v43 != NewMonitor )
        *((_DWORD *)v9 + 39) ^= (*((_DWORD *)v9 + 39) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                         v11,
                                                                         NewMonitor,
                                                                         v9 + 20,
                                                                         0LL) << 6)) & 0x40;
    }
    else
    {
      v45 = 0LL;
    }
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v12)
      || (CurrentProcess = PsGetCurrentProcess(v50, v49, v51),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v96),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      v52 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v52 )
        v45 = *v52;
    }
    *(_QWORD *)&v117 = *(_QWORD *)(v45 + 416);
    *(_QWORD *)(v45 + 416) = &v117;
    *((_QWORD *)&v117 + 1) = v11;
    HMLockObject(v11);
    v53 = *((_DWORD *)v9 + 8);
    if ( (v53 & 0x40) != 0 )
    {
      v63 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL);
      if ( (*(_DWORD *)(v63 + 12) & 0x40) != 0 )
        zzzCalcStartCursorHide(v63, 5000LL);
      v64 = SetVisible((struct tagWND *)v11, 9u);
      v65 = 3;
      v66 = v64;
      if ( !gdwDeferWinEvent )
        v65 = 1;
      xxxWindowEvent(0x8002u, v65);
      if ( v66 )
      {
        *((_DWORD *)v9 + 39) |= 2u;
        if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 26LL) & 8) == 0 )
        {
          v3 = ComposeWindowIfNeeded(v11, 0);
          updated = v3;
        }
      }
      v67 = IsTrayWindow((_QWORD *)v11);
      v68 = *(_QWORD *)(v11 + 40);
      v69 = v67;
      if ( (*(_WORD *)(v68 + 42) & 0x2FFF) == 0x2AA )
      {
        if ( (*(_BYTE *)(v68 + 16) & 0x40) != 0 )
        {
          *((_DWORD *)v5 + 6) |= 1u;
          *((_DWORD *)v9 + 8) |= 0x40000000u;
        }
        v71 = *((_DWORD *)v9 + 8);
        v70 = v71;
      }
      else
      {
        if ( (*(_BYTE *)(v68 + 16) & 0x40) != 0 )
        {
          *((_DWORD *)v5 + 6) |= 1u;
          *((_DWORD *)v9 + 8) |= 0x40000000u;
        }
        v70 = *((_DWORD *)v9 + 8);
        if ( !v69 && !*(_QWORD *)(v11 + 120) )
        {
LABEL_101:
          LOWORD(v71) = v70;
          if ( (v70 & 0x40000000) != 0 )
            *((_DWORD *)v9 + 39) |= 0x10u;
LABEL_103:
          if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 20LL) & 0x40) != 0 )
          {
            *((_DWORD *)v5 + 6) |= 1u;
            *((_DWORD *)v9 + 8) |= 0x80000000;
            v71 = *((_DWORD *)v9 + 8);
          }
LABEL_105:
          if ( (v71 & 0x4008) != 8
            && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 136) + 8LL) + 9LL) & 8) != 0
            && *(_QWORD *)(v11 + 24) == grpdeskRitInput )
          {
            v72 = *(_QWORD *)(v11 + 104);
            v120 = 0LL;
            for ( i = *(_QWORD *)(v72 + 112); i; i = *(_QWORD *)(i + 88) )
            {
              if ( i == v11 )
              {
                CreateSpb((struct tagWND *)v11);
                goto LABEL_57;
              }
              v88 = *(_QWORD *)(i + 40);
              if ( (*(_BYTE *)(v88 + 31) & 0x10) != 0 )
              {
                v123 = *(_OWORD *)(v88 + 88);
                TransformRectBetweenCoordinateSpaces(&v123, &v123, v11, i);
                if ( (unsigned int)IntersectRect(&v120, *(_QWORD *)(v11 + 40) + 88LL, &v123) )
                  goto LABEL_57;
              }
            }
          }
          goto LABEL_57;
        }
        *((_DWORD *)v5 + 6) |= 1u;
        v71 = *((_DWORD *)v9 + 8) | 0x10000000;
        *((_DWORD *)v9 + 8) = v71;
        v70 = v71;
        if ( v69 )
          goto LABEL_105;
        *((_DWORD *)v9 + 39) |= 8u;
      }
      if ( v69 )
        goto LABEL_105;
      if ( *(_QWORD *)(v11 + 120) )
        goto LABEL_103;
      goto LABEL_101;
    }
    if ( (v53 & 0x80u) != 0 )
    {
      v74 = IsTrayWindow((_QWORD *)v11);
      if ( (v9[4] & 0x1F) != 0x1F && v74 && (*(_WORD *)(*(_QWORD *)(v11 + 40) + 42LL) & 0x2FFF) != 0x2AA )
      {
        *((_DWORD *)v5 + 6) |= 1u;
        *((_DWORD *)v9 + 8) |= 0x20000000u;
      }
      if ( (unsigned int)SetVisible((struct tagWND *)v11, 0xAu) )
        DecomposeWindowIfNeeded(v11);
      v75 = 3;
      if ( !gdwDeferWinEvent )
        v75 = 1;
      xxxWindowEvent(0x8003u, v75);
    }
LABEL_57:
    v54 = *(_QWORD *)(v11 + 40);
    if ( (*(_BYTE *)(v54 + 31) & 0x10) != 0 )
    {
      v55 = *((_DWORD *)v9 + 8);
      if ( (v55 & 0x8000) != 0 || (*(_BYTE *)(v54 + 21) & 1) == 0 && (v55 & 8) != 0 )
        SetOrClrWF(1, v11, 0x108u, 1);
    }
    if ( v9[14] )
      SelectWindowRgn((struct tagWND *)v11);
    ThreadUnlock1(v54);
    v2 = a1;
    v10 = v108;
    v4 = v100;
LABEL_63:
    v9 += 21;
    v108 = --v10;
  }
  while ( v10 >= 0 );
  if ( v4 )
    xxxWindowEvent(0x8004u, gdwDeferWinEvent != 0 ? 2 : 0);
LABEL_66:
  ThreadUnlock1(v8);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v116);
  return v3;
}
