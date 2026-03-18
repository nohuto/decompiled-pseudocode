/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C023279C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01DEE90 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C0229F4C (xxxDoScrollMenu.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0041E8C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C008E464 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1C00A770C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     xxxPlayEventSound @ 0x1C00A7E50 (xxxPlayEventSound.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00A9F90 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00AE308 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C00C8060 (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     GetMonitorRectForWindow @ 0x1C00CF9A8 (GetMonitorRectForWindow.c)
 *     ?IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C00CFE9C (-IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     _MonitorFromPoint @ 0x1C00D03B0 (_MonitorFromPoint.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     GetWindowDpiLastNotify @ 0x1C00F0740 (GetWindowDpiLastNotify.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C013A398 (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01FF08C (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C01FF0D0 (MNAllocMenuState.c)
 *     MNMarkDelayedFreePopup @ 0x1C01FF594 (MNMarkDelayedFreePopup.c)
 *     xxxMNEndMenuState @ 0x1C01FF9F0 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C01FFC8C (xxxMNStartMenu.c)
 *     xxxUserModeCallback @ 0x1C02139E4 (xxxUserModeCallback.c)
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C02167B8 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C0219A20 (xxxMNReleaseCapture.c)
 *     ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C021F6CC (-IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C0227CAC (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     FindBestPos @ 0x1C02322C4 (FindBestPos.c)
 *     MNAnimate @ 0x1C0234404 (MNAnimate.c)
 *     MNClearCachedPopupSizes @ 0x1C0238548 (MNClearCachedPopupSizes.c)
 *     SubtractRect @ 0x1C024B870 (SubtractRect.c)
 *     GetMonitorMenuRectForWindow @ 0x1C024BCB8 (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(_QWORD **a1, unsigned int a2, LONG a3, LONG a4, ULONG_PTR a5, __int64 a6)
{
  unsigned int v8; // esi
  int v9; // ecx
  __int64 v11; // rbx
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // ebx
  void *v26; // rdi
  _QWORD *v27; // rax
  __int64 Window; // r15
  __int64 v29; // rcx
  char v30; // al
  struct tagWND *v31; // rcx
  _QWORD **v32; // rbx
  struct tagMENUSTATE *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r12d
  unsigned int *v39; // rdx
  unsigned int v40; // ecx
  bool v41; // cf
  MenuHelpers *v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // edx
  __int64 v50; // rax
  int v51; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v53; // rax
  _QWORD *v54; // rcx
  unsigned __int64 v55; // rbx
  struct tagMONITOR *v56; // r10
  unsigned int v57; // r9d
  int v58; // r12d
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  int BestPos; // r12d
  __int64 v64[2]; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v65; // [rsp+A0h] [rbp-70h]
  unsigned int v66; // [rsp+A4h] [rbp-6Ch]
  signed __int32 v67; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-60h]
  int v69; // [rsp+B8h] [rbp-58h]
  __int64 v70; // [rsp+C0h] [rbp-50h]
  __int128 v71; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v72[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v73[2]; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v74; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v75[3]; // [rsp+110h] [rbp+0h] BYREF
  __int128 v76; // [rsp+128h] [rbp+18h] BYREF
  __int64 v77; // [rsp+138h] [rbp+28h]
  __int128 v78; // [rsp+140h] [rbp+30h] BYREF
  __int64 v79; // [rsp+150h] [rbp+40h]
  _BYTE v80[16]; // [rsp+158h] [rbp+48h] BYREF
  struct tagRECT v81; // [rsp+168h] [rbp+58h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v64, 0LL);
  v8 = 0;
  v77 = 0LL;
  v79 = 0LL;
  v70 = 0LL;
  LODWORD(v68) = 0;
  v65 = 0;
  v72[0] = 0LL;
  v76 = 0LL;
  v78 = 0LL;
  *(_OWORD *)v73 = 0LL;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
    {
LABEL_5:
      v9 = 87;
LABEL_6:
      UserSetLastError(v9);
LABEL_7:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v64);
      return 0LL;
    }
    *(_OWORD *)v73 = *(_OWORD *)(a6 + 4);
  }
  *(_QWORD *)&v71 = gptiCurrent;
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
    goto LABEL_5;
  v11 = *(_QWORD *)(gptiCurrent + 608LL);
  v12 = 1;
  if ( v11 )
  {
    if ( (a2 & 1) == 0 )
    {
      v9 = 1446;
      goto LABEL_6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v64, *(_QWORD *)v11);
    v13 = *(_QWORD *)(*(_QWORD *)v64[0] + 8LL);
    if ( (*(_DWORD *)(v11 + 8) & 4) == 0
      || (**(_DWORD **)v64[0] & 0x8000) != 0
      || !v13
      || v13 != a5
      || *(_QWORD *)(v11 + 32) != *(_QWORD *)(v13 + 16) )
    {
      goto LABEL_7;
    }
    MNAnimate(v11, 0LL);
    v14 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v64[0] + 56LL));
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 8);
    else
      v15 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v64, v15);
    if ( *(_QWORD *)v64[0] && (**(_DWORD **)v64[0] & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v64[0] + 16LL), 65534LL, 0, 1, 0LL);
      **(_DWORD **)v64[0] &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v11 + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x100000u;
  }
  v67 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v69 = (unsigned __int16)_GetKeyState(2LL) >> 15;
  else
    v69 = (unsigned __int16)_GetKeyState(1LL) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v16) & 0xF) == 2
    || (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) == 3 )
  {
    v68 = __PAIR64__(a4, a3);
    v18 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0) + 40);
    LODWORD(v68) = *(_DWORD *)(v18 + 28);
    v65 = *(_DWORD *)(v18 + 32);
  }
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v18);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_35;
  v21 = PsGetCurrentProcessWin32Process(v20);
  v22 = v21;
  if ( v21 )
    v22 = -(__int64)(*(_QWORD *)v21 != 0LL) & v21;
  v23 = IsImmersiveAppRestricted(v22);
  v66 = 1;
  if ( !v23 )
LABEL_35:
    v66 = 0;
  v24 = *(_QWORD *)(a5 + 40);
  v25 = *(_DWORD *)(v24 + 236);
  v26 = *(void **)(v24 + 32);
  SmartObjStackRefBase<tagMENU>::Init(v75, 0LL);
  v27 = *a1;
  v75[2] = 0LL;
  Window = xxxCreateWindowEx(
             385,
             0x8000LL,
             0x8000LL,
             0LL,
             0x80800000,
             v68,
             v65,
             0x64u,
             0x64u,
             (struct tagWND *)(a5 & -(__int64)((*(_DWORD *)(*(_QWORD *)(*v27 + 40LL) + 40LL) & 0x40000000) != 0)),
             (__int64)v75,
             v26,
             0LL,
             v25,
             0xA00u,
             v66,
             0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v75);
  if ( !Window )
    goto LABEL_7;
  v68 = safe_cast_fnid_to_PMENUWND(Window);
  if ( v68 )
  {
    ThreadLockAlways(Window, &v76);
    if ( (W32GetCurrentThreadDpiAwarenessContext(v29) & 0xF) == 2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v71 + 424) + 816LL) & 0x100000) != 0
        || ((a2 & 0x200) == 0
          ? (!IsTopLevelWindow(a5)
           ? (v30 = IsChildWindowDpiMessageEnabledX(v31))
           : (v30 = IsWindowBroadcastingDpiToChildrenX(v31)))
          : (v30 = IsNonClientDpiScalingEnabledX((struct tagWND *)a5)),
            v30) )
      {
        xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
      }
      v32 = a1;
    }
    else
    {
      v32 = a1;
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x40000000) == 0 )
        xxxInheritWindowMonitor((struct tagWND *)Window, (__int64 *)a5, 0);
    }
    v33 = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)(**v32 + 40LL) + 40LL) & 0x40000000) == 0
      && (unsigned int)IsWindowShellCloaked((struct tagWND *const)Window, 1)
      && !(unsigned int)IsWindowShellCloaked((struct tagWND *const)a5, 0) )
    {
      zzzSetWindowCompositionCloak((struct tagWND *)Window, 0LL, 0);
    }
    if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
      SetOrClrWF(1, (struct tagWND *)Window, 0xA40u, 1);
    SetOrClrWF(0, (struct tagWND *)Window, 0x408u, 1);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v64, *(_QWORD *)(v68 + 8));
    if ( !*(_QWORD *)v64[0] )
      goto LABEL_56;
    *((_QWORD *)&v71 + 1) = a5;
    *(_QWORD *)&v71 = *(_QWORD *)v64[0] + 8LL;
    HMAssignmentLock(&v71, 0LL);
    LockPopupMenu((__int64)v64, (__int64 *)(*(_QWORD *)v64[0] + 40LL), (__int64)v32);
    v72[1] = Window;
    v72[0] = *(_QWORD *)v64[0] + 56LL;
    HMAssignmentLock(v72, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&v74, 0LL);
    MNMarkDelayedFreePopup((_QWORD **)v64, (__int64 *)&v74);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v74);
    *(_QWORD *)(*(_QWORD *)v64[0] + 64LL) = *(_QWORD *)v64[0];
    **(_DWORD **)v64[0] |= 8u;
    v39 = *(unsigned int **)v64[0];
    v40 = (v69 << 9) | **(_DWORD **)v64[0] & 0xFFFFFDFF;
    v41 = v67 != 0;
    v67 = -v67;
    *v39 = v40;
    v42 = (MenuHelpers *)(**(_DWORD **)v64[0] & 0xFFFFFFBF | (v41 ? 0x40 : 0));
    **(_DWORD **)v64[0] = (_DWORD)v42;
    if ( MenuHelpers::GetMenuRightAlignHint(v42) || (*(_DWORD *)(*(_QWORD *)(**v32 + 40LL) + 40LL) & 0x20) != 0 )
      **(_DWORD **)v64[0] |= 0x10u;
    **(_DWORD **)v64[0] ^= (**(_DWORD **)v64[0] ^ (16 * a2)) & 0x800;
    LODWORD(v68) = a2 & 0x100;
    if ( (a2 & 0x100) != 0 )
      **(_DWORD **)v64[0] |= 0x100u;
    **(_DWORD **)v64[0] ^= (**(_DWORD **)v64[0] ^ (a2 >> 7)) & 4;
    v43 = MNAllocMenuState((_QWORD **)v64);
    v72[0] = (__int64)v43;
    v44 = (__int64)v43;
    if ( v43 )
    {
      if ( gptiCurrent == v43[4] )
      {
        ++*((_DWORD *)v43 + 10);
        v33 = (struct tagMENUSTATE *)v43;
      }
      if ( (**(_DWORD **)v64[0] & 0x800) == 0 )
      {
        xxxSendMessage(a5);
        v44 = v72[0];
      }
      if ( xxxMNStartMenu(v64, v44, -1) )
      {
        if ( (*(_DWORD *)(v72[0] + 8) & 0x400) != 0 )
        {
          *(_QWORD *)&v71 = *(_QWORD *)Window;
          xxxUserModeCallback(100LL, (__int64)&v71, 8LL, v45);
        }
        if ( (**(_DWORD **)v64[0] & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v64[0] + 8LL) )
        {
          ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL), &v78);
          xxxSendMessage(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL));
          ThreadUnlock1(v47, v46, v48);
          **(_DWORD **)v64[0] |= 0x200000u;
        }
        if ( (*(_DWORD *)(Window + 320) & 0x100000) != 0 )
        {
          v49 = 0;
          if ( *(_DWORD *)(*(_QWORD *)(**v32 + 40LL) + 44LL) )
          {
            while ( (**(_DWORD **)(96LL * v49 + *(_QWORD *)(**v32 + 88LL)) & 0x100) == 0
                 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**v32 + 88LL) + 96LL * v49) + 96LL) != -1LL )
            {
              if ( (unsigned int)++v49 >= *(_DWORD *)(*(_QWORD *)(**v32 + 40LL) + 44LL) )
                goto LABEL_97;
            }
            xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
          }
        }
LABEL_97:
        v50 = *(_QWORD *)(Window + 40);
        v51 = *(_DWORD *)(v50 + 288) & 0xF;
        if ( v51 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v50 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v50 + 232) & 0x400) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
        }
        else if ( !v51
               && (v53 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v53 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 424LL) + 284LL);
        }
        if ( WindowDpiLastNotify != *(_WORD *)(**v32 + 76LL) )
        {
          *(_WORD *)(**v32 + 76LL) = WindowDpiLastNotify;
          v54 = v32[2];
          if ( !v54 )
            v54 = (_QWORD *)**v32;
          MNClearCachedPopupSizes(v54);
        }
        *(_QWORD *)&v71 = xxxSendMessage(Window);
        if ( (_DWORD)v71 )
        {
          if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
            || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 4 )
          {
            *(_DWORD *)(v72[0] + 8) |= 0x20u;
            *(_DWORD *)(*(_QWORD *)(**v32 + 40LL) + 40LL) |= 4u;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(**v32 + 40LL) + 40LL) &= ~4u;
          }
          v66 = (unsigned __int16)v71 + 6;
          v65 = WORD1(v71) + 6;
          v70 = __PAIR64__(a4, a3);
          v55 = __PAIR64__(a4, a3);
          v56 = (struct tagMONITOR *)MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0);
          v70 = (__int64)v56;
          v57 = a2 ^ 8;
          if ( (((a2 & 4) == 0) & (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
            v57 = a2;
          v67 = v57;
          if ( (v57 & 8) != 0 )
          {
            a3 -= v66;
            **(_DWORD **)v64[0] = **(_DWORD **)v64[0] & 0xF07FFFFF | 0x1000000;
          }
          else if ( (v57 & 4) != 0 )
          {
            a3 -= v66 >> 1;
          }
          else
          {
            **(_DWORD **)v64[0] = **(_DWORD **)v64[0] & 0xF07FFFFF | ((((**(_DWORD **)v64[0] & 0x10) != 0) + 1) << 23);
          }
          v58 = v65;
          if ( (v57 & 0x20) != 0 )
          {
            a4 -= v65;
            **(_DWORD **)v64[0] |= 0x4000000u;
          }
          else if ( (v57 & 0x10) != 0 )
          {
            a4 -= v65 >> 1;
          }
          else
          {
            **(_DWORD **)v64[0] |= 0x2000000u;
          }
          if ( (v57 & 0x3C00) != 0 )
            **(_DWORD **)v64[0] = **(_DWORD **)v64[0] & 0xF07FFFFF | ((v57 & 0x3C00) << 13);
          v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 16LL) + 40LL);
          if ( a6 )
          {
            if ( *(_DWORD *)(v59 + 236) != 1 )
              goto LABEL_135;
          }
          else
          {
            if ( *(_DWORD *)(v59 + 236) != 1 )
            {
              *(_OWORD *)v73 = 0LL;
              **(_DWORD **)v64[0] &= ~0x80000000;
LABEL_135:
              BestPos = FindBestPos(a3, a4, v66, v58, (struct tagRECT *)v73, v57, (unsigned int ***)v64, v56, v55);
              if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 )
              {
                v60 = 25165824LL;
                if ( (**(_DWORD **)v64[0] & 0x1800000) != 0 )
                  **(_DWORD **)v64[0] ^= 0x1800000u;
              }
              if ( (((**(_DWORD **)v64[0] & 0xF800000) != 0) & !_bittest(&v67, 0xEu)) != 0 )
                **(_DWORD **)v64[0] |= 0x8000000u;
              xxxPlayEventSound(5LL, v60, v61, v62);
              v34 = v72[0];
              xxxSetWindowPos(
                (struct tagWND *)Window,
                ((*(_DWORD *)(v72[0] + 8) & 0x100) != 0) - 1LL,
                (unsigned int)(__int16)BestPos,
                (unsigned int)SHIWORD(BestPos),
                0,
                0,
                ~(unsigned __int8)(*(_DWORD *)(v72[0] + 8) >> 4) & 0x10 | 0x241);
              xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
              *(_DWORD *)(v34 + 8) = (8 * v69) | *(_DWORD *)(v34 + 8) & 0xFFFFFFF7;
              v38 = xxxMNLoop((__int64 **)v64, v34, 0LL, 0);
              if ( (*(_DWORD *)(v34 + 8) & 0x100) != 0 )
              {
                ThreadUnlock1(v36, v35, v37);
LABEL_66:
                if ( (_DWORD)v68 )
                  v12 = v38;
                if ( v33 )
                  xxxUnlockMenuStateInternal(v33, 0);
                v8 = v12;
                goto LABEL_71;
              }
LABEL_60:
              if ( ThreadUnlock1(v36, v35, v37) && *(char *)(*(_QWORD *)(Window + 40) + 19LL) >= 0 )
                xxxDestroyWindow((__int64 *)Window);
              if ( v34 )
                xxxMNEndMenuState(v34);
              xxxDeliverRestoreFocusMessage((struct tagWND *)a5);
              goto LABEL_66;
            }
            v71 = *(_OWORD *)GetMonitorRectForWindow((__int64)v80, (__int64)v56, (const struct tagWND *)Window);
            v74 = *(_OWORD *)GetMonitorMenuRectForWindow(&v81);
            SubtractRect(v73, &v71, &v74);
            v57 = v67;
            v56 = (struct tagMONITOR *)v70;
          }
          **(_DWORD **)v64[0] |= 0x80000000;
          goto LABEL_135;
        }
      }
    }
    else
    {
LABEL_56:
      LOBYTE(a2) = a2 | 0x80;
    }
    xxxWindowEvent(5u, (struct tagWND *)a5, 0, 0, 0);
    v34 = v72[0];
    xxxMNReleaseCapture(v72[0]);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage(a5);
    LODWORD(v68) = 1;
    v38 = 0;
    goto LABEL_60;
  }
  xxxDestroyWindow((__int64 *)Window);
LABEL_71:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v64);
  return v8;
}
