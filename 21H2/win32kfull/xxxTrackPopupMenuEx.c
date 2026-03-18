/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C024614C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01FFC10 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C024162C (xxxDoScrollMenu.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1C006A6D8 (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     _MonitorFromPoint @ 0x1C007B350 (_MonitorFromPoint.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C009D490 (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     SubtractRect @ 0x1C00C1550 (SubtractRect.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     xxxPlayEventSound @ 0x1C01088E0 (xxxPlayEventSound.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C010C53C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C010CC94 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C0117A6C (MNClearCachedPopupSizes.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C021B934 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C021B978 (MNAllocMenuState.c)
 *     MNMarkDelayedFreePopup @ 0x1C021BE1C (MNMarkDelayedFreePopup.c)
 *     xxxMNEndMenuState @ 0x1C021BF30 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C021C1CC (xxxMNStartMenu.c)
 *     xxxUserModeCallback @ 0x1C022D320 (xxxUserModeCallback.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C02300E8 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C023346C (xxxMNReleaseCapture.c)
 *     ?IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C0238250 (-IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C02382B8 (-IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C023EFC0 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     FindBestPos @ 0x1C0245C74 (FindBestPos.c)
 *     MNAnimate @ 0x1C0247828 (MNAnimate.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025A5CC (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(_QWORD **a1, unsigned int a2, LONG a3, LONG a4, ULONG_PTR a5, __int64 a6)
{
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v23; // r14d
  __int64 v24; // rax
  unsigned int v25; // ebx
  void *v26; // rdi
  __int64 v27; // rax
  __int64 Window; // r14
  __int64 v29; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // al
  struct tagMENUSTATE *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // r12d
  unsigned int v40; // r15d
  unsigned int *v41; // rdx
  unsigned int v42; // ecx
  bool v43; // cf
  MenuHelpers *v44; // rcx
  HDC v45; // rax
  __int64 v46; // rbx
  __int64 v47; // r9
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // edx
  __int64 v54; // rax
  int v55; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v57; // rax
  _QWORD *v58; // rcx
  unsigned __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rcx
  struct tagMONITOR *v62; // r9
  int v63; // r12d
  int v64; // r15d
  __int64 v65; // rcx
  int BestPos; // r15d
  __int64 v67[2]; // [rsp+90h] [rbp-80h] BYREF
  int v68; // [rsp+A0h] [rbp-70h]
  int v69; // [rsp+A4h] [rbp-6Ch]
  int v70[2]; // [rsp+A8h] [rbp-68h]
  int v71; // [rsp+B0h] [rbp-60h]
  __int64 v72; // [rsp+B8h] [rbp-58h]
  __int128 v73; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v74[2]; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v75[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int128 v76; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v77; // [rsp+100h] [rbp-10h] BYREF
  __int64 v78; // [rsp+110h] [rbp+0h]
  __int128 v79; // [rsp+118h] [rbp+8h] BYREF
  __int64 v80; // [rsp+128h] [rbp+18h]
  __int64 v81[3]; // [rsp+130h] [rbp+20h] BYREF
  _BYTE v82[16]; // [rsp+148h] [rbp+38h] BYREF
  struct tagRECT v83; // [rsp+158h] [rbp+48h] BYREF
  LONG v85; // [rsp+1C8h] [rbp+B8h]

  v85 = a4;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v67, 0LL);
  v78 = 0LL;
  v80 = 0LL;
  v72 = 0LL;
  v68 = 0;
  v70[0] = 0;
  v74[0] = 0LL;
  v77 = 0LL;
  v79 = 0LL;
  *(_OWORD *)v75 = 0LL;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
    {
LABEL_5:
      v9 = 87LL;
LABEL_6:
      UserSetLastError(v9, 0LL);
LABEL_7:
      v10 = 0;
      goto LABEL_8;
    }
    *(_OWORD *)v75 = *(_OWORD *)(a6 + 4);
  }
  *(_QWORD *)&v73 = gptiCurrent;
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
    goto LABEL_5;
  v12 = *(_QWORD *)(gptiCurrent + 608LL);
  v10 = 1;
  if ( v12 )
  {
    if ( (a2 & 1) == 0 )
    {
      v9 = 1446LL;
      goto LABEL_6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v67, *(_QWORD *)v12);
    v13 = *(_QWORD *)(*(_QWORD *)v67[0] + 8LL);
    if ( (*(_DWORD *)(v12 + 8) & 4) == 0
      || (**(_DWORD **)v67[0] & 0x8000) != 0
      || !v13
      || v13 != a5
      || *(_QWORD *)(v12 + 32) != *(_QWORD *)(v13 + 16) )
    {
      goto LABEL_7;
    }
    MNAnimate(v12, 0LL);
    v14 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v67[0] + 56LL));
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 8);
    else
      v15 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v67, v15);
    if ( *(_QWORD *)v67[0] && (**(_DWORD **)v67[0] & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v67[0] + 16LL), 65534LL, 0, 1, 0LL);
      **(_DWORD **)v67[0] &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v12 + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
  }
  v69 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v71 = (unsigned __int16)_GetKeyState(2LL) >> 15;
  else
    v71 = (unsigned __int16)_GetKeyState(1LL) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v17, v16) & 0xF) == 2
    || (W32GetCurrentThreadDpiAwarenessContext(v19, v18) & 0xF) == 3 )
  {
    *(_QWORD *)v70 = __PAIR64__(a4, a3);
    v20 = *(_QWORD *)(MonitorFromPoint(__PAIR64__(a4, a3), 2u, 0) + 40);
    v68 = *(_DWORD *)(v20 + 28);
    v70[0] = *(_DWORD *)(v20 + 32);
  }
  v23 = 0;
  if ( PsGetCurrentProcessWin32Process(v20) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v23 = 1;
  }
  v24 = *(_QWORD *)(a5 + 40);
  v25 = *(_DWORD *)(v24 + 236);
  v26 = *(void **)(v24 + 32);
  SmartObjStackRefBase<tagMENU>::Init(v81, 0LL);
  v27 = (__int64)*a1;
  v81[2] = 0LL;
  Window = xxxCreateWindowEx(
             385,
             (wchar_t *)0x8000,
             0x8000LL,
             0LL,
             0x80800000,
             v68,
             v70[0],
             100,
             100,
             (struct tagWND *)(a5 & -(__int64)((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 40LL) + 40LL) & 0x40000000) != 0)),
             (__int64)v81,
             v26,
             0LL,
             v25,
             0xA00u,
             v23,
             0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v81);
  if ( !Window )
    goto LABEL_7;
  v29 = safe_cast_fnid_to_PMENUWND(Window);
  if ( !v29 )
  {
    xxxDestroyWindow((_QWORD *)Window);
    goto LABEL_7;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v77 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v77;
  *((_QWORD *)&v77 + 1) = Window;
  HMLockObject(Window);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v32, v31) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v73 + 424) + 820LL) & 0x100000) != 0
      || ((a2 & 0x200) == 0
        ? (!IsTopLevelWindow(a5)
         ? (v33 = IsChildWindowDpiMessageEnabledX((struct tagWND *)a5))
         : (v33 = IsWindowBroadcastingDpiToChildrenX((struct tagWND *)a5)))
        : (v33 = IsNonClientDpiScalingEnabledX((struct tagWND *)a5)),
          v33) )
    {
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x40000000) == 0 )
  {
    xxxInheritWindowMonitor((ShellWindowManagement *)Window, (ShellWindowManagement *)a5, 0);
  }
  v34 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked((struct tagWND *const)Window, 1)
    && !(unsigned int)IsWindowShellCloaked((struct tagWND *const)a5, 0) )
  {
    zzzSetWindowCompositionCloak((struct tagWND *)Window, 0LL, 0);
  }
  if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
    SetOrClrWF(1, (struct tagWND *)Window, 0xA40u, 1);
  SetOrClrWF(0, (struct tagWND *)Window, 0x408u, 1);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v67, *(_QWORD *)(v29 + 8));
  if ( !*(_QWORD *)v67[0] )
    goto LABEL_56;
  *((_QWORD *)&v73 + 1) = a5;
  *(_QWORD *)&v73 = *(_QWORD *)v67[0] + 8LL;
  HMAssignmentLock(&v73, 0LL);
  LockPopupMenu((__int64)v67, (__int64 *)(*(_QWORD *)v67[0] + 40LL), (__int64)a1);
  v74[1] = Window;
  v74[0] = *(_QWORD *)v67[0] + 56LL;
  HMAssignmentLock(v74, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(&v76, 0LL);
  MNMarkDelayedFreePopup((_QWORD **)v67, (__int64 *)&v76);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v76);
  *(_QWORD *)(*(_QWORD *)v67[0] + 64LL) = *(_QWORD *)v67[0];
  **(_DWORD **)v67[0] |= 8u;
  v41 = *(unsigned int **)v67[0];
  v42 = (v71 << 9) | **(_DWORD **)v67[0] & 0xFFFFFDFF;
  v43 = v69 != 0;
  v69 = -v69;
  *v41 = v42;
  v44 = (MenuHelpers *)(**(_DWORD **)v67[0] & 0xFFFFFFBF | (v43 ? 0x40 : 0));
  **(_DWORD **)v67[0] = (_DWORD)v44;
  if ( MenuHelpers::GetMenuRightAlignHint(v44) || (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x20) != 0 )
    **(_DWORD **)v67[0] |= 0x10u;
  **(_DWORD **)v67[0] ^= (**(_DWORD **)v67[0] ^ (16 * a2)) & 0x800;
  v69 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    **(_DWORD **)v67[0] |= 0x100u;
  **(_DWORD **)v67[0] ^= (**(_DWORD **)v67[0] ^ (a2 >> 7)) & 4;
  v45 = MNAllocMenuState((_QWORD **)v67);
  v74[0] = (__int64)v45;
  v46 = (__int64)v45;
  if ( !v45 )
  {
LABEL_56:
    LOBYTE(a2) = a2 | 0x80;
LABEL_57:
    xxxWindowEvent(5u, (struct tagWND *)a5, 0, 0, 0);
    v35 = v74[0];
    xxxMNReleaseCapture(v74[0]);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage(a5);
    v39 = 1;
    v40 = 0;
    goto LABEL_129;
  }
  if ( gptiCurrent == *((_QWORD *)v45 + 4) )
  {
    ++*((_DWORD *)v45 + 10);
    v34 = (struct tagMENUSTATE *)v45;
  }
  if ( (**(_DWORD **)v67[0] & 0x800) == 0 )
    xxxSendMessage(a5);
  if ( !xxxMNStartMenu(v67, v46, -1) )
    goto LABEL_57;
  if ( (*(_DWORD *)(v46 + 8) & 0x400) != 0 )
  {
    *(_QWORD *)&v73 = *(_QWORD *)Window;
    xxxUserModeCallback(100LL, (__int64)&v73, 8LL, v47);
  }
  if ( (**(_DWORD **)v67[0] & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v67[0] + 8LL) )
  {
    v48 = *(_QWORD *)(*(_QWORD *)v67[0] + 8LL);
    v49 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v79 = *(_QWORD *)(v49 + 416);
    *(_QWORD *)(v49 + 416) = &v79;
    *((_QWORD *)&v79 + 1) = v48;
    HMLockObject(v48);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)v67[0] + 8LL));
    ThreadUnlock1(v51, v50, v52);
    v46 = v74[0];
    **(_DWORD **)v67[0] |= 0x200000u;
  }
  if ( (*(_DWORD *)(Window + 320) & 0x100000) != 0 )
  {
    v53 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) )
    {
      while ( (**(_DWORD **)(96LL * v53 + *(_QWORD *)(**a1 + 88LL)) & 0x100) == 0
           && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 88LL) + 96LL * v53) + 96LL) != -1LL )
      {
        if ( (unsigned int)++v53 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) )
          goto LABEL_83;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
LABEL_83:
  v54 = *(_QWORD *)(Window + 40);
  v55 = *(_DWORD *)(v54 + 288) & 0xF;
  if ( v55 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v54 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v54 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
  }
  else if ( !v55
         && (v57 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v57 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 424LL) + 284LL);
  }
  if ( WindowDpiLastNotify != *(_WORD *)(**a1 + 76LL) )
  {
    *(_WORD *)(**a1 + 76LL) = WindowDpiLastNotify;
    v58 = a1[2];
    if ( !v58 )
      v58 = (_QWORD *)**a1;
    MNClearCachedPopupSizes(v58);
  }
  *(_QWORD *)&v73 = xxxSendMessage(Window);
  if ( !(_DWORD)v73 )
    goto LABEL_57;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 4 )
  {
    *(_DWORD *)(v46 + 8) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) |= 4u;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) &= ~4u;
  }
  v70[0] = (unsigned __int16)v73 + 6;
  v68 = WORD1(v73) + 6;
  v72 = __PAIR64__(v85, a3);
  v59 = __PAIR64__(v85, a3);
  v60 = MonitorFromPoint(__PAIR64__(v85, a3), 2u, 0);
  v61 = *(_QWORD *)(a5 + 40);
  v62 = (struct tagMONITOR *)v60;
  v72 = v60;
  v63 = a2 ^ 8;
  if ( (((a2 & 4) == 0) & (*(_BYTE *)(v61 + 26) >> 6)) == 0 )
    v63 = a2;
  if ( (v63 & 8) != 0 )
  {
    a3 -= v70[0];
    **(_DWORD **)v67[0] = **(_DWORD **)v67[0] & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v63 & 4) != 0 )
  {
    a3 -= (unsigned int)v70[0] >> 1;
  }
  else
  {
    **(_DWORD **)v67[0] = **(_DWORD **)v67[0] & 0xF07FFFFF | ((((**(_DWORD **)v67[0] & 0x10) != 0) + 1) << 23);
  }
  v64 = v68;
  if ( (v63 & 0x20) != 0 )
  {
    v85 -= v68;
    **(_DWORD **)v67[0] |= 0x4000000u;
  }
  else if ( (v63 & 0x10) != 0 )
  {
    v85 -= (unsigned int)v68 >> 1;
  }
  else
  {
    **(_DWORD **)v67[0] |= 0x2000000u;
  }
  if ( (v63 & 0x3C00) != 0 )
    **(_DWORD **)v67[0] = ((v63 & 0x3C00) << 13) | **(_DWORD **)v67[0] & 0xF07FFFFF;
  v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v67[0] + 16LL) + 40LL);
  if ( a6 )
  {
    if ( *(_DWORD *)(v65 + 236) != 1 )
      goto LABEL_121;
LABEL_120:
    **(_DWORD **)v67[0] |= 0x80000000;
    goto LABEL_121;
  }
  if ( *(_DWORD *)(v65 + 236) == 1 )
  {
    v73 = *(_OWORD *)GetMonitorRectForWindow((__int64)v82, v60, (const struct tagWND *)Window);
    v76 = *(_OWORD *)GetMonitorMenuRectForWindow(&v83);
    SubtractRect((__int64)v75, (int *)&v73, (int *)&v76);
    v62 = (struct tagMONITOR *)v72;
    goto LABEL_120;
  }
  *(_OWORD *)v75 = 0LL;
  **(_DWORD **)v67[0] &= ~0x80000000;
LABEL_121:
  BestPos = FindBestPos(a3, v85, v70[0], v64, (struct tagRECT *)v75, v63, (unsigned int ***)v67, v62, v59);
  if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 && (**(_DWORD **)v67[0] & 0x1800000) != 0 )
    **(_DWORD **)v67[0] ^= 0x1800000u;
  if ( (**(_DWORD **)v67[0] & 0xF800000) != 0 && (v63 & 0x4000) == 0 )
    **(_DWORD **)v67[0] |= 0x8000000u;
  xxxPlayEventSound(5LL);
  v35 = v74[0];
  xxxSetWindowPos(
    (struct tagWND *)Window,
    ((*(_DWORD *)(v74[0] + 8) & 0x100) != 0) - 1LL,
    (unsigned int)(__int16)BestPos,
    (unsigned int)SHIWORD(BestPos),
    0,
    0,
    ~(unsigned __int8)(*(_DWORD *)(v74[0] + 8) >> 4) & 0x10 | 0x241);
  xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
  *(_DWORD *)(v35 + 8) = (8 * v71) | *(_DWORD *)(v35 + 8) & 0xFFFFFFF7;
  v40 = xxxMNLoop((__int64 **)v67, v35, 0LL, 0);
  if ( (*(_DWORD *)(v35 + 8) & 0x100) == 0 )
  {
    v39 = v69;
LABEL_129:
    if ( ThreadUnlock1(v37, v36, v38) && *(char *)(*(_QWORD *)(Window + 40) + 19LL) >= 0 )
      xxxDestroyWindow((_QWORD *)Window);
    if ( v35 )
      xxxMNEndMenuState(v35);
    xxxDeliverRestoreFocusMessage((struct tagWND *)a5);
    goto LABEL_135;
  }
  ThreadUnlock1(v37, v36, v38);
  v39 = v69;
LABEL_135:
  if ( v39 )
    v10 = v40;
  if ( v34 )
    xxxUnlockMenuStateInternal(v34, 0);
LABEL_8:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v67);
  return v10;
}
