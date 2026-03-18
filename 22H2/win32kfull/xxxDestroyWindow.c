/*
 * XREFs of xxxDestroyWindow @ 0x1C00E8400
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C006224C (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006DCB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00A3214 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     xxxCsDdeInitialize @ 0x1C00AC42C (xxxCsDdeInitialize.c)
 *     xxxRemoveShadow @ 0x1C00B3A30 (xxxRemoveShadow.c)
 *     xxxDestroyThreadDDEObject @ 0x1C00BD1D0 (xxxDestroyThreadDDEObject.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00BE0EC (xxxCleanupMotherDesktopWindow.c)
 *     NtUserDestroyWindow @ 0x1C00E5D70 (NtUserDestroyWindow.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00EB35C (xxxDW_DestroyOwnedWindows.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C013C9A0 (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C01537A2 (xxxCancelCoolSwitch.c)
 *     xxxMNCancel @ 0x1C0216E04 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0217510 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0218BF0 (xxxMNOpenHierarchy.c)
 *     xxxAddShadow @ 0x1C0221654 (xxxAddShadow.c)
 *     xxxEndMenu @ 0x1C0231DD0 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxEnableWindow @ 0x1C000BA8C (xxxEnableWindow.c)
 *     DWP_SetHotKey @ 0x1C0012D74 (DWP_SetHotKey.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0025058 (zzzEndDeferWinEventNotify.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0026648 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C004BB10 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     IsMotherDesktopWindow @ 0x1C005A5D8 (IsMotherDesktopWindow.c)
 *     zzzAttachThreadInput @ 0x1C005BB64 (zzzAttachThreadInput.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C00654C8 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0066AC4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxCallCtfHook @ 0x1C00A0F14 (xxxCallCtfHook.c)
 *     zzzInternalDestroyCaret @ 0x1C00AFF44 (zzzInternalDestroyCaret.c)
 *     ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x1C00B2BC0 (-ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C00BE294 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     IsImmersiveBand @ 0x1C00CEF04 (IsImmersiveBand.c)
 *     ?IsGhostWindow@@YAHPEBUtagWND@@@Z @ 0x1C00CFBBC (-IsGhostWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C00D1B4C (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00E19D0 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C00EB160 (xxxDW_SendDestroyMessages.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00EB35C (xxxDW_DestroyOwnedWindows.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EB4B8 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     UnlinkWindow @ 0x1C010B5E0 (UnlinkWindow.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0131018 (zzzInputFocusLostWindowEvent.c)
 *     ??0EPOINTFIX@@QEAA@XZ @ 0x1C01312F0 (--0EPOINTFIX@@QEAA@XZ.c)
 *     ??8?$SharedPointerBase@UtagWND@@@@QEBAEH@Z @ 0x1C0138BE0 (--8-$SharedPointerBase@UtagWND@@@@QEBAEH@Z.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C0138BF0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     ?GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C0138C4C (-GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ.c)
 *     SetWF @ 0x1C0138D3C (SetWF.c)
 *     ??9?$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z @ 0x1C0139628 (--9-$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C0139F12 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     IsInsideUserApiHook @ 0x1C013A640 (IsInsideUserApiHook.c)
 *     PostShellHookMessages @ 0x1C013BAF0 (PostShellHookMessages.c)
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x1C013C6B8 (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 *     xxxSendTransformableMessage @ 0x1C013C8C8 (xxxSendTransformableMessage.c)
 *     Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage @ 0x1C013CB2C (Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01500D0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??B?$SharedPointerBase@UtagSBINFO@@@@QEAA_KXZ @ 0x1C01A5D7C (--B-$SharedPointerBase@UtagSBINFO@@@@QEAA_KXZ.c)
 *     ??I@YA?AW4_TIFLAGS@@W40@0@Z @ 0x1C01A5D88 (--I@YA-AW4_TIFLAGS@@W40@0@Z.c)
 *     ??IRedirectedRecttagWNDrcWindow@tagWND@@QEAAPEAUtagRECT@@XZ @ 0x1C01A5D94 (--IRedirectedRecttagWNDrcWindow@tagWND@@QEAAPEAUtagRECT@@XZ.c)
 *     ??_5@YAAEAW4_TIFLAGS@@AEAW40@W40@@Z @ 0x1C01A5DA4 (--_5@YAAEAW4_TIFLAGS@@AEAW40@W40@@Z.c)
 *     ?GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ @ 0x1C01A5F28 (-GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1C01A622C (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z @ 0x1C01A6240 (-RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z.c)
 *     ??B?$RedirectedFieldfsHooks@K@tagKERNELDESKTOPINFO@@QEBAKXZ @ 0x1C01AAB0C (--B-$RedirectedFieldfsHooks@K@tagKERNELDESKTOPINFO@@QEBAKXZ.c)
 *     ??S@YA?AW4_TIFLAGS@@W40@@Z @ 0x1C01AAB40 (--S@YA-AW4_TIFLAGS@@W40@@Z.c)
 *     ??U@YA?AW4_TIFLAGS@@W40@0@Z @ 0x1C01ADCF8 (--U@YA-AW4_TIFLAGS@@W40@0@Z.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01B311C (DisassociateShellFrameAppThreads2.c)
 *     QueueShutdownData @ 0x1C01B3328 (QueueShutdownData.c)
 *     GetThreadpMenuState @ 0x1C01B695C (GetThreadpMenuState.c)
 *     ??B?$RedirectedFieldulpChildWindowID@_K@tagWND@@QEBA_KXZ @ 0x1C0200448 (--B-$RedirectedFieldulpChildWindowID@_K@tagWND@@QEBA_KXZ.c)
 *     ??_5@YAAEAW4ComputeWindowToActivateStrategy@@AEAW40@W40@@Z @ 0x1C0200478 (--_5@YAAEAW4ComputeWindowToActivateStrategy@@AEAW40@W40@@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@@Z @ 0x1C0200500 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@@Z.c)
 *     xxxFlushPalette @ 0x1C0214E20 (xxxFlushPalette.c)
 *     xxxEndMenu @ 0x1C0231DD0 (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(__int64 *a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rsi
  unsigned int v4; // r13d
  unsigned int v5; // r14d
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 ThreadpMenuState; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int16 v40; // ax
  __int64 v41; // r9
  int v42; // eax
  int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  struct tagWND *i; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  char v62; // cl
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 *v73; // rbx
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // r15d
  unsigned __int8 v77; // r14
  tagQ *v78; // rax
  __int64 v79; // rcx
  tagQ *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 *v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  char v88; // bl
  tagQ *v89; // rax
  tagQ *v90; // rax
  tagQ *v91; // rax
  struct tagWND *v92; // rax
  struct tagWND *v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rax
  EPOINTFIX *v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  EPOINTFIX *v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // r8
  struct tagWND *v114; // r9
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // r8
  int CanDestroyDefIME; // ebx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // r14
  EPOINTFIX *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rax
  unsigned int v135; // eax
  unsigned int v136; // eax
  __int128 v137; // [rsp+40h] [rbp-49h] BYREF
  __int64 v138; // [rsp+50h] [rbp-39h]
  _QWORD v139[3]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v140; // [rsp+70h] [rbp-19h] BYREF
  __int64 v141; // [rsp+80h] [rbp-9h]
  __int128 v142; // [rsp+88h] [rbp-1h] BYREF
  __int64 v143; // [rsp+98h] [rbp+Fh]
  __int128 v144; // [rsp+A0h] [rbp+17h] BYREF
  unsigned int v145; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v146; // [rsp+F8h] [rbp+6Fh]

  v3 = PtiCurrent();
  v4 = 0;
  v139[2] = 0LL;
  v143 = 0LL;
  v141 = 0LL;
  v146 = 0;
  v5 = 0;
  v142 = 0LL;
  v140 = 0LL;
  v139[0] = *((_QWORD *)v3 + 52);
  *((_QWORD *)v3 + 52) = v139;
  v139[1] = v2;
  if ( v2 )
    HMLockObject(v2);
  v6 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  if ( v3 != (struct tagTHREADINFO *)a1[2] )
  {
    if ( !v6 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 2) == 0 )
    {
      UserSetLastError(5LL);
      v10 = (_DWORD *)((char *)v3 + 488);
LABEL_22:
      if ( v6 )
      {
        v11 = operator~(0x10000000LL);
        v12 = operator&((unsigned int)*v10, v11);
        *v10 = operator|(v12, v5);
      }
      LOBYTE(v4) = ThreadUnlock1(v8, v7, v9) == 0;
      return v4;
    }
    HMChangeOwnerThread(a1, v3);
    goto LABEL_9;
  }
  if ( v6 )
  {
LABEL_9:
    v10 = (_DWORD *)((char *)v3 + 488);
    v146 = operator&(*((unsigned int *)v3 + 122), 0x10000000LL);
    v5 = v146;
    operator|=((char *)v3 + 488);
    goto LABEL_11;
  }
  v10 = (_DWORD *)((char *)v3 + 488);
LABEL_11:
  if ( tagWND::HasState((__int64)a1, 0x400000) )
  {
    tagWND::RemoveState();
    QueueShutdownData(*a1, 0LL);
  }
  if ( !v6 && !(unsigned int)operator&((unsigned int)*v10, 1LL) )
  {
    if ( (*gpsi & 4) != 0 && a1 == *((__int64 **)v3 + 98)
      || tagWND::HasState((__int64)a1, 0x10000000) && *((_DWORD *)v3 + 228) == 1 )
    {
      xxxCallCtfHook(5, 4, *a1, 0LL);
    }
    if ( ((*((_BYTE *)v3 + 680) | (unsigned __int8)tagKERNELDESKTOPINFO::RedirectedFieldfsHooks<unsigned long>::operator unsigned long(*((_QWORD *)v3 + 58) + 32LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4LL, *a1, 0LL, 5LL) )
    {
      goto LABEL_22;
    }
    if ( (unsigned int)IsInsideUserApiHook() )
      xxxSendMessage(a1, 144LL, 0LL, 0LL);
  }
  ThreadpMenuState = GetThreadpMenuState(a1[2]);
  if ( ThreadpMenuState )
  {
    if ( a1 == *(__int64 **)(*(_QWORD *)ThreadpMenuState + 8LL) )
    {
      v16 = ThreadpMenuState;
      do
      {
        *(_DWORD *)(ThreadpMenuState + 8) &= ~4u;
        ThreadpMenuState = *(_QWORD *)(ThreadpMenuState + 48);
      }
      while ( ThreadpMenuState );
      if ( (*(_DWORD *)(v16 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v145,
          (struct tagMENUSTATE *)v16);
        xxxEndMenu(v17);
        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v145);
      }
    }
  }
  if ( ghwndSwitch == *a1 )
    ghwndSwitch = 0LL;
  v18 = a1[5];
  v19 = v18;
  if ( (*(_BYTE *)(v18 + 31) & 0x40) == 0
    && (unsigned __int8)SharedPointerBase<tagWND>::operator==(a1 + 15, v18, v15, v18)
    && (*(_BYTE *)(v18 + 18) & 0x20) != 0 )
  {
    xxxFlushPalette(a1, v18, v15);
    v19 = a1[5];
  }
  v20 = a1 + 17;
  v21 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 17, v18, v15, v19);
  if ( (unsigned __int8)tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(v21 + 24, gpsi + 898LL) )
  {
    if ( (*(_BYTE *)(v23 + 31) & 0xC0) != 0x40 )
    {
      if ( (unsigned __int8)HmgLockResultBase<META>::operator bool(a1 + 15, v22) )
      {
        v27 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v25, v24, v26, a1[2]);
        if ( *(_QWORD *)(v27 + 16) != v31 )
        {
          v32 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v29, v28, v30, v31);
          zzzAttachThreadInput(v33, *(_QWORD *)(v32 + 16), 0);
        }
      }
    }
  }
  v34 = a1[5];
  if ( (*(_BYTE *)(v34 + 31) & 0x40) != 0
    && (*(_BYTE *)(v34 + 24) & 4) == 0
    && !(unsigned int)IsTopLevelWindow(a1)
    && (unsigned __int8)HmgLockResultBase<META>::operator bool(a1 + 13, v35) )
  {
    v39 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13, v36, v37, v38);
    *(_QWORD *)&v140 = *((_QWORD *)v3 + 52);
    *((_QWORD *)v3 + 52) = &v140;
    *((_QWORD *)&v140 + 1) = v39;
    HMLockObject(v39);
    v40 = tagWND::RedirectedFieldulpChildWindowID<unsigned __int64>::operator unsigned __int64((char *)a1 + 306);
    v42 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13, (v40 << 16) | 2u, (v40 << 16) | 2, v41);
    xxxSendTransformableMessage(v42, 528, v43, *a1, 0);
    ThreadUnlock1(v45, v44, v46);
  }
  if ( !(unsigned int)IsMotherDesktopWindow((__int64)a1) )
    SetWF(v47, 1152LL);
  xxxHandleGhostRelatedWindowDestruction((struct tagWND *)a1);
  if ( (unsigned int)IsTopLevelWindow(a1) )
  {
    v51 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(*(_QWORD *)(a1[3] + 8) + 24LL, v48, v49, v50);
    for ( i = (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v51 + 112, v52, v53, v54);
          i;
          i = (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)i + 88, v59, v60, v61) )
    {
      if ( (__int64 *)SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)i + 120, v55, v57, v58) == a1
        && v3 != *((struct tagTHREADINFO **)i + 2) )
      {
        PostUnownedNotification(i);
      }
    }
  }
  v62 = *(_BYTE *)(a1[5] + 31);
  if ( (v62 & 0x10) != 0 )
  {
    if ( (v62 & 0x40) != 0 )
      xxxShowWindow((struct tagWND *)a1, gdwPUDFlags & 0x10000);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, (v6 << 13) + 151);
    if ( (*(_BYTE *)(a1[5] + 31) & 0x10) != 0 )
    {
      SetVisible((struct tagWND *)a1);
      v66 = *((_QWORD *)v3 + 57);
      if ( v66 )
      {
        if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64(*(_QWORD *)(v66 + 8) + 24LL, v63, v64, v65) )
        {
          if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13, v63, v64, v65) )
          {
            v71 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v68, v67, v69, v70);
            zzzLockDisplayAreaAndInvalidateDCCache(v71, 16, 0LL);
          }
          v72 = tagWND::RedirectedRecttagWNDrcWindow::operator&(a1 + 16);
          xxxRedrawWindow(0LL, v72, 0LL, 133);
        }
      }
    }
  }
  else if ( (unsigned __int8)IsTrayWindow(a1, 1LL) && !IsGhostWindow((const struct tagWND *)a1) )
  {
    PostShellHookMessages(2LL, *a1);
  }
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    DWP_SetHotKey((struct tagWND *)a1, 0);
  }
  if ( !v6 )
  {
    v73 = 0LL;
    v138 = 0LL;
    v137 = 0LL;
    v74 = operator|(16LL, 2LL);
    v75 = operator|(v74, 32LL);
    v145 = operator|(v75, 8LL);
    v76 = v145;
    v77 = 0;
    v78 = tagTHREADINFO::GetQ(v3);
    if ( a1 == (__int64 *)tagQ::GetActiveWindow(v78) )
    {
      if ( *(char *)(a1[5] + 31) < 0 && SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 15, v63, v64, v65) )
      {
        v73 = (__int64 *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v79, v63, v64, v65);
        v77 = 1;
      }
      else
      {
        v73 = a1;
      }
    }
    else
    {
      v80 = tagTHREADINFO::GetQ(v3);
      if ( !tagQ::GetActiveWindow(v80) && (struct tagQ *)gpqForeground == tagTHREADINFO::GetQ(v3) )
      {
        v73 = a1;
        operator|=(&v145);
        v76 = v145;
      }
    }
    if ( !v73 )
      goto LABEL_108;
    if ( !v77 )
      goto LABEL_93;
    if ( IsImmersiveBand((__int64)v73, v63, v64)
      && *(char *)(v73[5] + 20) < 0
      && SharedPointerBase<tagSBINFO>::operator unsigned __int64(v73 + 15, v81, v82, v83) )
    {
      while ( !tagWND::HasState((__int64)a1, 256) || *(char *)(v85[5] + 20) < 0 )
      {
        if ( !SharedPointerBase<tagSBINFO>::operator unsigned __int64(v85 + 15, v84, v85, v86) )
          goto LABEL_91;
      }
      v73 = v85;
    }
LABEL_91:
    *(_QWORD *)&v137 = *((_QWORD *)v3 + 52);
    *((_QWORD *)v3 + 52) = &v137;
    *((_QWORD *)&v137 + 1) = v73;
    HMLockObject(v73);
    if ( tagWND::HasState((__int64)a1, 256) )
    {
      xxxEnableWindow((struct tagWND *)v73, 1);
      v88 = xxxActivateWindowWithOptions((const struct tagWND *)v73, v77 + 2, v76, 1);
    }
    else
    {
LABEL_93:
      v88 = xxxActivateWindowWithOptions((const struct tagWND *)v73, v77 + 2, v76, 1);
      if ( !v77 )
        goto LABEL_95;
    }
    ThreadUnlock1(v87, v63, v64);
LABEL_95:
    if ( v88 )
    {
      if ( v77 )
        goto LABEL_108;
    }
    else if ( !v77 )
    {
      goto LABEL_100;
    }
    v89 = tagTHREADINFO::GetQ(v3);
    if ( a1 == (__int64 *)tagQ::GetActiveWindow(v89) )
    {
LABEL_100:
      v90 = tagTHREADINFO::GetQ(v3);
      tagQ::SetActiveWindow(v90, 0LL);
      v91 = tagTHREADINFO::GetQ(v3);
      v92 = tagQ::UnlockFocusWnd(v91);
      v93 = v92;
      if ( (*gpsi & 4) != 0 && v92 )
      {
        *(_QWORD *)&v142 = *((_QWORD *)v3 + 52);
        *((_QWORD *)v3 + 52) = &v142;
        *((_QWORD *)&v142 + 1) = v92;
        HMLockObject(v92);
        xxxFocusSetInputContext(v93, 0, 0);
        v93 = (struct tagWND *)ThreadUnlock1(v95, v94, v96);
      }
      if ( tagTHREADINFO::GetQ(v3) == (struct tagQ *)gpqForeground )
      {
        if ( v93 )
          zzzInputFocusLostWindowEvent(v93, 9LL);
        xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
        xxxWindowEvent(3u, 0LL, 0, 0, 1);
      }
      zzzInternalDestroyCaret();
    }
LABEL_108:
    v20 = a1 + 17;
  }
  v97 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 15, v63, v64, v65);
  v99 = v97;
  if ( v97 )
  {
    if ( (unsigned __int8)HmgLockResultBase<META>::operator bool(v97 + 120, v97) )
    {
      do
        v104 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v101, v100, v102, v103);
      while ( (unsigned __int8)HmgLockResultBase<META>::operator bool(v104 + 120, v104) );
    }
    if ( a1 == (__int64 *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v100 + 200, v100, v102, v103) )
    {
      v105 = EPOINTFIX::EPOINTFIX(v98);
      if ( (*(_BYTE *)(_HMPheFromObject(v106) + 25) & 1) != 0 )
      {
        v110 = UnlockPointer(v105);
        HMAssignmentUnlock(v110);
      }
      else
      {
        v111 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 15, v107, v108, v109);
        v144 = *(_OWORD *)LockPointer(&v137, (__int64)v105, v111);
        HMAssignmentLock(&v144, 0LL);
      }
    }
  }
  if ( !v6 )
  {
    if ( *(char *)(a1[5] + 19) >= 0 )
      xxxWindowEvent(0x8001u, (struct tagWND *)a1, 0, 0, 0);
    xxxDW_SendDestroyMessages(a1, v99);
  }
  if ( (unsigned int)Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage(v98, v99) )
    goto LABEL_139;
  v113 = gpsi;
  if ( (*gpsi & 4) == 0 )
    goto LABEL_139;
  if ( (unsigned int)operator&(*((unsigned int *)v3 + 122), 1LL) )
    goto LABEL_139;
  v114 = (struct tagWND *)*((_QWORD *)v3 + 98);
  if ( !v114 )
    goto LABEL_139;
  v112 = *(_QWORD *)(SharedPointerBase<tagSBINFO>::operator unsigned __int64(v20, v112, v113, v114) + 8);
  if ( (*(_BYTE *)(v112 + 10) & 1) != 0 )
    goto LABEL_139;
  v116 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v115, v112, v113, v114);
  if ( !(unsigned __int8)tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(v116 + 24, v117 + 898) || v6 )
    goto LABEL_139;
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) != 0 )
  {
    if ( (unsigned __int8)HmgLockResultBase<META>::operator bool(a1 + 13, v112)
      && (unsigned int)ImeCanDestroyDefIMEforChild(v114, (struct tagWND *)a1) )
    {
      v119 = *((_QWORD *)v3 + 98);
LABEL_134:
      xxxDestroyWindow(v119);
    }
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*((struct tagWND **)v3 + 98), (struct tagWND *)a1);
    zzzEndDeferWinEventNotify();
    if ( CanDestroyDefIME )
    {
      v119 = *((_QWORD *)v3 + 98);
      if ( v119 )
        goto LABEL_134;
    }
  }
  v113 = *((_QWORD *)v3 + 98);
  if ( v113 && *((_DWORD *)v3 + 228) == 1 && tagWND::HasState((__int64)a1, 0x10000000) )
    xxxDestroyWindow(v113);
LABEL_139:
  if ( !SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13, v112, v113, v114) || v6 )
    goto LABEL_149;
  v126 = *(_QWORD *)(SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13, v120, v121, v122) + 16);
  if ( *(__int64 **)(v126 + 1440) == a1 )
  {
    v127 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v126 + 1440));
    HMAssignmentUnlock(v127);
    DisassociateShellFrameAppThreads2(v126, v3);
  }
  if ( (*(_BYTE *)(a1[5] + 31) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v128 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13, v123, v124, a1[2]);
    if ( v125 != *(_QWORD *)(v128 + 16) )
    {
      v129 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13, v123, v124, v125);
      zzzAttachThreadInput(v130, *(_QWORD *)(v129 + 16), 0);
    }
  }
  if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13, v123, v124, v125) )
  {
    v134 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13, v131, v132, v133);
    UnlinkWindow(a1, v134);
    SetWF(a1, 896LL);
    xxxFreeWindow((struct tagWND *)a1);
  }
  else
  {
LABEL_149:
    SetWF(a1, 896LL);
    xxxFreeWindow((struct tagWND *)a1);
    if ( v6 )
    {
      v135 = operator~(0x10000000LL);
      v136 = operator&(*((unsigned int *)v3 + 122), v135);
      *((_DWORD *)v3 + 122) = operator|(v136, v146);
    }
  }
  return 1LL;
}
