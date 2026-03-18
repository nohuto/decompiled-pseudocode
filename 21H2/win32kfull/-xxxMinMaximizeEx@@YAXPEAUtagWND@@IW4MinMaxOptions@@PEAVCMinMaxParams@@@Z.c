/*
 * XREFs of ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00CA638 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00CA760 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0048C48 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x1C0048E6C (InternalBeginDeferWindowPos.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?EqualRectInl@@YAKPEBUtagRECT@@0@Z @ 0x1C004DF50 (-EqualRectInl@@YAKPEBUtagRECT@@0@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     IsVisible @ 0x1C006C350 (IsVisible.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     IsThreadDesktopComposed @ 0x1C006DA68 (IsThreadDesktopComposed.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A79AC (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ClrFTrueVis @ 0x1C00C98CC (ClrFTrueVis.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CB654 (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SetMinimize @ 0x1C00CB6A0 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00CB710 (xxxShowOwnedWindows.c)
 *     ?IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00CBA5C (-IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00CBA78 (-IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00CBA94 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ParkIcon @ 0x1C00CBAB0 (ParkIcon.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00CBC78 (DwmAsyncNotifyAnimationChange.c)
 *     ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C00CBD00 (-RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z.c)
 *     DwmSyncNotifyMinimizing @ 0x1C00CBD30 (DwmSyncNotifyMinimizing.c)
 *     ?xxxOnWindowRestoreFromMinimized@DesktopRecalc@@YA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C00CD718 (-xxxOnWindowRestoreFromMinimized@DesktopRecalc@@YA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00CDA30 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C010DD14 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?ReflectState@tagWND@@QEAAX_NW4WindowPrivateStates@@@Z @ 0x1C020AD58 (-ReflectState@tagWND@@QEAAX_NW4WindowPrivateStates@@@Z.c)
 *     xxxFlushPalette @ 0x1C022E840 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C023DA38 (xxxDrawAnimatedRects.c)
 */

void __fastcall xxxMinMaximizeEx(ULONG_PTR a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  __int128 *v5; // r12
  __int64 v7; // rax
  char v10; // cl
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // r15d
  __int64 v17; // rcx
  void *v18; // rax
  __int64 Prop; // rax
  struct tagWND *v20; // rdx
  __int64 v21; // rsi
  int v22; // ebx
  __int64 v23; // rdx
  int v24; // edx
  LONG v25; // eax
  __int128 v26; // xmm6
  __int128 v27; // xmm7
  int v28; // r12d
  __int64 v29; // r13
  int v30; // edx
  char v31; // cl
  int v32; // r14d
  bool v33; // si
  unsigned int v34; // r13d
  struct tagWND *v35; // rax
  int v36; // ecx
  struct tagWND *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  void *v40; // r14
  int v41; // eax
  __int64 i; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  const struct tagWND *v52; // rcx
  unsigned int v53; // eax
  int v54; // edx
  __int64 v55; // rcx
  bool v56; // al
  bool v57; // r12
  char v58; // dl
  struct tagWND *j; // rsi
  __int64 DesktopWindow; // rax
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rcx
  char v64; // dl
  char v65; // r14
  int v66; // ebx
  __int64 v67; // rdx
  struct tagWND *v68; // rcx
  struct tagMONITOR *v69; // r10
  int v70; // ecx
  int v71; // eax
  __int64 v72; // rcx
  bool v73; // si
  __int64 v74; // rsi
  char v75; // cl
  __int64 v76; // rax
  __int64 v77; // rcx
  char v78; // r9
  __int64 v79; // r10
  int v80; // r11d
  __int128 v81; // xmm6
  __int64 v82; // rcx
  int v83; // edx
  struct tagWND *v84; // rcx
  __int64 v85; // rsi
  __int64 v86; // r8
  __int64 v87; // r12
  __int64 *v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v94; // r11
  unsigned __int64 v95; // xmm0_8
  int v96; // r8d
  int v97; // edx
  __int64 v98; // rax
  __int64 v99; // rcx
  void *v100; // rax
  struct tagRECT *v101; // [rsp+28h] [rbp-D8h]
  bool v102; // [rsp+50h] [rbp-B0h]
  char v103; // [rsp+51h] [rbp-AFh]
  unsigned int v104; // [rsp+54h] [rbp-ACh]
  char v105; // [rsp+58h] [rbp-A8h]
  char v106; // [rsp+5Ch] [rbp-A4h]
  char v107; // [rsp+5Dh] [rbp-A3h]
  int v108; // [rsp+60h] [rbp-A0h]
  __int128 v109; // [rsp+70h] [rbp-90h]
  unsigned int v110; // [rsp+80h] [rbp-80h]
  int v111; // [rsp+88h] [rbp-78h]
  BOOL v112; // [rsp+8Ch] [rbp-74h]
  int v113; // [rsp+90h] [rbp-70h]
  int v114; // [rsp+94h] [rbp-6Ch]
  int v115; // [rsp+98h] [rbp-68h]
  int v116; // [rsp+9Ch] [rbp-64h]
  int v117; // [rsp+A0h] [rbp-60h]
  __int64 v118; // [rsp+A8h] [rbp-58h]
  __int128 v119; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v120; // [rsp+C0h] [rbp-40h]
  __int128 v121; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v122; // [rsp+D8h] [rbp-28h]
  struct tagRECT v123; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v124; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v125; // [rsp+100h] [rbp+0h] BYREF
  __int128 v126; // [rsp+110h] [rbp+10h]
  __int64 v127; // [rsp+120h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 104);
  v5 = *(__int128 **)(a4 + 8);
  v122 = 0LL;
  v120 = 0LL;
  v127 = 0LL;
  v7 = *(_QWORD *)(a1 + 40);
  v121 = 0LL;
  v105 = a3;
  v119 = 0LL;
  v104 = a2;
  v125 = 0LL;
  v108 = 0;
  v126 = 0LL;
  v10 = *(_BYTE *)(v7 + 31);
  v115 = 0;
  v114 = 0;
  v107 = v10 & 0x20;
  v118 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)&v124.left = *(_QWORD *)a4;
  v112 = 0;
  v111 = 0;
  v116 = 0;
  v102 = 0;
  v113 = 0;
  v117 = 1;
  v106 = v10 & 1;
  v109 = 0LL;
  v123 = 0LL;
  if ( !v5 || (v103 = 1, (a3 & 8) == 0) )
    v103 = 0;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *(struct tagTHREADINFO **)(a1 + 16),
      *(struct tagQ **)(*(_QWORD *)(a1 + 16) + 432LL),
      0x17u,
      (struct tagWND *)a1,
      0,
      a2,
      a3 & 0xFFFFFFFFFFFDFFFFuLL,
      0LL);
    return;
  }
  v11 = ((a3 & 0x20) << 15) | 0x10;
  if ( (a3 & 0x10) == 0 )
    v11 = (a3 & 0x20) << 15;
  v12 = v11 | 4;
  if ( (a3 & 0x40) == 0 )
    v12 = v11;
  v13 = v12 | 0x80000;
  if ( (a3 & 0x80u) == 0 )
    v13 = v12;
  v14 = v13 | 0x400000;
  if ( (a3 & 0x100) == 0 )
    v14 = v13;
  v15 = v14 | 0x800000;
  if ( (a3 & 0x200) == 0 )
    v15 = v14;
  v16 = v15 | 0x200000;
  if ( (a3 & 0x400) == 0 )
    v16 = v15;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v105 = a3;
    v117 = a3 & 0x10000;
    if ( (a3 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        v18 = (void *)ReferenceDwmApiPort(v17);
        DwmAsyncNotifyAnimationChange(v18);
      }
    }
  }
  GetRect(a1, (__int64)&v123, 66);
  if ( (a3 & 4) != 0 )
    Prop = GetProp(a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
  else
    Prop = (__int64)CkptRestore((struct tagWND *)a1, &v123);
  v21 = Prop;
  if ( !Prop )
    goto LABEL_243;
  v22 = v16;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0 )
  {
    LOBYTE(v20) = v103;
    if ( DesktopRecalc::xxxOnWindowRestoreFromMinimized(
           (DesktopRecalc *)a1,
           v20,
           a4 + 28,
           (bool *)(a4 + 24),
           (unsigned int *)(a4 + 32),
           v101) )
    {
      v22 = v16 | 0x80000;
    }
  }
  v23 = *(_QWORD *)(v4 + 40);
  if ( (*(_BYTE *)(v23 + 26) & 0x40) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) == 0 )
  {
    v24 = *(_DWORD *)(v23 + 96);
    v25 = v24 - v123.right;
    v123.right = v24 - v123.left;
    v123.left = v25;
    v113 = 1;
  }
  if ( v103 )
  {
    v26 = *v5;
    *(_DWORD *)(v21 + 48) &= 0xFFFFFFE1;
  }
  else
  {
    v26 = *(_OWORD *)v21;
  }
  v27 = *(_OWORD *)(v21 + 16);
  if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0 )
  {
    v28 = v104;
    if ( (unsigned int)xxxCallHook(1, *(_QWORD *)a1, v104, 5) )
      goto LABEL_243;
  }
  else
  {
    v28 = v104;
  }
  if ( v28 == 204 )
  {
    v22 |= 0x14u;
    if ( (*(_DWORD *)(v21 + 48) & 4) != 0 )
    {
      v104 = 2;
      v29 = gptiCurrent;
      goto LABEL_42;
    }
    v28 = 1;
    v104 = 1;
LABEL_121:
    v61 = *(_QWORD *)(a1 + 40);
    if ( v28 == 3 )
    {
      v62 = ValidateHmonitorNoRip(*(_QWORD *)(v61 + 256));
      v63 = *(_QWORD *)(a1 + 40);
      v64 = *(_BYTE *)(v63 + 31);
      if ( (v64 & 1) != 0 && (!*(_QWORD *)&v124.left || v62 == *(_QWORD *)&v124.left) )
      {
        v65 = v105;
        if ( (v64 & 0x10) != 0 && (v105 & 2) == 0 )
          goto LABEL_243;
      }
      else
      {
        v65 = v105;
      }
      v66 = v22 | 0x8000;
      v111 = 1;
      if ( (v64 & 0x20) != 0 )
      {
        *(_DWORD *)(v21 + 48) |= 4u;
        v63 = *(_QWORD *)(a1 + 40);
      }
      LOBYTE(v67) = !EqualRectInl((const struct tagRECT *)(v63 + 88), (const struct tagRECT *)(v63 + 104));
      tagWND::ReflectState(a1, v67, 0x10000000LL);
      xxxInitSendValidateMinMaxInfoEx(v68, (__int64)&v125, v69);
      v61 = *(_QWORD *)(a1 + 40);
    }
    else
    {
      v65 = v105;
      v70 = v22 | 0x8000;
      if ( (*(_BYTE *)(v61 + 31) & 0x21) == 0 )
        v70 = v22;
      v66 = v70;
      if ( (*(_BYTE *)(v61 + 31) & 1) != 0 )
        v111 = 1;
    }
    if ( (*(_BYTE *)(v61 + 31) & 0x20) != 0 )
    {
      if ( !xxxSendMessage(a1) )
        goto LABEL_243;
      v110 = 1;
      v114 = 1;
      if ( (v66 & 0x10) == 0 )
      {
        v115 = 1;
        v112 = (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) == 0;
      }
      v66 |= 0x100u;
    }
    else
    {
      v110 = 3;
    }
    if ( v28 == 3 )
    {
      *(_QWORD *)&v109 = v126;
      DWORD2(v109) = DWORD2(v125) + v126;
      HIDWORD(v109) = DWORD1(v126) + HIDWORD(v125);
      SetOrClrWF(1, (struct tagWND *)a1, 0xF01u, 1);
      RemoveSemiMaximizedState((struct tagWND *)a1);
    }
    else
    {
      if ( (unsigned int)(v28 - 12) > 2 )
      {
        v109 = v26;
      }
      else
      {
        v71 = *(_DWORD *)(v21 + 48);
        v109 = v27;
        if ( (v71 & 8) != 0 )
        {
          *(_DWORD *)(a1 + 320) |= 0x4000000u;
          v71 = *(_DWORD *)(v21 + 48);
        }
        if ( (v71 & 0x10) != 0 )
          *(_DWORD *)(a1 + 320) |= 0x8000000u;
        SetOrClrWF(1, (struct tagWND *)a1, 0xD910u, 1);
      }
      SetOrClrWF(0, (struct tagWND *)a1, 0xF01u, 1);
    }
    v72 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v72 + 31) & 0x20) != 0 )
    {
      v73 = (*(_BYTE *)(v72 + 21) & 2) == 0 && IsTrayWindow(a1, 1);
      SetMinimize((struct tagWND *)a1);
      v34 = 23;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 2) == 0
        && v73 != IsTrayWindow(a1, 1)
        && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
      {
        v74 = *(_QWORD *)a1;
        if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
          xxxCallHook(2, *(_QWORD *)a1, 0LL, 10);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 192LL) )
          PostShellHookMessages(2uLL, v74);
      }
      v75 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
      if ( (v75 & 0xC0) != 0x40 && (v75 & 0x10) != 0 )
      {
        v76 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(v76 + 900) == 1 )
        {
          v77 = *(_QWORD *)(v76 + 432);
          if ( v77 != gpqForeground && ((v66 & 0x10) == 0 || *(_QWORD *)(v77 + 120) == a1) && (v65 & 0x40) == 0 )
            xxxSetForegroundWindowWithOptions((_QWORD *)a1, 6LL, 4097LL, 0);
        }
      }
    }
    else
    {
      v34 = 0;
    }
    v32 = v110;
    v22 = v66 | 0x20;
    v33 = 0;
    goto LABEL_173;
  }
  v29 = gptiCurrent;
  if ( v28 == 1 )
    goto LABEL_121;
  if ( v28 != 2 )
  {
    if ( v28 == 3 )
      goto LABEL_121;
    if ( v28 == 4 )
    {
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
        v22 |= 0x10u;
      goto LABEL_66;
    }
    if ( v28 != 6 && v28 != 7 )
    {
      if ( v28 != 9 )
      {
        v32 = 0;
        v30 = 0;
        v34 = 0;
        v33 = 0;
        goto LABEL_174;
      }
LABEL_66:
      v28 = 1;
      v104 = 1;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0 )
      {
        v36 = *(_DWORD *)(v21 + 48);
        if ( (v36 & 2) != 0 )
        {
          v28 = 3;
LABEL_75:
          v104 = v28;
          goto LABEL_121;
        }
        if ( (v36 & 0x18) == 0x18 )
        {
          v28 = 12;
          goto LABEL_75;
        }
        if ( (v36 & 8) != 0 )
        {
          v28 = 14;
          goto LABEL_75;
        }
        if ( (v36 & 0x10) != 0 )
        {
          v28 = 13;
          goto LABEL_75;
        }
      }
      if ( IsSemiMaximized((const struct tagWND *)a1) )
        RemoveSemiMaximizedState(v37);
      goto LABEL_121;
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
      v22 |= 0x10u;
    if ( (v105 & 0x40) == 0 )
    {
      v35 = CalcMinZOrder((struct tagWND *)a1);
      if ( v35 )
      {
        if ( !v118 )
          v118 = *(_QWORD *)v35;
      }
      else
      {
        v22 |= 4u;
      }
    }
    v104 = v28;
  }
LABEL_42:
  v30 = 1;
  v108 = 1;
  v31 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  if ( (v31 & 0x20) == 0 )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
    {
      v40 = (void *)ReferenceDwmApiPort(v38);
      if ( v40 )
      {
        UserSessionSwitchLeaveCrit(v39);
        DwmSyncNotifyMinimizing(v40);
        EnterCrit(1LL, 0LL);
      }
    }
    v41 = *(_DWORD *)(v21 + 48);
    v32 = 2;
    if ( (v41 & 1) == 0 )
    {
      v41 &= ~0x20u;
      *(_DWORD *)(v21 + 48) = v41;
    }
    if ( (v41 & 0x20) == 0 )
    {
      ParkIcon(a1, v21 + 32);
      *(_DWORD *)(v21 + 48) |= 0x20u;
    }
    *(_QWORD *)&v109 = *(_QWORD *)(v21 + 32);
    DWORD2(v109) = *(_DWORD *)(gpsi + 2124LL) + v109;
    HIDWORD(v109) = DWORD1(v109) + *(_DWORD *)(gpsi + 2128LL);
    xxxShowOwnedWindows(a1, 1LL, 0LL);
    for ( i = *(_QWORD *)(*(_QWORD *)(v29 + 432) + 112LL); i; i = *(_QWORD *)(i + 104) )
    {
      if ( i == a1 )
      {
        *(_QWORD *)&v119 = *(_QWORD *)(v29 + 416);
        *(_QWORD *)(v29 + 416) = &v119;
        *((_QWORD *)&v119 + 1) = i;
        HMLockObject(i);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
        {
          v45 = *(_QWORD *)(a1 + 104);
          *(_QWORD *)&v121 = *(_QWORD *)(v29 + 416);
          *(_QWORD *)(v29 + 416) = &v121;
          *((_QWORD *)&v121 + 1) = v45;
          if ( v45 )
            HMLockObject(v45);
          xxxSetFocus(*(struct tagWND **)(a1 + 104), v43, v44);
          ThreadUnlock1(v47, v46, v48);
        }
        else
        {
          xxxSetFocus(0LL, v43, v44);
        }
        ThreadUnlock1(v50, v49, v51);
        break;
      }
    }
    if ( v103 )
      goto LABEL_108;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) != 0 )
    {
      v111 = 1;
      *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFFFFFE5 | 2;
LABEL_108:
      v55 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v55 + 21) & 2) != 0 )
      {
        v57 = 0;
      }
      else
      {
        v56 = IsTrayWindow(a1, 1);
        v55 = *(_QWORD *)(a1 + 40);
        v57 = v56;
        v102 = v56;
      }
      v58 = *(_BYTE *)(v55 + 31);
      if ( (v58 & 0x20) == 0 )
      {
        SetMinimize((struct tagWND *)a1);
        SetOrClrWF(0, (struct tagWND *)a1, 0xF01u, 1);
        v34 = 22;
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 2) == 0 )
          v102 = v57 != IsTrayWindow(a1, 1);
        for ( j = *(struct tagWND **)(a1 + 112); j; j = (struct tagWND *)*((_QWORD *)j + 11) )
          ClrFTrueVis(j);
        v22 |= 0x8120u;
        DesktopWindow = GetDesktopWindow(a1);
        v33 = v102;
        v30 = 1;
        if ( *(_QWORD *)(a1 + 104) == DesktopWindow )
          v116 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 18LL) & 0x20;
LABEL_174:
        if ( (v105 & 1) == 0 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
          {
            if ( v30 )
              v22 |= 0x40u;
            if ( !(unsigned int)IsVisible(a1)
              || (v80 & 0x10000) == 0
              || !v32
              || (v78 & 0x40) != 0 && (*(_BYTE *)(v79 + 23) & 0x10) != 0 )
            {
              goto LABEL_194;
            }
            v81 = 0LL;
            if ( v113 )
            {
              v81 = v109;
              v82 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
              v83 = *(_DWORD *)(v82 + 96) - v109;
              LODWORD(v109) = *(_DWORD *)(v82 + 96) - DWORD2(v109);
              DWORD2(v109) = v83;
            }
            if ( v32 == 3 || !IsTrayWindow(a1, 1) )
            {
              v84 = (struct tagWND *)a1;
            }
            else
            {
              v124 = 0LL;
              xxxSendMinRectMessages(a1, &v124);
              if ( IsRectEmptyInl(&v124) )
                goto LABEL_191;
              v84 = (struct tagWND *)a1;
            }
            xxxDrawAnimatedRects(v84);
LABEL_191:
            if ( v113 )
              v109 = v81;
            goto LABEL_194;
          }
          v22 |= 0x40u;
        }
LABEL_194:
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 2) == 0 && v33 && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
        {
          v85 = *(_QWORD *)a1;
          if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
            xxxCallHook(1, *(_QWORD *)a1, 0LL, 10);
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 192LL) )
            PostShellHookMessages(1uLL, v85);
        }
        v87 = InternalBeginDeferWindowPos(1u);
        if ( v87 )
        {
          v88 = v118 ? (__int64 *)HMValidateHandleNoSecure(v118, 1) : 0LL;
          v89 = _DeferWindowPos(
                  v87,
                  (_QWORD *)a1,
                  v88,
                  v109,
                  SDWORD1(v109),
                  DWORD2(v109) - (int)v109,
                  HIDWORD(v109) - DWORD1(v109),
                  v22,
                  0);
          if ( v89 )
          {
            if ( v111 && IsTopLevelWindow(a1) )
            {
              v90 = *(_QWORD *)(a1 + 40);
              if ( (*(_BYTE *)(v90 + 31) & 1) != 0 )
              {
                *(_QWORD *)(*(_QWORD *)(v89 + 40) + 112LL) = 2LL;
              }
              else if ( (*(_BYTE *)(v90 + 21) & 8) != 0 )
              {
                *(_QWORD *)(*(_QWORD *)(v89 + 40) + 112LL) = 1LL;
              }
            }
            xxxEndDeferWindowPosEx((struct tagSMWP *)v89, 0);
          }
        }
        if ( v34 )
          xxxWindowEvent(v34, (struct tagWND *)a1, 0, 0, 1);
        *(_DWORD *)(a1 + 320) &= ~0x200000u;
        v91 = *(_QWORD *)(a1 + 40);
        if ( (*(_BYTE *)(v91 + 31) & 1) != 0 )
        {
          v92 = ValidateHmonitorNoRip(*(_QWORD *)(v91 + 256));
          MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(
                                                  (__int64)&v123,
                                                  v92,
                                                  (const struct tagWND *)a1);
          v91 = *(_QWORD *)(a1 + 40);
          v94 = *(_QWORD *)(v91 + 88);
          v86 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
          v95 = _mm_srli_si128(*(__m128i *)(v91 + 88), 8).m128i_u64[0];
          if ( (int)v95 - (int)v94 < (int)(v86 - MonitorWorkRectForWindow->m128i_i64[0]) )
          {
            v86 = (unsigned int)(HIDWORD(v86) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
            if ( HIDWORD(v95) - HIDWORD(v94) < (int)v86 )
              *(_DWORD *)(a1 + 320) |= 0x200000u;
          }
        }
        if ( v104 == 2
          && (*(_BYTE *)(v91 + 21) & 2) == 0
          && (*(_BYTE *)(v91 + 31) & 0x10) != 0
          && (*(_BYTE *)(v91 + 30) & 0x40) != 0 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 136) + 80LL) )
          {
            v96 = 1;
            v97 = 38;
          }
          else
          {
            v96 = 0;
            v97 = 15;
          }
          PostMessage(a1, v97, v96, 0);
        }
        if ( v114 )
          xxxShowOwnedWindows(a1, 3LL, 0LL);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0
          && v104 == 6
          && *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1)
          && !(unsigned int)xxxActivateOnMinimize((struct tagWND *)a1) )
        {
          xxxActivateWindowWithOptions((const struct tagWND *)a1, 2LL, 49LL, 1);
        }
        if ( v115 )
          xxxSetFocus((struct tagWND *)a1, v91, v86);
        if ( v112 )
          xxxSendMessage(a1);
        if ( v116 )
          xxxFlushPalette(a1, v91, v86);
        v98 = *(_QWORD *)(a1 + 40);
        if ( v106 != (*(_BYTE *)(v98 + 31) & 1) || (v107 != 0) != ((*(unsigned __int8 *)(v98 + 31) >> 5) & 1) )
          PostIAMShellHookMessage(0x28u, *(_QWORD *)a1);
        goto LABEL_243;
      }
      if ( (v58 & 0x10) != 0 )
        goto LABEL_243;
      v33 = v102;
      v34 = 0;
      v22 |= 0x17u;
      v109 = 0LL;
LABEL_173:
      v30 = v108;
      goto LABEL_174;
    }
    if ( IsVerticallyMaximized((const struct tagWND *)a1) )
    {
      v53 = *(_DWORD *)(v21 + 48) & 0xFFFFFFE5 | 0x18;
    }
    else
    {
      if ( !IsLeftSemiMaximized(v52) )
      {
        if ( !IsRightSemiMaximized(v52) )
        {
          *(_DWORD *)(v21 + 48) = v54 & 0xFFFFFFE7;
          goto LABEL_108;
        }
        *(_DWORD *)(v21 + 48) = v54 & 0xFFFFFFE7 | 0x10;
        goto LABEL_106;
      }
      v53 = *(_DWORD *)(v21 + 48) & 0xFFFFFFE5 | 8;
    }
    *(_DWORD *)(v21 + 48) = v53;
LABEL_106:
    RemoveSemiMaximizedState(v52);
    goto LABEL_108;
  }
  if ( (v31 & 0x10) == 0 )
  {
    v32 = 0;
    v22 |= 0x17u;
    v33 = 0;
    v34 = 0;
    goto LABEL_174;
  }
LABEL_243:
  if ( !v117 )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
    {
      v100 = (void *)ReferenceDwmApiPort(v99);
      DwmAsyncNotifyAnimationChange(v100);
    }
  }
}
