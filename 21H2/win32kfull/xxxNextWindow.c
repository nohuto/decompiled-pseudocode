/*
 * XREFs of xxxNextWindow @ 0x1C01EE910
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C00AAD40 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     SetNewForegroundQueue @ 0x1C007FCD0 (SetNewForegroundQueue.c)
 *     GetNonChildAncestor @ 0x1C00825AC (GetNonChildAncestor.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     xxxSetThreadDesktop @ 0x1C00A9A4C (xxxSetThreadDesktop.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C01110F4 (xxxCancelCoolSwitch.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D0578 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01ED460 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01ED4B8 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01EDA7C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01EE340 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01EE4E0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01EE6BC (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxNextWindow(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  BOOL v6; // r12d
  __int64 NonChildAncestor; // rsi
  struct tagWND *v8; // r14
  unsigned __int64 *v9; // r14
  ULONG_PTR v10; // rcx
  __int64 v11; // r9
  struct tagWND *inited; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  struct tagWND *NextQueueWindow; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v29; // r12d
  __int64 Window; // r12
  __int64 ThreadWin32Thread; // rax
  struct tagSwitchWndInfo *v32; // rsi
  __int64 v33; // rax
  ULONG_PTR v34; // rcx
  __int64 v35; // rdx
  struct tagWND *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  ULONG_PTR v42; // rcx
  struct tagSwitchWndInfo *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rax
  const struct tagWND *v54; // rdx
  unsigned int v55; // r8d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  ULONG_PTR *v62; // [rsp+90h] [rbp-80h] BYREF
  __int64 v63; // [rsp+98h] [rbp-78h]
  __int64 v64; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-68h]
  __int64 v66; // [rsp+B0h] [rbp-60h]
  __int128 v67; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-40h]
  __int128 v69; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v70; // [rsp+E8h] [rbp-28h]
  __int128 v71; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v72; // [rsp+100h] [rbp-10h]
  __int128 v73; // [rsp+108h] [rbp-8h] BYREF
  __int64 v74; // [rsp+118h] [rbp+8h]
  _QWORD v75[10]; // [rsp+120h] [rbp+10h] BYREF
  BOOL v76; // [rsp+180h] [rbp+70h]
  struct tagSwitchWndInfo *v78; // [rsp+190h] [rbp+80h] BYREF
  __int64 v79; // [rsp+198h] [rbp+88h] BYREF

  v2 = 0LL;
  v68 = 0LL;
  v72 = 0LL;
  v70 = 0LL;
  result = gptiCurrent;
  v75[2] = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v67 = 0LL;
  v71 = 0LL;
  v69 = 0LL;
  if ( !a1 )
    return result;
  v6 = (_GetAsyncKeyState(16LL) & 0x8000u) != 0LL;
  v76 = v6;
  result = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
  NonChildAncestor = result;
  if ( a2 == 9 )
  {
    v8 = (struct tagWND *)gspwndAltTab;
    if ( gspwndAltTab )
    {
      v74 = 0LL;
      v42 = gspwndAltTab;
      *(_QWORD *)&v73 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v73;
      *((_QWORD *)&v73 + 1) = v8;
      HMLockObject(v42);
      while ( 1 )
      {
        v43 = Getpswi(v8);
        v78 = v43;
        if ( !v43 )
        {
          result = ThreadUnlock1(v45, v44, v46);
          goto LABEL_39;
        }
        v47 = xxxMoveSwitchWndHilite(v8, v43, v6);
        if ( v2 )
        {
          if ( v2 == v47 )
          {
            v51 = 0LL;
LABEL_36:
            ThreadUnlock1(v49, v48, v50);
            v65 = v51;
            v64 = (__int64)&gspwndActivate;
            result = HMAssignmentLock(&v64, 0LL);
            if ( !gspwndActivate )
              return xxxCancelCoolSwitch();
            return result;
          }
        }
        else
        {
          v2 = v47;
        }
        v51 = HMValidateHandleNoSecure(v47, 1);
        if ( v51 )
          goto LABEL_36;
      }
    }
    v73 = 0LL;
    v74 = 0LL;
    ForceResetMouseButtonsDownState();
    v63 = *(_QWORD *)(a1 + 120);
    v62 = &gspwndActivate;
    HMAssignmentLock(&v62, 0LL);
    if ( !gspwndActivate )
    {
      v62 = &gspwndActivate;
      v63 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) + 112LL);
      result = HMAssignmentLock(&v62, 0LL);
      if ( !gspwndActivate )
        return result;
    }
    *(_QWORD *)&v67 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v67;
    *((_QWORD *)&v67 + 1) = NonChildAncestor;
    if ( NonChildAncestor )
      HMLockObject(NonChildAncestor);
    v9 = (unsigned __int64 *)gspwndActivate;
    *(_QWORD *)&v69 = *(_QWORD *)(gptiCurrent + 416LL);
    v10 = gspwndActivate;
    *(_QWORD *)(gptiCurrent + 416LL) = &v69;
    *((_QWORD *)&v69 + 1) = v10;
    HMLockObject(v10);
    xxxSendTransformableMessageTimeout(v9, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (unsigned __int64 *)&v79, 1, 0);
    inited = InitSwitchWndInfo(&v78, (struct tagWND *)v9, v6, v11);
    v15 = *(_QWORD *)(gptiCurrent + 416LL);
    NextQueueWindow = inited;
    *(_QWORD *)&v71 = v15;
    *(_QWORD *)(gptiCurrent + 416LL) = &v71;
    *((_QWORD *)&v71 + 1) = inited;
    if ( inited )
      HMLockObject(inited);
    if ( v78 )
    {
      if ( !NextQueueWindow )
      {
        RemoveSwitchWindowInfo(&v78);
        ThreadUnlock1(v18, v17, v19);
        ThreadUnlock1(v21, v20, v22);
        ThreadUnlock1(v24, v23, v25);
        return HMAssignmentUnlock(&gspwndActivate);
      }
      PushW32ThreadLock((__int64)&v78, &v73, (__int64)RemoveSwitchWindowInfo);
      *((_DWORD *)v78 + 27) = 0;
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v29 = 0;
      if ( PsGetCurrentProcessWin32Process(v26) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27);
        if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v29 = 1;
      }
      SmartObjStackRefBase<tagMENU>::Init(&v64, 0LL);
      v66 = 0LL;
      Window = xxxCreateWindowEx(
                 385,
                 (wchar_t *)0x8003,
                 32771LL,
                 0LL,
                 0x88800000,
                 0,
                 0,
                 10,
                 10,
                 0LL,
                 (__int64)&v64,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v29,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v64);
      if ( gspwndAltTab )
        PostMessage(gspwndAltTab, 16, 0, 0);
      v63 = Window;
      v62 = &gspwndAltTab;
      HMAssignmentLock(&v62, 0LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v73;
      if ( gspwndAltTab )
      {
        v32 = v78;
        v33 = safe_cast_fnid_to_PSWITCHWND(gspwndAltTab);
        if ( v33 )
          *(_QWORD *)(v33 + 8) = v32;
        v64 = (__int64)&gspwndActivate;
        v65 = (__int64)NextQueueWindow;
        HMAssignmentLock(&v64, 0LL);
        if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput);
        v34 = gspwndAltTab;
        v75[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v75;
        v75[1] = v34;
        HMLockObject(v34);
        xxxShowSwitchWindow(v36, v35, v37, v38);
        ThreadUnlock1(v40, v39, v41);
        goto LABEL_65;
      }
      RemoveSwitchWindowInfo(&v78);
      v6 = v76;
      goto LABEL_48;
    }
LABEL_47:
    if ( !NextQueueWindow )
    {
LABEL_65:
      ThreadUnlock1(v15, v13, v14);
      ThreadUnlock1(v57, v56, v58);
      return ThreadUnlock1(v60, v59, v61);
    }
LABEL_48:
    if ( NonChildAncestor )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
      {
        v52 = *(_QWORD *)(NonChildAncestor + 168);
        if ( v52 )
          *(_DWORD *)(*(_QWORD *)(v52 + 40) + 40LL) &= ~4u;
      }
    }
    if ( !v6 && (*(_BYTE *)(v9[5] + 24) & 8) == 0 )
      xxxSetWindowPos((struct tagWND *)v9, 1LL, 0LL, 0LL, 0, 0, 25619);
    if ( (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0xC0) != 0x40 )
    {
      v53 = *((_QWORD *)NextQueueWindow + 21);
      if ( v53 )
        *(_DWORD *)(*(_QWORD *)(v53 + 40) + 40LL) |= 4u;
    }
    v54 = (const struct tagWND *)*((_QWORD *)NextQueueWindow + 2);
    if ( gpqForeground == *((_QWORD *)v54 + 54) )
    {
      SetNewForegroundQueue(0LL, v54);
      v54 = (const struct tagWND *)*((_QWORD *)NextQueueWindow + 2);
    }
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v54, 0);
    v55 = 18;
    if ( a2 != 9 )
      v55 = 2;
    xxxSetForegroundWindow2((__int64)NextQueueWindow, 0LL, v55);
    if ( a2 == 9 && (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0x40) != 0 )
      xxxSetWindowPos(NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
    goto LABEL_65;
  }
  if ( a2 != 27 )
    return result;
LABEL_39:
  if ( (*(_DWORD *)(a1 + 388) & 0x4000000) == 0 )
  {
    v9 = *(unsigned __int64 **)(a1 + 120);
    if ( v9
      || (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 456LL) + 8LL),
          (v9 = *(unsigned __int64 **)(*(_QWORD *)(result + 24) + 112LL)) != 0LL) )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
      *(_QWORD *)&v67 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v67;
      *((_QWORD *)&v67 + 1) = NonChildAncestor;
      if ( NonChildAncestor )
        HMLockObject(NonChildAncestor);
      *(_QWORD *)&v69 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v69;
      *((_QWORD *)&v69 + 1) = v9;
      HMLockObject(v9);
      xxxSendTransformableMessageTimeout(v9, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (unsigned __int64 *)&v79, 1, 0);
      NextQueueWindow = GetNextQueueWindow((__int64)v9, v6, 1);
      *(_QWORD *)&v71 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v71;
      *((_QWORD *)&v71 + 1) = NextQueueWindow;
      if ( NextQueueWindow )
        HMLockObject(NextQueueWindow);
      if ( NextQueueWindow == (struct tagWND *)v9 )
        goto LABEL_65;
      goto LABEL_47;
    }
  }
  return result;
}
