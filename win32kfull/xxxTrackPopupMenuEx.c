__int64 __fastcall xxxTrackPopupMenuEx(_QWORD **a1, unsigned int a2, LONG a3, LONG a4, __int64 a5, __int64 a6)
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
  int v25; // ebx
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
  int BestPos; // r12d
  __int64 v61[2]; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int32 v62; // [rsp+A0h] [rbp-70h]
  unsigned int v63; // [rsp+A4h] [rbp-6Ch]
  signed __int32 v64; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-60h]
  int v66; // [rsp+B8h] [rbp-58h]
  __int64 v67; // [rsp+C0h] [rbp-50h]
  __int128 v68; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v69[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v70[2]; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v71; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v72[3]; // [rsp+110h] [rbp+0h] BYREF
  __int128 v73; // [rsp+128h] [rbp+18h] BYREF
  __int64 v74; // [rsp+138h] [rbp+28h]
  __int128 v75; // [rsp+140h] [rbp+30h] BYREF
  __int64 v76; // [rsp+150h] [rbp+40h]
  __int64 v77; // [rsp+158h] [rbp+48h] BYREF
  struct tagRECT v78; // [rsp+168h] [rbp+58h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v61, 0LL);
  v8 = 0;
  v74 = 0LL;
  v76 = 0LL;
  v67 = 0LL;
  LODWORD(v65) = 0;
  v62 = 0;
  v69[0] = 0LL;
  v73 = 0LL;
  v75 = 0LL;
  *(_OWORD *)v70 = 0LL;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
    {
LABEL_5:
      v9 = 87;
LABEL_6:
      UserSetLastError(v9);
LABEL_7:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v61);
      return 0LL;
    }
    *(_OWORD *)v70 = *(_OWORD *)(a6 + 4);
  }
  *(_QWORD *)&v68 = gptiCurrent;
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
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v61, *(_QWORD *)v11);
    v13 = *(_QWORD *)(*(_QWORD *)v61[0] + 8LL);
    if ( (*(_DWORD *)(v11 + 8) & 4) == 0
      || (**(_DWORD **)v61[0] & 0x8000) != 0
      || !v13
      || v13 != a5
      || *(_QWORD *)(v11 + 32) != *(_QWORD *)(v13 + 16) )
    {
      goto LABEL_7;
    }
    MNAnimate(v11, 0LL);
    v14 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v61[0] + 56LL));
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 8);
    else
      v15 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v61, v15);
    if ( *(_QWORD *)v61[0] && (**(_DWORD **)v61[0] & 0x2000) != 0 )
    {
      FindTimer(*(void **)(*(_QWORD *)v61[0] + 16LL), (void *)0xFFFE, 0, 1, 0LL);
      **(_DWORD **)v61[0] &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v11 + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x100000u;
  }
  v64 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v66 = (unsigned __int16)_GetKeyState(2LL) >> 15;
  else
    v66 = (unsigned __int16)_GetKeyState(1LL) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v16) & 0xF) == 2
    || (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) == 3 )
  {
    v65 = __PAIR64__(a4, a3);
    v18 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0) + 40);
    LODWORD(v65) = *(_DWORD *)(v18 + 28);
    v62 = *(_DWORD *)(v18 + 32);
  }
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v18);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_35;
  v21 = PsGetCurrentProcessWin32Process(v20);
  v22 = v21;
  if ( v21 )
    v22 = -(__int64)(*(_QWORD *)v21 != 0LL) & v21;
  v23 = IsImmersiveAppRestricted(v22);
  v63 = 1;
  if ( !v23 )
LABEL_35:
    v63 = 0;
  v24 = *(_QWORD *)(a5 + 40);
  v25 = *(_DWORD *)(v24 + 236);
  v26 = *(void **)(v24 + 32);
  SmartObjStackRefBase<tagMENU>::Init(v72, 0LL);
  v27 = *a1;
  v72[2] = 0LL;
  Window = xxxCreateWindowEx(
             385,
             0x8000LL,
             0x8000LL,
             0LL,
             0x80800000,
             v65,
             v62,
             100,
             100,
             (struct tagWND *)(a5 & -(__int64)((*(_DWORD *)(*(_QWORD *)(*v27 + 40LL) + 40LL) & 0x40000000) != 0)),
             (__int64)v72,
             v26,
             0LL,
             v25,
             0xA00u,
             v63,
             0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v72);
  if ( !Window )
    goto LABEL_7;
  v65 = safe_cast_fnid_to_PMENUWND(Window);
  if ( v65 )
  {
    ThreadLockAlways(Window, &v73);
    if ( (W32GetCurrentThreadDpiAwarenessContext(v29) & 0xF) == 2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v68 + 424) + 812LL) & 0x100000) != 0
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
        xxxInheritWindowMonitor((struct tagWND *)Window, (struct tagWND *)a5, 0);
    }
    v33 = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)(**v32 + 40LL) + 40LL) & 0x40000000) == 0
      && (unsigned int)IsWindowShellCloaked((struct tagWND *const)Window, 1)
      && !(unsigned int)IsWindowShellCloaked((struct tagWND *const)a5, 0) )
    {
      zzzSetWindowCompositionCloak((struct tagWND *)Window, 0LL, 0);
    }
    if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
      SetOrClrWF(1, (__int64 *)Window, 0xA40u, 1);
    SetOrClrWF(0, (__int64 *)Window, 0x408u, 1);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v61, *(_QWORD *)(v65 + 8));
    if ( !*(_QWORD *)v61[0] )
      goto LABEL_56;
    *((_QWORD *)&v68 + 1) = a5;
    *(_QWORD *)&v68 = *(_QWORD *)v61[0] + 8LL;
    HMAssignmentLock(&v68, 0LL);
    LockPopupMenu((__int64)v61, (__int64 *)(*(_QWORD *)v61[0] + 40LL), (__int64)v32);
    v69[1] = Window;
    v69[0] = *(_QWORD *)v61[0] + 56LL;
    HMAssignmentLock(v69, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&v71, 0LL);
    MNMarkDelayedFreePopup((_QWORD **)v61, (__int64 *)&v71);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v71);
    *(_QWORD *)(*(_QWORD *)v61[0] + 64LL) = *(_QWORD *)v61[0];
    **(_DWORD **)v61[0] |= 8u;
    v39 = *(unsigned int **)v61[0];
    v40 = (v66 << 9) | **(_DWORD **)v61[0] & 0xFFFFFDFF;
    v41 = v64 != 0;
    v64 = -v64;
    *v39 = v40;
    v42 = (MenuHelpers *)(**(_DWORD **)v61[0] & 0xFFFFFFBF | (v41 ? 0x40 : 0));
    **(_DWORD **)v61[0] = (_DWORD)v42;
    if ( MenuHelpers::GetMenuRightAlignHint(v42) || (*(_DWORD *)(*(_QWORD *)(**v32 + 40LL) + 40LL) & 0x20) != 0 )
      **(_DWORD **)v61[0] |= 0x10u;
    **(_DWORD **)v61[0] ^= (**(_DWORD **)v61[0] ^ (16 * a2)) & 0x800;
    LODWORD(v65) = a2 & 0x100;
    if ( (a2 & 0x100) != 0 )
      **(_DWORD **)v61[0] |= 0x100u;
    **(_DWORD **)v61[0] ^= (**(_DWORD **)v61[0] ^ (a2 >> 7)) & 4;
    v43 = MNAllocMenuState((_QWORD **)v61);
    v69[0] = (__int64)v43;
    v44 = (__int64)v43;
    if ( v43 )
    {
      if ( gptiCurrent == v43[4] )
      {
        ++*((_DWORD *)v43 + 10);
        v33 = (struct tagMENUSTATE *)v43;
      }
      if ( (**(_DWORD **)v61[0] & 0x800) == 0 )
      {
        xxxSendMessage((struct tagWND *)a5, 0x211u);
        v44 = v69[0];
      }
      if ( xxxMNStartMenu(v61, v44, -1) )
      {
        if ( (*(_DWORD *)(v69[0] + 8) & 0x400) != 0 )
        {
          *(_QWORD *)&v68 = *(_QWORD *)Window;
          xxxUserModeCallback(100LL, (__int64)&v68, 8u, v45);
        }
        if ( (**(_DWORD **)v61[0] & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v61[0] + 8LL) )
        {
          ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL), &v75);
          xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v61[0] + 8LL), 0x117u);
          ThreadUnlock1(v47, v46, v48);
          **(_DWORD **)v61[0] |= 0x200000u;
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
        *(_QWORD *)&v68 = xxxSendMessage((struct tagWND *)Window, 0x1E2u);
        if ( (_DWORD)v68 )
        {
          if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
            || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 4 )
          {
            *(_DWORD *)(v69[0] + 8) |= 0x20u;
            *(_DWORD *)(*(_QWORD *)(**v32 + 40LL) + 40LL) |= 4u;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(**v32 + 40LL) + 40LL) &= ~4u;
          }
          v63 = (unsigned __int16)v68 + 6;
          v62 = WORD1(v68) + 6;
          v67 = __PAIR64__(a4, a3);
          v55 = __PAIR64__(a4, a3);
          v56 = (struct tagMONITOR *)MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0);
          v67 = (__int64)v56;
          v57 = a2 ^ 8;
          if ( (((a2 & 4) == 0) & (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
            v57 = a2;
          v64 = v57;
          if ( (v57 & 8) != 0 )
          {
            a3 -= v63;
            **(_DWORD **)v61[0] = **(_DWORD **)v61[0] & 0xF07FFFFF | 0x1000000;
          }
          else if ( (v57 & 4) != 0 )
          {
            a3 -= v63 >> 1;
          }
          else
          {
            **(_DWORD **)v61[0] = **(_DWORD **)v61[0] & 0xF07FFFFF | ((((**(_DWORD **)v61[0] & 0x10) != 0) + 1) << 23);
          }
          v58 = v62;
          if ( (v57 & 0x20) != 0 )
          {
            a4 -= v62;
            **(_DWORD **)v61[0] |= 0x4000000u;
          }
          else if ( (v57 & 0x10) != 0 )
          {
            a4 -= v62 >> 1;
          }
          else
          {
            **(_DWORD **)v61[0] |= 0x2000000u;
          }
          if ( (v57 & 0x3C00) != 0 )
            **(_DWORD **)v61[0] = **(_DWORD **)v61[0] & 0xF07FFFFF | ((v57 & 0x3C00) << 13);
          v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 16LL) + 40LL);
          if ( a6 )
          {
            if ( *(_DWORD *)(v59 + 236) != 1 )
              goto LABEL_135;
          }
          else
          {
            if ( *(_DWORD *)(v59 + 236) != 1 )
            {
              *(_OWORD *)v70 = 0LL;
              **(_DWORD **)v61[0] &= ~0x80000000;
LABEL_135:
              BestPos = FindBestPos(a3, a4, v63, v58, (struct tagRECT *)v70, v57, (unsigned int ***)v61, v56, v55);
              if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 && (**(_DWORD **)v61[0] & 0x1800000) != 0 )
                **(_DWORD **)v61[0] ^= 0x1800000u;
              if ( (((**(_DWORD **)v61[0] & 0xF800000) != 0) & !_bittest(&v64, 0xEu)) != 0 )
                **(_DWORD **)v61[0] |= 0x8000000u;
              xxxPlayEventSound(5LL);
              v34 = v69[0];
              xxxSetWindowPos(
                (struct tagWND *)Window,
                ((*(_DWORD *)(v69[0] + 8) & 0x100) != 0) - 1LL,
                (unsigned int)(__int16)BestPos,
                (unsigned int)SHIWORD(BestPos),
                0,
                0,
                ~(unsigned __int8)(*(_DWORD *)(v69[0] + 8) >> 4) & 0x10 | 0x241);
              xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
              *(_DWORD *)(v34 + 8) = (8 * v66) | *(_DWORD *)(v34 + 8) & 0xFFFFFFF7;
              v38 = xxxMNLoop((__int64 **)v61, v34, 0LL, 0);
              if ( (*(_DWORD *)(v34 + 8) & 0x100) != 0 )
              {
                ThreadUnlock1(v36, v35, v37);
LABEL_66:
                if ( (_DWORD)v65 )
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
            v68 = *(_OWORD *)GetMonitorRectForWindow(&v77, (__int64)v56, (const struct tagWND *)Window);
            v71 = *(_OWORD *)GetMonitorMenuRectForWindow(&v78);
            SubtractRect(v70, &v68, &v71);
            v57 = v64;
            v56 = (struct tagMONITOR *)v67;
          }
          **(_DWORD **)v61[0] |= 0x80000000;
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
    v34 = v69[0];
    xxxMNReleaseCapture(v69[0]);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage((struct tagWND *)a5, 0x212u);
    LODWORD(v65) = 1;
    v38 = 0;
    goto LABEL_60;
  }
  xxxDestroyWindow((__int64 *)Window);
LABEL_71:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v61);
  return v8;
}
