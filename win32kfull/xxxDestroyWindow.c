/*
 * XREFs of xxxDestroyWindow @ 0x1C004B7F0
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00929C4 (xxxCleanupMotherDesktopWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094CDC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C00A0450 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00C7B00 (xxxDW_DestroyOwnedWindows.c)
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00D9794 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     NtUserDestroyWindow @ 0x1C00DBFE0 (NtUserDestroyWindow.c)
 *     xxxCsDdeInitialize @ 0x1C00E472C (xxxCsDdeInitialize.c)
 *     xxxRemoveShadow @ 0x1C00EBAE0 (xxxRemoveShadow.c)
 *     xxxDestroyThreadDDEObject @ 0x1C00F4BE0 (xxxDestroyThreadDDEObject.c)
 *     xxxCancelCoolSwitch @ 0x1C0146A72 (xxxCancelCoolSwitch.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C021A0D0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxAddShadow @ 0x1C0224364 (xxxAddShadow.c)
 *     xxxEndMenu @ 0x1C0234AE4 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxEnableWindow @ 0x1C000AE3C (xxxEnableWindow.c)
 *     DWP_SetHotKey @ 0x1C0012040 (DWP_SetHotKey.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0027A4C (xxxDW_SendDestroyMessages.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C002990C (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C002EF28 (zzzEndDeferWinEventNotify.c)
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C0033198 (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     IsImmersiveBand @ 0x1C0039C00 (IsImmersiveBand.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C003A028 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     IsMotherDesktopWindow @ 0x1C007E8EC (IsMotherDesktopWindow.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C009AC64 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C009BA70 (zzzInputFocusLostWindowEvent.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C009E038 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C00A0A28 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     ?IsGhostWindow@@YAHPEBUtagWND@@@Z @ 0x1C00A2014 (-IsGhostWindow@@YAHPEBUtagWND@@@Z.c)
 *     UnlinkWindow @ 0x1C00AB340 (UnlinkWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00C7B00 (xxxDW_DestroyOwnedWindows.c)
 *     zzzAttachThreadInput @ 0x1C00CCFE8 (zzzAttachThreadInput.c)
 *     xxxCallCtfHook @ 0x1C00D6FB4 (xxxCallCtfHook.c)
 *     zzzInternalDestroyCaret @ 0x1C00E8694 (zzzInternalDestroyCaret.c)
 *     ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x1C00EAAC4 (-ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C00F5E48 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??0EPOINTFIX@@QEAA@XZ @ 0x1C0125C10 (--0EPOINTFIX@@QEAA@XZ.c)
 *     ??8?$SharedPointerBase@UtagWND@@@@QEBAEH@Z @ 0x1C012C630 (--8-$SharedPointerBase@UtagWND@@@@QEBAEH@Z.c)
 *     ??9?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C012C640 (--9-$SharedPointerBase@G@@QEBAEH@Z.c)
 *     ?GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C012C650 (-GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ.c)
 *     SetWF @ 0x1C012C6AC (SetWF.c)
 *     ??9?$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z @ 0x1C012C6D4 (--9-$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C012D59E (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     IsInsideUserApiHook @ 0x1C012DC58 (IsInsideUserApiHook.c)
 *     PostShellHookMessages @ 0x1C012E4B0 (PostShellHookMessages.c)
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x1C012EBFC (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 *     xxxSendTransformableMessage @ 0x1C012EE0C (xxxSendTransformableMessage.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01432F0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??B?$SharedPointerBase@UtagSBINFO@@@@QEAA_KXZ @ 0x1C01A6F24 (--B-$SharedPointerBase@UtagSBINFO@@@@QEAA_KXZ.c)
 *     ??I@YA?AW4_TIFLAGS@@W40@0@Z @ 0x1C01A6F30 (--I@YA-AW4_TIFLAGS@@W40@0@Z.c)
 *     ??IRedirectedRecttagWNDrcWindow@tagWND@@QEAAPEAUtagRECT@@XZ @ 0x1C01A6F3C (--IRedirectedRecttagWNDrcWindow@tagWND@@QEAAPEAUtagRECT@@XZ.c)
 *     ??_5@YAAEAW4_TIFLAGS@@AEAW40@W40@@Z @ 0x1C01A6F4C (--_5@YAAEAW4_TIFLAGS@@AEAW40@W40@@Z.c)
 *     ?GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ @ 0x1C01A70E0 (-GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1C01A73E4 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z @ 0x1C01A73F8 (-RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z.c)
 *     ??B?$RedirectedFieldfsHooks@K@tagKERNELDESKTOPINFO@@QEBAKXZ @ 0x1C01ABCFC (--B-$RedirectedFieldfsHooks@K@tagKERNELDESKTOPINFO@@QEBAKXZ.c)
 *     ??S@YA?AW4_TIFLAGS@@W40@@Z @ 0x1C01ABD0C (--S@YA-AW4_TIFLAGS@@W40@@Z.c)
 *     ??U@YA?AW4_TIFLAGS@@W40@0@Z @ 0x1C01AEEE8 (--U@YA-AW4_TIFLAGS@@W40@0@Z.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01B42DC (DisassociateShellFrameAppThreads2.c)
 *     QueueShutdownData @ 0x1C01B44E8 (QueueShutdownData.c)
 *     GetThreadpMenuState @ 0x1C01B7AFC (GetThreadpMenuState.c)
 *     ??B?$RedirectedFieldulpChildWindowID@_K@tagWND@@QEBA_KXZ @ 0x1C0202FF0 (--B-$RedirectedFieldulpChildWindowID@_K@tagWND@@QEBA_KXZ.c)
 *     ??_5@YAAEAW4ComputeWindowToActivateStrategy@@AEAW40@W40@@Z @ 0x1C0203020 (--_5@YAAEAW4ComputeWindowToActivateStrategy@@AEAW40@W40@@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@@Z @ 0x1C02030A8 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@@Z.c)
 *     xxxFlushPalette @ 0x1C02179E0 (xxxFlushPalette.c)
 *     xxxEndMenu @ 0x1C0234AE4 (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(__int64 *a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // r14
  unsigned int v4; // edi
  unsigned int v5; // r15d
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 ThreadpMenuState; // rax
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 i; // rcx
  __int64 v36; // rax
  struct tagWND *v37; // rbx
  char v38; // cl
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // r12d
  unsigned __int8 v45; // r15
  tagQ *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 *v50; // rbx
  tagQ *v51; // rax
  _QWORD *j; // rcx
  __int64 *v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  char v56; // bl
  __int64 v57; // r8
  tagQ *v58; // rax
  tagQ *v59; // rax
  tagQ *v60; // rax
  tagQ *v61; // rax
  struct tagWND *v62; // rax
  struct tagWND *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  EPOINTFIX *v70; // rcx
  EPOINTFIX *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rax
  _DWORD *v74; // r12
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // r8
  int CanDestroyDefIME; // ebx
  __int64 v79; // rcx
  struct tagWND *v80; // r9
  __int64 v81; // r8
  __int64 v82; // rcx
  __int64 v83; // r15
  EPOINTFIX *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // rax
  unsigned int v92; // eax
  unsigned int v93; // eax
  __int128 v94; // [rsp+40h] [rbp-49h] BYREF
  __int64 v95; // [rsp+50h] [rbp-39h]
  __int128 v96; // [rsp+58h] [rbp-31h] BYREF
  __int64 v97; // [rsp+68h] [rbp-21h]
  __int128 v98; // [rsp+70h] [rbp-19h] BYREF
  __int64 v99; // [rsp+80h] [rbp-9h]
  _QWORD v100[3]; // [rsp+88h] [rbp-1h] BYREF
  __int128 v101[4]; // [rsp+A0h] [rbp+17h] BYREF
  unsigned int v102; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v103; // [rsp+F8h] [rbp+6Fh]

  v3 = PtiCurrent();
  v4 = 0;
  v100[2] = 0LL;
  v99 = 0LL;
  v97 = 0LL;
  v103 = 0;
  v5 = 0;
  v98 = 0LL;
  v96 = 0LL;
  v100[0] = *((_QWORD *)v3 + 52);
  *((_QWORD *)v3 + 52) = v100;
  v100[1] = v2;
  if ( v2 )
    HMLockObject(v2);
  v6 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  if ( v3 != (struct tagTHREADINFO *)a1[2] )
  {
    if ( !v6 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 2) == 0 )
    {
      UserSetLastError(5);
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
    v103 = operator&(*((unsigned int *)v3 + 122), 0x10000000LL);
    v5 = v103;
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
      xxxCallCtfHook(5LL, 4LL, *a1);
    }
    if ( ((*((_BYTE *)v3 + 680) | (unsigned __int8)tagKERNELDESKTOPINFO::RedirectedFieldfsHooks<unsigned long>::operator unsigned long(*((_QWORD *)v3 + 58) + 32LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4, *a1, 0LL, 5) )
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
      v15 = ThreadpMenuState;
      do
      {
        *(_DWORD *)(ThreadpMenuState + 8) &= ~4u;
        ThreadpMenuState = *(_QWORD *)(ThreadpMenuState + 48);
      }
      while ( ThreadpMenuState );
      if ( (*(_DWORD *)(v15 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v102,
          (struct tagMENUSTATE *)v15);
        xxxEndMenu(v16);
        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v102);
      }
    }
  }
  if ( ghwndSwitch == *a1 )
    ghwndSwitch = 0LL;
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) == 0
    && (unsigned __int8)SharedPointerBase<tagWND>::operator==(a1 + 15)
    && (*(_BYTE *)(v17 + 18) & 0x20) != 0 )
  {
    xxxFlushPalette(a1);
  }
  v18 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 17);
  if ( (unsigned __int8)tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(v18 + 24, gpsi + 898LL) )
  {
    if ( (*(_BYTE *)(v19 + 31) & 0xC0) != 0x40 )
    {
      if ( (unsigned __int8)SharedPointerBase<unsigned short>::operator!=(a1 + 15) )
      {
        v21 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v20);
        if ( *(_QWORD *)(v21 + 16) != v23 )
        {
          v24 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v22);
          zzzAttachThreadInput(v25, *(_QWORD *)(v24 + 16), 0LL);
        }
      }
    }
  }
  v26 = a1[5];
  if ( (*(_BYTE *)(v26 + 31) & 0x40) != 0
    && (*(_BYTE *)(v26 + 24) & 4) == 0
    && !IsTopLevelWindow((__int64)a1)
    && (unsigned __int8)SharedPointerBase<unsigned short>::operator!=(a1 + 13) )
  {
    v28 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v27);
    *(_QWORD *)&v96 = *((_QWORD *)v3 + 52);
    *((_QWORD *)v3 + 52) = &v96;
    *((_QWORD *)&v96 + 1) = v28;
    HMLockObject(v28);
    tagWND::RedirectedFieldulpChildWindowID<unsigned __int64>::operator unsigned __int64((char *)a1 + 306);
    v29 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13);
    xxxSendTransformableMessage(v29, 528, v30, *a1, 0);
    ThreadUnlock1(v32, v31, v33);
  }
  if ( !(unsigned int)IsMotherDesktopWindow(a1) )
    SetWF(v34, 1152LL);
  xxxHandleGhostRelatedWindowDestruction((struct tagWND *)a1);
  if ( IsTopLevelWindow((__int64)a1) )
  {
    for ( i = SharedPointerBase<tagSBINFO>::operator unsigned __int64(*(_QWORD *)(a1[3] + 8) + 24LL) + 112;
          ;
          i = (__int64)v37 + 88 )
    {
      v36 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(i);
      v37 = (struct tagWND *)v36;
      if ( !v36 )
        break;
      if ( (__int64 *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v36 + 120) == a1
        && v3 != *((struct tagTHREADINFO **)v37 + 2) )
      {
        PostUnownedNotification(v37);
      }
    }
  }
  v38 = *(_BYTE *)(a1[5] + 31);
  if ( (v38 & 0x10) != 0 )
  {
    if ( (v38 & 0x40) != 0 )
      xxxShowWindow((struct tagWND *)a1, gdwPUDFlags & 0x10000);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, (v6 << 13) + 151);
    if ( (*(_BYTE *)(a1[5] + 31) & 0x10) != 0 )
    {
      SetVisible((struct tagWND *)a1, 0);
      v39 = *((_QWORD *)v3 + 57);
      if ( v39 )
      {
        if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64(*(_QWORD *)(v39 + 8) + 24LL) )
        {
          if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13) )
          {
            v41 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v40);
            zzzLockDisplayAreaAndInvalidateDCCache(v41, 16LL);
          }
          tagWND::RedirectedRecttagWNDrcWindow::operator&(a1 + 16);
          xxxRedrawWindow(0LL);
        }
      }
    }
  }
  else if ( IsTrayWindow((struct tagWND *)a1, 1) && !(unsigned int)IsGhostWindow((const struct tagWND *)a1) )
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
    v95 = 0LL;
    v94 = 0LL;
    v42 = operator|(16LL, 2LL);
    v43 = operator|(v42, 32LL);
    v102 = operator|(v43, 8LL);
    v44 = v102;
    v45 = 0;
    v46 = tagTHREADINFO::GetQ(v3);
    if ( a1 == (__int64 *)tagQ::GetActiveWindow(v46) )
    {
      if ( *(char *)(a1[5] + 31) < 0 && SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 15) )
      {
        v50 = (__int64 *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v49);
        v45 = 1;
      }
      else
      {
        v50 = a1;
      }
    }
    else
    {
      v51 = tagTHREADINFO::GetQ(v3);
      if ( tagQ::GetActiveWindow(v51) || (struct tagQ *)gpqForeground != tagTHREADINFO::GetQ(v3) )
        goto LABEL_109;
      v50 = a1;
      operator|=(&v102);
      v44 = v102;
    }
    if ( v50 )
    {
      if ( v45 )
      {
        if ( IsImmersiveBand((__int64)v50, v47, v48) && *(char *)(v50[5] + 20) < 0 )
        {
          for ( j = v50 + 15; SharedPointerBase<tagSBINFO>::operator unsigned __int64(j); j = v53 + 15 )
          {
            if ( tagWND::HasState((__int64)a1, 256) && *(char *)(v53[5] + 20) >= 0 )
            {
              v50 = v53;
              break;
            }
          }
        }
        *(_QWORD *)&v94 = *((_QWORD *)v3 + 52);
        *((_QWORD *)v3 + 52) = &v94;
        *((_QWORD *)&v94 + 1) = v50;
        HMLockObject(v50);
        if ( tagWND::HasState((__int64)a1, 256) )
          xxxEnableWindow((struct tagWND *)v50, 1);
      }
      v56 = xxxActivateWindowWithOptions((struct tagWND *)v50, (unsigned int)v45 + 2, v44, 1);
      if ( v45 )
        ThreadUnlock1(v55, v54, v57);
      if ( !v56 || !v45 && (v58 = tagTHREADINFO::GetQ(v3), a1 == (__int64 *)tagQ::GetActiveWindow(v58)) )
      {
        if ( !v45 || (v59 = tagTHREADINFO::GetQ(v3), a1 == (__int64 *)tagQ::GetActiveWindow(v59)) )
        {
          v60 = tagTHREADINFO::GetQ(v3);
          tagQ::SetActiveWindow(v60, 0LL);
          v61 = tagTHREADINFO::GetQ(v3);
          v62 = tagQ::UnlockFocusWnd(v61);
          v63 = v62;
          if ( (*gpsi & 4) != 0 && v62 )
          {
            *(_QWORD *)&v98 = *((_QWORD *)v3 + 52);
            *((_QWORD *)v3 + 52) = &v98;
            *((_QWORD *)&v98 + 1) = v62;
            HMLockObject(v62);
            xxxFocusSetInputContext(v63, 0, 0);
            v63 = (struct tagWND *)ThreadUnlock1(v65, v64, v66);
          }
          if ( tagTHREADINFO::GetQ(v3) == (struct tagQ *)gpqForeground )
          {
            if ( v63 )
              zzzInputFocusLostWindowEvent(v63, 9LL);
            xxxWindowEvent(0x8005u, 0);
            xxxWindowEvent(3u, 1);
          }
          zzzInternalDestroyCaret();
        }
      }
    }
  }
LABEL_109:
  v67 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 15);
  if ( v67 )
  {
    while ( (unsigned __int8)SharedPointerBase<unsigned short>::operator!=(v67 + 120) )
      v67 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v69);
    if ( a1 == (__int64 *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v68 + 200) )
    {
      v71 = EPOINTFIX::EPOINTFIX(v70);
      if ( (*(_BYTE *)(_HMPheFromObject(v72) + 25) & 1) != 0 )
      {
        v73 = UnlockPointer(v71);
        HMAssignmentUnlock(v73);
      }
      else
      {
        SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 15);
        v101[0] = *(_OWORD *)LockPointer(&v94, v71);
        HMAssignmentLock(v101, 0LL);
      }
    }
  }
  if ( !v6 )
  {
    if ( *(char *)(a1[5] + 19) >= 0 )
      xxxWindowEvent(0x8001u, 0);
    xxxDW_SendDestroyMessages((const struct tagWND *)a1);
  }
  v74 = (_DWORD *)((char *)v3 + 488);
  if ( (*gpsi & 4) == 0 )
    goto LABEL_139;
  if ( (unsigned int)operator&((unsigned int)*v74, 1LL) )
    goto LABEL_139;
  if ( !*((_QWORD *)v3 + 98) )
    goto LABEL_139;
  if ( (*(_BYTE *)(*(_QWORD *)(SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 17) + 8) + 10LL) & 1) != 0 )
    goto LABEL_139;
  v76 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v75);
  if ( !(unsigned __int8)tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(v76 + 24, v77 + 898) || v6 )
    goto LABEL_139;
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) != 0 )
  {
    if ( (unsigned __int8)SharedPointerBase<unsigned short>::operator!=(a1 + 13)
      && ImeCanDestroyDefIMEforChild(v80, (struct tagWND *)a1) )
    {
      v79 = *((_QWORD *)v3 + 98);
LABEL_134:
      xxxDestroyWindow(v79);
    }
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*((struct tagWND **)v3 + 98), (struct tagWND *)a1);
    zzzEndDeferWinEventNotify();
    if ( CanDestroyDefIME )
    {
      v79 = *((_QWORD *)v3 + 98);
      if ( v79 )
        goto LABEL_134;
    }
  }
  if ( *((_QWORD *)v3 + 98) && *((_DWORD *)v3 + 228) == 1 && tagWND::HasState((__int64)a1, 0x10000000) )
    xxxDestroyWindow(v81);
LABEL_139:
  if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13) && !v6 )
  {
    v83 = *(_QWORD *)(SharedPointerBase<tagSBINFO>::operator unsigned __int64(v82) + 16);
    if ( *(__int64 **)(v83 + 1440) == a1 )
    {
      v84 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v83 + 1440));
      HMAssignmentUnlock(v84);
      DisassociateShellFrameAppThreads2(v83, v3);
    }
    if ( (*(_BYTE *)(a1[5] + 31) & 0xC0) == 0x40 && !IsTopLevelWindow((__int64)a1) )
    {
      v85 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13);
      if ( v87 != *(_QWORD *)(v85 + 16) )
      {
        v88 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v86);
        zzzAttachThreadInput(v89, *(_QWORD *)(v88 + 16), 0LL);
      }
    }
    if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13) )
    {
      v91 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v90);
      UnlinkWindow(a1, v91);
    }
  }
  SetWF(a1, 896LL);
  xxxFreeWindow((struct tagWND *)a1, (__int64)v100);
  if ( v6 )
  {
    v92 = operator~(0x10000000LL);
    v93 = operator&((unsigned int)*v74, v92);
    *v74 = operator|(v93, v103);
  }
  return 1LL;
}
