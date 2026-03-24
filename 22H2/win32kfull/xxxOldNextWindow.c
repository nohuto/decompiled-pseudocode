/*
 * XREFs of xxxOldNextWindow @ 0x1C01F43B0
 * Callers:
 *     xxxSysCommand @ 0x1C0130364 (xxxSysCommand.c)
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxDispatchMessage @ 0x1C006ADB4 (xxxDispatchMessage.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     xxxCapture @ 0x1C00C02CC (xxxCapture.c)
 *     ThreadLockExchange @ 0x1C00C1250 (ThreadLockExchange.c)
 *     xxxInternalGetMessage @ 0x1C00D9C60 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00DAB00 (xxxReleaseCapture.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C0110450 (xxxTranslateMessage.c)
 *     xxxCancelCoolSwitch @ 0x1C0125A64 (xxxCancelCoolSwitch.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D42A0 (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxWaitMessageEx @ 0x1C01E2598 (xxxWaitMessageEx.c)
 *     xxxCallMsgFilter @ 0x1C01E69DC (xxxCallMsgFilter.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F2620 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2678 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F2C5C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3580 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F3720 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F3918 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  int v2; // r12d
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v12; // edi
  __int64 Window; // rdi
  __int64 v14; // rax
  struct tagWND *v15; // rdi
  __int64 v16; // rcx
  struct tagWND *v17; // rcx
  struct tagSwitchWndInfo *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  struct tagWND *v21; // rcx
  __int64 v22; // rcx
  __int16 v23; // ax
  struct tagWND *NextQueueWindow; // rax
  __int64 v25; // rcx
  struct tagWND *v26; // r14
  struct tagWND *v27; // rcx
  unsigned __int64 v28; // rbx
  __int64 v29; // rcx
  __int16 v30; // ax
  unsigned __int64 v31; // rax
  __int16 v32; // ax
  struct tagWND *v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  int v37; // ecx
  unsigned __int64 v38; // rbx
  BOOL v39; // r14d
  struct tagWND *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // ecx
  unsigned __int64 v44; // rbx
  _QWORD v45[3]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v46[2]; // [rsp+A8h] [rbp-68h] BYREF
  __int128 v47; // [rsp+B8h] [rbp-58h]
  __int128 v48; // [rsp+C8h] [rbp-48h]
  __int128 v49; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v50; // [rsp+E8h] [rbp-28h]
  __int128 v51; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v52; // [rsp+100h] [rbp-10h]
  _QWORD v53[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v54[3]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v55[3]; // [rsp+138h] [rbp+28h] BYREF
  __int128 v56; // [rsp+150h] [rbp+40h] BYREF
  __int64 v57; // [rsp+160h] [rbp+50h]
  struct tagSwitchWndInfo *v58; // [rsp+1C0h] [rbp+B0h] BYREF

  v1 = a1;
  v2 = 0;
  v52 = 0LL;
  v50 = 0LL;
  result = gptiCurrent;
  *(_OWORD *)v46 = 0LL;
  v45[2] = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v58 = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 432LL);
  v4 = *(_QWORD *)(result + 120);
  if ( !v4 )
    return result;
  v5 = *(_QWORD *)(result + 120);
  v45[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v45;
  v45[1] = v4;
  HMLockObject(v5);
  xxxCapture(gptiCurrent, v4, 4);
  *(_QWORD *)&v47 = v1;
  inited = 0LL;
  if ( (_WORD)v1 == 9 )
  {
    v56 = 0LL;
    v57 = 0LL;
    KeyState = _GetKeyState(16LL);
    inited = (__int64)InitSwitchWndInfo(&v58, (struct tagWND *)v4, KeyState < 0);
    if ( v58 )
    {
      v54[2] = 0LL;
      *((_DWORD *)v58 + 27) = 1;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v54[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v54;
      v54[1] = inited;
      if ( inited )
        HMLockObject(inited);
      PushW32ThreadLock((__int64)&v58, &v56, (__int64)RemoveSwitchWindowInfo);
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 2318);
      if ( !PsGetCurrentProcessWin32Process(v9)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10),
            v12 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v12 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v55, 0LL);
      v55[2] = 0LL;
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
                 (__int64)v55,
                 0LL,
                 0LL,
                 2,
                 1024,
                 v12,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v55);
      if ( gspwndAltTab )
        PostMessage((int)gspwndAltTab, 16, 0, 0);
      v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v53[1] = Window;
      *(_QWORD *)(v14 + 16) = v56;
      v53[0] = &gspwndAltTab;
      HMAssignmentLock(v53);
      v15 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v17 = gspwndAltTab;
        *(_QWORD *)&v49 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v49;
        *((_QWORD *)&v49 + 1) = v15;
        HMLockObject(v17);
        v18 = v58;
        v19 = safe_cast_fnid_to_PSWITCHWND((__int64)v15);
        if ( v19 )
          *(_QWORD *)(v19 + 8) = v18;
        xxxShowSwitchWindow(v21, v20);
        ThreadUnlock1(v22);
      }
      else
      {
        RemoveSwitchWindowInfo((struct tagBWL ***)&v58);
      }
      inited = ThreadUnlock1(v16);
    }
    if ( inited )
      goto LABEL_37;
  }
LABEL_19:
  if ( (_WORD)v1 == 27 )
  {
    v23 = _GetKeyState(16LL);
    NextQueueWindow = GetNextQueueWindow(v4, v23 < 0, 1);
    inited = (__int64)NextQueueWindow;
    if ( !NextQueueWindow )
      goto LABEL_39;
    v2 = 1;
    v4 = (__int64)NextQueueWindow;
    v25 = (__int64)NextQueueWindow;
    goto LABEL_38;
  }
  v26 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v27 = gspwndAltTab;
    *(_QWORD *)&v49 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v49;
    *((_QWORD *)&v49 + 1) = v26;
    HMLockObject(v27);
    v28 = 0LL;
    while ( 1 )
    {
      v58 = Getpswi(v26);
      if ( !v58 )
        goto LABEL_31;
      v30 = _GetKeyState(16LL);
      v31 = xxxMoveSwitchWndHilite(v26, v58, v30 < 0);
      if ( v28 )
      {
        if ( v28 == v31 )
        {
          inited = 0LL;
LABEL_31:
          ThreadUnlock1(v29);
LABEL_37:
          v25 = inited;
          v4 = inited;
LABEL_38:
          ThreadLockExchange(v25, (__int64)v45);
          goto LABEL_39;
        }
      }
      else
      {
        v28 = v31;
      }
      inited = HMValidateHandleNoSecure(v31, 1);
      if ( inited )
        goto LABEL_31;
    }
  }
  v32 = _GetKeyState(16LL);
  v33 = GetNextQueueWindow(v4, v32 < 0, 0);
  inited = (__int64)v33;
  if ( v33 && v33 != (struct tagWND *)v4 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 24LL) & 8) == 0 )
    {
      *(_QWORD *)&v51 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v51;
      *((_QWORD *)&v51 + 1) = v33;
      HMLockObject(v33);
      xxxSetWindowPos((struct tagWND *)v4, 1LL, 0LL, 0LL, 0, 0, 25619);
      inited = ThreadUnlock1(v34);
    }
    if ( inited )
      goto LABEL_37;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_39:
            if ( v4 )
              v35 = *(_QWORD *)v4;
            else
              v35 = 0LL;
            while ( !(unsigned int)xxxInternalGetMessage(v46, 0LL, 0, 0, 2, 0) )
              xxxWaitMessageEx(15615LL, 0, 0LL);
            v4 = HMValidateHandleNoSecure(v35, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v45);
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v46, 6) )
              break;
            xxxInternalGetMessage(v46, 0LL, v46[1], v46[1], 1, 0);
          }
          if ( LODWORD(v46[1]) == 260 )
          {
            if ( !gspwndAltTab || (_WORD)v47 == 9 || (_WORD)v47 == 27 )
              goto LABEL_63;
            if ( (_WORD)v47 != 16 )
              goto LABEL_77;
          }
          if ( LODWORD(v46[1]) > 0x202 )
          {
            if ( (unsigned int)(LODWORD(v46[1]) - 516) <= 8 )
            {
              v43 = 411;
              if ( _bittest(&v43, LODWORD(v46[1]) - 516) )
                goto LABEL_77;
            }
            if ( LODWORD(v46[1]) == 786 )
              goto LABEL_77;
            goto LABEL_100;
          }
          if ( LODWORD(v46[1]) >= 0x201 || LODWORD(v46[1]) == 75 )
            goto LABEL_77;
          if ( LODWORD(v46[1]) <= 0xFF )
            goto LABEL_100;
          if ( LODWORD(v46[1]) <= 0x101 )
            break;
          if ( LODWORD(v46[1]) == 260 )
          {
LABEL_63:
            LODWORD(v1) = (unsigned __int16)v47;
            if ( (unsigned __int16)v47 > 0x1Bu )
              goto LABEL_79;
            v37 = 134283776;
            if ( !_bittest(&v37, (unsigned __int16)v47) )
              goto LABEL_79;
            if ( v4 )
              v38 = *(_QWORD *)v4;
            else
              v38 = 0LL;
            xxxInternalGetMessage(v46, 0LL, 0x104u, 0x104u, 1, 0);
            v4 = HMValidateHandleNoSecure(v38, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v45);
            }
            if ( (_DWORD)v1 == 9 )
              goto LABEL_19;
          }
          else
          {
            if ( (unsigned int)(LODWORD(v46[1]) - 261) <= 1 || LODWORD(v46[1]) == 512 )
              break;
LABEL_100:
            if ( v4 )
              v44 = *(_QWORD *)v4;
            else
              v44 = 0LL;
            xxxInternalGetMessage(v46, 0LL, v46[1], v46[1], 1, 0);
            xxxTranslateMessage((__int64)v46, 0);
            xxxDispatchMessage((__int64)v46);
            v4 = HMValidateHandleNoSecure(v44, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v45);
            }
          }
        }
        if ( v4 )
          v36 = *(_QWORD *)v4;
        else
          v36 = 0LL;
        xxxInternalGetMessage(v46, 0LL, v46[1], v46[1], 1, 0);
        v4 = HMValidateHandleNoSecure(v36, 1);
        if ( !v4 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
          ThreadLockExchange(v4, (__int64)v45);
        }
        if ( ((LODWORD(v46[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v46[1]) == 256 )
          goto LABEL_77;
      }
      if ( (_WORD)v47 != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_78;
    }
  }
  while ( (_WORD)v47 != 27 );
  if ( gspwndAltTab )
  {
LABEL_77:
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
    ThreadLockExchange(v4, (__int64)v45);
LABEL_78:
    v2 = 0;
    goto LABEL_79;
  }
  v2 = 1;
LABEL_79:
  xxxReleaseCapture();
  v39 = gspwndAltTab != 0LL;
  if ( v2 == 1 )
  {
    if ( gpqForeground )
    {
      v40 = *(struct tagWND **)(gpqForeground + 120LL);
      if ( v40 )
      {
        if ( v40 != (struct tagWND *)v4 )
        {
          *(_QWORD *)&v51 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v51;
          *((_QWORD *)&v51 + 1) = v40;
          HMLockObject(v40);
          xxxSetWindowPos(v40, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v41);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindowWithOptions(v4, 2LL, 0LL, 0LL);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x20) != 0 && !v2 )
    {
      if ( v39 )
        PostMessage(v4, 274, 61728, 0);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v42);
}
