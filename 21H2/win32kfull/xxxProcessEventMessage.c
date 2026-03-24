/*
 * XREFs of xxxProcessEventMessage @ 0x1C00C1918
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxProcessTSFEvent @ 0x1C0006794 (xxxProcessTSFEvent.c)
 *     xxxResetTooltip @ 0x1C002B3FC (xxxResetTooltip.c)
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     xxxCancelMouseMoveTracking @ 0x1C002D9FC (xxxCancelMouseMoveTracking.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0030A88 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0031A40 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     RtlInitLargeUnicodeString @ 0x1C0033FBC (RtlInitLargeUnicodeString.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0034B6C (xxxApplyGlobalInputSettings.c)
 *     _PostTransformableMessage @ 0x1C003F958 (_PostTransformableMessage.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0040A20 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     PostShellHookMessages @ 0x1C00435E0 (PostShellHookMessages.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FC70 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0050F60 (xxxProcessNotifyWinEvent.c)
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00675D0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C0EFC (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00C10D4 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00C1128 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     _PostThreadMessage @ 0x1C00DA748 (_PostThreadMessage.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C0101870 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C010D880 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C011C9CC (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120404 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0124A40 (xxxProcessSetWindowPosEvent.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C0125D64 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C012619C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     xxxClientBroadcastThemeChange @ 0x1C012C610 (xxxClientBroadcastThemeChange.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C01359B4 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxSoundSentry @ 0x1C015DA30 (xxxSoundSentry.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D051C (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D2CA0 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E20A0 (PostMousePointerLeaveAndCleanup.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F29DC (xxxDoDeferredPointerActivate.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D62C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxClientUpdateDpi @ 0x1C0233794 (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C02338B8 (xxxSendShutdownData.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C0241A58 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C0241C28 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 *v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int v16; // r12d
  unsigned __int64 v17; // r14
  struct _LARGE_STRING *v18; // r15
  struct _KTHREAD *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  unsigned __int64 v24; // r14
  struct tagWND **v25; // r13
  struct tagWND *v26; // r14
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rax
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 *v37; // rax
  __int64 result; // rax
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // rcx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  const struct FRAME_MARGIN *v56; // r12
  struct tagWND *v57; // rbx
  __int64 v58; // rcx
  const struct FRAME_MARGIN *v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // r14
  int v62; // eax
  __int64 v63; // rax
  unsigned __int16 v64; // bx
  __int64 v65; // rax
  __int64 v66; // rbx
  struct tagWND *v67; // rbx
  unsigned __int64 v68; // rax
  NotifyShell *v69; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v72; // rcx
  __int64 CurrentThreadProcess; // rax
  struct tagWND *v74; // rax
  __int64 v75; // rcx
  int v76; // eax
  unsigned int v77; // r14d
  unsigned int v78; // ebx
  struct tagTOOLTIPWND *v79; // rax
  struct tagTOOLTIPWND *v80; // rbx
  __int64 v81; // rdi
  __int64 v82; // rax
  struct tagWND *v83; // rbx
  __int64 v84; // rax
  int v85; // ebx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 CurrentProcessWow64Process; // rax
  __int64 v89; // rax
  int v90; // ebx
  __int64 v91; // rcx
  __int64 v92; // rax
  unsigned __int64 *v93; // r14
  unsigned __int64 v94; // rcx
  int v95; // ebx
  unsigned __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rbx
  __int64 v100; // rax
  int v101; // r12d
  struct tagWND *v102; // rbx
  __int64 v103; // rcx
  BOOL v104; // eax
  struct tagRECT *v105; // rcx
  unsigned int *v106; // r9
  struct tagRECT *v107; // rdx
  unsigned int v108; // r9d
  struct tagRECT *v109; // r8
  __int64 v110; // rax
  struct tagWND *v111; // rbx
  unsigned int v112; // edx
  int v113; // r8d
  __int64 v114; // rax
  const struct WINDOWPOSANDCHECKPOINT *v115; // rdi
  struct tagWND *v116; // rbx
  __int64 v117; // rcx
  __int64 v118; // rax
  struct tagWND *v119; // rbx
  __int64 v120; // rcx
  __int64 v121; // rax
  int v122; // ebx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int128 v125; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v126; // [rsp+50h] [rbp-B0h]
  tagDomLock *v127; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v128; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v129; // [rsp+70h] [rbp-90h]
  _QWORD v130[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v131[3]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v132[3]; // [rsp+A8h] [rbp-58h] BYREF
  tagDomLock *v133[2]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v134[264]; // [rsp+D0h] [rbp-30h] BYREF

  v125 = 0LL;
  v126 = 0LL;
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v72),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v130[0] = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = v130;
  v12 = *(unsigned int *)(a2 + 96);
  v13 = *(unsigned __int64 **)(a1 + 432);
  v130[2] = CleanEventMessage;
  v130[1] = a2;
  if ( (int)v12 <= 15 )
  {
    if ( (_DWORD)v12 == 15 )
    {
      v93 = (unsigned __int64 *)v13[14];
      if ( v93 || (v93 = (unsigned __int64 *)v13[15]) != 0LL )
      {
        v94 = v93[2];
        if ( a1 == v94 )
        {
          v95 = *(_DWORD *)(a2 + 40) - 165;
          v96 = ((unsigned __int64)(unsigned __int16)v95 << 16) | (unsigned __int16)GetMouseKeyFlags(*(_QWORD *)(v94 + 432));
          *((_QWORD *)&v125 + 1) = v93;
          v97 = *(_QWORD *)(a2 + 120);
          *(_QWORD *)(a2 + 40) = v96;
          *(_DWORD *)(a1 + 1232) |= 0x800u;
          *(_QWORD *)(a1 + 1240) = v97;
          *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v125;
          HMLockObject(v93);
          xxxSendMessage((unsigned __int64)v93, 0x319u, *v93, *(struct _LARGE_STRING **)(a2 + 40));
          ThreadUnlock1(v98);
          *(_DWORD *)(a1 + 1232) &= ~0x800u;
        }
        else
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v94,
            *(struct tagQ **)(v94 + 432),
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            (struct tagINPUT_MESSAGE_SOURCE *)(a2 + 120));
        }
      }
    }
    else if ( (int)v12 <= 8 )
    {
      if ( (_DWORD)v12 == 8 )
      {
        v68 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1);
        v69 = (NotifyShell *)v68;
        if ( v68 )
        {
          if ( *(char *)(*(_QWORD *)(v68 + 40) + 19LL) < 0 )
          {
            *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
            *(_QWORD *)(a1 + 416) = &v125;
            *((_QWORD *)&v125 + 1) = v68;
            HMLockObject(v68);
            xxxFreeWindow(v69, (__int64)&v125);
          }
          else
          {
            xxxDestroyWindow(v68);
          }
        }
      }
      else
      {
        v43 = v12 - 1;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              v46 = v45 - 1;
              if ( v46 )
              {
                v47 = v46 - 1;
                if ( v47 )
                {
                  v12 = (unsigned int)(v47 - 1);
                  if ( (_DWORD)v12 )
                  {
                    if ( (_DWORD)v12 == 1 )
                    {
                      v74 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
                      if ( v74 )
                        PostTransformableMessage(
                          v74,
                          *(_DWORD *)(a2 + 24),
                          *(_QWORD *)(a2 + 32),
                          *(_QWORD *)(a2 + 40),
                          1);
                    }
                  }
                  else
                  {
                    xxxProcessActivationEvent((const struct tagQMSG *)a2);
                  }
                }
                else
                {
                  xxxDeactivate(a1, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 72));
                }
              }
              else
              {
                ProcessUpdateKeyStateEvent(v13, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
              }
            }
            else
            {
              xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
            }
          }
          else
          {
            v12 = v13[13];
            if ( v12 )
            {
              *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v125;
              *((_QWORD *)&v125 + 1) = v12;
              HMLockObject(v12);
              xxxSendMessage(v13[13], 0x1Fu, 0LL, 0LL);
              ThreadUnlock1(v75);
              SetWakeBit(a1, 2u);
            }
          }
        }
        else
        {
          v65 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          v66 = v65;
          if ( v65 )
          {
            v12 = *(_QWORD *)(v65 + 40);
            if ( *(char *)(v12 + 20) >= 0 )
            {
              *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v125;
              *((_QWORD *)&v125 + 1) = v65;
              HMLockObject(v65);
              xxxProcessShowWindowEvent(v66, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
              goto LABEL_22;
            }
          }
        }
      }
    }
    else
    {
      v14 = (unsigned int)(v12 - 9);
      if ( (_DWORD)v14 )
      {
        v39 = v14 - 1;
        if ( !v39 )
        {
          v83 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          if ( !v83 )
            goto LABEL_23;
          *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v125;
          *((_QWORD *)&v125 + 1) = v83;
          HMLockObject(v83);
          xxxProcessMinimizeHungThreadEvent(v83);
          goto LABEL_22;
        }
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            v12 = (unsigned int)(v41 - 1);
            if ( (_DWORD)v12 )
            {
              if ( (_DWORD)v12 == 1 )
              {
                v76 = *(_DWORD *)(a2 + 24);
                if ( v76 == 5 )
                {
                  v77 = *(_DWORD *)(a2 + 40);
                  v76 = *(_DWORD *)(a2 + 32);
                  if ( v77 > 5 )
                    v77 = 5;
                }
                else
                {
                  v77 = 1;
                }
                if ( v77 )
                {
                  v78 = (unsigned __int16)v76 | 0x10000;
                  do
                  {
                    CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v78);
                    --v77;
                  }
                  while ( v77 );
                }
                xxxSoundSentry();
              }
            }
            else
            {
              if ( ((*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x800) != 0 )
                xxxCallHook(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10);
              PostShellHookMessages(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40));
            }
          }
          else
          {
            CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
              v133,
              (tagDomLock *)(a1 + 392));
            CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v127);
            v42 = *(_QWORD *)(a2 + 40);
            if ( *(_DWORD *)(v42 + 24) )
              xxxProcessTSFEvent((struct tagNOTIFY *)v42);
            else
              xxxProcessNotifyWinEvent(v42);
            tagDomLock::UnLockExclusive(v127);
            CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v133);
          }
        }
        else
        {
          v60 = *(_QWORD *)(a1 + 456);
          v61 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          v62 = *(_DWORD *)(v60 + 48);
          if ( (v62 & 0x5C0) == 0
            || (v12 = *(_QWORD *)(a2 + 16), **(_QWORD **)(v60 + 184) != v12)
            || (v12 = *(unsigned int *)(a2 + 32), *(_DWORD *)(v60 + 192) != (_DWORD)v12) )
          {
            if ( (v62 & 0x100) != 0 )
              *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
            if ( v61 )
            {
              *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v125;
              *((_QWORD *)&v125 + 1) = v61;
              HMLockObject(v61);
              xxxCancelMouseMoveTracking(*(_DWORD *)(a2 + 24), v61, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40));
              goto LABEL_22;
            }
            if ( (*(_DWORD *)(a2 + 40) & 0x300LL) != 0 && (*(_DWORD *)(a2 + 24) & 0x200) != 0 )
            {
              v79 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v60 + 112));
              v80 = v79;
              if ( v79 )
              {
                v81 = *(_QWORD *)v79;
                if ( *(_QWORD *)v79 )
                {
                  v131[2] = 0LL;
                  v82 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v131[0] = *(_QWORD *)(v82 + 416);
                  *(_QWORD *)(v82 + 416) = v131;
                  v131[1] = v81;
                  HMLockObject(v81);
                  xxxResetTooltip(v80);
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
      else
      {
        v15 = *(_QWORD *)(a2 + 32);
        v16 = *(_DWORD *)(a2 + 24);
        v17 = *(_QWORD *)(a2 + 16);
        v18 = *(struct _LARGE_STRING **)(a2 + 40);
        v128 = 0LL;
        v132[2] = 0LL;
        v19 = KeGetCurrentThread();
        v129 = v15;
        if ( !(unsigned __int8)KeIsAttachedProcess(v14)
          || (v84 = PsGetCurrentProcess(v21, v20, v22),
              v85 = PsGetProcessSessionIdEx(v84),
              v87 = PsGetCurrentThreadProcess(v86),
              v85 == (unsigned int)PsGetProcessSessionIdEx(v87)) )
        {
          PsGetThreadWin32Thread(v19);
        }
        v12 = gpsi;
        if ( (unsigned __int64)(unsigned __int16)v17 < *(_QWORD *)(gpsi + 8LL) )
        {
          v23 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v17 * LODWORD(gSharedInfo[2]);
          v24 = v17 >> 16;
          v25 = (struct tagWND **)HMPkheFromPhe(v23);
          if ( ((_WORD)v24 == *(_WORD *)(v23 + 26)
             || (_WORD)v24 == 0xFFFF
             || !(_WORD)v24 && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12)) != 0)
            && (*(_BYTE *)(v23 + 25) & 1) == 0
            && *(_BYTE *)(v23 + 24) == 1 )
          {
            v26 = *v25;
            if ( *v25 )
            {
              v27 = 0LL;
              v127 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v12)
                || (v89 = PsGetCurrentProcess(v29, v28, v30),
                    v90 = PsGetProcessSessionIdEx(v89),
                    v92 = PsGetCurrentThreadProcess(v91),
                    v90 == (unsigned int)PsGetProcessSessionIdEx(v92)) )
              {
                v31 = (__int64 *)PsGetThreadWin32Thread(v127);
                if ( v31 )
                  v27 = *v31;
              }
              v132[0] = *(_QWORD *)(v27 + 416);
              *(_QWORD *)(v27 + 416) = v132;
              v132[1] = v26;
              HMLockObject(v26);
              if ( v16 >= 0x1A )
              {
                if ( v16 <= 0x1B )
                {
                  if ( v18 )
                  {
                    if ( v18 == (struct _LARGE_STRING *)-1LL )
                    {
                      v134[0] = 0;
                      RtlInitLargeUnicodeString((__int64)&v128, (__int64)v134);
                      v18 = (struct _LARGE_STRING *)&v128;
                    }
                    else
                    {
                      v64 = (unsigned __int16)v18;
                      if ( (unsigned int)UserGetAtomName((unsigned __int16)v18, v134, 260LL) )
                      {
                        RtlInitLargeUnicodeString((__int64)&v128, (__int64)v134);
                        v18 = (struct _LARGE_STRING *)&v128;
                      }
                      else
                      {
                        v18 = 0LL;
                      }
                      UserDeleteAtom(v64);
                    }
                  }
                  *(_QWORD *)(a2 + 40) = 0LL;
                }
                else if ( v16 == 834 )
                {
                  xxxEndGetWidnowTrackInfoAsync(v26);
                  goto LABEL_22;
                }
              }
              xxxSendMessage((unsigned __int64)v26, v16, v129, v18);
LABEL_22:
              ThreadUnlock1(v32);
              goto LABEL_23;
            }
          }
        }
      }
    }
    goto LABEL_23;
  }
  if ( (int)v12 > 23 )
  {
    v52 = v12 - 24;
    if ( !v52 )
    {
      xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
      goto LABEL_23;
    }
    v53 = v52 - 1;
    if ( !v53 )
    {
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_23;
    }
    v54 = v53 - 1;
    if ( v54 )
    {
      v55 = v54 - 1;
      if ( v55 )
      {
        v12 = (unsigned int)(v55 - 1);
        if ( (_DWORD)v12 )
        {
          if ( (_DWORD)v12 == 1 )
          {
            v67 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
            if ( v67 )
            {
              *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v125;
              *((_QWORD *)&v125 + 1) = v67;
              HMLockObject(v67);
              xxxDeliverRestoreFocusMessage(v67);
              goto LABEL_22;
            }
          }
          goto LABEL_23;
        }
        v56 = *(const struct FRAME_MARGIN **)(a2 + 32);
        v57 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        if ( v57 )
        {
          *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v125;
          *((_QWORD *)&v125 + 1) = v57;
          HMLockObject(v57);
          xxxProcessUpdateFrameMargins(v57, v56);
          ThreadUnlock1(v58);
        }
        v59 = v56;
LABEL_60:
        Win32FreePool(v59);
        goto LABEL_23;
      }
      v114 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v115 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      v116 = (struct tagWND *)v114;
      if ( v114 )
      {
        *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = &v125;
        *((_QWORD *)&v125 + 1) = v114;
        HMLockObject(v114);
        xxxCloneWindowPosAndArrangement(v116, v115);
        ThreadUnlock1(v117);
      }
    }
    else
    {
      v118 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v115 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      v119 = (struct tagWND *)v118;
      if ( v118 )
      {
        *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = &v125;
        *((_QWORD *)&v125 + 1) = v118;
        HMLockObject(v118);
        if ( CMoveSizeRequest::xxxRevalidateAndTransferCapture(v115, v119) )
          CMoveSizeRequest::xxxSendSysCommandToWindow(v115, v119);
        ThreadUnlock1(v120);
      }
      if ( !v115 )
        goto LABEL_23;
    }
    v59 = v115;
    goto LABEL_60;
  }
  if ( (_DWORD)v12 == 23 )
  {
    v111 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
    if ( !v111 )
      goto LABEL_23;
    *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = &v125;
    *((_QWORD *)&v125 + 1) = v111;
    HMLockObject(v111);
    v113 = *(_DWORD *)(a2 + 40);
    v112 = *(_DWORD *)(a2 + 32);
    goto LABEL_157;
  }
  v48 = v12 - 16;
  if ( !v48 )
  {
    v110 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
    v111 = (struct tagWND *)v110;
    if ( !v110 )
      goto LABEL_23;
    v12 = *(_QWORD *)(v110 + 40);
    if ( (*(_BYTE *)(v12 + 31) & 1) == 0 )
      goto LABEL_23;
    *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = &v125;
    *((_QWORD *)&v125 + 1) = v110;
    HMLockObject(v110);
    v112 = 3;
    v113 = 3;
LABEL_157:
    xxxMinMaximizeEx(v111, v112, v113, 0LL, 0LL, 0LL);
    goto LABEL_22;
  }
  v49 = v48 - 1;
  if ( v49 )
  {
    v12 = (unsigned int)(v49 - 1);
    if ( (_DWORD)v12 )
    {
      v50 = v12 - 1;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( v51 )
        {
          v12 = (unsigned int)(v51 - 1);
          if ( (_DWORD)v12 )
          {
            if ( (_DWORD)v12 == 1 )
              xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32), v11);
          }
          else
          {
            v99 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), 1);
            v100 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
            PostMousePointerLeaveAndCleanup(v99, v100);
          }
        }
        else
        {
          xxxDoDeferredPointerActivate(a2);
          CleanEventMessage((struct tagQMSG *)a2);
        }
      }
      else if ( *(_DWORD *)(a2 + 24) == 809 )
      {
        PostThreadMessage(a1, 809LL, *(_QWORD *)(a2 + 32));
      }
      else
      {
        xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
      }
    }
    else if ( gpqForeground )
    {
      v63 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v63 )
      {
        if ( *(_QWORD *)(v63 + 16) == a1 )
        {
          v12 = HIDWORD(gpdwCPUserPreferencesMask);
          if ( (v12 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings();
        }
      }
    }
    goto LABEL_23;
  }
  v101 = *(_DWORD *)(a2 + 32);
  v102 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
  if ( v102 )
  {
    *(_QWORD *)&v125 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = &v125;
    *((_QWORD *)&v125 + 1) = v102;
    HMLockObject(v102);
    if ( v101 )
    {
      if ( v101 == 1 )
      {
        v104 = IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 20LL));
        v107 = (struct tagRECT *)(v106 + 1);
        v108 = *v106;
        v109 = 0LL;
        if ( !v104 )
          v109 = v105;
        xxxEndSetWindowArrangement(v102, v107, v109, v108);
      }
    }
    else
    {
      xxxArrangeWindow(v102, *(unsigned int *)(a2 + 40));
    }
    ThreadUnlock1(v103);
  }
  if ( v101 == 1 )
  {
    v59 = *(const struct FRAME_MARGIN **)(a2 + 40);
    goto LABEL_60;
  }
LABEL_23:
  v33 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v12)
    || (v121 = PsGetCurrentProcess(v35, v34, v36),
        v122 = PsGetProcessSessionIdEx(v121),
        v124 = PsGetCurrentThreadProcess(v123),
        v122 == (unsigned int)PsGetProcessSessionIdEx(v124)) )
  {
    v37 = (__int64 *)PsGetThreadWin32Thread(v33);
    if ( v37 )
      v2 = *v37;
  }
  result = v130[0];
  *(_QWORD *)(v2 + 16) = v130[0];
  return result;
}
