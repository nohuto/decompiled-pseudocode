/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     ComposeWindowIfNeeded @ 0x1C00202CC (ComposeWindowIfNeeded.c)
 *     UpdateSprite @ 0x1C0020D60 (UpdateSprite.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0043740 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0047B50 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     GreClientRgnUpdated @ 0x1C00496B4 (GreClientRgnUpdated.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C006A424 (UpdateMonitorForWindowAndChildren.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C006A59C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     GetNewMonitor @ 0x1C006F304 (GetNewMonitor.c)
 *     LinkWindow @ 0x1C006F9A0 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UnlinkWindow @ 0x1C0072CAC (UnlinkWindow.c)
 *     zzzCalcStartCursorHide @ 0x1C0073330 (zzzCalcStartCursorHide.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0082294 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C0082404 (PWInsertAfter.c)
 *     SelectWindowRgn @ 0x1C00847C0 (SelectWindowRgn.c)
 *     OffsetChildren @ 0x1C00848F0 (OffsetChildren.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C0084B7C (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     DecomposeWindowIfNeeded @ 0x1C00B3750 (DecomposeWindowIfNeeded.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00B4214 (DeleteOrSetRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C00B4DA8 (SetOldRedirectionBitmap.c)
 *     CreateSpb @ 0x1C00C92A0 (CreateSpb.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00ED8B4 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00FD674 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00FD738 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x1C00FE6AC (-FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z.c)
 *     ?ReValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00FED40 (-ReValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     InvalidateGDIWindows @ 0x1C01E30E0 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  struct tagWND *v2; // r15
  unsigned int v3; // r12d
  int v4; // ebx
  struct tagSMWP *v5; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rsi
  int v11; // r13d
  __int64 v12; // rdi
  __int64 v13; // rcx
  LONG top; // r13d
  __int64 DesktopWindow; // rax
  int v16; // r8d
  int v17; // r9d
  LONG v18; // r11d
  LONG v19; // ebx
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
  struct tagWND *v30; // r14
  struct tagRECT v31; // xmm0
  __int64 v32; // rcx
  int v33; // eax
  int v34; // r11d
  __int64 v35; // rdx
  __int64 v36; // rcx
  BOOL v37; // r14d
  __int64 v38; // r8
  struct tagSIZE *v39; // r9
  __int64 v40; // rdx
  int v41; // ebx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // edx
  int v45; // eax
  struct tagRECT *v46; // rdx
  __int64 v47; // rdx
  __int64 NewMonitor; // rbx
  __int64 v49; // r9
  __int16 v50; // cx
  __int64 v51; // rbx
  __int64 *v52; // rax
  _BOOL8 v53; // r8
  int v54; // eax
  __int64 v55; // rcx
  int v56; // edx
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // rdx
  _DWORD *Data; // rax
  struct tagCVR *v62; // rcx
  int v63; // r8d
  unsigned __int64 v64; // rcx
  HRGN ExplicitClipRgn; // rax
  __int64 v66; // rcx
  int v67; // eax
  int v68; // edx
  int v69; // ebx
  bool v70; // al
  __int64 v71; // rcx
  int v72; // eax
  int v73; // edx
  __int64 v74; // rax
  __int64 i; // rbx
  BOOL v76; // ecx
  int v77; // ecx
  int v78; // ebx
  int v79; // ecx
  int v80; // r15d
  int v81; // r12d
  int v82; // ecx
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rcx
  char v86; // bl
  int v87; // eax
  _DWORD *v88; // rdx
  char v89; // bl
  int v90; // eax
  __int64 v91; // rbx
  int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // rax
  int v95; // r8d
  int v96; // r9d
  __int64 v97; // r10
  int v98; // r11d
  __int64 v99; // rbx
  __int64 v100; // rdx
  __int16 v101; // dx
  unsigned int updated; // [rsp+60h] [rbp-A0h]
  int v103; // [rsp+64h] [rbp-9Ch]
  char v104; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v105[3]; // [rsp+69h] [rbp-97h] BYREF
  int v106; // [rsp+6Ch] [rbp-94h]
  int v107; // [rsp+70h] [rbp-90h]
  struct tagWND *v108; // [rsp+78h] [rbp-88h]
  int v109; // [rsp+80h] [rbp-80h]
  struct tagSMWP *v110; // [rsp+88h] [rbp-78h]
  int v111; // [rsp+90h] [rbp-70h]
  LONG left; // [rsp+94h] [rbp-6Ch]
  struct tagSIZE v113; // [rsp+98h] [rbp-68h] BYREF
  struct tagPOINT v114; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v115; // [rsp+A8h] [rbp-58h] BYREF
  int v116; // [rsp+B0h] [rbp-50h]
  int v117; // [rsp+B4h] [rbp-4Ch]
  __int128 v118; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v119; // [rsp+C8h] [rbp-38h]
  _QWORD v120[3]; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v121; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v122; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v123; // [rsp+108h] [rbp+8h] BYREF

  v2 = a1;
  v108 = a1;
  v110 = a2;
  v3 = 0;
  updated = 0;
  v120[2] = 0LL;
  v4 = 0;
  v103 = 0;
  v111 = 0;
  v119 = 0LL;
  v5 = a2;
  v118 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v105);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v120[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v120;
  v120[1] = v2;
  HMLockObject(v2);
  v10 = (__int64 *)*((_QWORD *)v5 + 5);
  v11 = *((_DWORD *)v5 + 7) - 1;
  v106 = v11;
  if ( v11 < 0 )
    goto LABEL_65;
  do
  {
    v8 = *v10;
    v107 = 0;
    v109 = 0;
    *(_QWORD *)&v121.left = 0LL;
    if ( !v8 )
      goto LABEL_62;
    v12 = HMValidateHandleNoSecure(v8, 1);
    if ( !v12 || !IsStillWindowC(v10[1]) )
    {
      *((_DWORD *)v10 + 8) = 6159;
      *v10 = 0LL;
    }
    v8 = v10[4] & 0x18E7;
    if ( (_DWORD)v8 == 6151 )
    {
      *((_DWORD *)v10 + 8) |= 8u;
      goto LABEL_62;
    }
    if ( (_DWORD)v8 == 6147
      && (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 19LL) & 4) == 0
      && (unsigned int)ValidateZorder((struct tagCVR *)v10) )
    {
      *((_DWORD *)v10 + 8) |= 0xCu;
      v8 = v10[12];
      if ( v8 )
      {
        GreDeleteObject(v8);
        v10[12] = 0LL;
      }
      goto LABEL_62;
    }
    if ( (v10[4] & 0x1803) != 0x1803 )
    {
      v13 = *(_QWORD *)(v12 + 40);
      if ( (*(_BYTE *)(v13 + 27) & 0x20) == 0 && (*(_BYTE *)(v13 + 26) & 8) == 0
        || (top = *(_DWORD *)(v13 + 100) - *(_DWORD *)(v13 + 92),
            left = *(_DWORD *)(v13 + 96) - *(_DWORD *)(v13 + 88),
            left == *((_DWORD *)v10 + 6))
        && top == *((_DWORD *)v10 + 7) )
      {
        top = v121.top;
        left = v121.left;
      }
      else
      {
        v107 = 1;
      }
      if ( *(_DWORD *)(v13 + 88) != *((_DWORD *)v10 + 4) || *(_DWORD *)(v13 + 92) != *((_DWORD *)v10 + 5) )
        v109 = 1;
      v121 = *(struct tagRECT *)(*((_QWORD *)v2 + 5) + 104LL);
      if ( IsChildWindowDpiBoundary((const struct tagWND *)v12) )
      {
        v99 = 0LL;
        if ( (*((_DWORD *)v10 + 39) & 0x100) == 0 )
        {
          v99 = v12 + 224;
          *(_DWORD *)(v12 + 228) = 0;
          *(_DWORD *)(v12 + 224) = 0;
        }
        LogicalToPhysicalInPlaceRectWithSubpixel(v2, &v121, v99);
        PhysicalToLogicalInPlaceRectWithSubpixel(v12, &v121, v99);
        v111 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL) = *((_DWORD *)v10 + 4);
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL) = *((_DWORD *)v10 + 5);
      DesktopWindow = GetDesktopWindow(v12);
      v18 = v121.top;
      v19 = v121.left;
      if ( v2 != (struct tagWND *)DesktopWindow )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL) += v121.left;
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL) += v18;
      }
      v20 = *(_DWORD **)(v12 + 40);
      v21 = v20[22];
      v22 = *((_DWORD *)v10 + 6) + v21;
      v23 = v21 - v16;
      v24 = v20[23];
      v20[24] = v22;
      v25 = v24 - v17;
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 100LL) = *((_DWORD *)v10 + 7) + *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL);
      v26 = *(_DWORD **)(v12 + 40);
      v27 = v26;
      v28 = v26[22];
      if ( v26[24] < v28 )
      {
        v26[24] = v28;
        v26 = *(_DWORD **)(v12 + 40);
        v27 = v26;
      }
      v29 = v26[23];
      if ( v26[25] < v29 )
      {
        v26[25] = v29;
        v27 = *(_DWORD **)(v12 + 40);
      }
      if ( v12 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
      {
        v94 = GetDesktopWindow(v12);
        v30 = v108;
        if ( v108 != (struct tagWND *)v94 )
        {
          v95 -= v19;
          v96 -= v98;
        }
        if ( v95 | v96 )
        {
          *(_DWORD *)(v97 + 316) += v95;
          *(_DWORD *)(v97 + 320) += v96;
          v27 = *(_DWORD **)(v12 + 40);
        }
      }
      else
      {
        v30 = v108;
      }
      v31 = *(struct tagRECT *)(v27 + 26);
      v27[26] = *((_DWORD *)v10 + 10);
      v32 = *(_QWORD *)(v12 + 40);
      v33 = *((_DWORD *)v10 + 11);
      v121 = v31;
      *(_DWORD *)(v32 + 108) = v33;
      if ( v30 != (struct tagWND *)GetDesktopWindow(v12) )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 104LL) += v19;
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 108LL) += v34;
      }
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 112LL) = *((_DWORD *)v10 + 12) + *(_DWORD *)(*(_QWORD *)(v12 + 40) + 104LL);
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 116LL) = *((_DWORD *)v10 + 13) + *(_DWORD *)(*(_QWORD *)(v12 + 40) + 108LL);
      v35 = *(_QWORD *)(v12 + 40);
      v36 = *(_QWORD *)&v121.left - *(_QWORD *)(v35 + 104);
      if ( *(_QWORD *)&v121.left == *(_QWORD *)(v35 + 104) )
        v36 = *(_QWORD *)&v121.right - *(_QWORD *)(v35 + 112);
      v37 = v36 == 0;
      FixupMonitorRgn((struct tagWND *)v12, (v10[4] & 8) == 0);
      v39 = 0LL;
      if ( !v107 )
        goto LABEL_27;
      *((_DWORD *)v10 + 39) |= 1u;
      v85 = *(_QWORD *)(v12 + 40);
      if ( (*(_BYTE *)(v85 + 27) & 0x20) != 0 && (v86 = *(_BYTE *)(v85 + 26), (v86 & 0x20) == 0) )
      {
        v89 = v86 & 8;
        *(_QWORD *)&v121.left = 0LL;
        v90 = RecreateRedirectionBitmap((struct tagWND *)v12, 0, (unsigned __int64)&v121 & -(__int64)(v89 != 0));
        v39 = 0LL;
        updated = v90;
        if ( v89 && v90 >= 0 )
        {
          v91 = *(_QWORD *)&v121.left;
          if ( *(_QWORD *)&v121.left )
          {
            v92 = SetOldRedirectionBitmap(v12, *(_QWORD *)&v121.left, v38, 0LL);
            v39 = 0LL;
            if ( v92 )
              v91 = 0LL;
          }
          else
          {
            AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v104);
            xxxInternalInvalidate((struct tagWND *)v12, (HRGN)1, 0x401u);
            AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v104);
            v39 = 0LL;
          }
        }
        else
        {
          v91 = *(_QWORD *)&v121.left;
        }
        if ( !v91 )
          goto LABEL_27;
        DeleteOrSetRedirectionBitmap(v12, v91, 1LL);
      }
      else
      {
        v87 = IsWindowDesktopComposed(v12);
        v39 = 0LL;
        if ( !v87 )
        {
LABEL_27:
          if ( v23 || v25 )
          {
            ExplicitClipRgn = tagWND::GetExplicitClipRgn((tagWND *)v12);
            if ( ExplicitClipRgn )
            {
              GreOffsetRgn(ExplicitClipRgn, v23, v25);
              v39 = 0LL;
            }
          }
          if ( v10[9] != __PAIR64__((unsigned int)v39, 0) || v111 != (_DWORD)v39 )
          {
            v64 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 136LL);
            if ( v64 > 1 )
              GreOffsetRgn(v64, *((unsigned int *)v10 + 18), *((unsigned int *)v10 + 19));
            OffsetChildren((struct tagWND *)v12);
            v39 = 0LL;
          }
          if ( v109 || !v37 || v23 || v25 )
          {
            v40 = *(_QWORD *)(v12 + 40);
            v41 = (int)v39;
            v114 = *(struct tagPOINT *)(v40 + 88);
            v122 = 0LL;
            if ( v109 )
            {
              v42 = *(_DWORD *)(v12 + 320);
              if ( (v42 & 0x400) != 0 )
              {
                v100 = *(_QWORD *)v12;
                *(_DWORD *)(v12 + 320) = v42 & 0xFFFFFBFF;
                PostShellHookMessages(54LL, v100);
                v40 = *(_QWORD *)(v12 + 40);
                v39 = 0LL;
              }
              if ( (*(_BYTE *)(v40 + 26) & 8) != 0 )
              {
                v78 = v107;
                if ( v107 )
                {
                  v79 = *(_DWORD *)(v40 + 96) - *(_DWORD *)(v40 + 88);
                  v80 = -v23;
                  v81 = -v25;
                  v115 = 0LL;
                  v116 = v79;
                  v82 = *(_DWORD *)(v40 + 100) - *(_DWORD *)(v40 + 92);
                  DWORD2(v122) = v80 + left;
                  v117 = v82;
                  HIDWORD(v122) = v81 + top;
                  *(_QWORD *)&v122 = __PAIR64__(v81, v80);
                  IntersectRect(&v122, (int *)&v122, (int *)&v115);
                  v39 = 0LL;
                }
                if ( *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) != (_DWORD)v39 )
                {
                  InvalidateGDIWindows(v12);
                  GreClientRgnUpdated(1);
                  v39 = 0LL;
                }
                if ( !v78 || (v83 = IsWindowDesktopComposed(v12), v39 = 0LL, v41 = 1, v83) )
                  v41 = (int)v39;
              }
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 26LL) & 8) != 0 )
            {
              updated = UpdateSprite(
                          *(HDEV *)(gpDispInfo + 40LL),
                          (const struct tagWND *)v12,
                          v38,
                          0LL,
                          &v114,
                          v39,
                          (HDC)v39,
                          (struct tagPOINT *)v39,
                          (unsigned int)v39,
                          (struct _BLENDFUNCTION *)v39,
                          (unsigned int)v39,
                          (struct tagRECT *)((unsigned __int64)&v122 & -(__int64)(v41 != 0)));
              LODWORD(v39) = 0;
            }
            if ( v109 != (_DWORD)v39 )
              goto LABEL_39;
          }
          if ( v107 != (_DWORD)v39 )
          {
LABEL_39:
            v43 = *(_QWORD *)(v12 + 40);
            if ( (*(_BYTE *)(v43 + 27) & 0x20) != 0 && (*(_BYTE *)(v43 + 26) & 0x20) == 0 )
            {
              v84 = *(_QWORD *)(gptiCurrent + 672LL);
              if ( (!v84 || (*(_DWORD *)(v84 + 200) & 0x100000) == 0)
                && !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter(v12) )
              {
                *(_DWORD *)(v12 + 320) &= ~0x20000u;
                RecreateRedirectionBitmap((struct tagWND *)v12, 0, 0LL);
              }
            }
          }
          v4 = v103;
          v11 = v106;
          v3 = updated;
          v2 = v108;
          v5 = v110;
          goto LABEL_41;
        }
        v88 = *(_DWORD **)(v12 + 40);
        v113.cx = v88[24] - v88[22];
        v113.cy = v88[25] - v88[23];
        updated = UpdateSprite(
                    *(HDEV *)(gpDispInfo + 40LL),
                    (const struct tagWND *)v12,
                    v38,
                    0LL,
                    0LL,
                    &v113,
                    0LL,
                    0LL,
                    0,
                    0LL,
                    0,
                    0LL);
      }
      v39 = 0LL;
      goto LABEL_27;
    }
LABEL_41:
    if ( (v10[4] & 4) == 0 )
    {
      if ( !(unsigned int)ReValidateZorder((struct tagCVR *)v10) )
        goto LABEL_170;
      if ( !ValidateWindowPos(v62, v2) )
      {
        v63 = *((_DWORD *)v10 + 8);
LABEL_170:
        *((_DWORD *)v10 + 8) = v63 | 4;
        SetOrClrWF(0, (struct tagWND *)v12, 0x304u, 1);
        goto LABEL_42;
      }
      UnlinkWindow((struct tagWND *)v12);
      PWInsertAfter(v10[1]);
      LinkWindow((struct tagWND *)v12);
      v103 = v4 + 1;
      if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 19LL) & 4) != 0 )
      {
        SetOrClrWF(0, (struct tagWND *)v12, 0x304u, 1);
        *(_BYTE *)(*(_QWORD *)(v12 + 40) + 24LL) ^= 8u;
      }
    }
LABEL_42:
    v44 = *((_DWORD *)v10 + 39);
    if ( (v44 & 0x20) != 0 && (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 0x20) == 0 )
    {
      v121 = 0LL;
      if ( (v44 & 0x80u) != 0 )
        v121 = *(struct tagRECT *)(v10 + 17);
      v45 = IsRectEmptyInl(&v121);
      v46 = &v121;
      if ( v45 )
        v46 = 0LL;
      NewMonitor = GetNewMonitor((struct tagWND *)v12, v46);
      if ( NewMonitor )
      {
        if ( ValidateHmonitor(v10[16], v47) != NewMonitor
          || (v49 = *(_QWORD *)(v12 + 40), (v50 = *(_WORD *)(v49 + 286)) != 0)
          && *(_WORD *)(*(_QWORD *)(NewMonitor + 40) + 60LL) != v50
          && (*(_DWORD *)(v49 + 288) & 0xF) == 2
          && (*(_DWORD *)(*(_QWORD *)(v12 + 16) + 648LL) & 0x2000000) == 0
          && IsTopLevelWindow(v12)
          || (*(_BYTE *)(v49 + 288) & 0xF) == 3
          && (v101 = *(_WORD *)(*(_QWORD *)(NewMonitor + 40) + 84LL), v101 != ((*(_DWORD *)(v49 + 288) >> 8) & 0x1FF))
          && v101 != *(_WORD *)(v12 + 304) )
        {
          *((_DWORD *)v10 + 39) ^= (*((_DWORD *)v10 + 39) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                             (struct tagWND **)v12,
                                                                             NewMonitor,
                                                                             v10 + 20,
                                                                             0) << 6)) & 0x40;
        }
      }
    }
    v51 = 0LL;
    v52 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v52 )
      v51 = *v52;
    *(_QWORD *)&v118 = *(_QWORD *)(v51 + 416);
    *(_QWORD *)(v51 + 416) = &v118;
    *((_QWORD *)&v118 + 1) = v12;
    HMLockObject(v12);
    v54 = *((_DWORD *)v10 + 8);
    if ( (v54 & 0x40) == 0 )
    {
      if ( (v54 & 0x80u) != 0 )
      {
        v76 = IsTrayWindow(v12, 1);
        if ( (v10[4] & 0x1F) != 0x1F && v76 && (*(_WORD *)(*(_QWORD *)(v12 + 40) + 42LL) & 0x2FFF) != 0x2AA )
        {
          *((_DWORD *)v5 + 6) |= 1u;
          *((_DWORD *)v10 + 8) |= 0x20000000u;
        }
        if ( (unsigned int)SetVisible((struct tagWND *)v12, 0xAu) )
          DecomposeWindowIfNeeded((struct tagWND *)v12);
        v77 = 3;
        if ( !gdwDeferWinEvent )
          v77 = 1;
        xxxWindowEvent(0x8003u, v77);
      }
      goto LABEL_56;
    }
    v66 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL);
    if ( (*(_DWORD *)(v66 + 12) & 0x40) != 0 )
      zzzCalcStartCursorHide(v66, 5000LL);
    v67 = SetVisible((struct tagWND *)v12, 9u);
    v68 = 3;
    v69 = v67;
    if ( !gdwDeferWinEvent )
      v68 = 1;
    xxxWindowEvent(0x8002u, v68);
    if ( v69 )
    {
      *((_DWORD *)v10 + 39) |= 2u;
      if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 26LL) & 8) == 0 )
      {
        v3 = ComposeWindowIfNeeded((struct tagWND *)v12);
        updated = v3;
      }
    }
    v70 = IsTrayWindow(v12, 1);
    v71 = *(_QWORD *)(v12 + 40);
    v53 = v70;
    if ( (*(_WORD *)(v71 + 42) & 0x2FFF) != 0x2AA )
    {
      if ( (*(_BYTE *)(v71 + 16) & 0x40) != 0 )
      {
        *((_DWORD *)v5 + 6) |= 1u;
        *((_DWORD *)v10 + 8) |= 0x40000000u;
      }
      v72 = *((_DWORD *)v10 + 8);
      if ( !v53 && !*(_QWORD *)(v12 + 120) )
        goto LABEL_104;
      *((_DWORD *)v5 + 6) |= 1u;
      v73 = *((_DWORD *)v10 + 8) | 0x10000000;
      *((_DWORD *)v10 + 8) = v73;
      v72 = v73;
      if ( v53 )
        goto LABEL_108;
      *((_DWORD *)v10 + 39) |= 8u;
LABEL_148:
      if ( !*(_QWORD *)(v12 + 120) )
      {
LABEL_104:
        LOWORD(v73) = v72;
        if ( (v72 & 0x40000000) != 0 )
          *((_DWORD *)v10 + 39) |= 0x10u;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 20LL) & 0x40) != 0 )
      {
        *((_DWORD *)v5 + 6) |= 1u;
        *((_DWORD *)v10 + 8) |= 0x80000000;
        v73 = *((_DWORD *)v10 + 8);
      }
      goto LABEL_108;
    }
    if ( (*(_BYTE *)(v71 + 16) & 0x40) != 0 )
    {
      *((_DWORD *)v5 + 6) |= 1u;
      *((_DWORD *)v10 + 8) |= 0x40000000u;
    }
    v73 = *((_DWORD *)v10 + 8);
    v72 = v73;
    if ( !v53 )
      goto LABEL_148;
LABEL_108:
    if ( (v73 & 0x4008) != 8
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL) + 9LL) & 8) != 0
      && *(_QWORD *)(v12 + 24) == grpdeskRitInput )
    {
      v74 = *(_QWORD *)(v12 + 104);
      v121 = 0LL;
      for ( i = *(_QWORD *)(v74 + 112); i; i = *(_QWORD *)(i + 88) )
      {
        if ( i == v12 )
        {
          CreateSpb((struct tagWND *)v12);
          break;
        }
        v93 = *(_QWORD *)(i + 40);
        if ( (*(_BYTE *)(v93 + 31) & 0x10) != 0 )
        {
          v123 = *(_OWORD *)(v93 + 88);
          TransformRectBetweenCoordinateSpaces(&v123, &v123, v12, i);
          if ( (unsigned int)IntersectRect(&v121, (int *)(*(_QWORD *)(v12 + 40) + 88LL), (int *)&v123) )
            break;
        }
      }
    }
LABEL_56:
    v55 = *(_QWORD *)(v12 + 40);
    if ( (*(_BYTE *)(v55 + 31) & 0x10) != 0 )
    {
      v56 = *((_DWORD *)v10 + 8);
      if ( (v56 & 0x8000) != 0 )
      {
        LODWORD(v58) = 1;
      }
      else
      {
        v57 = *(_BYTE *)(v55 + 21);
        v58 = 1LL;
        if ( (v57 & 1) != 0 || (v56 & 8) == 0 )
          goto LABEL_59;
      }
      SetOrClrWF(v58, (struct tagWND *)v12, 0x108u, 1);
    }
    v58 = 1LL;
LABEL_59:
    v59 = v10[14];
    if ( v59 )
      SelectWindowRgn((struct tagWND *)v12);
    ThreadUnlock1(v58, v59, v53);
    v4 = v103;
LABEL_62:
    v10 += 21;
    v106 = --v11;
  }
  while ( v11 >= 0 );
  if ( v4 )
    xxxWindowEvent(0x8004u, gdwDeferWinEvent != 0 ? 2 : 0);
LABEL_65:
  ThreadUnlock1(v8, v7, v9);
  if ( v105[0] )
  {
    Data = (_DWORD *)GetData();
    --*Data;
  }
  return v3;
}
