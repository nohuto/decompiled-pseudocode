/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C021B7B0
 * Callers:
 *     xxxMNButtonDown @ 0x1C02197A8 (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C02198AC (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0241E88 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C0099104 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C00A266C (MNGetpItemFromIndex.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C00A6FD0 (MNGetpItemIndex.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C00DE8D0 (xxxPlayEventSound.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00E0FE0 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     GetMonitorRectForWindow @ 0x1C00FF4DC (GetMonitorRectForWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0101FD4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C012D8B8 (safe_cast_fnid_to_PMENUWND.c)
 *     MNMarkDelayedFreePopup @ 0x1C0202124 (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C02165AC (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0218110 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0218C94 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     LockPopupMenu @ 0x1C0219378 (LockPopupMenu.c)
 *     MNIsUAHMenu @ 0x1C02194D8 (MNIsUAHMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C021A0D0 (xxxMNCloseHierarchy.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C022A9CC (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     MNClearCachedPopupSizes @ 0x1C023B1B0 (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C023B230 (MNRefreshUAHCachedSizes.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2)
{
  int v4; // r12d
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 *v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 **v15; // r14
  __int128 *v16; // rdx
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  void *v32; // rbx
  __int64 *v33; // rax
  __int64 *Window; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // rcx
  _DWORD *v42; // rdx
  char v43; // cl
  __int64 v44; // rcx
  struct tagWND *v45; // rbx
  int v46; // edx
  __int64 v47; // rax
  int v48; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // r9d
  int v55; // r15d
  int v56; // eax
  _DWORD *v57; // r9
  int v58; // edx
  int v59; // ecx
  __int64 *v60; // rax
  __int64 *v61; // rdx
  __int64 v62; // rdx
  int v63; // r8d
  LONG v64; // esi
  MenuHelpers *v65; // rcx
  LONG v66; // r14d
  unsigned int *v67; // rcx
  unsigned int v68; // eax
  __int64 *v69; // rax
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  _QWORD *v82[2]; // [rsp+90h] [rbp-80h] BYREF
  struct tagRECT v83; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-60h] BYREF
  int v85[2]; // [rsp+B8h] [rbp-58h] BYREF
  int v86; // [rsp+C0h] [rbp-50h]
  int v87; // [rsp+C4h] [rbp-4Ch]
  __int64 v88; // [rsp+C8h] [rbp-48h]
  int v89[4]; // [rsp+D0h] [rbp-40h] BYREF
  _QWORD v90[3]; // [rsp+E0h] [rbp-30h] BYREF
  __int128 v91; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v92; // [rsp+108h] [rbp-8h]
  __int64 v93[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v94[2]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v95[2]; // [rsp+130h] [rbp+20h] BYREF
  _QWORD v96[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v97[2]; // [rsp+150h] [rbp+40h] BYREF
  __int128 v98; // [rsp+160h] [rbp+50h]
  __int64 v99; // [rsp+170h] [rbp+60h]
  __int64 v100; // [rsp+178h] [rbp+68h]
  __int128 v101; // [rsp+1A0h] [rbp+90h]
  _QWORD v102[3]; // [rsp+1D0h] [rbp+C0h] BYREF
  _QWORD v103[3]; // [rsp+1E8h] [rbp+D8h] BYREF
  int **v104[2]; // [rsp+200h] [rbp+F0h] BYREF
  __int128 v105; // [rsp+210h] [rbp+100h] BYREF
  __int64 v106; // [rsp+220h] [rbp+110h]
  __int128 v107; // [rsp+228h] [rbp+118h] BYREF
  __int64 v108; // [rsp+238h] [rbp+128h]
  __int64 v109[8]; // [rsp+240h] [rbp+130h] BYREF
  LONG v110; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v111; // [rsp+2A0h] [rbp+190h] BYREF
  int v112; // [rsp+2A8h] [rbp+198h]

  v4 = 0;
  v5 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v82, 0LL);
  v110 = 0;
  v92 = 0LL;
  v108 = 0LL;
  v106 = 0LL;
  LODWORD(v6) = 0;
  v7 = *a1;
  LODWORD(v8) = 0;
  v91 = 0LL;
  v111 = 0;
  v107 = 0LL;
  v112 = 0;
  v105 = 0LL;
  v9 = *v7;
  v88 = 0LL;
  v84 = 0LL;
  if ( *(_DWORD *)(v9 + 80) != -1
    && *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
  {
    if ( (*(_DWORD *)**a1 & 0x20) == 0 )
      goto LABEL_6;
    if ( (*(_DWORD *)**a1 & 0x4000) != 0 )
    {
      xxxMNCloseHierarchy(**a1, a2);
LABEL_6:
      if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
      {
        FindTimer(*(void **)(**a1 + 16), (void *)0xFFFE, 0, 1, 0LL);
        *(_DWORD *)**a1 &= ~0x2000u;
      }
      v10 = MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(**a1 + 80));
      v11 = v10;
      if ( !v10 || !*(_QWORD *)(v10 + 16) )
        goto LABEL_108;
      if ( (*(_DWORD *)**a1 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v91);
        v88 = **(_QWORD **)(v11 + 16);
        xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x117u);
        ThreadUnlock1(v13, v12, v14);
        v4 = 0;
        v112 = 1;
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
      {
        v5 = -1LL;
        goto LABEL_105;
      }
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v15 = (__int128 **)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(int *)(**a1 + 80));
        v16 = *v15;
        if ( (*((_DWORD *)*v15 + 1) & 3) == 0 )
        {
          v17 = (__int64)v15[2];
          if ( v17 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v17 + 40) + 44LL) )
            {
              v18 = v16[1];
              v98 = *v16;
              v19 = v16[4];
              v100 = *((_QWORD *)&v18 + 1);
              v101 = v19;
              v99 = v17;
              ThreadLock(v17, &v105);
              v22 = **a1;
              if ( *(_QWORD *)(v22 + 8) )
              {
                ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v91);
                if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
                  || (v26 = *(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL), (*(_BYTE *)(v26 + 288) & 0xF) == 3) )
                {
                  v27 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL), v23, v24, v25);
                  v6 = *GetMonitorRectForWindow(v109, v27, *(const struct tagWND **)(**a1 + 16));
                  v8 = HIDWORD(v6);
                }
                CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v26);
                if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
                {
                  v30 = PsGetCurrentProcessWin32Process(v29);
                  v31 = v30;
                  if ( v30 )
                    v31 = -(__int64)(*(_QWORD *)v30 != 0LL) & v30;
                  if ( (unsigned int)IsImmersiveAppRestricted(v31) )
                    v4 = 1;
                }
                v32 = *(void **)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 32LL);
                SmartObjStackRefBase<tagMENU>::Init(v102, 0LL);
                v33 = *a1;
                v102[2] = 0LL;
                Window = (__int64 *)xxxCreateWindowEx(
                                      385,
                                      0x8000LL,
                                      0x8000LL,
                                      0LL,
                                      0x80800000,
                                      v6,
                                      v8,
                                      100,
                                      100,
                                      *(struct tagWND **)(*v33 + 8),
                                      (__int64)v102,
                                      v32,
                                      0LL,
                                      0,
                                      0xA00u,
                                      v4,
                                      0LL);
                SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v102);
                ThreadUnlock1(v36, v35, v37);
                if ( Window )
                {
                  v38 = safe_cast_fnid_to_PMENUWND((__int64)Window);
                  if ( v38
                    && (SetOrClrWF(0, Window, 0x408u, 1),
                        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v82, *(_QWORD *)(v38 + 8)),
                        *v82[0]) )
                  {
                    SmartObjStackRefBase<tagPOPUPMENU>::Init(v93, *(_QWORD *)(**a1 + 64));
                    MNMarkDelayedFreePopup(v82, v93);
                    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v93);
                    SetOrClrWF(
                      (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
                      Window,
                      0xA40u,
                      1);
                    v39 = *v82[0] + 8LL;
                    v94[1] = *(_QWORD *)(**a1 + 8);
                    v94[0] = v39;
                    HMAssignmentLock(v94, 0LL);
                    SmartObjStackRefBase<tagMENU>::Init(v103, v99);
                    v103[2] = 0LL;
                    LockPopupMenu((__int64)v82, (__int64 *)(*v82[0] + 40LL), (__int64)v103);
                    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v103);
                    v40 = *a1;
                    v95[1] = Window;
                    v95[0] = *v40 + 24;
                    HMAssignmentLock(v95, 0LL);
                    *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
                    v41 = *v82[0] + 32LL;
                    v96[1] = *(_QWORD *)(**a1 + 16);
                    v96[0] = v41;
                    HMAssignmentLock(v96, 0LL);
                    *(_QWORD *)(*v82[0] + 64LL) = *(_QWORD *)(**a1 + 64);
                    v42 = (_DWORD *)*v82[0];
                    v43 = *(_DWORD *)**a1 ^ **(_DWORD **)v82[0];
                    v112 = 0;
                    *v42 ^= v43 & 2;
                    **(_DWORD **)v82[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v82[0]) & 4;
                    **(_DWORD **)v82[0] ^= (**(_DWORD **)v82[0] ^ *(_DWORD *)**a1) & 0x800;
                    **(_DWORD **)v82[0] |= 0x200000u;
                    **(_DWORD **)v82[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v82[0]) & 0x400000;
                    **(_DWORD **)v82[0] ^= (**(_DWORD **)v82[0] ^ *(_DWORD *)**a1) & 0x10;
                    **(_DWORD **)v82[0] = *(_DWORD *)**a1 ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v82[0]) & 0x7FFFFFFF;
                    v44 = *(_QWORD *)(*(_QWORD *)(*v82[0] + 40LL) + 40LL);
                    if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
                      *(_DWORD *)(v44 + 40) |= 4u;
                    else
                      *(_DWORD *)(v44 + 40) &= ~4u;
                    **(_DWORD **)v82[0] &= ~0x1000u;
                    if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*v82[0] + 40LL))
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v82[0] + 40LL) + 40LL) + 40LL) & 1) != 0 )
                    {
                      MNRefreshUAHCachedSizes(*(_QWORD *)(*v82[0] + 40LL));
                    }
                    ThreadLock(Window, &v107);
                    if ( _bittest((const signed __int32 *)(*(_QWORD *)(Window[2] + 424) + 812LL), 0x14u)
                      || (v45 = (struct tagWND *)Window,
                          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2)
                      && (_bittest((const signed __int32 *)(*(_QWORD *)(**a1 + 16) + 320LL), 0x14u)
                       || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
                       && (v45 = (struct tagWND *)Window, (*(_DWORD *)(*(_QWORD *)(**a1 + 16) + 320LL) & 0x80000) != 0)) )
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v90, *(_QWORD *)(*v82[0] + 40LL));
                      v46 = 0;
                      v90[2] = 0LL;
                      v45 = (struct tagWND *)Window;
                      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v90[0] + 40LL) + 44LL) )
                      {
                        while ( (**(_DWORD **)(96LL * v46 + *(_QWORD *)(*(_QWORD *)v90[0] + 88LL)) & 0x100) == 0
                             && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v90[0] + 88LL) + 96LL * v46) + 96LL) != -1LL )
                        {
                          if ( (unsigned int)++v46 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v90[0] + 40LL) + 44LL) )
                            goto LABEL_51;
                        }
                      }
                      else
                      {
LABEL_51:
                        xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
                      }
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v90);
                    }
                    v47 = *((_QWORD *)v45 + 5);
                    v48 = *(_DWORD *)(v47 + 288) & 0xF;
                    if ( v48 == 3 )
                    {
                      WindowDpiLastNotify = (*(_DWORD *)(v47 + 288) >> 8) & 0x1FF;
                    }
                    else if ( (*(_DWORD *)(v47 + 232) & 0x400) != 0 )
                    {
                      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v45);
                    }
                    else if ( !v48
                           && (v50 = *(_QWORD *)(Window[2] + 456)) != 0
                           && (*(_DWORD *)(**(_QWORD **)(v50 + 8) + 64LL) & 1) != 0 )
                    {
                      WindowDpiLastNotify = 96;
                    }
                    else
                    {
                      WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(Window[2] + 424) + 284LL);
                    }
                    if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v82[0] + 40LL) + 76LL) )
                    {
                      *(_WORD *)(*(_QWORD *)(*v82[0] + 40LL) + 76LL) = WindowDpiLastNotify;
                      MNClearCachedPopupSizes(*(_QWORD *)(*v82[0] + 40LL));
                    }
                    if ( (unsigned int)xxxSendMessage(v45, 0x1E2u) )
                    {
                      v52 = **a1;
                      if ( *(_QWORD *)(v52 + 40) )
                      {
                        if ( (unsigned int)MNGetpItemIndex(*(_QWORD *)(**a1 + 40), (__int64)v15) != -1 )
                        {
                          v55 = (unsigned __int16)v54 + 6;
                          *(_DWORD *)**a1 |= 0x20u;
                          v56 = xxxMNPositionHierarchy(
                                  a1,
                                  (__int64)v15,
                                  v55,
                                  (unsigned int)HIWORD(v54) + 6,
                                  &v110,
                                  (int *)&v111,
                                  (__int64)&v84);
                          **(_DWORD **)v82[0] ^= (**(_DWORD **)v82[0] ^ (v56 << 23)) & 0xF800000;
                          if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL) & 0x8000u) != 0LL )
                          {
                            v57 = (_DWORD *)*((_QWORD *)v45 + 5);
                            v83 = 0LL;
                            v58 = v57[23];
                            v89[2] = v57[24] + v110 - v57[22];
                            v59 = v111 - v58 + v57[25];
                            v89[0] = v110;
                            v89[3] = v59;
                            v89[1] = v111;
                            v60 = *a1;
                            v61 = *a1;
                            v85[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) + v101;
                            v62 = *v61;
                            v63 = DWORD1(v101) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v60 + 16) + 40LL) + 92LL);
                            v86 = DWORD2(v101) + v85[0];
                            v85[1] = v63;
                            v87 = v63 + HIDWORD(v101);
                            SmartObjStackRefBase<tagPOPUPMENU>::Init(v104, v62);
                            MNGetPopupBoundsRect(v104, v84, &v83, 0);
                            if ( (unsigned int)IntersectRect(v89, v89, v85) )
                            {
                              v64 = v55
                                  + v101
                                  + DWORD2(v101)
                                  + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                              if ( v64 > v83.right )
                                v64 = 0;
                              v65 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 16) + 40LL);
                              v66 = v101 + *((_DWORD *)v65 + 22) - v55;
                              if ( v66 < v83.left )
                                v66 = 0;
                              if ( (MenuHelpers::GetMenuRightAlignHint(v65) || (v98 & 0x2000) != 0) && v66 || !v64 )
                              {
                                v110 = v101 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v55;
                                v67 = (unsigned int *)*v82[0];
                                v68 = **(_DWORD **)v82[0] & 0xF07FFFFF | 0x1000000;
                              }
                              else
                              {
                                v110 = v101
                                     + DWORD2(v101)
                                     + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                                v67 = (unsigned int *)*v82[0];
                                v68 = **(_DWORD **)v82[0] & 0xF07FFFFF | 0x800000;
                              }
                              *v67 = v68;
                              if ( v110 <= v83.left )
                              {
                                v110 = v86;
                                **(_DWORD **)v82[0] = **(_DWORD **)v82[0] & 0xF07FFFFF | 0x1000000;
                              }
                            }
                          }
                          if ( (*(_DWORD *)**a1 & 1) != 0 )
                          {
                            if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                              **(_DWORD **)v82[0] |= 0x8000000u;
                            if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v82[0] & 0xF800000) == 0x1000000 )
                              **(_DWORD **)v82[0] |= 0x10u;
                            *(_DWORD *)**a1 |= 0x400u;
                          }
                          else
                          {
                            **(_DWORD **)v82[0] |= 0x8000000u;
                            if ( (**(_DWORD **)v82[0] & 0xF800000) == 0x1000000 )
                              **(_DWORD **)v82[0] |= 0x10u;
                          }
                          v69 = *a1;
                          v97[1] = v45;
                          v97[0] = *(_QWORD *)(*v69 + 64) + 56LL;
                          HMAssignmentLock(v97, 0LL);
                          if ( *(_QWORD *)(*v82[0] + 8LL) )
                          {
                            ThreadLockAlways(*(_QWORD *)(*v82[0] + 8LL), &v91);
                            xxxInternalUpdateWindow(*(struct tagWND **)(*v82[0] + 8LL), 1u);
                            ThreadUnlock1(v72, v71, v73);
                          }
                          if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                          {
                            v84 = *(_QWORD *)v45;
                            xxxUserModeCallback(100LL, (__int64)&v84, 8u, v70);
                          }
                          xxxPlayEventSound(5LL);
                          if ( (W32GetCurrentThreadDpiAwarenessContext(v74) & 0xF) == 2 )
                            *(_DWORD *)(*((_QWORD *)v45 + 5) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16)
                                                                                              + 40LL)
                                                                                  + 288LL);
                          xxxSetWindowPos(
                            v45,
                            ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                            (unsigned int)v110,
                            v111,
                            0,
                            0,
                            ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
                          xxxInheritWindowMonitor(v45, *(struct tagWND **)(**a1 + 16), 1);
                          xxxWindowEvent(6u, v45, -4, 0, 0);
                          if ( *(_DWORD *)(a2 + 20) == 1 )
                            xxxSendMessage(v45, 0x1E5u);
                          xxxInternalUpdateWindow(v45, 1u);
                          v5 = (__int64)v45;
                          ThreadUnlock1(v76, v75, v77);
                          goto LABEL_33;
                        }
                      }
                    }
                    if ( ThreadUnlock1(v52, v51, v53) )
                      xxxDestroyWindow((__int64 *)v45);
                    HMAssignmentUnlock(**a1 + 24);
                  }
                  else
                  {
                    xxxDestroyWindow(Window);
                  }
                }
                v5 = 0LL;
              }
              else
              {
                v5 = 0LL;
              }
LABEL_33:
              ThreadUnlock1(v22, v20, v21);
              goto LABEL_105;
            }
          }
        }
        v5 = 0LL;
      }
LABEL_105:
      if ( v112 )
      {
        if ( *(_QWORD *)(**a1 + 8) )
        {
          ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v91);
          xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x125u);
          ThreadUnlock1(v79, v78, v80);
        }
      }
LABEL_108:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v82);
      return v5;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v82);
  return 0LL;
}
