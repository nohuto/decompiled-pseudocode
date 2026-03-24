/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C024A5F0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C0203810 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C024510C (xxxDoScrollMenu.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     IsWindowShellCloaked @ 0x1C0014650 (IsWindowShellCloaked.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036CF0 (zzzSetWindowCompositionCloak.c)
 *     _MonitorFromPoint @ 0x1C0042060 (_MonitorFromPoint.c)
 *     GetMonitorRectForWindow @ 0x1C00427D4 (GetMonitorRectForWindow.c)
 *     GetWindowDpiLastNotify @ 0x1C004C618 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x1C006C7D8 (xxxInheritWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D7BC (safe_cast_fnid_to_PMENUWND.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00F0F34 (xxxEnableChildWindowDpiMessageX.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C010251C (MNClearCachedPopupSizes.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     SubtractRect @ 0x1C010AD68 (SubtractRect.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C010D0F4 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C011E880 (xxxPlayEventSound.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0125E1C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E5290 (IsChildWindowDpiMessageEnabledX.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01E52F4 (IsNonClientDpiScalingEnabledX.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0221234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C0221278 (MNAllocMenuState.c)
 *     MNMarkDelayedFreePopup @ 0x1C02219A4 (MNMarkDelayedFreePopup.c)
 *     xxxMNEndMenuState @ 0x1C0221C40 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C0222080 (xxxMNStartMenu.c)
 *     xxxUserModeCallback @ 0x1C02334E8 (xxxUserModeCallback.c)
 *     xxxMNLoop @ 0x1C0234488 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C023651C (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C023A53C (xxxMNReleaseCapture.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C02431F0 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     FindBestPos @ 0x1C024A0F0 (FindBestPos.c)
 *     MNAnimate @ 0x1C024BE2C (MNAnimate.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025D430 (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(
        unsigned __int64 ***a1,
        unsigned int a2,
        LONG a3,
        LONG a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r8
  __int32 v9; // r14d
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  unsigned int v12; // esi
  struct _KTHREAD *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rax
  _QWORD *v23; // rcx
  __int64 v25; // rbx
  __int64 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v33; // ebx
  unsigned __int64 **v34; // rax
  __int64 Window; // r14
  __int64 v36; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rcx
  int v39; // eax
  struct tagMENUSTATE *v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rcx
  int v43; // r12d
  unsigned int v44; // r15d
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v51; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v53; // rax
  __int64 v54; // rbx
  _QWORD *v55; // rax
  unsigned int *v56; // rdx
  unsigned int v57; // ecx
  bool v58; // cf
  MenuHelpers *v59; // rcx
  HDC v60; // rax
  __int64 v61; // rbx
  __int64 v62; // r9
  __int64 v63; // rbx
  __int64 v64; // rax
  unsigned __int64 *v65; // r8
  __int64 v66; // rcx
  int v67; // edx
  __int64 v68; // rax
  int v69; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v71; // rax
  unsigned __int64 *v72; // rcx
  unsigned __int16 v73; // ecx^2
  unsigned __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rcx
  struct tagMONITOR *v77; // r9
  int v78; // r12d
  int v79; // r15d
  __int64 v80; // rcx
  int BestPos; // r15d
  __int64 v82[2]; // [rsp+98h] [rbp-80h] BYREF
  int v83; // [rsp+A8h] [rbp-70h]
  int v84[2]; // [rsp+B0h] [rbp-68h]
  int v85; // [rsp+B8h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-58h]
  HDC v87; // [rsp+C8h] [rbp-50h]
  __int64 v88; // [rsp+D0h] [rbp-48h]
  __int64 v89[2]; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v90[2]; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v91; // [rsp+F8h] [rbp-20h] BYREF
  __int128 v92; // [rsp+100h] [rbp-18h] BYREF
  __int64 v93; // [rsp+110h] [rbp-8h]
  __int128 v94; // [rsp+118h] [rbp+0h] BYREF
  __int64 v95; // [rsp+128h] [rbp+10h]
  _QWORD v96[2]; // [rsp+138h] [rbp+20h] BYREF
  _QWORD v97[2]; // [rsp+148h] [rbp+30h] BYREF
  _QWORD v98[3]; // [rsp+158h] [rbp+40h] BYREF
  __int128 v99; // [rsp+170h] [rbp+58h] BYREF
  __int128 v100; // [rsp+180h] [rbp+68h] BYREF
  __int128 v101; // [rsp+190h] [rbp+78h] BYREF
  char v102[72]; // [rsp+1A0h] [rbp+88h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v82, 0LL);
  v93 = 0LL;
  v95 = 0LL;
  v9 = 0;
  v88 = 0LL;
  v84[0] = 0;
  v87 = 0LL;
  v92 = 0LL;
  v94 = 0LL;
  *(_OWORD *)v90 = 0LL;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
    {
LABEL_5:
      v10 = 87LL;
LABEL_6:
      UserSetLastError(v10, 0LL, v8);
LABEL_7:
      v12 = 0;
      goto LABEL_8;
    }
    *(_OWORD *)v90 = *(_OWORD *)(a6 + 4);
  }
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
    goto LABEL_5;
  v25 = *(_QWORD *)(gptiCurrent + 608LL);
  v12 = 1;
  if ( v25 )
  {
    if ( (a2 & 1) == 0 )
    {
      v10 = 1446LL;
      goto LABEL_6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v82, *(_QWORD *)v25);
    v26 = *(__int64 **)(*(_QWORD *)v82[0] + 8LL);
    v11 = *(_DWORD **)v82[0];
    if ( (*(_DWORD *)(v25 + 8) & 4) == 0
      || (*v11 & 0x8000) != 0
      || !v26
      || v26 != (__int64 *)a5
      || *(_QWORD *)(v25 + 32) != v26[2] )
    {
      goto LABEL_7;
    }
    MNAnimate(v25, 0LL);
    v27 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v82[0] + 56LL));
    if ( v27 )
      v28 = *(_QWORD *)(v27 + 8);
    else
      v28 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v82, v28);
    if ( *(_QWORD *)v82[0] && (**(_DWORD **)v82[0] & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v82[0] + 16LL), 65534LL, 0, 1, 0LL);
      **(_DWORD **)v82[0] &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v25 + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
  }
  v83 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v85 = (unsigned __int16)_GetKeyState(2LL) >> 15;
  else
    v85 = (unsigned __int16)_GetKeyState(1LL) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v29) & 0xF) == 2 )
  {
    CurrentThread = (struct _KTHREAD *)__PAIR64__(a4, a3);
    v30 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0) + 40);
    v9 = *(_DWORD *)(v30 + 28);
    v84[0] = *(_DWORD *)(v30 + 32);
  }
  v33 = 0;
  if ( PsGetCurrentProcessWin32Process(v30) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v33 = 1;
  }
  SmartObjStackRefBase<tagMENU>::Init(v98, 0LL);
  v34 = *a1;
  v98[2] = 0LL;
  Window = xxxCreateWindowEx(
             385,
             (wchar_t *)0x8000,
             0x8000LL,
             0LL,
             -2139095040,
             v9,
             v84[0],
             0x64u,
             0x64u,
             a5 & -(__int64)((*(_DWORD *)((*v34)[5] + 40) & 0x40000000) != 0),
             (__int64)v98,
             *(_QWORD *)(*(_QWORD *)(a5 + 40) + 32LL),
             0LL,
             *(_DWORD *)(*(_QWORD *)(a5 + 40) + 236LL),
             2560,
             v33,
             0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v98);
  if ( !Window )
    goto LABEL_7;
  v36 = safe_cast_fnid_to_PMENUWND(Window);
  if ( !v36 )
  {
    xxxDestroyWindow(Window);
    goto LABEL_7;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v92 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v92;
  *((_QWORD *)&v92 + 1) = Window;
  HMLockObject(Window);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v38) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 820LL) & 0x100000) != 0
      || ((a2 & 0x200) == 0
        ? (!(unsigned int)IsTopLevelWindow(a5)
         ? (v39 = IsChildWindowDpiMessageEnabledX(a5))
         : (v39 = IsWindowBroadcastingDpiToChildrenX(a5)))
        : (v39 = IsNonClientDpiScalingEnabledX(a5)),
          v39) )
    {
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
  else if ( (*(_DWORD *)((**a1)[5] + 40) & 0x40000000) == 0 )
  {
    xxxInheritWindowMonitor((struct tagWND *)Window, (__int64 *)a5, 0);
  }
  v40 = 0LL;
  if ( (*(_DWORD *)((**a1)[5] + 40) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked((struct tagWND *)Window, 1)
    && !(unsigned int)IsWindowShellCloaked((struct tagWND *)a5, 0) )
  {
    zzzSetWindowCompositionCloak(Window, 0LL, 0);
  }
  if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
    SetOrClrWF(1, Window, 0xA40u, 1);
  SetOrClrWF(0, Window, 0x408u, 1);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v82, *(_QWORD *)(v36 + 8));
  if ( !*(_QWORD *)v82[0] )
    goto LABEL_65;
  v96[1] = a5;
  v96[0] = *(_QWORD *)v82[0] + 8LL;
  HMAssignmentLock(v96);
  LockPopupMenu((__int64)v82, (__int64 *)(*(_QWORD *)v82[0] + 40LL), (__int64)a1);
  v97[1] = Window;
  v97[0] = *(_QWORD *)v82[0] + 56LL;
  HMAssignmentLock(v97);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v89, 0LL);
  MNMarkDelayedFreePopup((_QWORD **)v82, v89);
  v87 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (!(unsigned __int8)KeIsAttachedProcess(v45)
     || (CurrentProcess = PsGetCurrentProcess(v47, v46, v48),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v51),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (v53 = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL )
  {
    v54 = *v53;
  }
  else
  {
    v54 = (__int64)v87;
  }
  if ( v89[0] != gSmartObjNullRef && !--*(_DWORD *)(v89[0] + 8) )
  {
    if ( *(_BYTE *)(v89[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v89[0]);
  }
  v55 = *(_QWORD **)(v54 + 1472);
  if ( v55 )
    *(_QWORD *)(v54 + 1472) = *v55;
  *(_QWORD *)(*(_QWORD *)v82[0] + 64LL) = *(_QWORD *)v82[0];
  **(_DWORD **)v82[0] |= 8u;
  v56 = *(unsigned int **)v82[0];
  v57 = (v85 << 9) | **(_DWORD **)v82[0] & 0xFFFFFDFF;
  v58 = v83 != 0;
  v83 = -v83;
  *v56 = v57;
  v59 = (MenuHelpers *)(**(_DWORD **)v82[0] & 0xFFFFFFBF | (v58 ? 0x40 : 0));
  **(_DWORD **)v82[0] = (_DWORD)v59;
  if ( MenuHelpers::GetMenuRightAlignHint(v59) || (*(_DWORD *)((**a1)[5] + 40) & 0x20) != 0 )
    **(_DWORD **)v82[0] |= 0x10u;
  **(_DWORD **)v82[0] ^= (**(_DWORD **)v82[0] ^ (16 * a2)) & 0x800;
  LODWORD(CurrentThread) = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    **(_DWORD **)v82[0] |= 0x100u;
  **(_DWORD **)v82[0] ^= (**(_DWORD **)v82[0] ^ (a2 >> 7)) & 4;
  v60 = MNAllocMenuState((_QWORD **)v82);
  v87 = v60;
  v61 = (__int64)v60;
  if ( !v60 )
  {
LABEL_65:
    a2 |= 0x80u;
LABEL_66:
    xxxWindowEvent(5u, (struct tagWND *)a5, 0, 0, 0);
    v41 = (__int64)v87;
    xxxMNReleaseCapture((__int64)v87);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage(a5, 0x212u, ((unsigned __int64)~a2 >> 9) & 1, 0LL);
    v43 = 1;
    v44 = 0;
    goto LABEL_151;
  }
  if ( gptiCurrent == *((_QWORD *)v60 + 4) )
  {
    ++*((_DWORD *)v60 + 10);
    v40 = (struct tagMENUSTATE *)v60;
  }
  if ( (**(_DWORD **)v82[0] & 0x800) == 0 )
    xxxSendMessage(a5, 0x211u, ((unsigned __int64)(unsigned int)~**(_DWORD **)v82[0] >> 2) & 1, 0LL);
  if ( !xxxMNStartMenu(v82, v61, -1) )
    goto LABEL_66;
  if ( (*(_DWORD *)(v61 + 8) & 0x400) != 0 )
  {
    v91 = *(_QWORD *)Window;
    xxxUserModeCallback(0x64u, (__int64)&v91, 8u, v62);
  }
  if ( (**(_DWORD **)v82[0] & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v82[0] + 8LL) )
  {
    v63 = *(_QWORD *)(*(_QWORD *)v82[0] + 8LL);
    v64 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v94 = *(_QWORD *)(v64 + 416);
    *(_QWORD *)(v64 + 416) = &v94;
    *((_QWORD *)&v94 + 1) = v63;
    HMLockObject(v63);
    v65 = (unsigned __int64 *)a1[2];
    if ( !v65 )
      v65 = **a1;
    xxxSendMessage(
      *(_QWORD *)(*(_QWORD *)v82[0] + 8LL),
      0x117u,
      *v65,
      (**(_DWORD **)v82[0] & 4) != 0 ? (struct _LARGE_STRING *)0x10000 : 0);
    ThreadUnlock1(v66);
    v61 = (__int64)v87;
    **(_DWORD **)v82[0] |= 0x200000u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(Window + 40) + 232LL) & 0x20000000) != 0 )
  {
    v67 = 0;
    if ( *(_DWORD *)((**a1)[5] + 44) )
    {
      while ( (**(_DWORD **)(96LL * v67 + (**a1)[11]) & 0x100) == 0
           && *(_QWORD *)(*(_QWORD *)((**a1)[11] + 96LL * v67) + 96LL) != -1LL )
      {
        if ( (unsigned int)++v67 >= *(_DWORD *)((**a1)[5] + 44) )
          goto LABEL_105;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
LABEL_105:
  v68 = *(_QWORD *)(Window + 40);
  v69 = *(_DWORD *)(v68 + 288) & 0xF;
  if ( v69 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v68 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v68 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
  }
  else if ( !v69
         && (v71 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v71 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 424LL) + 284LL);
  }
  if ( WindowDpiLastNotify != *((_WORD *)**a1 + 38) )
  {
    *((_WORD *)**a1 + 38) = WindowDpiLastNotify;
    v72 = (unsigned __int64 *)a1[2];
    if ( !v72 )
      v72 = **a1;
    MNClearCachedPopupSizes(v72);
  }
  *(_QWORD *)v84 = xxxSendMessage(Window, 0x1E2u, 1uLL, 0LL);
  if ( !v84[0] )
    goto LABEL_66;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 4 )
  {
    *(_DWORD *)(v61 + 8) |= 0x20u;
    *(_DWORD *)((**a1)[5] + 40) |= 4u;
  }
  else
  {
    *(_DWORD *)((**a1)[5] + 40) &= ~4u;
  }
  v73 = HIWORD(v84[0]);
  v84[0] = LOWORD(v84[0]) + 6;
  v83 = v73 + 6;
  v88 = __PAIR64__(a4, a3);
  v74 = __PAIR64__(a4, a3);
  v75 = MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0);
  v76 = *(_QWORD *)(a5 + 40);
  v77 = (struct tagMONITOR *)v75;
  v88 = v75;
  v78 = a2 ^ 8;
  if ( (((a2 & 4) == 0) & (*(_BYTE *)(v76 + 26) >> 6)) == 0 )
    v78 = a2;
  if ( (v78 & 8) != 0 )
  {
    a3 -= v84[0];
    **(_DWORD **)v82[0] = **(_DWORD **)v82[0] & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v78 & 4) != 0 )
  {
    a3 -= (unsigned int)v84[0] >> 1;
  }
  else
  {
    **(_DWORD **)v82[0] = **(_DWORD **)v82[0] & 0xF07FFFFF | ((((**(_DWORD **)v82[0] & 0x10) != 0) + 1) << 23);
  }
  v79 = v83;
  if ( (v78 & 0x20) != 0 )
  {
    a4 -= v83;
    **(_DWORD **)v82[0] |= 0x4000000u;
  }
  else if ( (v78 & 0x10) != 0 )
  {
    a4 -= (unsigned int)v83 >> 1;
  }
  else
  {
    **(_DWORD **)v82[0] |= 0x2000000u;
  }
  if ( (v78 & 0x3C00) != 0 )
    **(_DWORD **)v82[0] = **(_DWORD **)v82[0] & 0xF07FFFFF | ((v78 & 0x3C00) << 13);
  v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v82[0] + 16LL) + 40LL);
  if ( a6 )
  {
    if ( *(_DWORD *)(v80 + 236) != 1 )
      goto LABEL_143;
LABEL_142:
    **(_DWORD **)v82[0] |= 0x80000000;
    goto LABEL_143;
  }
  if ( *(_DWORD *)(v80 + 236) == 1 )
  {
    v100 = *GetMonitorRectForWindow(&v101, v75, (const struct tagWND *)Window);
    v99 = *(_OWORD *)GetMonitorMenuRectForWindow(v102, v88, Window);
    SubtractRect((__int64)v90, (int *)&v100, (int *)&v99);
    v77 = (struct tagMONITOR *)v88;
    goto LABEL_142;
  }
  *(_OWORD *)v90 = 0LL;
  **(_DWORD **)v82[0] &= ~0x80000000;
LABEL_143:
  BestPos = FindBestPos(a3, a4, v84[0], v79, (struct tagRECT *)v90, v78, (unsigned int ***)v82, v77, v74);
  if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 && (**(_DWORD **)v82[0] & 0x1800000) != 0 )
    **(_DWORD **)v82[0] ^= 0x1800000u;
  if ( (**(_DWORD **)v82[0] & 0xF800000) != 0 && (v78 & 0x4000) == 0 )
    **(_DWORD **)v82[0] |= 0x8000000u;
  xxxPlayEventSound(5LL);
  v41 = (__int64)v87;
  xxxSetWindowPos(
    (struct tagWND *)Window,
    (((_DWORD)v87[2] & 0x100) != 0) - 1LL,
    (unsigned int)(__int16)BestPos,
    (unsigned int)SHIWORD(BestPos),
    0,
    0,
    ~(unsigned __int8)(*((_DWORD *)v87 + 2) >> 4) & 0x10 | 0x241);
  xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
  *(_DWORD *)(v41 + 8) = *(_DWORD *)(v41 + 8) & 0xFFFFFFF7 | (8 * v85);
  v44 = xxxMNLoop((__int64 **)v82, v41, 0LL, 0);
  if ( (*(_DWORD *)(v41 + 8) & 0x100) == 0 )
  {
    v43 = (int)CurrentThread;
LABEL_151:
    if ( ThreadUnlock1(v42) && *(char *)(*(_QWORD *)(Window + 40) + 19LL) >= 0 )
      xxxDestroyWindow(Window);
    if ( v41 )
      xxxMNEndMenuState(v41);
    xxxDeliverRestoreFocusMessage((struct tagWND *)a5);
    goto LABEL_157;
  }
  ThreadUnlock1(v42);
  v43 = (int)CurrentThread;
LABEL_157:
  if ( v43 )
    v12 = v44;
  if ( v40 )
    xxxUnlockMenuStateInternal(v40, 0);
LABEL_8:
  v13 = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v11)
    || (v18 = PsGetCurrentProcess(v16, v15, v17),
        v19 = PsGetProcessSessionIdEx(v18),
        v21 = PsGetCurrentThreadProcess(v20),
        v19 == (unsigned int)PsGetProcessSessionIdEx(v21)) )
  {
    v22 = (__int64 *)PsGetThreadWin32Thread(v13);
    if ( v22 )
      v14 = *v22;
  }
  if ( v82[0] != gSmartObjNullRef && !--*(_DWORD *)(v82[0] + 8) )
  {
    if ( *(_BYTE *)(v82[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v82[0]);
  }
  v23 = *(_QWORD **)(v14 + 1472);
  if ( v23 )
    *(_QWORD *)(v14 + 1472) = *v23;
  return v12;
}
