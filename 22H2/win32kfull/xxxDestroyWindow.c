/*
 * XREFs of xxxDestroyWindow @ 0x1C007DC00
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00335B8 (xxxCreateDefaultImeWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C003DF80 (xxxDW_DestroyOwnedWindows.c)
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     xxxRemoveShadow @ 0x1C007CA50 (xxxRemoveShadow.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     xxxProcessEventMessage @ 0x1C00C15B8 (xxxProcessEventMessage.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00D6A54 (xxxCleanupMotherDesktopWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D84E8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserDestroyWindow @ 0x1C010D1B0 (NtUserDestroyWindow.c)
 *     xxxCancelCoolSwitch @ 0x1C0125A64 (xxxCancelCoolSwitch.c)
 *     NtUserDisableThreadIme @ 0x1C0125FD0 (NtUserDisableThreadIme.c)
 *     xxxCsDdeInitialize @ 0x1C0127D60 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0135170 (xxxDestroyThreadDDEObject.c)
 *     xxxAddShadow @ 0x1C013D9EC (xxxAddShadow.c)
 *     xxxMNCancel @ 0x1C0236ED4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0237760 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02394F8 (xxxMNOpenHierarchy.c)
 *     xxxEndMenu @ 0x1C0249E34 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A5F0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0003648 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C00087E4 (xxxHandleDestroyGhostWindow.c)
 *     zzzAttachThreadInput @ 0x1C00115F8 (zzzAttachThreadInput.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C0033954 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C0033A18 (zzzImeCanDestroyDefIME.c)
 *     xxxFocusSetInputContext @ 0x1C00349DC (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0034F7C (zzzInputFocusLostWindowEvent.c)
 *     xxxEnableWindow @ 0x1C0037170 (xxxEnableWindow.c)
 *     IsNonImmersiveBand @ 0x1C00372D4 (IsNonImmersiveBand.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039AC8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C003A9BC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C003DF80 (xxxDW_DestroyOwnedWindows.c)
 *     PostShellHookMessages @ 0x1C0043540 (PostShellHookMessages.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0047234 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     SetVisible @ 0x1C004BCA0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     xxxCallCtfHook @ 0x1C0052874 (xxxCallCtfHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C005EA90 (IsTrayWindow.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     xxxRedrawWindow @ 0x1C00722B4 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00726C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     IsWindowGhosted @ 0x1C007E5FC (IsWindowGhosted.c)
 *     xxxDW_SendDestroyMessages @ 0x1C007E67C (xxxDW_SendDestroyMessages.c)
 *     UnlinkWindow @ 0x1C007E8D8 (UnlinkWindow.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C0111518 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C0113BB0 (zzzInternalDestroyCaret.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0136A80 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C016924C (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01D27D4 (DisassociateShellFrameAppThreads2.c)
 *     QueueShutdownData @ 0x1C01D2C28 (QueueShutdownData.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DF974 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0221234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxFlushPalette @ 0x1C0234C90 (xxxFlushPalette.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C023FFE0 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenu @ 0x1C0249E34 (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(unsigned __int64 a1)
{
  unsigned int v1; // esi
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r13d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  struct _LARGE_STRING *v22; // r9
  __int64 v23; // rcx
  __int64 i; // rbx
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // rcx
  struct tagHOTKEYSTRUCT **v28; // rax
  struct tagHOTKEYSTRUCT *v29; // rbx
  struct tagHOTKEYSTRUCT *v30; // rcx
  __int64 v31; // rcx
  int v32; // r12d
  unsigned __int8 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 j; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  char v39; // bl
  __int64 v40; // rax
  __int64 *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rbx
  struct tagWND *v45; // rdx
  __int64 v46; // rcx
  int CanDestroyDefIME; // ebx
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int128 v54; // [rsp+50h] [rbp-59h] BYREF
  __int64 v55; // [rsp+60h] [rbp-49h]
  __int128 v56; // [rsp+68h] [rbp-41h] BYREF
  __int64 v57; // [rsp+78h] [rbp-31h]
  __int128 v58; // [rsp+80h] [rbp-29h] BYREF
  __int64 v59; // [rsp+90h] [rbp-19h]
  _QWORD v60[3]; // [rsp+98h] [rbp-11h] BYREF
  __int128 v61; // [rsp+B0h] [rbp+7h] BYREF
  _QWORD v62[8]; // [rsp+C0h] [rbp+17h] BYREF
  int v63; // [rsp+110h] [rbp+67h]
  struct tagMENUSTATE *v64; // [rsp+118h] [rbp+6Fh] BYREF

  v1 = 0;
  v60[2] = 0LL;
  v58 = 0LL;
  v2 = 0;
  v63 = 0;
  v59 = 0LL;
  v55 = 0LL;
  v54 = 0LL;
  v60[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v60;
  v60[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v6 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  if ( gptiCurrent != *(_QWORD *)(a1 + 16) )
  {
    if ( !v6 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 2) == 0 )
    {
      UserSetLastError(5LL, v4, v5);
LABEL_20:
      if ( v6 )
      {
        v9 = v2 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 488LL) = v9;
      }
      LOBYTE(v1) = ThreadUnlock1(v9) == 0;
      return v1;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
  }
  if ( v6 )
  {
    v2 = *(_DWORD *)(gptiCurrent + 488LL) & 0x10000000;
    v63 = v2;
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x10000000u;
  }
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_DWORD *)(v7 + 232);
  if ( (v8 & 0x4000) != 0 )
  {
    *(_DWORD *)(v7 + 232) = v8 & 0xFFFFBFFF;
    QueueShutdownData(*(_QWORD *)a1, 0LL);
  }
  if ( !v6 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
  {
    if ( (*gpsi & 4) != 0 && a1 == *(_QWORD *)(gptiCurrent + 784LL)
      || (unsigned __int8)tagWND::HasState(a1) && *(_DWORD *)(gptiCurrent + 904LL) == 1 )
    {
      xxxCallCtfHook(5, 4, *(_QWORD *)a1, 0LL);
    }
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4, *(_QWORD *)a1, 0LL, 5) )
    {
      goto LABEL_20;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage(a1, 0x90u, 0LL, 0LL);
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL);
  if ( v11 )
  {
    if ( a1 == *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL);
      do
      {
        *(_DWORD *)(v11 + 8) &= ~4u;
        v11 = *(_QWORD *)(v11 + 48);
      }
      while ( v11 );
      if ( (*(_DWORD *)(v12 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v64,
          (struct tagMENUSTATE *)v12);
        xxxEndMenu(v13);
        if ( v64 )
          xxxUnlockMenuStateInternal(v64, 0);
      }
    }
  }
  if ( ghwndSwitch == *(_QWORD *)a1 )
    ghwndSwitch = 0LL;
  v14 = *(_QWORD *)(a1 + 40);
  v15 = v14;
  if ( (*(_BYTE *)(v14 + 31) & 0x40) == 0 && !*(_QWORD *)(a1 + 120) && (*(_BYTE *)(v14 + 18) & 0x20) != 0 )
  {
    xxxFlushPalette(a1, v11, v14);
    v15 = *(_QWORD *)(a1 + 40);
  }
  if ( **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v15 + 31) & 0xC0) != 0x40 )
  {
    v16 = *(_QWORD *)(a1 + 120);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      v18 = *(_QWORD *)(a1 + 16);
      if ( v17 != v18 )
      {
        zzzAttachThreadInput(v18, v17, 0);
        v15 = *(_QWORD *)(a1 + 40);
      }
    }
  }
  if ( (*(_BYTE *)(v15 + 31) & 0x40) != 0 && (*(_BYTE *)(v15 + 24) & 4) == 0 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v19 = *(_QWORD *)(a1 + 104);
    if ( v19 )
    {
      *(_QWORD *)&v54 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v54;
      *((_QWORD *)&v54 + 1) = v19;
      HMLockObject(v19);
      v20 = *(_QWORD *)(a1 + 168);
      v21 = *(_QWORD *)(a1 + 104);
      v22 = *(struct _LARGE_STRING **)a1;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v21, 0x210u, ((unsigned __int16)v20 << 16) | 2, v22, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v23);
    }
  }
  if ( a1 != gTermIO[1] && a1 != qword_1C0338FC8 )
    SetOrClrWF(1, a1, 0x480u, 1);
  if ( (unsigned int)IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
  }
  else if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow((struct tagWND *)a1);
  }
  if ( (unsigned int)IsTopLevelWindow(a1) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 24LL) + 112LL); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(_QWORD *)(i + 120) == a1 && gptiCurrent != *(_QWORD *)(i + 16) )
        PostUnownedNotification((struct tagWND *)i);
    }
  }
  v25 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  if ( (v25 & 0x10) != 0 )
  {
    if ( (v25 & 0x40) != 0 )
      xxxShowWindow((struct tagWND *)a1, gdwPUDFlags & 0x10000);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, (v6 << 13) + 151);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    {
      SetVisible((struct tagWND *)a1, 0);
      v26 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v26 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v26 + 8) + 24LL) )
        {
          v27 = *(_QWORD *)(a1 + 104);
          if ( v27 )
            zzzLockDisplayAreaAndInvalidateDCCache(v27, 16, 0LL);
          xxxRedrawWindow(0LL, (int *)(*(_QWORD *)(a1 + 40) + 88LL), 0LL, 133);
        }
      }
    }
  }
  else if ( (unsigned int)IsTrayWindow((_QWORD *)a1) && (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) != 0x2AA )
  {
    PostShellHookMessages(2uLL, *(_QWORD *)a1);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) == 0 )
    {
      v28 = HotKeyHelper((struct tagWND *)a1);
      v29 = *v28;
      if ( *v28 )
      {
        v30 = *v28;
        *v28 = (struct tagHOTKEYSTRUCT *)*((_QWORD *)v29 + 2);
        HMAssignmentUnlock(v30);
        Win32FreePool(v29);
        --gcHotKey;
      }
    }
  }
  if ( !v6 )
  {
    v31 = *(_QWORD *)(gptiCurrent + 432LL);
    v32 = 62;
    v56 = 0LL;
    v57 = 0LL;
    v33 = 0;
    v34 = *(_QWORD *)(v31 + 120);
    if ( a1 == v34 )
    {
      if ( *(char *)(*(_QWORD *)(a1 + 40) + 31LL) < 0 )
      {
        v35 = *(_QWORD *)(a1 + 120);
        if ( v35 )
        {
          v33 = 1;
          goto LABEL_89;
        }
      }
    }
    else
    {
      if ( v34 || gpqForeground != v31 )
        goto LABEL_116;
      v32 = 63;
    }
    v35 = a1;
LABEL_89:
    if ( v35 )
    {
      if ( v33 )
      {
        if ( !IsNonImmersiveBand(v35) && *(char *)(*(_QWORD *)(v35 + 40) + 20LL) < 0 )
        {
          for ( j = *(_QWORD *)(v35 + 120); j; j = *(_QWORD *)(j + 120) )
          {
            v37 = *(_QWORD *)(j + 40);
            if ( (*(_BYTE *)(v37 + 234) & 1) != 0 && *(char *)(v37 + 20) >= 0 )
            {
              v35 = j;
              break;
            }
          }
        }
        *(_QWORD *)&v56 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v56;
        *((_QWORD *)&v56 + 1) = v35;
        HMLockObject(v35);
        if ( (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 234LL) & 1) != 0 )
          xxxEnableWindow((struct tagWND *)v35, 1);
      }
      v39 = xxxActivateWindowWithOptions(v35, v33 + 2, v32, 1);
      if ( v33 )
        ThreadUnlock1(v38);
      if ( (!v39 || !v33 && a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL))
        && (!v33 || a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)) )
      {
        HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        v40 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
        v41 = (__int64 *)v40;
        if ( (*gpsi & 4) != 0 && v40 )
        {
          *(_QWORD *)&v58 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v58;
          *((_QWORD *)&v58 + 1) = v40;
          HMLockObject(v40);
          xxxFocusSetInputContext(v41, 0, 0);
          v41 = (__int64 *)ThreadUnlock1(v42);
        }
        if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground )
        {
          if ( v41 )
            zzzInputFocusLostWindowEvent((__int64)v41);
          xxxWindowEvent(0x8005u, 0);
          xxxWindowEvent(3u, 1u);
        }
        zzzInternalDestroyCaret();
      }
    }
  }
LABEL_116:
  v43 = *(_QWORD *)(a1 + 120);
  if ( v43 )
  {
    while ( *(_QWORD *)(v43 + 120) )
      v43 = *(_QWORD *)(v43 + 120);
    v44 = v43 + 200;
    if ( a1 == *(_QWORD *)(v43 + 200) )
    {
      if ( (*(_BYTE *)(_HMPheFromObject(v43) + 25) & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v44 - 160) + 176LL) = 0LL;
        HMAssignmentUnlock(v44);
      }
      else
      {
        v61 = *(_OWORD *)LockPointer(v62, v44, *(_QWORD *)(a1 + 120));
        HMAssignmentLock(&v61);
      }
    }
  }
  if ( !v6 )
  {
    if ( *(char *)(*(_QWORD *)(a1 + 40) + 19LL) >= 0 )
      xxxWindowEvent(0x8001u, 0);
    xxxDW_SendDestroyMessages(a1);
  }
  v45 = (struct tagWND *)gpsi;
  if ( (*gpsi & 4) == 0 )
    goto LABEL_145;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    goto LABEL_145;
  if ( !*(_QWORD *)(gptiCurrent + 784LL) )
    goto LABEL_145;
  v46 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL);
  if ( (*(_BYTE *)(v46 + 10) & 1) != 0 || *(_WORD *)v46 == *(_WORD *)(gpsi + 898LL) || v6 )
    goto LABEL_145;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 104) && (unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 784LL), a1) )
    {
      v48 = *(_QWORD *)(gptiCurrent + 784LL);
LABEL_140:
      xxxDestroyWindow(v48);
    }
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(_QWORD *)(gptiCurrent + 784LL), (struct tagWND *)a1);
    zzzEndDeferWinEventNotify();
    if ( CanDestroyDefIME )
    {
      v48 = *(_QWORD *)(gptiCurrent + 784LL);
      if ( v48 )
        goto LABEL_140;
    }
  }
  v45 = *(struct tagWND **)(gptiCurrent + 784LL);
  if ( v45 && *(_DWORD *)(gptiCurrent + 904LL) == 1 && (unsigned __int8)tagWND::HasState(a1) )
    xxxDestroyWindow(v45);
LABEL_145:
  v49 = *(_QWORD *)(a1 + 104);
  if ( v49 && !v6 )
  {
    v50 = *(_QWORD *)(v49 + 16);
    if ( *(_QWORD *)(v50 + 1400) == a1 )
    {
      HMAssignmentUnlock(v50 + 1400);
      DisassociateShellFrameAppThreads2(v50, gptiCurrent);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
    {
      v52 = *(_QWORD *)(a1 + 16);
      v45 = *(struct tagWND **)(v51 + 16);
      if ( (struct tagWND *)v52 != v45 )
        zzzAttachThreadInput(v52, (__int64)v45, 0);
    }
    if ( *(_DWORD *)(a1 + 308) )
      WindowGroupingWindowManagement::HandleWindowDestruction((WindowGroupingWindowManagement *)a1, v45);
    v53 = *(_QWORD *)(a1 + 104);
    if ( v53 )
      UnlinkWindow(a1, v53);
  }
  SetOrClrWF(1, a1, 0x380u, 1);
  xxxFreeWindow((NotifyShell *)a1, (__int64)v60);
  if ( v6 )
    *(_DWORD *)(gptiCurrent + 488LL) = v63 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
  return 1LL;
}
