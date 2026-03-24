/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C02394F8
 * Callers:
 *     xxxMNButtonDown @ 0x1C0236CBC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0236DBC (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C02384D8 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C025046C (xxxMNKeyFilter.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     MNGetpItemFromIndex @ 0x1C00480C4 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0049030 (MNIsUAHMenu.c)
 *     GetWindowDpiLastNotify @ 0x1C004C618 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x1C006C7D8 (xxxInheritWindowMonitor.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D7BC (safe_cast_fnid_to_PMENUWND.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00F0F34 (xxxEnableChildWindowDpiMessageX.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F5200 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C010251C (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C010259C (MNRefreshUAHCachedSizes.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C011E880 (xxxPlayEventSound.c)
 *     MNMarkDelayedFreePopup @ 0x1C02219A4 (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C02334E8 (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C02351A8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235D70 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     LockPopupMenu @ 0x1C023651C (LockPopupMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C0237760 (xxxMNCloseHierarchy.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C02431F0 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2)
{
  __int64 v4; // r12
  __int32 v5; // r15d
  __int64 **v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // r14
  __int128 *v15; // rdx
  __int64 v16; // rbx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  _DWORD *v23; // rcx
  LONG v24; // esi
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v27; // ebx
  __int64 *v28; // rax
  __int64 Window; // rsi
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v39; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 *v44; // rax
  __int64 v45; // rax
  __int64 *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // edx
  __int64 v50; // rax
  int v51; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v53; // rax
  __int64 *v54; // rcx
  int v55; // r9d
  int v56; // r15d
  int v57; // eax
  __int64 v58; // r8
  __int64 v59; // rdx
  _DWORD *v60; // r9
  int v61; // edx
  int v62; // ecx
  __int64 *v63; // rax
  __int64 *v64; // rdx
  __int64 v65; // rdx
  int v66; // r8d
  int v67; // ebx
  MenuHelpers *v68; // rcx
  int v69; // r14d
  unsigned int *v70; // rcx
  unsigned int v71; // eax
  __int64 *v72; // rax
  __int64 v73; // r9
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rcx
  struct _KTHREAD *v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rax
  int v88; // ebx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 *v91; // rax
  _QWORD *v92; // rcx
  _QWORD *v94[2]; // [rsp+90h] [rbp-80h] BYREF
  __int128 v95; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v96; // [rsp+B0h] [rbp-60h]
  __int64 v97[2]; // [rsp+C0h] [rbp-50h] BYREF
  int v98[2]; // [rsp+D0h] [rbp-40h] BYREF
  int v99; // [rsp+D8h] [rbp-38h]
  int v100; // [rsp+DCh] [rbp-34h]
  __int64 v101; // [rsp+E0h] [rbp-30h] BYREF
  unsigned __int64 v102; // [rsp+E8h] [rbp-28h]
  int v103[4]; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v104; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v105[3]; // [rsp+110h] [rbp+0h] BYREF
  __int64 v106; // [rsp+128h] [rbp+18h] BYREF
  __int128 v107; // [rsp+130h] [rbp+20h] BYREF
  __int64 v108; // [rsp+140h] [rbp+30h]
  __int128 v109; // [rsp+148h] [rbp+38h] BYREF
  __int64 v110; // [rsp+158h] [rbp+48h]
  _QWORD v111[2]; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v112[2]; // [rsp+170h] [rbp+60h] BYREF
  _QWORD v113[2]; // [rsp+180h] [rbp+70h] BYREF
  _QWORD v114[2]; // [rsp+190h] [rbp+80h] BYREF
  __int128 v115; // [rsp+1A0h] [rbp+90h]
  __int64 v116; // [rsp+1B0h] [rbp+A0h]
  __int64 v117; // [rsp+1B8h] [rbp+A8h]
  __int128 v118; // [rsp+1E0h] [rbp+D0h]
  _QWORD v119[3]; // [rsp+210h] [rbp+100h] BYREF
  _QWORD v120[3]; // [rsp+228h] [rbp+118h] BYREF
  int **v121[8]; // [rsp+240h] [rbp+130h] BYREF
  int v122; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v123; // [rsp+2A0h] [rbp+190h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+2A8h] [rbp+198h]

  v4 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v94, 0LL);
  v122 = 0;
  v96 = 0LL;
  v110 = 0LL;
  v108 = 0LL;
  v5 = 0;
  v6 = (__int64 **)*a1;
  v95 = 0LL;
  v123 = 0;
  v109 = 0LL;
  LODWORD(CurrentThread) = 0;
  v107 = 0LL;
  v7 = *v6;
  v102 = 0LL;
  v101 = 0LL;
  if ( *((_DWORD *)v7 + 20) == -1 )
    goto LABEL_115;
  v7 = *(__int64 **)(*(_QWORD *)(**a1 + 40) + 40LL);
  if ( *(_DWORD *)(**a1 + 80) >= *((_DWORD *)v7 + 11) )
    goto LABEL_115;
  if ( (*(_DWORD *)**a1 & 0x20) != 0 )
  {
    v7 = (__int64 *)**a1;
    if ( (*(_DWORD *)v7 & 0x4000) == 0 )
      goto LABEL_115;
    xxxMNCloseHierarchy(**a1, a2);
  }
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v8 = MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(**a1 + 80));
  v9 = v8;
  if ( v8 && *(_QWORD *)(v8 + 16) )
  {
    v7 = *a1;
    if ( (*(_DWORD *)**a1 & 0x800) == 0 )
    {
      v7 = (__int64 *)**a1;
      if ( v7[1] )
      {
        v10 = *(_QWORD *)(**a1 + 8);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v95 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v95;
        *((_QWORD *)&v95 + 1) = v10;
        HMLockObject(v10);
        v12 = *a1;
        v102 = **(_QWORD **)(v9 + 16);
        xxxSendMessage(
          *(_QWORD *)(**a1 + 8),
          0x117u,
          v102,
          (struct _LARGE_STRING *)(*(unsigned __int16 *)(**a1 + 80) | ((unsigned __int64)(*(_DWORD *)*v12 & 4) << 14)));
        ThreadUnlock1(v13);
        LODWORD(CurrentThread) = 1;
      }
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
    {
      v7 = *(__int64 **)(*(_QWORD *)(**a1 + 40) + 40LL);
      if ( *(_DWORD *)(**a1 + 80) < *((_DWORD *)v7 + 11) )
      {
        v7 = (__int64 *)**a1;
        v14 = (__int64 *)(*(_QWORD *)(v7[5] + 88) + 96LL * *((int *)v7 + 20));
        v15 = (__int128 *)*v14;
        if ( (*(_DWORD *)(*v14 + 4) & 3) == 0 )
        {
          v16 = v14[2];
          if ( v16 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v16 + 40) + 44LL) )
            {
              v17 = v15[1];
              v115 = *v15;
              v18 = v15[4];
              v117 = *((_QWORD *)&v17 + 1);
              v118 = v18;
              v116 = v16;
              v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v107 = *(_QWORD *)(v19 + 416);
              *(_QWORD *)(v19 + 416) = &v107;
              *((_QWORD *)&v107 + 1) = v16;
              HMLockObject(v16);
              v20 = **a1;
              if ( *(_QWORD *)(v20 + 8) )
              {
                v21 = *(_QWORD *)(**a1 + 8);
                v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v95 = *(_QWORD *)(v22 + 416);
                *(_QWORD *)(v22 + 416) = &v95;
                *((_QWORD *)&v95 + 1) = v21;
                HMLockObject(v21);
                v23 = *(_DWORD **)(*(_QWORD *)(**a1 + 16) + 40LL);
                if ( (v23[72] & 0xF) == 2 )
                {
                  v23 = *(_DWORD **)(ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL))
                                   + 40);
                  v5 = v23[7];
                  v24 = v23[8];
                }
                else
                {
                  v24 = 0;
                }
                v27 = 0;
                if ( PsGetCurrentProcessWin32Process(v23) )
                {
                  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
                  if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
                    v27 = 1;
                }
                SmartObjStackRefBase<tagMENU>::Init(v119, 0LL);
                v28 = *a1;
                v119[2] = 0LL;
                Window = xxxCreateWindowEx(
                           385,
                           (wchar_t *)0x8000,
                           0x8000LL,
                           0LL,
                           -2139095040,
                           v5,
                           v24,
                           0x64u,
                           0x64u,
                           *(_QWORD *)(**a1 + 8),
                           (__int64)v119,
                           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v28 + 8) + 40LL) + 32LL),
                           0LL,
                           0,
                           2560,
                           v27,
                           0LL);
                SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v119);
                ThreadUnlock1(v30);
              }
              else
              {
                Window = 0LL;
              }
              if ( Window )
              {
                v31 = safe_cast_fnid_to_PMENUWND(Window);
                if ( v31
                  && (SetOrClrWF(0, Window, 0x408u, 1),
                      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v94, *(_QWORD *)(v31 + 8)),
                      *v94[0]) )
                {
                  SmartObjStackRefBase<tagPOPUPMENU>::Init(v97, *(_QWORD *)(**a1 + 64));
                  MNMarkDelayedFreePopup(v94, v97);
                  v32 = 0LL;
                  CurrentThread = KeGetCurrentThread();
                  if ( !(unsigned __int8)KeIsAttachedProcess(v33)
                    || (CurrentProcess = PsGetCurrentProcess(v35, v34, v36),
                        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                        CurrentThreadProcess = PsGetCurrentThreadProcess(v39),
                        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
                  {
                    v41 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                    if ( v41 )
                      v32 = *v41;
                  }
                  if ( v97[0] != gSmartObjNullRef && !--*(_DWORD *)(v97[0] + 8) )
                  {
                    if ( *(_BYTE *)(v97[0] + 12) )
                      Win32FreeToPagedLookasideList(gpStackRefLookAside, v97[0]);
                  }
                  v42 = *(_QWORD **)(v32 + 1472);
                  if ( v42 )
                    *(_QWORD *)(v32 + 1472) = *v42;
                  SetOrClrWF(
                    (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
                    Window,
                    0xA40u,
                    1);
                  v43 = *(_QWORD *)(**a1 + 8);
                  v111[0] = *v94[0] + 8LL;
                  v111[1] = v43;
                  HMAssignmentLock(v111);
                  SmartObjStackRefBase<tagMENU>::Init(v120, v116);
                  v120[2] = 0LL;
                  LockPopupMenu((__int64)v94, (__int64 *)(*v94[0] + 40LL), (__int64)v120);
                  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v120);
                  v44 = *a1;
                  v112[1] = Window;
                  v112[0] = *v44 + 24;
                  HMAssignmentLock(v112);
                  *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
                  v45 = *(_QWORD *)(**a1 + 16);
                  v113[0] = *v94[0] + 32LL;
                  v113[1] = v45;
                  HMAssignmentLock(v113);
                  *(_QWORD *)(*v94[0] + 64LL) = *(_QWORD *)(**a1 + 64);
                  **(_DWORD **)v94[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v94[0]) & 2;
                  **(_DWORD **)v94[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v94[0]) & 4;
                  v46 = *a1;
                  LODWORD(CurrentThread) = 0;
                  **(_DWORD **)v94[0] ^= (**(_DWORD **)v94[0] ^ *(_DWORD *)*v46) & 0x800;
                  **(_DWORD **)v94[0] |= 0x200000u;
                  **(_DWORD **)v94[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v94[0]) & 0x400000;
                  **(_DWORD **)v94[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v94[0]) & 0x10;
                  **(_DWORD **)v94[0] = *(_DWORD *)**a1 ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v94[0]) & 0x7FFFFFFF;
                  v47 = *(_QWORD *)(*(_QWORD *)(*v94[0] + 40LL) + 40LL);
                  if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
                    *(_DWORD *)(v47 + 40) |= 4u;
                  else
                    *(_DWORD *)(v47 + 40) &= ~4u;
                  **(_DWORD **)v94[0] &= ~0x1000u;
                  if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*v94[0] + 40LL))
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v94[0] + 40LL) + 40LL) + 40LL) & 1) != 0 )
                  {
                    MNRefreshUAHCachedSizes(*(_QWORD *)(*v94[0] + 40LL));
                  }
                  v48 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  *(_QWORD *)&v109 = *(_QWORD *)(v48 + 416);
                  *(_QWORD *)(v48 + 416) = &v109;
                  *((_QWORD *)&v109 + 1) = Window;
                  HMLockObject(Window);
                  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 424LL) + 820LL) & 0x100000) != 0
                    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
                    && ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x20000000) != 0
                     || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
                     && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x10000000) != 0) )
                  {
                    SmartObjStackRefBase<tagMENU>::Init(v105, *(_QWORD *)(*v94[0] + 40LL));
                    v49 = 0;
                    v105[2] = 0LL;
                    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v105[0] + 40LL) + 44LL) )
                    {
                      while ( (**(_DWORD **)(96LL * v49 + *(_QWORD *)(*(_QWORD *)v105[0] + 88LL)) & 0x100) == 0
                           && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v105[0] + 88LL) + 96LL * v49) + 96LL) != -1LL )
                      {
                        if ( (unsigned int)++v49 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v105[0] + 40LL) + 44LL) )
                          goto LABEL_59;
                      }
                    }
                    else
                    {
LABEL_59:
                      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
                    }
                    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v105);
                  }
                  v50 = *(_QWORD *)(Window + 40);
                  v51 = *(_DWORD *)(v50 + 288) & 0xF;
                  if ( v51 == 3 )
                  {
                    WindowDpiLastNotify = (*(_DWORD *)(v50 + 288) >> 8) & 0x1FF;
                  }
                  else if ( (*(_DWORD *)(v50 + 232) & 0x8000000) != 0 )
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
                  if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v94[0] + 40LL) + 76LL) )
                  {
                    *(_WORD *)(*(_QWORD *)(*v94[0] + 40LL) + 76LL) = WindowDpiLastNotify;
                    MNClearCachedPopupSizes(*(_QWORD **)(*v94[0] + 40LL));
                  }
                  if ( (unsigned int)xxxSendMessage(Window, 0x1E2u, 1uLL, 0LL)
                    && (v54 = *a1, *(_QWORD *)(**a1 + 40))
                    && (unsigned int)MNGetpItemIndex(*(_QWORD *)(**a1 + 40), (__int64)v14) != -1 )
                  {
                    v56 = (unsigned __int16)v55 + 6;
                    *(_DWORD *)**a1 |= 0x20u;
                    v57 = xxxMNPositionHierarchy(
                            a1,
                            v14,
                            v56,
                            (unsigned int)HIWORD(v55) + 6,
                            &v122,
                            (LONG *)&v123,
                            (__int64)&v101);
                    v59 = *v94[0];
                    **(_DWORD **)v94[0] ^= (**(_DWORD **)v94[0] ^ (v57 << 23)) & 0xF800000;
                    if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL, v59, v58) & 0x8000u) != 0LL )
                    {
                      v60 = *(_DWORD **)(Window + 40);
                      v104 = 0LL;
                      v61 = v60[23];
                      v103[2] = v60[24] + v122 - v60[22];
                      v62 = v123 - v61 + v60[25];
                      v103[0] = v122;
                      v103[3] = v62;
                      v103[1] = v123;
                      v63 = *a1;
                      v64 = *a1;
                      v98[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) + v118;
                      v65 = *v64;
                      v66 = DWORD1(v118) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v63 + 16) + 40LL) + 92LL);
                      v99 = DWORD2(v118) + v98[0];
                      v98[1] = v66;
                      v100 = v66 + HIDWORD(v118);
                      SmartObjStackRefBase<tagPOPUPMENU>::Init(v121, v65);
                      MNGetPopupBoundsRect(v121, v101, &v104, 0);
                      if ( (unsigned int)IntersectRect(v103, v103, v98) )
                      {
                        v67 = v56 + v118 + DWORD2(v118) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                        if ( v67 > SDWORD2(v104) )
                          v67 = 0;
                        v68 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 16) + 40LL);
                        v69 = v118 + *((_DWORD *)v68 + 22) - v56;
                        if ( v69 < (int)v104 )
                          v69 = 0;
                        if ( (MenuHelpers::GetMenuRightAlignHint(v68) || (v115 & 0x2000) != 0) && v69 || !v67 )
                        {
                          v122 = v118 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v56;
                          v70 = (unsigned int *)*v94[0];
                          v71 = **(_DWORD **)v94[0] & 0xF07FFFFF | 0x1000000;
                        }
                        else
                        {
                          v122 = v118 + DWORD2(v118) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                          v70 = (unsigned int *)*v94[0];
                          v71 = **(_DWORD **)v94[0] & 0xF07FFFFF | 0x800000;
                        }
                        *v70 = v71;
                        if ( v122 <= (int)v104 )
                        {
                          v122 = v99;
                          **(_DWORD **)v94[0] = **(_DWORD **)v94[0] & 0xF07FFFFF | 0x1000000;
                        }
                      }
                    }
                    if ( (*(_DWORD *)**a1 & 1) != 0 )
                    {
                      if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                        **(_DWORD **)v94[0] |= 0x8000000u;
                      if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v94[0] & 0xF800000) == 0x1000000 )
                        **(_DWORD **)v94[0] |= 0x10u;
                      *(_DWORD *)**a1 |= 0x400u;
                    }
                    else
                    {
                      **(_DWORD **)v94[0] |= 0x8000000u;
                      if ( (**(_DWORD **)v94[0] & 0xF800000) == 0x1000000 )
                        **(_DWORD **)v94[0] |= 0x10u;
                    }
                    v72 = *a1;
                    v114[1] = Window;
                    v114[0] = *(_QWORD *)(*v72 + 64) + 56LL;
                    HMAssignmentLock(v114);
                    if ( *(_QWORD *)(*v94[0] + 8LL) )
                    {
                      v74 = *(_QWORD *)(*v94[0] + 8LL);
                      v75 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                      *(_QWORD *)&v95 = *(_QWORD *)(v75 + 416);
                      *(_QWORD *)(v75 + 416) = &v95;
                      *((_QWORD *)&v95 + 1) = v74;
                      HMLockObject(v74);
                      xxxInternalUpdateWindow(*(struct tagWND **)(*v94[0] + 8LL), 1u);
                      ThreadUnlock1(v76);
                    }
                    if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                    {
                      v106 = *(_QWORD *)Window;
                      xxxUserModeCallback(0x64u, (__int64)&v106, 8u, v73);
                    }
                    xxxPlayEventSound(5LL);
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v77) & 0xF) == 2 )
                      *(_DWORD *)(*(_QWORD *)(Window + 40) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16)
                                                                                            + 40LL)
                                                                                + 288LL);
                    xxxSetWindowPos(
                      (struct tagWND *)Window,
                      ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                      (unsigned int)v122,
                      v123,
                      0,
                      0,
                      ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
                    xxxInheritWindowMonitor((struct tagWND *)Window, *(__int64 **)(**a1 + 16), 1);
                    xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
                    if ( *(_DWORD *)(a2 + 20) == 1 )
                      xxxSendMessage(Window, 0x1E5u, 0LL, 0LL);
                    xxxInternalUpdateWindow((struct tagWND *)Window, 1u);
                    v4 = Window;
                    ThreadUnlock1(v78);
                  }
                  else
                  {
                    if ( ThreadUnlock1(v54) )
                      xxxDestroyWindow(Window);
                    HMAssignmentUnlock(**a1 + 24);
                  }
                }
                else
                {
                  xxxDestroyWindow(Window);
                }
              }
              ThreadUnlock1(v20);
            }
          }
        }
      }
    }
    else
    {
      v4 = -1LL;
    }
    if ( (_DWORD)CurrentThread )
    {
      v7 = (__int64 *)**a1;
      if ( v7[1] )
      {
        v79 = *(_QWORD *)(**a1 + 8);
        v80 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v95 = *(_QWORD *)(v80 + 416);
        *(_QWORD *)(v80 + 416) = &v95;
        *((_QWORD *)&v95 + 1) = v79;
        HMLockObject(v79);
        xxxSendMessage(
          *(_QWORD *)(**a1 + 8),
          0x125u,
          v102,
          (struct _LARGE_STRING *)((unsigned __int64)(*(_DWORD *)**a1 & 4) << 27));
        ThreadUnlock1(v81);
      }
    }
  }
LABEL_115:
  v82 = KeGetCurrentThread();
  v83 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v7)
    || (v87 = PsGetCurrentProcess(v85, v84, v86),
        v88 = PsGetProcessSessionIdEx(v87),
        v90 = PsGetCurrentThreadProcess(v89),
        v88 == (unsigned int)PsGetProcessSessionIdEx(v90)) )
  {
    v91 = (__int64 *)PsGetThreadWin32Thread(v82);
    if ( v91 )
      v83 = *v91;
  }
  if ( v94[0] != (_QWORD *)gSmartObjNullRef && !--*((_DWORD *)v94[0] + 2) )
  {
    if ( *((_BYTE *)v94[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v94[0]);
  }
  v92 = *(_QWORD **)(v83 + 1472);
  if ( v92 )
    *(_QWORD *)(v83 + 1472) = *v92;
  return v4;
}
