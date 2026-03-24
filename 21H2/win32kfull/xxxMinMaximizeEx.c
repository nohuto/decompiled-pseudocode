/*
 * XREFs of xxxMinMaximizeEx @ 0x1C002B73C
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C002B6FC (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D051C (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D2CA0 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     NtUserMinMaximize @ 0x1C01FFB60 (NtUserMinMaximize.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CEC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D830 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020F97C (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021082C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0027BBC (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C002C048 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C002C098 (DwmAsyncNotifyAnimationChange.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002C120 (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SetMinimize @ 0x1C002C16C (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C002C1D4 (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C002C31C (ParkIcon.c)
 *     GetMonitorWorkRectForWindow @ 0x1C002C560 (GetMonitorWorkRectForWindow.c)
 *     DwmSyncNotifyMinimizing @ 0x1C002C59C (DwmSyncNotifyMinimizing.c)
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034410 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039B68 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003B09C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     CkptRestore @ 0x1C0041290 (CkptRestore.c)
 *     PostShellHookMessages @ 0x1C00435E0 (PostShellHookMessages.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FC70 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C005EB30 (IsTrayWindow.c)
 *     GetRect @ 0x1C0063F28 (GetRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0064D40 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00675D0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsVisible @ 0x1C0068164 (IsVisible.c)
 *     IsThreadDesktopComposed @ 0x1C006A418 (IsThreadDesktopComposed.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     InternalBeginDeferWindowPos @ 0x1C006BA00 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006BA90 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BF1C (IsToplevelWindowDesktopComposed.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006EDBC (xxxEndDeferWindowPosEx.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     ClrFTrueVis @ 0x1C00F54A0 (ClrFTrueVis.c)
 *     xxxSendMinRectMessages @ 0x1C0124CA8 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     xxxFlushPalette @ 0x1C0235250 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C023F004 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4, _OWORD *a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v9; // r13
  int v10; // r12d
  __int64 v11; // rax
  char v12; // dl
  char v13; // cl
  char v14; // di
  _OWORD *Prop; // rax
  _OWORD *v16; // rsi
  __int64 v17; // rdx
  struct tagWND *v18; // rax
  __int64 v19; // rdx
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // r14d
  __int64 i; // rcx
  __int64 v26; // rcx
  char v27; // dl
  unsigned int v28; // ecx
  __int64 v29; // rcx
  int v30; // r15d
  char v31; // dl
  unsigned int v32; // r12d
  __int64 j; // rsi
  __int64 DesktopWindow; // rax
  BOOL v35; // esi
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int8 v45; // dl
  char v46; // di
  __int64 v47; // rcx
  __int64 v48; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v50; // r10
  __int64 v51; // rdi
  unsigned __int64 v52; // xmm0_8
  __int64 v53; // rdx
  __int64 v54; // rcx
  void *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  void *v58; // rax
  __int64 v59; // rcx
  void *v60; // r14
  char v61; // r9
  __int64 v62; // r10
  int v63; // r11d
  int v64; // edx
  int v65; // eax
  char v66; // cl
  __int64 v67; // r8
  int v68; // ecx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  int v72; // eax
  char v73; // cl
  __int64 v74; // rcx
  __int64 v75; // rcx
  int v76; // esi
  __int64 v77; // rsi
  char v78; // cl
  __int64 v79; // rax
  __int64 v80; // rcx
  struct tagWND *v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rdx
  BOOL v86; // [rsp+58h] [rbp-B0h]
  char v87; // [rsp+5Ch] [rbp-ACh]
  char v88; // [rsp+64h] [rbp-A4h]
  int v89; // [rsp+7Ch] [rbp-8Ch]
  BOOL v90; // [rsp+84h] [rbp-84h]
  int v91; // [rsp+8Ch] [rbp-7Ch]
  int v92; // [rsp+90h] [rbp-78h]
  int v93; // [rsp+94h] [rbp-74h]
  int v94; // [rsp+98h] [rbp-70h]
  unsigned int v95; // [rsp+9Ch] [rbp-6Ch]
  __int64 v96; // [rsp+A0h] [rbp-68h]
  __int128 v97; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v98; // [rsp+B8h] [rbp-50h]
  __int128 v99; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v100; // [rsp+D0h] [rbp-38h]
  __int128 v101; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v102; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v103; // [rsp+F8h] [rbp-10h]
  __int128 v104; // [rsp+108h] [rbp+0h]
  __int64 v105; // [rsp+118h] [rbp+10h]

  v6 = *((_QWORD *)a1 + 13);
  v96 = a6;
  v9 = a2;
  v100 = 0LL;
  v98 = 0LL;
  v10 = a3 & 0x20;
  v105 = 0LL;
  v88 = a3;
  v11 = *((_QWORD *)a1 + 5);
  v99 = 0LL;
  *(_QWORD *)&v102.left = a4;
  v97 = 0LL;
  v92 = 0;
  v103 = 0LL;
  v91 = 0;
  v104 = 0LL;
  LODWORD(v11) = *(unsigned __int8 *)(v11 + 31);
  v90 = 0;
  v87 = v11 & 1;
  v89 = 0;
  v93 = 0;
  v86 = 0;
  v94 = 1;
  v95 = ((unsigned int)v11 >> 5) & 1;
  v101 = 0LL;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(struct tagQ **)(*((_QWORD *)a1 + 2) + 432LL),
      0x17u,
      a1,
      0,
      a2,
      a3 & 0xFFFDFFFF,
      0LL);
    return 0LL;
  }
  v12 = 16;
  if ( (a3 & 0x40) == 0 )
    v12 = 0;
  v13 = v12 | 4;
  if ( (a3 & 0x100) == 0 )
    v13 = v12;
  v14 = v13;
  if ( (a3 & 0x200) == 0 )
    v14 = v13;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v88 = a3;
    v94 = a3 & 0x10000;
    if ( (a3 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        v55 = (void *)ReferenceDwmApiPort(v54, v53);
        DwmAsyncNotifyAnimationChange(v55);
      }
    }
  }
  GetRect(a1, &v101, 66LL);
  if ( (a3 & 4) != 0 )
    Prop = (_OWORD *)GetProp(a1, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
  else
    Prop = (_OWORD *)CkptRestore(a1, &v101);
  v16 = Prop;
  if ( Prop )
  {
    if ( a5 && (v88 & 8) != 0 )
      *Prop = *a5;
    v17 = *(_QWORD *)(v6 + 40);
    if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      v64 = *(_DWORD *)(v17 + 96);
      v65 = v64 - DWORD2(v101);
      DWORD2(v101) = v64 - v101;
      LODWORD(v101) = v65;
    }
    if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) == 0
      || !(unsigned int)xxxCallHook(1, *(_QWORD *)a1, v9, 5) )
    {
      if ( (_DWORD)v9 == 204 )
      {
        v14 |= 0x14u;
        LODWORD(v9) = ((v16[3] & 4) != 0) + 1;
      }
      if ( (_DWORD)v9 != 3 && (_DWORD)v9 != 1 )
      {
        if ( (_DWORD)v9 == 2 )
          goto LABEL_27;
        if ( (_DWORD)v9 == 4 )
        {
          if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
            v14 |= 0x10u;
        }
        else
        {
          if ( (unsigned int)v9 <= 5 )
            goto LABEL_127;
          if ( (unsigned int)v9 <= 7 )
          {
            v18 = CalcMinZOrder(a1);
            if ( v18 && !a6 )
              v96 = *(_QWORD *)v18;
LABEL_27:
            v19 = 1LL;
            v20 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v20 & 0x20) != 0 )
            {
              if ( (v20 & 0x10) != 0 )
                goto LABEL_75;
              v24 = 0;
              v35 = 0;
              v32 = 0;
            }
            else
            {
              if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
              {
                v60 = (void *)ReferenceDwmApiPort(v22, v21);
                if ( v60 )
                {
                  if ( gdwInAtomicOperation )
                  {
                    v59 = gdwExtraInstrumentations;
                    if ( (gdwExtraInstrumentations & 1) != 0 )
                      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                  }
                  UserSessionSwitchLeaveCrit(v59);
                  DwmSyncNotifyMinimizing(v60);
                  EnterCrit(0LL, 1LL);
                }
              }
              v23 = *((_DWORD *)v16 + 12);
              v24 = 2;
              if ( (v23 & 1) == 0 )
              {
                v23 &= ~0x20u;
                *((_DWORD *)v16 + 12) = v23;
              }
              if ( (v23 & 0x20) == 0 )
              {
                ParkIcon(a1, v16 + 2);
                *((_DWORD *)v16 + 12) |= 0x20u;
              }
              xxxShowOwnedWindows(a1, 1LL, 0LL);
              for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL); i; i = *(_QWORD *)(i + 104) )
              {
                if ( (struct tagWND *)i == a1 )
                {
                  *(_QWORD *)&v97 = *(_QWORD *)(gptiCurrent + 416LL);
                  *(_QWORD *)(gptiCurrent + 416LL) = &v97;
                  *((_QWORD *)&v97 + 1) = i;
                  HMLockObject(i);
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                  {
                    v69 = *((_QWORD *)a1 + 13);
                    *(_QWORD *)&v99 = *(_QWORD *)(gptiCurrent + 416LL);
                    *(_QWORD *)(gptiCurrent + 416LL) = &v99;
                    *((_QWORD *)&v99 + 1) = v69;
                    if ( v69 )
                      HMLockObject(v69);
                    xxxSetFocus(*((struct tagWND **)a1 + 13));
                    ThreadUnlock1(v70);
                  }
                  else
                  {
                    xxxSetFocus(0LL);
                  }
                  ThreadUnlock1(v71);
                  break;
                }
              }
              v26 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v26 + 31) & 1) != 0 )
              {
                v89 = 1;
                v28 = v16[3] & 0xFFFFFFE5 | 2;
              }
              else
              {
                v27 = *(_BYTE *)(v26 + 233);
                if ( (v27 & 3) == 3 )
                {
                  v28 = v16[3] & 0xFFFFFFE5 | 0x18;
                }
                else if ( (v27 & 1) != 0 )
                {
                  v28 = v16[3] & 0xFFFFFFE5 | 8;
                }
                else if ( (v27 & 2) != 0 )
                {
                  v28 = v16[3] & 0xFFFFFFE5 | 0x10;
                }
                else
                {
                  v28 = v16[3] & 0xFFFFFFE5;
                }
              }
              *((_DWORD *)v16 + 12) = v28;
              v29 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v29 + 21) & 2) != 0 )
              {
                v30 = 0;
              }
              else
              {
                v72 = IsTrayWindow(a1);
                v29 = *((_QWORD *)a1 + 5);
                v30 = v72;
                v86 = v72;
              }
              v31 = *(_BYTE *)(v29 + 31);
              if ( (v31 & 0x20) != 0 )
              {
                if ( (v31 & 0x10) != 0 )
                  goto LABEL_75;
                v35 = v86;
                v19 = 1LL;
                v32 = 0;
              }
              else
              {
                SetMinimize(a1, 1LL);
                SetOrClrWF(0LL, a1, 3841LL, 1LL);
                v32 = 22;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
                  v86 = v30 != IsTrayWindow(a1);
                for ( j = *((_QWORD *)a1 + 14); j; j = *(_QWORD *)(j + 88) )
                  ClrFTrueVis(j);
                DesktopWindow = GetDesktopWindow(a1);
                v35 = v86;
                v19 = 1LL;
                if ( *((_QWORD *)a1 + 13) == DesktopWindow )
                  v93 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x20;
              }
            }
LABEL_49:
            if ( (v88 & 1) != 0
              || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0
              || !(unsigned int)IsVisible(a1)
              || (v63 & 0x10000) == 0
              || !v24
              || (v61 & 0x40) != 0 && (*(_BYTE *)(v62 + 23) & 0x10) != 0 )
            {
              goto LABEL_51;
            }
            if ( v24 == 3 || !(unsigned int)IsTrayWindow(a1) )
            {
              v81 = a1;
            }
            else
            {
              v102 = 0LL;
              xxxSendMinRectMessages(a1, &v102);
              if ( (unsigned int)IsRectEmptyInl(&v102) )
                goto LABEL_51;
              v81 = a1;
            }
            xxxDrawAnimatedRects(v81);
LABEL_51:
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 && v35 && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v82 = *(_QWORD *)a1;
              v19 = (unsigned int)(*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL)
                                                                                + 16LL));
              if ( ((*(_WORD *)(gptiCurrent + 680LL) | *(_WORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(1, *(_QWORD *)a1, 0LL, 10);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                PostShellHookMessages(1LL, v82);
            }
            v37 = InternalBeginDeferWindowPos(1LL, v19);
            if ( v37 )
            {
              if ( v96 )
              {
                LOBYTE(v36) = 1;
                v39 = HMValidateHandleNoSecure(v96, v36);
              }
              else
              {
                v39 = 0LL;
              }
              v38 = _DeferWindowPos(v37, a1, v39);
              if ( v38 )
              {
                if ( v89 && *(_DWORD *)*gpDispInfo > 1u )
                {
                  v83 = *((_QWORD *)a1 + 5);
                  if ( (*(_BYTE *)(v83 + 31) & 1) != 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v38 + 40) + 112LL) = 2LL;
                  }
                  else if ( (*(_BYTE *)(v83 + 21) & 8) != 0 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v38 + 40) + 112LL) = 1LL;
                  }
                }
                xxxEndDeferWindowPosEx((struct tagSMWP *)v38);
                if ( (unsigned int)IsTopLevelWindow(a1) )
                  xxxRestoreWindowFromDeferredStateIfNeeded(a1);
              }
            }
            if ( v32 )
              xxxWindowEvent(v32, 1u);
            *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40000000u;
            v40 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v40 + 31) & 1) != 0 )
            {
              v48 = ValidateHmonitorNoRip(*(_QWORD *)(v40 + 256));
              MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v101, v48, a1);
              v50 = *((_QWORD *)a1 + 5);
              v40 = v50;
              v51 = *(_QWORD *)(v50 + 88);
              v38 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
              v52 = _mm_srli_si128(*(__m128i *)(v50 + 88), 8).m128i_u64[0];
              if ( (int)v52 - (int)v51 < (int)(v38 - MonitorWorkRectForWindow->m128i_i64[0]) )
              {
                v38 = (unsigned int)(HIDWORD(v38) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
                if ( HIDWORD(v52) - HIDWORD(v51) < (int)v38 )
                {
                  *(_DWORD *)(v50 + 232) |= 0x40000000u;
                  v40 = *((_QWORD *)a1 + 5);
                }
              }
            }
            if ( (_DWORD)v9 == 2
              && (*(_BYTE *)(v40 + 21) & 2) == 0
              && (*(_BYTE *)(v40 + 31) & 0x10) != 0
              && (*(_BYTE *)(v40 + 30) & 0x40) != 0 )
            {
              if ( *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL) )
              {
                v84 = 1LL;
                v85 = 38LL;
              }
              else
              {
                v84 = 0LL;
                v85 = 15LL;
              }
              PostMessage(a1, v85, v84, 0LL);
            }
            if ( v91 )
              xxxShowOwnedWindows(a1, 3LL, 0LL);
            if ( (_DWORD)v9 == 6
              && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1)
              && !(unsigned int)xxxActivateOnMinimize(a1) )
            {
              xxxActivateWindowWithOptions(a1, 2LL, 57LL, 1LL);
            }
            if ( v92 )
              xxxSetFocus(a1);
            if ( v90 )
              xxxSendMessage(a1, 6LL, 1LL, 0LL);
            if ( v93 )
              xxxFlushPalette(a1, v40, v38);
            v41 = *((_QWORD *)a1 + 5);
            if ( v87 != (*(_BYTE *)(v41 + 31) & 1) || v95 != ((*(unsigned __int8 *)(v41 + 31) >> 5) & 1) )
              PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 40LL, *(_QWORD *)a1);
            goto LABEL_75;
          }
          if ( (_DWORD)v9 != 9 )
          {
LABEL_127:
            v24 = 0;
            v19 = 0LL;
            v32 = 0;
            v35 = 0;
            goto LABEL_49;
          }
        }
        v66 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v66 & 0x20) != 0 || (v66 & 1) != 0 && v10 )
        {
          v68 = *((_DWORD *)v16 + 12);
          if ( (v68 & 2) != 0 )
          {
            LODWORD(v9) = 3;
            goto LABEL_77;
          }
          if ( (v68 & 0x18) == 0x18 )
          {
            LODWORD(v9) = 12;
            goto LABEL_77;
          }
          if ( (v68 & 8) != 0 )
          {
            LODWORD(v9) = 14;
            goto LABEL_77;
          }
          if ( (v68 & 0x10) != 0 )
          {
            LODWORD(v9) = 13;
            goto LABEL_77;
          }
          LODWORD(v9) = 1;
          SetOrClrWF(0LL, a1, 55553LL, 1LL);
          v67 = 55554LL;
        }
        else
        {
          LODWORD(v9) = 1;
          SetOrClrWF(0LL, a1, 55553LL, 1LL);
          SetOrClrWF(0LL, a1, 55554LL, 1LL);
          v67 = 55936LL;
        }
        SetOrClrWF(0LL, a1, v67, 1LL);
      }
LABEL_77:
      v43 = *((_QWORD *)a1 + 5);
      if ( (_DWORD)v9 == 3 )
      {
        v44 = ValidateHmonitorNoRip(*(_QWORD *)(v43 + 256));
        v45 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v45 & 1) != 0
          && (!*(_QWORD *)&v102.left || v44 == *(_QWORD *)&v102.left)
          && (((v88 & 2) == 0) & (v45 >> 4)) != 0 )
        {
          goto LABEL_75;
        }
        v89 = 1;
        v46 = v14 | (16 * (v88 & 1));
        if ( (v45 & 0x20) != 0 )
          *((_DWORD *)v16 + 12) |= 4u;
        xxxInitSendValidateMinMaxInfoEx(a1);
      }
      else
      {
        v73 = v14;
        if ( (*(_BYTE *)(v43 + 31) & 0x21) == 0 )
          v73 = v14;
        v46 = v73;
        if ( (*(_BYTE *)(v43 + 31) & 1) != 0 )
          v89 = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        if ( !xxxSendMessage(a1, 19LL, 0LL, 0LL) )
          goto LABEL_75;
        v91 = 1;
        v24 = 1;
        if ( (v46 & 0x10) == 0 )
        {
          v92 = 1;
          v90 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0;
        }
      }
      else
      {
        v24 = 3;
      }
      switch ( (_DWORD)v9 )
      {
        case 3:
          SetOrClrWF(1LL, a1, 3841LL, 1LL);
          SetOrClrWF(0LL, a1, 55553LL, 1LL);
          SetOrClrWF(0LL, a1, 55554LL, 1LL);
          SetOrClrWF(0LL, a1, 55936LL, 1LL);
          if ( (v88 & 0x10) == 0 && gSqmIsOptedIn )
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
          goto LABEL_88;
        case 0xC:
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          v74 = 1LL;
          break;
        case 0xE:
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          SetOrClrWF(1LL, a1, 55553LL, 1LL);
          v75 = 0LL;
LABEL_178:
          SetOrClrWF(v75, a1, 55554LL, 1LL);
LABEL_88:
          v47 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v47 + 31) & 0x20) != 0 )
          {
            if ( (*(_BYTE *)(v47 + 21) & 2) != 0 )
              v76 = 0;
            else
              v76 = IsTrayWindow(a1);
            SetMinimize(a1, 0LL);
            v32 = 23;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0
              && v76 != (unsigned int)IsTrayWindow(a1)
              && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v77 = *(_QWORD *)a1;
              if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(2, *(_QWORD *)a1, 0LL, 10);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                PostShellHookMessages(2LL, v77);
            }
            v78 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v78 & 0xC0) != 0x40 && (v78 & 0x10) != 0 )
            {
              v79 = *((_QWORD *)a1 + 2);
              if ( *(_DWORD *)(v79 + 900) == 1 )
              {
                v80 = *(_QWORD *)(v79 + 432);
                if ( v80 != gpqForeground && ((v46 & 0x10) == 0 || *(struct tagWND **)(v80 + 120) == a1) )
                  xxxSetForegroundWindowWithOptions(a1, 6LL, 4097LL);
              }
            }
          }
          else
          {
            v32 = 0;
          }
          v35 = 0;
          v19 = 0LL;
          goto LABEL_49;
        case 0xD:
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          v74 = 0LL;
          break;
        default:
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          goto LABEL_88;
      }
      SetOrClrWF(v74, a1, 55553LL, 1LL);
      v75 = 1LL;
      goto LABEL_178;
    }
  }
LABEL_75:
  if ( !v94 && (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v58 = (void *)ReferenceDwmApiPort(v57, v56);
    DwmAsyncNotifyAnimationChange(v58);
  }
  return 0LL;
}
