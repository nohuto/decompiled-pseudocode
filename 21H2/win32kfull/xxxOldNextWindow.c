/*
 * XREFs of xxxOldNextWindow @ 0x1C01EF0A8
 * Callers:
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxDispatchMessage @ 0x1C00429F0 (xxxDispatchMessage.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C00FDE30 (ThreadLockExchange.c)
 *     xxxTranslateMessage @ 0x1C010081C (xxxTranslateMessage.c)
 *     xxxCancelCoolSwitch @ 0x1C01110F4 (xxxCancelCoolSwitch.c)
 *     xxxCallMsgFilter @ 0x1C013EB60 (xxxCallMsgFilter.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D0578 (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxWaitMessageEx @ 0x1C01DD5A8 (xxxWaitMessageEx.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01ED460 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01ED4B8 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01EDA7C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01EE340 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01EE4E0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01EE6BC (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  int v2; // r15d
  __int64 result; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rcx
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v12; // edi
  __int64 Window; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  ULONG_PTR v19; // rcx
  struct tagSwitchWndInfo *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdx
  struct tagWND *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int16 v29; // ax
  struct tagWND *NextQueueWindow; // rax
  __int64 v31; // rcx
  struct tagWND *v32; // r14
  ULONG_PTR v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int16 v38; // ax
  __int64 v39; // rax
  __int16 v40; // ax
  struct tagWND *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rbx
  __int64 v46; // rbx
  int v47; // ecx
  __int64 v48; // rbx
  BOOL v49; // r14d
  struct tagWND *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // ecx
  __int64 v58; // rbx
  _QWORD v59[3]; // [rsp+98h] [rbp-80h] BYREF
  __int64 v60[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v61; // [rsp+C0h] [rbp-58h]
  __int128 v62; // [rsp+D0h] [rbp-48h]
  __int128 v63; // [rsp+E0h] [rbp-38h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-28h]
  __int128 v65; // [rsp+F8h] [rbp-20h] BYREF
  __int64 v66; // [rsp+108h] [rbp-10h]
  __int64 v67[4]; // [rsp+118h] [rbp+0h] BYREF
  __int128 v68; // [rsp+138h] [rbp+20h] BYREF
  __int64 v69; // [rsp+148h] [rbp+30h]
  __int128 v70; // [rsp+150h] [rbp+38h] BYREF
  __int64 v71; // [rsp+160h] [rbp+48h]
  struct tagSwitchWndInfo *v72; // [rsp+1A0h] [rbp+88h] BYREF

  v1 = a1;
  v2 = 0;
  v66 = 0LL;
  v64 = 0LL;
  result = gptiCurrent;
  *(_OWORD *)v60 = 0LL;
  v59[2] = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v72 = 0LL;
  v65 = 0LL;
  v63 = 0LL;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 432LL);
  v4 = *(struct tagWND **)(result + 120);
  if ( !v4 )
    return result;
  v5 = *(_QWORD *)(result + 120);
  v59[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v59;
  v59[1] = v4;
  HMLockObject(v5);
  xxxCapture(gptiCurrent, v4, 4);
  *(_QWORD *)&v61 = v1;
  inited = 0LL;
  if ( (_WORD)v1 != 9 )
    goto LABEL_17;
  v68 = 0LL;
  v69 = 0LL;
  KeyState = _GetKeyState(16LL);
  inited = (__int64)InitSwitchWndInfo(&v72, v4, KeyState < 0, v8);
  if ( v72 )
  {
    v71 = 0LL;
    v70 = 0LL;
    *((_DWORD *)v72 + 27) = 1;
    ThreadLock(inited, (__int64 *)&v70);
    PushW32ThreadLock((__int64)&v72, &v68, (__int64)RemoveSwitchWindowInfo);
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( !PsGetCurrentProcessWin32Process(v9)
      || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10),
          v12 = 1,
          !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
    {
      v12 = 0;
    }
    SmartObjStackRefBase<tagMENU>::Init(v67, 0LL);
    v67[2] = 0LL;
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
               (__int64)v67,
               0LL,
               0LL,
               2u,
               0x400u,
               v12,
               0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v67);
    if ( gspwndAltTab )
      PostMessage(gspwndAltTab, 16, 0, 0);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v67[1] = Window;
    *(_QWORD *)(ThreadWin32Thread + 16) = v68;
    v67[0] = (__int64)&gspwndAltTab;
    HMAssignmentLock(v67, 0LL);
    v15 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v19 = gspwndAltTab;
      *(_QWORD *)&v63 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v63;
      *((_QWORD *)&v63 + 1) = v15;
      HMLockObject(v19);
      v20 = v72;
      v21 = safe_cast_fnid_to_PSWITCHWND(v15);
      if ( v21 )
        *(_QWORD *)(v21 + 8) = v20;
      xxxShowSwitchWindow(v23, v22, v24, v25);
      ThreadUnlock1(v27, v26, v28);
    }
    else
    {
      RemoveSwitchWindowInfo(&v72);
    }
    inited = ThreadUnlock1(v17, v16, v18);
  }
  if ( !inited )
  {
LABEL_17:
    if ( (_WORD)v1 == 27 )
    {
      v29 = _GetKeyState(16LL);
      NextQueueWindow = GetNextQueueWindow((__int64)v4, v29 < 0, 1);
      inited = (__int64)NextQueueWindow;
      if ( !NextQueueWindow )
        goto LABEL_36;
      v2 = 1;
      v4 = NextQueueWindow;
      v31 = (__int64)NextQueueWindow;
      goto LABEL_35;
    }
    v32 = (struct tagWND *)gspwndAltTab;
    if ( gspwndAltTab )
    {
      v33 = gspwndAltTab;
      *(_QWORD *)&v63 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v63;
      *((_QWORD *)&v63 + 1) = v32;
      HMLockObject(v33);
      v34 = 0LL;
      do
      {
        v72 = Getpswi(v32);
        if ( !v72 )
          break;
        v38 = _GetKeyState(16LL);
        v39 = xxxMoveSwitchWndHilite(v32, v72, v38 < 0);
        if ( v34 )
        {
          if ( v34 == v39 )
          {
            inited = 0LL;
            break;
          }
        }
        else
        {
          v34 = v39;
        }
        inited = HMValidateHandleNoSecure(v39, 1);
      }
      while ( !inited );
      ThreadUnlock1(v36, v35, v37);
    }
    else
    {
      v40 = _GetKeyState(16LL);
      v41 = GetNextQueueWindow((__int64)v4, v40 < 0, 0);
      inited = (__int64)v41;
      if ( !v41 )
        goto LABEL_36;
      if ( v41 == v4 )
        goto LABEL_36;
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 24LL) & 8) == 0 )
      {
        *(_QWORD *)&v65 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v65;
        *((_QWORD *)&v65 + 1) = v41;
        HMLockObject(v41);
        xxxSetWindowPos(v4, 1LL, 0LL, 0LL, 0, 0, 25619);
        inited = ThreadUnlock1(v43, v42, v44);
        if ( !inited )
          goto LABEL_36;
      }
    }
  }
  v31 = inited;
  v4 = (struct tagWND *)inited;
LABEL_35:
  ThreadLockExchange(v31, (__int64)v59);
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
            while ( 1 )
            {
LABEL_36:
              if ( v4 )
                v45 = *(_QWORD *)v4;
              else
                LODWORD(v45) = 0;
              while ( !(unsigned int)xxxInternalGetMessage(v60, 0LL, 0, 0, 2, 0) )
                xxxWaitMessageEx(0x3CFFu, 0, 0LL);
              v4 = (struct tagWND *)HMValidateHandleNoSecure(v45, 1);
              if ( !v4 )
              {
                v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
                ThreadLockExchange((__int64)v4, (__int64)v59);
              }
              if ( !(unsigned int)xxxCallMsgFilter((__int64)v60, 6) )
                break;
              xxxInternalGetMessage(v60, 0LL, v60[1], v60[1], 1, 0);
            }
            if ( LODWORD(v60[1]) == 260 )
            {
              if ( !gspwndAltTab || (_WORD)v61 == 9 || (_WORD)v61 == 27 )
                goto LABEL_60;
              if ( (_WORD)v61 != 16 )
                goto LABEL_74;
            }
            if ( LODWORD(v60[1]) > 0x202 )
            {
              if ( (unsigned int)(LODWORD(v60[1]) - 516) <= 8 )
              {
                v57 = 411;
                if ( _bittest(&v57, LODWORD(v60[1]) - 516) )
                  goto LABEL_74;
              }
              if ( LODWORD(v60[1]) == 786 )
                goto LABEL_74;
              goto LABEL_97;
            }
            if ( LODWORD(v60[1]) >= 0x201 || LODWORD(v60[1]) == 75 )
              goto LABEL_74;
            if ( LODWORD(v60[1]) > 0xFF )
              break;
LABEL_97:
            if ( v4 )
              v58 = *(_QWORD *)v4;
            else
              LODWORD(v58) = 0;
            xxxInternalGetMessage(v60, 0LL, v60[1], v60[1], 1, 0);
            xxxTranslateMessage((__int64)v60, 0);
            xxxDispatchMessage((__int64)v60);
            v4 = (struct tagWND *)HMValidateHandleNoSecure(v58, 1);
            if ( !v4 )
            {
              v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
              v31 = (__int64)v4;
              goto LABEL_35;
            }
          }
          if ( LODWORD(v60[1]) <= 0x101 )
            break;
          if ( LODWORD(v60[1]) != 260 )
          {
            if ( (unsigned int)(LODWORD(v60[1]) - 261) <= 1 || LODWORD(v60[1]) == 512 )
              break;
            goto LABEL_97;
          }
LABEL_60:
          LODWORD(v1) = (unsigned __int16)v61;
          if ( (unsigned __int16)v61 > 0x1Bu )
            goto LABEL_76;
          v47 = 134283776;
          if ( !_bittest(&v47, (unsigned __int16)v61) )
            goto LABEL_76;
          if ( v4 )
            v48 = *(_QWORD *)v4;
          else
            LODWORD(v48) = 0;
          xxxInternalGetMessage(v60, 0LL, 0x104u, 0x104u, 1, 0);
          v4 = (struct tagWND *)HMValidateHandleNoSecure(v48, 1);
          if ( !v4 )
          {
            v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
            ThreadLockExchange((__int64)v4, (__int64)v59);
          }
          if ( (_DWORD)v1 == 9 )
            goto LABEL_17;
        }
        if ( v4 )
          v46 = *(_QWORD *)v4;
        else
          LODWORD(v46) = 0;
        xxxInternalGetMessage(v60, 0LL, v60[1], v60[1], 1, 0);
        v4 = (struct tagWND *)HMValidateHandleNoSecure(v46, 1);
        if ( !v4 )
        {
          v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
          ThreadLockExchange((__int64)v4, (__int64)v59);
        }
        if ( ((LODWORD(v60[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v60[1]) == 256 )
          goto LABEL_74;
      }
      if ( (_WORD)v61 != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_75;
    }
  }
  while ( (_WORD)v61 != 27 );
  if ( gspwndAltTab )
  {
LABEL_74:
    v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
    ThreadLockExchange((__int64)v4, (__int64)v59);
LABEL_75:
    v2 = 0;
    goto LABEL_76;
  }
  v2 = 1;
LABEL_76:
  xxxReleaseCapture();
  v49 = gspwndAltTab != 0;
  if ( v2 == 1 )
  {
    if ( gpqForeground )
    {
      v50 = *(struct tagWND **)(gpqForeground + 120LL);
      if ( v50 )
      {
        if ( v50 != v4 )
        {
          *(_QWORD *)&v65 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v65;
          *((_QWORD *)&v65 + 1) = v50;
          HMLockObject(v50);
          xxxSetWindowPos(v50, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v52, v51, v53);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindowWithOptions(v4, 2LL, 0LL, 0);
    if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL) & 0x20) != 0 && !v2 )
    {
      if ( v49 )
        PostMessage((int)v4, 274, 61728, 0);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v55, v54, v56);
}
