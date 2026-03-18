/*
 * XREFs of xxxProcessEventMessage @ 0x1C0125270
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C00159E4 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxResetTooltip @ 0x1C0016C80 (xxxResetTooltip.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C001C188 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0041E8C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C004A870 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C004AD48 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C004BBD8 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     _PostTransformableMessage @ 0x1C004F59C (_PostTransformableMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     RtlInitLargeUnicodeString @ 0x1C0065A48 (RtlInitLargeUnicodeString.c)
 *     _PostThreadMessage @ 0x1C009C5A0 (_PostThreadMessage.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C009CDF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C009D5D0 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C00AD4D4 (xxxProcessSetWindowPosEvent.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00AE86C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxClientBroadcastThemeChange @ 0x1C00B3044 (xxxClientBroadcastThemeChange.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B6B88 (xxxCancelMouseMoveTracking.c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00C2734 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00C3EC4 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00E7CDC (xxxProcessNotifyWinEvent.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139CA0 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage @ 0x1C0139CF4 (Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage.c)
 *     ?xxxTooltipQeventHandler@@YAXPEAUtagMSG@@@Z @ 0x1C013D724 (-xxxTooltipQeventHandler@@YAXPEAUtagMSG@@@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01B6970 (PostMousePointerLeaveAndCleanup.c)
 *     xxxProcessTSFEvent @ 0x1C01BFFF8 (xxxProcessTSFEvent.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01C7178 (xxxDoDeferredPointerActivate.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01EBB54 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     xxxSoundSentry @ 0x1C01F6208 (xxxSoundSentry.c)
 *     xxxClientUpdateDpi @ 0x1C0213724 (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C02137F8 (xxxSendShutdownData.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021EBEC (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z @ 0x1C0226E24 (-xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct tagQMSG *v6; // rdx
  _QWORD *v7; // rbx
  int v8; // eax
  unsigned __int64 v9; // rcx
  __int64 *v10; // rax
  struct tagWND *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int DLT; // eax
  __int64 DomainLockRef; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE *v22; // rbx
  int v23; // esi
  tagDomLock *v24; // rcx
  __int64 v25; // rcx
  struct tagINPUT_MESSAGE_SOURCE *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct tagWND *v30; // rax
  __int64 v31; // rsi
  __int128 *v32; // rbx
  unsigned int v33; // r12d
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct tagWND **v39; // r15
  struct tagWND *v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned __int16 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 *v47; // rax
  __int64 v48; // rcx
  __int64 result; // rax
  struct tagINPUT_MESSAGE_SOURCE *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  _QWORD *v58; // rdx
  __int64 v59; // rcx
  struct tagWND *v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct tagTOOLTIPWND *v66; // rax
  struct tagTOOLTIPWND *v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  unsigned int v72; // ebx
  struct tagINPUT_MESSAGE_SOURCE *v73; // r14
  struct tagQ **v74; // rcx
  int v75; // ebx
  int IsEnabledDeviceUsage; // eax
  struct tagINPUT_MESSAGE_SOURCE *v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  struct tagINPUT_MESSAGE_SOURCE *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  DesktopRecalc *v94; // rcx
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rbx
  struct tagWND *v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  struct tagINPUT_MESSAGE_SOURCE *v102[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v103; // [rsp+58h] [rbp-B0h]
  __int128 v104; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v105[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v106; // [rsp+88h] [rbp-80h] BYREF
  __int64 v107; // [rsp+98h] [rbp-70h]
  char v108; // [rsp+A0h] [rbp-68h]
  __int64 v109; // [rsp+A8h] [rbp-60h]
  char v110; // [rsp+B0h] [rbp-58h]
  _WORD v111[264]; // [rsp+B8h] [rbp-50h] BYREF

  v103 = 0LL;
  *(_OWORD *)v102 = 0LL;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  v105[0] = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 16) = v105;
  v7 = *(_QWORD **)(a1 + 432);
  v105[2] = CleanEventMessage;
  v8 = *(_DWORD *)(a2 + 96) - 1;
  v105[1] = a2;
  v9 = 0x1C0000000uLL;
  switch ( v8 )
  {
    case 0:
      v12 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v13 = v12;
      if ( v12 && *(char *)(*(_QWORD *)(v12 + 40) + 20LL) >= 0 )
      {
        v102[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v102;
        v102[1] = (struct tagINPUT_MESSAGE_SOURCE *)v12;
        HMLockObject(v12);
        xxxProcessShowWindowEvent(v13, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        ThreadUnlock1(v15, v14, v16);
      }
      goto LABEL_60;
    case 1:
      v26 = (struct tagINPUT_MESSAGE_SOURCE *)v7[14];
      if ( v26 )
      {
        v102[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v102;
        v102[1] = v26;
        HMLockObject(v26);
        xxxSendMessage(v7[14], 31LL, 0LL, 0LL);
        ThreadUnlock1(v28, v27, v29);
        SetWakeBit(a1, 2u);
      }
      goto LABEL_60;
    case 2:
      xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
      goto LABEL_60;
    case 3:
      ProcessUpdateKeyStateEvent(v7, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
      goto LABEL_60;
    case 4:
      xxxDeactivate(a1, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 72));
      goto LABEL_60;
    case 5:
      xxxProcessActivationEvent((const struct tagQMSG *)a2, (__int64)v6);
      goto LABEL_60;
    case 6:
      v30 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v30 )
        PostTransformableMessage(v30, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 1);
      goto LABEL_60;
    case 7:
      v10 = (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1);
      v11 = (struct tagWND *)v10;
      if ( v10 )
      {
        if ( *(char *)(v10[5] + 19) < 0 )
        {
          v102[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v102;
          v102[1] = (struct tagINPUT_MESSAGE_SOURCE *)v10;
          HMLockObject(v10);
          xxxFreeWindow(v11, (__int64)v102);
        }
        else
        {
          xxxDestroyWindow(v10);
        }
      }
      goto LABEL_60;
    case 8:
      v31 = *(_QWORD *)(a2 + 16);
      v32 = *(__int128 **)(a2 + 40);
      v106 = 0LL;
      v107 = 0LL;
      v104 = 0LL;
      v33 = *(_DWORD *)(a2 + 24);
      v34 = *(_QWORD *)(a2 + 32);
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v31 >= *(_QWORD *)(gpsi + 8LL) )
        goto LABEL_60;
      v35 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v31;
      v39 = (struct tagWND **)HMPkheFromPhe(v35);
      LOWORD(v31) = WORD1(v31) & 0x7FFF;
      if ( (WORD1(v31) & 0x7FFF) != *(_WORD *)(v35 + 26)
        && (_WORD)v31 != 0x7FFF
        && ((_WORD)v31 || !PsGetCurrentProcessWow64Process(v37, v36, v38)) )
      {
        goto LABEL_60;
      }
      if ( (*(_BYTE *)(v35 + 25) & 1) != 0 )
        goto LABEL_60;
      if ( *(_BYTE *)(v35 + 24) != 1 )
        goto LABEL_60;
      v40 = *v39;
      if ( !*v39 )
        goto LABEL_60;
      ThreadLockAlways(*v39, &v106);
      if ( v33 == 26 || v33 == 27 )
      {
        if ( v32 )
        {
          if ( v32 == (__int128 *)-1LL )
          {
            v111[0] = 0;
            RtlInitLargeUnicodeString((__int64)&v104, (__int64)v111);
            v32 = &v104;
          }
          else
          {
            v44 = (unsigned __int16)v32;
            if ( (unsigned int)UserGetAtomName((unsigned __int16)v32, v111, 260LL) )
            {
              *((_QWORD *)&v104 + 1) = v111;
              v46 = -1LL;
              do
                ++v46;
              while ( v111[v46] );
              v32 = &v104;
              LODWORD(v104) = 2 * v46;
              DWORD1(v104) = (2 * v46 + 2) & 0x7FFFFFFF;
            }
            else
            {
              v32 = 0LL;
            }
            UserDeleteAtom(v44, v45);
          }
        }
        *(_QWORD *)(a2 + 40) = 0LL;
      }
      else if ( v33 == 834 )
      {
        xxxEndGetWidnowTrackInfoAsync(v40);
        goto LABEL_59;
      }
      xxxSendMessage(v40, v33, v34, v32);
LABEL_59:
      ThreadUnlock1(v42, v41, v43);
      goto LABEL_60;
    case 9:
      v50 = (struct tagINPUT_MESSAGE_SOURCE *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v50 )
      {
        v102[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v102;
        v102[1] = v50;
        HMLockObject(v50);
        v53 = *((_QWORD *)v50 + 5);
        if ( (*(_BYTE *)(v53 + 31) & 0x10) == 0 )
        {
          SetVisible(v50, 1u);
          if ( (*(_BYTE *)(*((_QWORD *)v50 + 5) + 31LL) & 0x20) == 0 )
          {
            v54 = 1LL;
            v55 = 7LL;
            v56 = (__int64)v50;
            goto LABEL_117;
          }
        }
        goto LABEL_118;
      }
      goto LABEL_60;
    case 10:
      v57 = *(_QWORD *)(a1 + 456);
      v60 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( (*(_DWORD *)(v57 + 48) & 0xDC0) == 0
        || (v58 = *(_QWORD **)(v57 + 192), v59 = *(_QWORD *)(a2 + 16), *v58 != v59)
        || (v59 = *(unsigned int *)(a2 + 32), *(_DWORD *)(v57 + 200) != (_DWORD)v59) )
      {
        if ( !(unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v59, v58)
          && (*(_DWORD *)(v57 + 48) & 0x100) != 0 )
        {
          *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
        }
        if ( v60 )
        {
          v102[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v102;
          v102[1] = v60;
          HMLockObject(v60);
          xxxCancelMouseMoveTracking(*(unsigned int *)(a2 + 24), v60, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40));
          ThreadUnlock1(v64, v63, v65);
        }
        else if ( !(unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v62, v61)
               && (*(_DWORD *)(a2 + 40) & 0x300LL) != 0
               && (*(_DWORD *)(a2 + 24) & 0x200) != 0 )
        {
          v66 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v57 + 112));
          v67 = v66;
          if ( v66 )
          {
            v68 = *(_QWORD *)v66;
            if ( *(_QWORD *)v66 )
            {
              v106 = 0LL;
              v107 = 0LL;
              ThreadLockAlways(v68, &v106);
              xxxResetTooltip(v67);
              ThreadUnlock1(v70, v69, v71);
            }
          }
        }
      }
      goto LABEL_60;
    case 11:
      DLT = DLT_WINEVENT::getDLT(0x1C0000000uLL);
      DomainLockRef = GetDomainLockRef(DLT);
      BYTE8(v106) = 1;
      v22 = (char *)&v106 + 8;
      *(_QWORD *)&v106 = DomainLockRef;
      v23 = 0;
      v107 = gDomainDummyLock;
      v109 = 0LL;
      v110 = 0;
      v108 = 0;
      do
      {
        v24 = (tagDomLock *)*((_QWORD *)v22 - 1);
        if ( v24 )
        {
          if ( *v22 )
            tagDomLock::LockExclusive(v24);
          else
            tagDomLock::LockShared(v24);
        }
        ++v23;
        v22 += 16;
      }
      while ( !v23 );
      v25 = *(_QWORD *)(a2 + 40);
      v110 = 1;
      if ( *(_DWORD *)(v25 + 24) )
        xxxProcessTSFEvent((struct tagNOTIFY *)v25);
      else
        xxxProcessNotifyWinEvent(v25, v19, v20, v21);
      if ( v110 && (_QWORD)v106 )
      {
        if ( BYTE8(v106) )
          tagDomLock::UnLockExclusive((tagDomLock *)v106);
        else
          tagDomLock::UnLockShared((tagDomLock *)v106);
      }
      goto LABEL_60;
    case 12:
      if ( ((*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x800) != 0 )
        xxxCallHook(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10LL);
      PostShellHookMessagesEx(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL);
      goto LABEL_60;
    case 13:
      if ( *(_DWORD *)(a2 + 24) == 5 )
      {
        v72 = *(_DWORD *)(a2 + 40);
        if ( v72 <= 5 )
        {
          if ( !v72 )
            goto LABEL_90;
        }
        else
        {
          v72 = 5;
        }
      }
      else
      {
        v72 = 1;
      }
      do
      {
        CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
        --v72;
      }
      while ( v72 );
LABEL_90:
      xxxSoundSentry(v9);
LABEL_60:
      v47 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v47 )
      {
        v48 = *v47;
        result = v105[0];
        *(_QWORD *)(v48 + 16) = v105[0];
      }
      else
      {
        result = v105[0];
        MEMORY[0x10] = v105[0];
      }
      return result;
    case 14:
      v73 = (struct tagINPUT_MESSAGE_SOURCE *)v7[15];
      if ( v73 || (v73 = (struct tagINPUT_MESSAGE_SOURCE *)v7[16]) != 0LL )
      {
        v74 = (struct tagQ **)*((_QWORD *)v73 + 2);
        if ( (struct tagQ **)a1 == v74 )
        {
          v75 = *(_DWORD *)(a2 + 40) - 165;
          *(_QWORD *)(a2 + 40) = ((unsigned __int64)(unsigned __int16)v75 << 16) | (unsigned __int16)GetMouseKeyFlags(v74[54]);
          IsEnabledDeviceUsage = Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage();
          *(_QWORD *)(a1 + 1288) = *(_QWORD *)(a2 + 120);
          if ( IsEnabledDeviceUsage )
          {
            v81 = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
            *(_QWORD *)(a1 + 416) = v102;
            v102[0] = v81;
            v102[1] = v73;
            HMLockObject(v73);
            xxxSendMessage(v73, 793LL, *(_QWORD *)v73, *(_QWORD *)(a2 + 40));
            ThreadUnlock1(v83, v82, v84);
          }
          else
          {
            v77 = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
            *(_QWORD *)(a1 + 416) = v102;
            *(_DWORD *)(a1 + 1272) |= 0x800u;
            v102[0] = v77;
            v102[1] = v73;
            HMLockObject(v73);
            xxxSendMessage(v73, 793LL, *(_QWORD *)v73, *(_QWORD *)(a2 + 40));
            ThreadUnlock1(v79, v78, v80);
            *(_DWORD *)(a1 + 1272) &= ~0x800u;
          }
        }
        else
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v74,
            v74[54],
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            (struct tagINPUT_MESSAGE_SOURCE *)(a2 + 120));
        }
      }
      goto LABEL_60;
    case 15:
      v85 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v86 = v85;
      if ( v85 && (*(_BYTE *)(*(_QWORD *)(v85 + 40) + 31LL) & 1) != 0 )
      {
        v102[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v102;
        v102[1] = (struct tagINPUT_MESSAGE_SOURCE *)v85;
        HMLockObject(v85);
        xxxMinMaximize(v86, 3LL, 19LL);
        ThreadUnlock1(v88, v87, v89);
      }
      goto LABEL_60;
    case 16:
      v90 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v90 )
      {
        v102[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v102;
        v102[1] = (struct tagINPUT_MESSAGE_SOURCE *)v90;
        HMLockObject(v90);
        xxxArrangeWindow(v90, *(unsigned int *)(a2 + 32));
        ThreadUnlock1(v92, v91, v93);
      }
      goto LABEL_60;
    case 17:
      if ( v7
        && v7[15]
        && (v7 == (_QWORD *)gpqForeground || (unsigned __int8)IsKeyboardDelegationTarget(a1))
        && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
      {
        xxxApplyGlobalInputSettings();
      }
      goto LABEL_60;
    case 18:
      if ( *(_DWORD *)(a2 + 24) == 809 )
        PostThreadMessage(a1, 0x329u, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      else
        xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
      goto LABEL_60;
    case 19:
      xxxDoDeferredPointerActivate(a2);
      CleanEventMessage((void **)a2);
      goto LABEL_60;
    case 20:
      v95 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), 1);
      v96 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      PostMousePointerLeaveAndCleanup(v95, v96);
      goto LABEL_60;
    case 21:
      v94 = (DesktopRecalc *)*(unsigned int *)(a2 + 32);
      if ( (_DWORD)v94 )
      {
        if ( (_DWORD)v94 == 1 )
          DesktopRecalc::xxxProcessRecalcForThread(v94);
      }
      else
      {
        DesktopRecalc::xxxProcessRecalcForWindow(*(DesktopRecalc **)(a2 + 16), (HWND)v6);
      }
      goto LABEL_60;
    case 22:
      v97 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v97 )
      {
        v102[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v102;
        v102[1] = (struct tagINPUT_MESSAGE_SOURCE *)v97;
        HMLockObject(v97);
        v54 = *(unsigned int *)(a2 + 40);
        v56 = v97;
        v55 = *(unsigned int *)(a2 + 32);
LABEL_117:
        xxxMinMaximize(v56, v55, v54);
LABEL_118:
        ThreadUnlock1(v53, v51, v52);
      }
      goto LABEL_60;
    case 23:
      xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
      goto LABEL_60;
    case 24:
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_60;
    case 25:
      xxxTooltipQeventHandler((struct tagMSG *)(a2 + 16));
      goto LABEL_60;
    case 26:
      ShellWindowPos::xxxProcessPositionEvent((ShellWindowPos *)a2, v6);
      goto LABEL_60;
    case 28:
      v98 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v98 )
      {
        v102[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v102;
        v102[1] = v98;
        HMLockObject(v98);
        xxxDeliverRestoreFocusMessage(v98);
        ThreadUnlock1(v100, v99, v101);
      }
      goto LABEL_60;
    default:
      goto LABEL_60;
  }
}
