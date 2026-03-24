/*
 * XREFs of xxxNextWindow @ 0x1C01F412C
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C010A160 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     GetNonChildAncestor @ 0x1C00389C8 (GetNonChildAncestor.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     SetNewForegroundQueue @ 0x1C003DC10 (SetNewForegroundQueue.c)
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     xxxSetThreadDesktop @ 0x1C00D95C0 (xxxSetThreadDesktop.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0125DE4 (xxxCancelCoolSwitch.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D4860 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F2BE0 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2C38 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F321C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3B40 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F3CE0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F3ED8 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxNextWindow(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LARGE_STRING *v3; // rbx
  int v4; // r15d
  __int64 result; // rax
  __int64 NonChildAncestor; // r14
  struct tagWND *v8; // r15
  struct tagWND *v9; // r15
  struct tagWND *v10; // rcx
  struct tagWND *inited; // rax
  __int64 v12; // rcx
  struct tagWND *NextQueueWindow; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct tagSwitchWndInfo *v27; // r14
  __int64 v28; // rax
  __int64 v29; // r8
  struct tagWND *v30; // rcx
  struct _LARGE_STRING **v31; // rcx
  __int64 v32; // rcx
  struct tagWND *v33; // rcx
  __int64 v34; // rdx
  struct tagWND *v35; // rcx
  __int64 v36; // rcx
  struct tagWND *v37; // rcx
  unsigned __int64 v38; // r12
  struct tagSwitchWndInfo *v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r14
  unsigned __int64 LowLimit; // [rsp+90h] [rbp-80h] BYREF
  __int128 v45; // [rsp+98h] [rbp-78h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-68h]
  __int128 v47; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-50h]
  __int128 v49; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v50; // [rsp+D8h] [rbp-38h]
  __int64 v51; // [rsp+E0h] [rbp-30h] BYREF
  struct tagWND *v52; // [rsp+E8h] [rbp-28h]
  __int64 v53; // [rsp+F0h] [rbp-20h]
  _QWORD v54[2]; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v55[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v56[2]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v57[2]; // [rsp+130h] [rbp+20h] BYREF
  _QWORD v58[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v59[3]; // [rsp+150h] [rbp+40h] BYREF
  __int128 v60; // [rsp+168h] [rbp+58h] BYREF
  __int64 v61; // [rsp+178h] [rbp+68h]
  _QWORD v62[10]; // [rsp+180h] [rbp+70h] BYREF
  BOOL v63; // [rsp+1E0h] [rbp+D0h]
  int v64; // [rsp+1E8h] [rbp+D8h]
  int v65; // [rsp+1F0h] [rbp+E0h]
  __int64 Window; // [rsp+1F0h] [rbp+E0h]
  struct tagSwitchWndInfo *v67; // [rsp+1F8h] [rbp+E8h] BYREF

  v64 = a2;
  v3 = 0LL;
  v46 = 0LL;
  v50 = 0LL;
  v48 = 0LL;
  v4 = a2;
  result = gptiCurrent;
  v53 = 0LL;
  v67 = 0LL;
  LowLimit = 0LL;
  v45 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  if ( !a1 )
    return result;
  v63 = (_GetAsyncKeyState(16LL, a2, a3) & 0x8000u) != 0LL;
  result = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
  NonChildAncestor = result;
  if ( v4 == 9 )
  {
    v8 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v62[2] = 0LL;
      v37 = gspwndAltTab;
      v62[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v62;
      v62[1] = v8;
      HMLockObject(v37);
      v38 = 0LL;
      while ( 1 )
      {
        v39 = Getpswi(v8);
        v67 = v39;
        if ( !v39 )
        {
          result = ThreadUnlock1(v40);
          goto LABEL_64;
        }
        v41 = xxxMoveSwitchWndHilite(v8, v39, v63);
        if ( v38 )
        {
          if ( v38 == v41 )
          {
            v43 = 0LL;
LABEL_61:
            ThreadUnlock1(v42);
            v58[1] = v43;
            v58[0] = &gspwndActivate;
            result = HMAssignmentLock(v58);
            if ( !gspwndActivate )
              return xxxCancelCoolSwitch();
            return result;
          }
        }
        else
        {
          v38 = v41;
        }
        v43 = HMValidateHandleNoSecure(v41, 1);
        if ( v43 )
          goto LABEL_61;
      }
    }
    v60 = 0LL;
    v61 = 0LL;
    ForceResetMouseButtonsDownState();
    v54[1] = *(_QWORD *)(a1 + 120);
    v54[0] = &gspwndActivate;
    HMAssignmentLock(v54);
    if ( !gspwndActivate )
    {
      v55[0] = &gspwndActivate;
      v55[1] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) + 112LL);
      result = HMAssignmentLock(v55);
      if ( !gspwndActivate )
        return result;
    }
    *(_QWORD *)&v45 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v45;
    *((_QWORD *)&v45 + 1) = NonChildAncestor;
    if ( NonChildAncestor )
      HMLockObject(NonChildAncestor);
    v9 = gspwndActivate;
    *(_QWORD *)&v47 = *(_QWORD *)(gptiCurrent + 416LL);
    v10 = gspwndActivate;
    *(_QWORD *)(gptiCurrent + 416LL) = &v47;
    *((_QWORD *)&v47 + 1) = v10;
    HMLockObject(v10);
    xxxSendTransformableMessageTimeout((unsigned __int64)v9, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (__int64 *)&LowLimit, 1, 0);
    inited = InitSwitchWndInfo(&v67, v9, v63);
    v12 = *(_QWORD *)(gptiCurrent + 416LL);
    NextQueueWindow = inited;
    *(_QWORD *)&v49 = v12;
    *(_QWORD *)(gptiCurrent + 416LL) = &v49;
    *((_QWORD *)&v49 + 1) = inited;
    if ( inited )
      HMLockObject(inited);
    if ( v67 )
    {
      if ( !NextQueueWindow )
      {
        RemoveSwitchWindowInfo((struct tagBWL ***)&v67);
        ThreadUnlock1(v14);
        ThreadUnlock1(v15);
        ThreadUnlock1(v16);
        return HMAssignmentUnlock(&gspwndActivate);
      }
      PushW32ThreadLock((__int64)&v67, &v60, (__int64)RemoveSwitchWindowInfo);
      *((_DWORD *)v67 + 27) = 0;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 1960);
      if ( !PsGetCurrentProcessWin32Process(v17)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18),
            v65 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v65 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v59, 0LL);
      v59[2] = 0LL;
      Window = xxxCreateWindowEx(
                 385,
                 (wchar_t *)0x8003,
                 32771LL,
                 0LL,
                 -2004877312,
                 0,
                 0,
                 0xAu,
                 0xAu,
                 0LL,
                 (__int64)v59,
                 0LL,
                 0LL,
                 2,
                 1024,
                 v65,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v59);
      if ( gspwndAltTab )
        PostMessage((int)gspwndAltTab, 16, 0, 0);
      v56[0] = &gspwndAltTab;
      v56[1] = Window;
      HMAssignmentLock(v56);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v60;
      if ( gspwndAltTab )
      {
        v27 = v67;
        v28 = safe_cast_fnid_to_PSWITCHWND((__int64)gspwndAltTab);
        if ( v28 )
          *(_QWORD *)(v28 + 8) = v27;
        v57[0] = &gspwndActivate;
        v57[1] = NextQueueWindow;
        HMAssignmentLock(v57);
        if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput, v29);
        v30 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        if ( gspwndFullScreen != v30 )
        {
          v51 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v51;
          v52 = v30;
          if ( v30 )
            HMLockObject(v30);
          v31 = *(struct _LARGE_STRING ***)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
          if ( v31 )
            v3 = *v31;
          xxxSendNotifyMessage((__int64)v31, 0x3Au, 2uLL, v3, 1);
          ThreadUnlock1(v32);
        }
        v33 = gspwndAltTab;
        v51 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v51;
        v52 = v33;
        HMLockObject(v33);
        xxxShowSwitchWindow(v35, v34);
        ThreadUnlock1(v36);
        goto LABEL_40;
      }
      RemoveSwitchWindowInfo((struct tagBWL ***)&v67);
    }
LABEL_22:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
        {
          v21 = *(_QWORD *)(NonChildAncestor + 168);
          if ( v21 )
            *(_DWORD *)(*(_QWORD *)(v21 + 40) + 40LL) &= ~4u;
        }
      }
      if ( !v63 && (*(_BYTE *)(*((_QWORD *)v9 + 5) + 24LL) & 8) == 0 )
        xxxSetWindowPos(v9, 1LL, 0LL, 0LL, 0, 0, 25619);
      if ( (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0xC0) != 0x40 )
      {
        v22 = *((_QWORD *)NextQueueWindow + 21);
        if ( v22 )
          *(_DWORD *)(*(_QWORD *)(v22 + 40) + 40LL) |= 4u;
      }
      v23 = *((_QWORD *)NextQueueWindow + 2);
      if ( gpqForeground == *(_QWORD *)(v23 + 432) )
      {
        SetNewForegroundQueue(0LL);
        v23 = *((_QWORD *)NextQueueWindow + 2);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v23, 0);
      v24 = 18;
      if ( v64 != 9 )
        v24 = 2;
      xxxSetForegroundWindow2((__int64)NextQueueWindow, 0LL, v24);
      if ( v64 == 9 && (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos(NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
    }
LABEL_40:
    ThreadUnlock1(v12);
    ThreadUnlock1(v25);
    return ThreadUnlock1(v26);
  }
  if ( v4 != 27 )
    return result;
LABEL_64:
  if ( (*(_DWORD *)(a1 + 388) & 0x4000000) == 0 )
  {
    v9 = *(struct tagWND **)(a1 + 120);
    if ( v9
      || (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 456LL) + 8LL),
          (v9 = *(struct tagWND **)(*(_QWORD *)(result + 24) + 112LL)) != 0LL) )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
      *(_QWORD *)&v45 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v45;
      *((_QWORD *)&v45 + 1) = NonChildAncestor;
      if ( NonChildAncestor )
        HMLockObject(NonChildAncestor);
      *(_QWORD *)&v47 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v47;
      *((_QWORD *)&v47 + 1) = v9;
      HMLockObject(v9);
      xxxSendTransformableMessageTimeout((unsigned __int64)v9, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (__int64 *)&LowLimit, 1, 0);
      NextQueueWindow = GetNextQueueWindow((__int64)v9, v63, 1);
      *(_QWORD *)&v49 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v49;
      *((_QWORD *)&v49 + 1) = NextQueueWindow;
      if ( NextQueueWindow )
        HMLockObject(NextQueueWindow);
      if ( NextQueueWindow == v9 )
        goto LABEL_40;
      goto LABEL_22;
    }
  }
  return result;
}
