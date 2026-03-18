/*
 * XREFs of xxxDestroyWindow @ 0x1C0062330
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     xxxRemoveShadow @ 0x1C0060F54 (xxxRemoveShadow.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0063700 (xxxDW_DestroyOwnedWindows.c)
 *     NtUserDestroyWindow @ 0x1C0063880 (NtUserDestroyWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C0080464 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0099B78 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     xxxCsDdeInitialize @ 0x1C010D64C (xxxCsDdeInitialize.c)
 *     NtUserDisableThreadIme @ 0x1C0110420 (NtUserDisableThreadIme.c)
 *     xxxCancelCoolSwitch @ 0x1C01110F4 (xxxCancelCoolSwitch.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0119D30 (xxxDestroyThreadDDEObject.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C01226E8 (xxxCleanupMotherDesktopWindow.c)
 *     xxxAddShadow @ 0x1C012DDE0 (xxxAddShadow.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxEndMenu @ 0x1C0245A6C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C005F8D8 (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?IsWindowGhosted@@YAHPEBUtagWND@@@Z @ 0x1C0062EF0 (-IsWindowGhosted@@YAHPEBUtagWND@@@Z.c)
 *     IsMotherDesktopWindow @ 0x1C0062F70 (IsMotherDesktopWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0062F9C (xxxDW_SendDestroyMessages.c)
 *     DWP_SetHotKey @ 0x1C0063640 (DWP_SetHotKey.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0063700 (xxxDW_DestroyOwnedWindows.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     UnlinkWindow @ 0x1C0072CAC (UnlinkWindow.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxCallCtfHook @ 0x1C0075F08 (xxxCallCtfHook.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x1C0082AF4 (-ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C0082B70 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     zzzAttachThreadInput @ 0x1C009D530 (zzzAttachThreadInput.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C00A80EC (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00A8748 (zzzInputFocusLostWindowEvent.c)
 *     xxxEnableWindow @ 0x1C00AEC3C (xxxEnableWindow.c)
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 *     zzzInternalDestroyCaret @ 0x1C00C32D8 (zzzInternalDestroyCaret.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00FDE78 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C01095CC (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01446B8 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0151E84 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01D98B4 (DisassociateShellFrameAppThreads2.c)
 *     QueueShutdownData @ 0x1C01D9D08 (QueueShutdownData.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DB7A8 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C021B934 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxFlushPalette @ 0x1C022E840 (xxxFlushPalette.c)
 *     xxxEndMenu @ 0x1C0245A6C (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(_QWORD *a1)
{
  unsigned int v1; // esi
  int v2; // ebx
  int v4; // r13d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *i; // rbx
  __int64 v25; // rcx
  char v26; // cl
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // r12d
  unsigned __int8 v31; // r15
  _QWORD *v32; // rax
  struct tagWND *v33; // rbx
  bool HasState; // al
  struct tagWND *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  char v38; // bl
  __int64 v39; // r8
  struct tagWND *v40; // rax
  struct tagWND *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rcx
  int CanDestroyDefIME; // ebx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rbx
  __int64 v53; // r10
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int128 v57; // [rsp+50h] [rbp-59h] BYREF
  __int64 v58; // [rsp+60h] [rbp-49h]
  __int128 v59; // [rsp+68h] [rbp-41h] BYREF
  __int64 v60; // [rsp+78h] [rbp-31h]
  __int128 v61; // [rsp+80h] [rbp-29h] BYREF
  __int64 v62; // [rsp+90h] [rbp-19h]
  _QWORD v63[3]; // [rsp+98h] [rbp-11h] BYREF
  __int128 v64; // [rsp+B0h] [rbp+7h] BYREF
  char v65[64]; // [rsp+C0h] [rbp+17h] BYREF
  int v66; // [rsp+110h] [rbp+67h]
  struct tagMENUSTATE *v67; // [rsp+118h] [rbp+6Fh] BYREF

  v1 = 0;
  v63[2] = 0LL;
  v61 = 0LL;
  v2 = 0;
  v66 = 0;
  v62 = 0LL;
  v58 = 0LL;
  v57 = 0LL;
  v63[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v63;
  v63[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v4 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  if ( gptiCurrent == a1[2] )
  {
    if ( !v4 )
      goto LABEL_10;
  }
  else
  {
    if ( !v4 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 2) == 0 )
    {
      UserSetLastError(5LL);
LABEL_21:
      if ( v4 )
      {
        v6 = v2 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 488LL) = v6;
      }
      LOBYTE(v1) = ThreadUnlock1(v6, v5, v7) == 0;
      return v1;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
  }
  v2 = *(_DWORD *)(gptiCurrent + 488LL) & 0x10000000;
  v66 = v2;
  *(_DWORD *)(gptiCurrent + 488LL) |= 0x10000000u;
LABEL_10:
  if ( tagWND::HasState((__int64)a1, 0x400000) )
  {
    *((_DWORD *)a1 + 80) &= ~0x400000u;
    QueueShutdownData(*a1, 0LL);
  }
  if ( !v4 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
  {
    if ( (*gpsi & 4) != 0 && a1 == *(_QWORD **)(gptiCurrent + 784LL)
      || tagWND::HasState((__int64)a1, 0x20000000) && *(_DWORD *)(gptiCurrent + 904LL) == 1 )
    {
      xxxCallCtfHook(5LL, 4LL, *a1, 0LL);
    }
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4, *a1, 0LL, 5) )
    {
      goto LABEL_21;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage((ULONG_PTR)a1);
  }
  v9 = *(_QWORD *)(a1[2] + 608LL);
  if ( v9 )
  {
    if ( a1 == *(_QWORD **)(*(_QWORD *)v9 + 8LL) )
    {
      v10 = *(_QWORD *)(a1[2] + 608LL);
      do
      {
        *(_DWORD *)(v9 + 8) &= ~4u;
        v9 = *(_QWORD *)(v9 + 48);
      }
      while ( v9 );
      if ( (*(_DWORD *)(v10 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v67,
          (struct tagMENUSTATE *)v10);
        xxxEndMenu(v11);
        if ( v67 )
          xxxUnlockMenuStateInternal(v67, 0);
      }
    }
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement == *a1 )
    *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  v12 = a1[5];
  v13 = v12;
  if ( (*(_BYTE *)(v12 + 31) & 0x40) == 0 && !a1[15] && (*(_BYTE *)(v12 + 18) & 0x20) != 0 )
  {
    xxxFlushPalette(a1, v9, v12);
    v13 = a1[5];
  }
  if ( **(_WORD **)(a1[17] + 8LL) != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v13 + 31) & 0xC0) != 0x40 )
  {
    v14 = a1[15];
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 16);
      v16 = a1[2];
      if ( v15 != v16 )
      {
        zzzAttachThreadInput(v16, v15, 0LL);
        v13 = a1[5];
      }
    }
  }
  if ( (*(_BYTE *)(v13 + 31) & 0x40) != 0 && (*(_BYTE *)(v13 + 24) & 4) == 0 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v17 = a1[13];
    if ( v17 )
    {
      *(_QWORD *)&v57 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v57;
      *((_QWORD *)&v57 + 1) = v17;
      HMLockObject(v17);
      v18 = *a1;
      v19 = (unsigned __int64 *)a1[13];
      v20 = *(_QWORD *)(a1[5] + 320LL);
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v19, 0x210u, ((unsigned __int16)v20 << 16) | 2, v18, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v22, v21, v23);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow(a1) )
    SetOrClrWF(1LL, a1, 1152LL, 1LL);
  if ( (unsigned int)IsWindowGhosted((const struct tagWND *)a1) )
  {
    xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
  }
  else if ( (*(_WORD *)(a1[5] + 42LL) & 0x2FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow((struct tagWND *)a1);
  }
  if ( (unsigned int)IsTopLevelWindow(a1) )
  {
    for ( i = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1[3] + 8LL) + 24LL) + 112LL); i; i = (_QWORD *)i[11] )
    {
      if ( (_QWORD *)i[15] == a1 && gptiCurrent != i[2] && (*(_BYTE *)(i[5] + 31LL) & 0x10) != 0 )
      {
        if ( !gpqForeground || (v25 = 26LL, *(_QWORD **)(gpqForeground + 120LL) != i) )
          v25 = 29LL;
        PostIAMShellHookMessage(v25, *i);
      }
    }
  }
  v26 = *(_BYTE *)(a1[5] + 31LL);
  if ( (v26 & 0x10) != 0 )
  {
    if ( (v26 & 0x40) != 0 )
      xxxShowWindow((struct tagWND *)a1, gdwPUDFlags & 0x10000);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, (v4 << 13) + 151);
    if ( (*(_BYTE *)(a1[5] + 31LL) & 0x10) != 0 )
    {
      SetVisible((struct tagWND *)a1, 0);
      v27 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v27 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v27 + 8) + 24LL) )
        {
          v28 = a1[13];
          if ( v28 )
            zzzLockDisplayAreaAndInvalidateDCCache(v28, 16, 0LL);
          xxxRedrawWindow(0LL, (int *)(a1[5] + 88LL), 0LL, 133);
        }
      }
    }
  }
  else if ( (unsigned __int8)IsTrayWindow(a1, 1LL) && (*(_WORD *)(a1[5] + 42LL) & 0x2FFF) != 0x2AA )
  {
    PostShellHookMessages(2LL, *a1);
  }
  if ( (*(_BYTE *)(a1[5] + 31LL) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    DWP_SetHotKey((struct tagWND *)a1);
  }
  if ( !v4 )
  {
    v29 = *(_QWORD *)(gptiCurrent + 432LL);
    v30 = 58;
    v59 = 0LL;
    v60 = 0LL;
    v31 = 0;
    v32 = *(_QWORD **)(v29 + 120);
    if ( a1 == v32 )
    {
      if ( *(char *)(a1[5] + 31LL) < 0 )
      {
        v33 = (struct tagWND *)a1[15];
        if ( v33 )
        {
          v31 = 1;
          if ( !(unsigned int)IsNonImmersiveBand(a1[15])
            && *(char *)(*((_QWORD *)v33 + 5) + 20LL) < 0
            && *((_QWORD *)v33 + 15) )
          {
            HasState = tagWND::HasState((__int64)a1, 256);
            while ( !HasState || *(char *)(*((_QWORD *)v35 + 5) + 20LL) < 0 )
            {
              v35 = (struct tagWND *)*((_QWORD *)v35 + 15);
              if ( !v35 )
                goto LABEL_99;
            }
            v33 = v35;
          }
LABEL_99:
          *(_QWORD *)&v59 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v59;
          *((_QWORD *)&v59 + 1) = v33;
          HMLockObject(v33);
          if ( tagWND::HasState((__int64)a1, 256) )
            xxxEnableWindow(v33);
          goto LABEL_101;
        }
      }
    }
    else
    {
      if ( v32 || gpqForeground != v29 )
        goto LABEL_116;
      v30 = 59;
    }
    v33 = (struct tagWND *)a1;
    if ( !a1 )
      goto LABEL_116;
LABEL_101:
    v38 = xxxActivateWindowWithOptions(v33, (unsigned int)v31 + 2, v30, 1LL);
    if ( v31 )
      ThreadUnlock1(v37, v36, v39);
    if ( v38 )
    {
      if ( v31 )
        goto LABEL_116;
    }
    else if ( !v31 )
    {
LABEL_108:
      HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
      v40 = tagQ::UnlockFocusWnd(*(tagQ **)(gptiCurrent + 432LL));
      v41 = v40;
      if ( (*gpsi & 4) != 0 && v40 )
      {
        *(_QWORD *)&v61 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v61;
        *((_QWORD *)&v61 + 1) = v40;
        HMLockObject(v40);
        xxxFocusSetInputContext(v41, 0, 0);
        v41 = (struct tagWND *)ThreadUnlock1(v43, v42, v44);
      }
      if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground )
      {
        if ( v41 )
          zzzInputFocusLostWindowEvent(v41, 9LL);
        xxxWindowEvent(0x8005u, 0);
        xxxWindowEvent(3u, 1);
      }
      zzzInternalDestroyCaret();
      goto LABEL_116;
    }
    if ( a1 != *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
      goto LABEL_116;
    goto LABEL_108;
  }
LABEL_116:
  v45 = a1[15];
  if ( v45 )
  {
    while ( *(_QWORD *)(v45 + 120) )
      v45 = *(_QWORD *)(v45 + 120);
    v46 = v45 + 200;
    if ( a1 == *(_QWORD **)(v45 + 200) )
    {
      if ( (*(_BYTE *)(_HMPheFromObject(v45) + 25) & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v46 - 160) + 176LL) = 0LL;
        HMAssignmentUnlock(v46);
      }
      else
      {
        v64 = *(_OWORD *)LockPointer(v65, v46, a1[15]);
        HMAssignmentLock(&v64, 0LL);
      }
    }
  }
  if ( !v4 )
  {
    if ( *(char *)(a1[5] + 19LL) >= 0 )
      xxxWindowEvent(0x8001u, 0);
    xxxDW_SendDestroyMessages(a1);
  }
  if ( (*gpsi & 4) == 0 )
    goto LABEL_145;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    goto LABEL_145;
  if ( !*(_QWORD *)(gptiCurrent + 784LL) )
    goto LABEL_145;
  v47 = *(_QWORD *)(a1[17] + 8LL);
  if ( (*(_BYTE *)(v47 + 10) & 1) != 0 || *(_WORD *)v47 == *(_WORD *)(gpsi + 898LL) || v4 )
    goto LABEL_145;
  if ( (*(_BYTE *)(a1[5] + 31LL) & 0x40) != 0 )
  {
    if ( a1[13] && ImeCanDestroyDefIMEforChild(*(struct tagWND **)(gptiCurrent + 784LL), (struct tagWND *)a1) )
    {
      v49 = *(_QWORD *)(gptiCurrent + 784LL);
LABEL_140:
      xxxDestroyWindow(v49);
    }
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(struct tagWND **)(gptiCurrent + 784LL), (struct tagWND *)a1);
    zzzEndDeferWinEventNotify();
    if ( CanDestroyDefIME )
    {
      v49 = *(_QWORD *)(gptiCurrent + 784LL);
      if ( v49 )
        goto LABEL_140;
    }
  }
  if ( *(_QWORD *)(gptiCurrent + 784LL)
    && *(_DWORD *)(gptiCurrent + 904LL) == 1
    && tagWND::HasState((__int64)a1, 0x20000000) )
  {
    xxxDestroyWindow(v50);
  }
LABEL_145:
  v51 = a1[13];
  if ( v51 && !v4 )
  {
    v52 = *(_QWORD *)(v51 + 16);
    if ( *(_QWORD **)(v52 + 1400) == a1 )
    {
      HMAssignmentUnlock(v52 + 1400);
      DisassociateShellFrameAppThreads2(v52, gptiCurrent);
      v51 = a1[13];
    }
    v53 = v51;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
    {
      v55 = a1[2];
      v56 = *(_QWORD *)(v54 + 16);
      if ( v55 != v56 )
      {
        zzzAttachThreadInput(v55, v56, 0LL);
        v53 = a1[13];
      }
    }
    if ( v53 )
      UnlinkWindow((struct tagWND *)a1);
  }
  SetOrClrWF(1LL, a1, 896LL, 1LL);
  xxxFreeWindow((struct tagWND *)a1, (__int64)v63);
  if ( v4 )
    *(_DWORD *)(gptiCurrent + 488LL) = v66 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
  return 1LL;
}
