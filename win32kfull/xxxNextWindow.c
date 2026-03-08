/*
 * XREFs of xxxNextWindow @ 0x1C01CB604
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C009F110 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C0027014 (GetNonChildAncestor.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     xxxSetThreadDesktop @ 0x1C00361B8 (xxxSetThreadDesktop.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     SetNewForegroundQueue @ 0x1C00CE270 (SetNewForegroundQueue.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxCancelCoolSwitch @ 0x1C0146A72 (xxxCancelCoolSwitch.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01BC2F8 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CA108 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CA160 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CA71C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CB01C (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01CB1C0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01CB3B8 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxNextWindow(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  BOOL v6; // r12d
  __int64 NonChildAncestor; // rsi
  struct tagWND *v8; // r14
  struct tagWND *v9; // r14
  __int64 v10; // rcx
  struct tagWND *inited; // rax
  const struct tagWND *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 NextQueueWindow; // rbx
  int v16; // r12d
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
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 Window; // r12
  __int64 ThreadWin32Thread; // rax
  struct tagSwitchWndInfo *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r8
  struct tagWND *v35; // rcx
  struct tagWND *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct tagWND *v40; // rcx
  struct tagSwitchWndInfo *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // r8d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  struct tagWND **v59; // [rsp+90h] [rbp-80h] BYREF
  __int64 v60; // [rsp+98h] [rbp-78h]
  void *v61; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-68h]
  __int64 v63; // [rsp+B0h] [rbp-60h]
  __int64 v64; // [rsp+C0h] [rbp-50h] BYREF
  __int128 v65; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-38h]
  __int128 v67; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-20h]
  __int128 v69; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v70; // [rsp+108h] [rbp-8h]
  __int128 v71; // [rsp+110h] [rbp+0h] BYREF
  __int64 v72; // [rsp+120h] [rbp+10h]
  _QWORD v73[9]; // [rsp+128h] [rbp+18h] BYREF
  BOOL v75; // [rsp+190h] [rbp+80h]
  struct tagSwitchWndInfo *v76; // [rsp+198h] [rbp+88h] BYREF

  v2 = 0LL;
  v66 = 0LL;
  v70 = 0LL;
  v68 = 0LL;
  result = gptiCurrent;
  v73[2] = 0LL;
  v76 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v69 = 0LL;
  v67 = 0LL;
  if ( a1 )
  {
    v6 = (_GetAsyncKeyState(16LL) & 0x8000u) != 0LL;
    v75 = v6;
    result = GetNonChildAncestor(*(_QWORD *)(a1 + 120));
    NonChildAncestor = result;
    if ( a2 == 9 )
    {
      v8 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v72 = 0LL;
        v40 = gspwndAltTab;
        *(_QWORD *)&v71 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v71;
        *((_QWORD *)&v71 + 1) = v8;
        HMLockObject(v40);
        do
        {
          v41 = Getpswi(v8);
          v45 = 0LL;
          v76 = v41;
          if ( !v41 )
          {
            result = ThreadUnlock1(v43, v42, v44);
            goto LABEL_39;
          }
          v46 = xxxMoveSwitchWndHilite(v8, v41, v6);
          if ( v2 )
          {
            if ( v2 == v46 )
              break;
          }
          else
          {
            v2 = v46;
          }
          v45 = HMValidateHandleNoSecure(v46, 1);
        }
        while ( !v45 );
        ThreadUnlock1(v48, v47, v49);
        v62 = v45;
        v61 = &gspwndActivate;
        HMAssignmentLock(&v61, 0LL);
        result = 0LL;
        if ( !gspwndActivate )
          return xxxCancelCoolSwitch();
      }
      else
      {
        v71 = 0LL;
        v72 = 0LL;
        ForceResetMouseButtonsDownState();
        v60 = *(_QWORD *)(a1 + 128);
        v59 = (struct tagWND **)&gspwndActivate;
        HMAssignmentLock(&v59, 0LL);
        if ( gspwndActivate
          || (v59 = (struct tagWND **)&gspwndActivate,
              v60 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) + 112LL),
              result = HMAssignmentLock(&v59, 0LL),
              gspwndActivate) )
        {
          *(_QWORD *)&v65 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v65;
          *((_QWORD *)&v65 + 1) = NonChildAncestor;
          if ( NonChildAncestor )
            HMLockObject(NonChildAncestor);
          v9 = (struct tagWND *)gspwndActivate;
          *(_QWORD *)&v67 = *(_QWORD *)(gptiCurrent + 416LL);
          v10 = gspwndActivate;
          *(_QWORD *)(gptiCurrent + 416LL) = &v67;
          *((_QWORD *)&v67 + 1) = v10;
          HMLockObject(v10);
          xxxSendTransformableMessageTimeout(v9, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (unsigned __int64 *)&v64, 1, 0);
          inited = InitSwitchWndInfo(&v76, v9, v6);
          v14 = *(_QWORD *)(gptiCurrent + 416LL);
          NextQueueWindow = (__int64)inited;
          *(_QWORD *)&v69 = v14;
          *(_QWORD *)(gptiCurrent + 416LL) = &v69;
          *((_QWORD *)&v69 + 1) = inited;
          if ( inited )
            HMLockObject(inited);
          if ( v76 )
          {
            v16 = 0;
            if ( !NextQueueWindow )
            {
              RemoveSwitchWindowInfo(&v76);
              ThreadUnlock1(v18, v17, v19);
              ThreadUnlock1(v21, v20, v22);
              ThreadUnlock1(v24, v23, v25);
              return HMAssignmentUnlock(&gspwndActivate);
            }
            PushW32ThreadLock((__int64)&v76, &v71, (__int64)RemoveSwitchWindowInfo);
            *((_DWORD *)v76 + 27) = 0;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 1955);
            CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v26);
            if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
            {
              v29 = PsGetCurrentProcessWin32Process(v28);
              if ( v29 )
                v29 &= -(__int64)(*(_QWORD *)v29 != 0LL);
              if ( (unsigned int)IsImmersiveAppRestricted(v29) )
                v16 = 1;
            }
            SmartObjStackRefBase<tagMENU>::Init(&v61, 0LL);
            v63 = 0LL;
            Window = xxxCreateWindowEx(
                       385,
                       32771LL,
                       32771LL,
                       0LL,
                       0x88800000,
                       0,
                       0,
                       10,
                       10,
                       0LL,
                       (__int64)&v61,
                       0LL,
                       0LL,
                       2,
                       0x400u,
                       v16,
                       0LL);
            SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v61);
            if ( gspwndAltTab )
              PostMessage((unsigned __int64)gspwndAltTab, 0x10u, 0LL, 0LL);
            v60 = Window;
            v59 = &gspwndAltTab;
            HMAssignmentLock(&v59, 0LL);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)(ThreadWin32Thread + 16) = v71;
            if ( gspwndAltTab )
            {
              v32 = v76;
              v33 = safe_cast_fnid_to_PSWITCHWND((__int64)gspwndAltTab);
              if ( v33 )
                *(_QWORD *)(v33 + 8) = v32;
              v61 = &gspwndActivate;
              v62 = NextQueueWindow;
              HMAssignmentLock(&v61, 0LL);
              if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
                xxxSetThreadDesktop(0LL, grpdeskRitInput, v34);
              v35 = gspwndAltTab;
              v73[0] = *(_QWORD *)(gptiCurrent + 416LL);
              *(_QWORD *)(gptiCurrent + 416LL) = v73;
              v73[1] = v35;
              HMLockObject(v35);
              xxxShowSwitchWindow(v36);
              ThreadUnlock1(v38, v37, v39);
              goto LABEL_65;
            }
            RemoveSwitchWindowInfo(&v76);
            v6 = v75;
            goto LABEL_48;
          }
LABEL_47:
          if ( !NextQueueWindow )
          {
LABEL_65:
            ThreadUnlock1(v14, v12, v13);
            ThreadUnlock1(v54, v53, v55);
            return ThreadUnlock1(v57, v56, v58);
          }
LABEL_48:
          if ( NonChildAncestor )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
            {
              v50 = *(_QWORD *)(NonChildAncestor + 168);
              if ( v50 )
                *(_DWORD *)(*(_QWORD *)(v50 + 40) + 40LL) &= ~4u;
            }
          }
          if ( !v6 && (*(_BYTE *)(*((_QWORD *)v9 + 5) + 24LL) & 8) == 0 )
            xxxSetWindowPos(v9, 1LL, 0LL, 0LL, 0, 0, 25619);
          if ( (*(_BYTE *)(*(_QWORD *)(NextQueueWindow + 40) + 31LL) & 0xC0) != 0x40 )
          {
            v51 = *(_QWORD *)(NextQueueWindow + 168);
            if ( v51 )
              *(_DWORD *)(*(_QWORD *)(v51 + 40) + 40LL) |= 4u;
          }
          if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(NextQueueWindow + 16) + 432LL) )
            SetNewForegroundQueue(0LL, v12);
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(NextQueueWindow + 16), 0);
          v52 = 18;
          if ( a2 != 9 )
            v52 = 2;
          xxxSetForegroundWindow2(NextQueueWindow, 0LL, v52);
          if ( a2 == 9 && (*(_BYTE *)(*(_QWORD *)(NextQueueWindow + 40) + 31LL) & 0x40) != 0 )
            xxxSetWindowPos((struct tagWND *)NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
          goto LABEL_65;
        }
      }
    }
    else
    {
      if ( a2 != 27 )
        return result;
LABEL_39:
      if ( (*(_DWORD *)(a1 + 396) & 0x4000000) == 0 )
      {
        v9 = *(struct tagWND **)(a1 + 128);
        if ( v9
          || (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 456LL) + 8LL),
              (v9 = *(struct tagWND **)(*(_QWORD *)(result + 24) + 112LL)) != 0LL) )
        {
          NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 120));
          *(_QWORD *)&v65 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v65;
          *((_QWORD *)&v65 + 1) = NonChildAncestor;
          if ( NonChildAncestor )
            HMLockObject(NonChildAncestor);
          *(_QWORD *)&v67 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v67;
          *((_QWORD *)&v67 + 1) = v9;
          HMLockObject(v9);
          xxxSendTransformableMessageTimeout(v9, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (unsigned __int64 *)&v64, 1, 0);
          NextQueueWindow = GetNextQueueWindow((__int64)v9, v6, 1);
          *(_QWORD *)&v69 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v69;
          *((_QWORD *)&v69 + 1) = NextQueueWindow;
          if ( NextQueueWindow )
            HMLockObject(NextQueueWindow);
          if ( (struct tagWND *)NextQueueWindow == v9 )
            goto LABEL_65;
          goto LABEL_47;
        }
      }
    }
  }
  return result;
}
