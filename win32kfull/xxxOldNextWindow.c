/*
 * XREFs of xxxOldNextWindow @ 0x1C01CBDC8
 * Callers:
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00108E8 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C0010A5C (xxxCapture.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     xxxInternalGetMessage @ 0x1C00946B0 (xxxInternalGetMessage.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C00E4F1C (xxxTranslateMessage.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     ThreadLockExchange @ 0x1C010A0D0 (ThreadLockExchange.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxCallMsgFilter @ 0x1C014538E (xxxCallMsgFilter.c)
 *     xxxCancelCoolSwitch @ 0x1C0146A72 (xxxCancelCoolSwitch.c)
 *     xxxWaitMessageEx @ 0x1C01B84F0 (xxxWaitMessageEx.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01BC2F8 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CA108 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CA160 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CA71C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CB01C (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01CB1C0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01CB3B8 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  int v2; // r12d
  __int64 result; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rcx
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 v8; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edi
  __int64 Window; // rdi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct tagWND *v20; // rcx
  struct tagSwitchWndInfo *v21; // r15
  __int64 v22; // rax
  struct tagWND *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int16 v27; // ax
  __int64 NextQueueWindow; // rax
  __int64 v29; // rcx
  struct tagWND *v30; // r14
  struct tagWND *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int16 v36; // ax
  __int64 v37; // rax
  __int16 v38; // ax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  int v44; // edx
  BOOL v45; // r14d
  struct tagWND *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  bool v53; // zf
  __int64 v54; // rbx
  __int64 v55; // rbx
  __int64 v56; // rbx
  _QWORD v57[3]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v58[2]; // [rsp+A8h] [rbp-68h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-58h]
  __int128 v60; // [rsp+C8h] [rbp-48h]
  __int128 v61; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-28h]
  __int128 v63; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v64; // [rsp+100h] [rbp-10h]
  _QWORD v65[4]; // [rsp+110h] [rbp+0h] BYREF
  __int128 v66; // [rsp+130h] [rbp+20h] BYREF
  __int64 v67; // [rsp+140h] [rbp+30h]
  __int128 v68; // [rsp+148h] [rbp+38h] BYREF
  __int64 v69; // [rsp+158h] [rbp+48h]
  struct tagSwitchWndInfo *v70; // [rsp+1B0h] [rbp+A0h] BYREF

  v1 = a1;
  v2 = 0;
  v64 = 0LL;
  v62 = 0LL;
  result = gptiCurrent;
  *(_OWORD *)v58 = 0LL;
  v57[2] = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v70 = 0LL;
  v63 = 0LL;
  v61 = 0LL;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 432LL);
  v4 = *(struct tagWND **)(result + 128);
  if ( !v4 )
    return result;
  v5 = *(_QWORD *)(result + 128);
  v57[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v57;
  v57[1] = v4;
  HMLockObject(v5);
  xxxCapture(gptiCurrent, v4, 4);
  *(_QWORD *)&v59 = v1;
  inited = 0LL;
  if ( (_WORD)v1 != 9 )
    goto LABEL_20;
  v66 = 0LL;
  v67 = 0LL;
  KeyState = _GetKeyState(16LL);
  inited = (__int64)InitSwitchWndInfo(&v70, v4, KeyState < 0);
  if ( v70 )
  {
    v69 = 0LL;
    v68 = 0LL;
    *((_DWORD *)v70 + 27) = 1;
    ThreadLock(inited, &v68);
    PushW32ThreadLock((__int64)&v70, &v66, (__int64)RemoveSwitchWindowInfo);
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 2299);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
    if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
      goto LABEL_10;
    v11 = PsGetCurrentProcessWin32Process(v10);
    v12 = v11;
    if ( v11 )
      v12 = -(__int64)(*(_QWORD *)v11 != 0LL) & v11;
    v13 = 1;
    if ( !(unsigned int)IsImmersiveAppRestricted(v12) )
LABEL_10:
      v13 = 0;
    SmartObjStackRefBase<tagMENU>::Init(v65, 0LL);
    v65[2] = 0LL;
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
               (__int64)v65,
               0LL,
               0LL,
               2,
               0x400u,
               v13,
               0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v65);
    if ( gspwndAltTab )
      PostMessage((unsigned __int64)gspwndAltTab, 0x10u, 0LL, 0LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v65[1] = Window;
    *(_QWORD *)(ThreadWin32Thread + 16) = v66;
    v65[0] = &gspwndAltTab;
    HMAssignmentLock(v65, 0LL);
    v16 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v20 = gspwndAltTab;
      *(_QWORD *)&v61 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v61;
      *((_QWORD *)&v61 + 1) = v16;
      HMLockObject(v20);
      v21 = v70;
      v22 = safe_cast_fnid_to_PSWITCHWND((__int64)v16);
      if ( v22 )
        *(_QWORD *)(v22 + 8) = v21;
      xxxShowSwitchWindow(v23);
      ThreadUnlock1(v25, v24, v26);
    }
    else
    {
      RemoveSwitchWindowInfo(&v70);
    }
    inited = ThreadUnlock1(v18, v17, v19);
  }
  if ( !inited )
  {
LABEL_20:
    if ( (_WORD)v1 == 27 )
    {
      v27 = _GetKeyState(16LL);
      NextQueueWindow = GetNextQueueWindow((__int64)v4, v27 < 0, 1);
      inited = NextQueueWindow;
      if ( !NextQueueWindow )
        goto LABEL_39;
      v2 = 1;
      v4 = (struct tagWND *)NextQueueWindow;
      v29 = NextQueueWindow;
      goto LABEL_38;
    }
    v30 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v31 = gspwndAltTab;
      *(_QWORD *)&v61 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v61;
      *((_QWORD *)&v61 + 1) = v30;
      HMLockObject(v31);
      v32 = 0LL;
      do
      {
        v70 = Getpswi(v30);
        if ( !v70 )
          break;
        v36 = _GetKeyState(16LL);
        v37 = xxxMoveSwitchWndHilite(v30, v70, v36 < 0);
        if ( v32 )
        {
          if ( v32 == v37 )
          {
            inited = 0LL;
            break;
          }
        }
        else
        {
          v32 = v37;
        }
        inited = HMValidateHandleNoSecure(v37, 1);
      }
      while ( !inited );
      ThreadUnlock1(v34, v33, v35);
    }
    else
    {
      v38 = _GetKeyState(16LL);
      v39 = GetNextQueueWindow((__int64)v4, v38 < 0, 0);
      inited = v39;
      if ( !v39 )
        goto LABEL_39;
      if ( (struct tagWND *)v39 == v4 )
        goto LABEL_39;
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 24LL) & 8) == 0 )
      {
        *(_QWORD *)&v63 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v63;
        *((_QWORD *)&v63 + 1) = v39;
        HMLockObject(v39);
        xxxSetWindowPos(v4, 1LL, 0LL, 0LL, 0, 0, 25619);
        inited = ThreadUnlock1(v41, v40, v42);
        if ( !inited )
          goto LABEL_39;
      }
    }
  }
  v29 = inited;
  v4 = (struct tagWND *)inited;
LABEL_38:
  ThreadLockExchange(v29, (__int64)v57);
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
LABEL_39:
              if ( v4 )
                v43 = *(_QWORD *)v4;
              else
                LODWORD(v43) = 0;
              while ( !(unsigned int)xxxInternalGetMessage(v58, 0LL, 0, 0, 2, 0) )
                xxxWaitMessageEx(0x3CFFu, 0, 0LL);
              v4 = (struct tagWND *)HMValidateHandleNoSecure(v43, 1);
              if ( !v4 )
              {
                v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
                ThreadLockExchange((__int64)v4, (__int64)v57);
              }
              if ( !(unsigned int)xxxCallMsgFilter((__int64)v58, 6u) )
                break;
              xxxInternalGetMessage(v58, 0LL, v58[1], v58[1], 1, 0);
            }
            if ( LODWORD(v58[1]) == 260 && gspwndAltTab )
            {
              if ( (unsigned __int16)v59 > 0x1Bu )
                goto LABEL_52;
              v44 = 134283776;
              if ( !_bittest(&v44, (unsigned __int16)v59) )
                goto LABEL_52;
            }
            else
            {
              v44 = 134283776;
            }
            if ( LODWORD(v58[1]) <= 0x202 )
              break;
            if ( LODWORD(v58[1]) == 516
              || LODWORD(v58[1]) == 517
              || LODWORD(v58[1]) == 519
              || LODWORD(v58[1]) == 520
              || LODWORD(v58[1]) == 523
              || LODWORD(v58[1]) == 524 )
            {
              goto LABEL_52;
            }
            v53 = LODWORD(v58[1]) == 786;
LABEL_107:
            if ( v53 )
              goto LABEL_52;
            if ( v4 )
              v56 = *(_QWORD *)v4;
            else
              LODWORD(v56) = 0;
            xxxInternalGetMessage(v58, 0LL, v58[1], v58[1], 1, 0);
            xxxTranslateMessage((__int64)v58, 0);
            xxxDispatchMessage(v58);
            v4 = (struct tagWND *)HMValidateHandleNoSecure(v56, 1);
            if ( !v4 )
            {
              v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
              ThreadLockExchange((__int64)v4, (__int64)v57);
            }
          }
          if ( LODWORD(v58[1]) == 514 || LODWORD(v58[1]) == 75 )
            goto LABEL_52;
          if ( LODWORD(v58[1]) == 256 || LODWORD(v58[1]) == 257 )
            break;
          if ( LODWORD(v58[1]) != 260 )
          {
            if ( LODWORD(v58[1]) != 261 && LODWORD(v58[1]) != 262 && LODWORD(v58[1]) != 512 )
            {
              v53 = LODWORD(v58[1]) == 513;
              goto LABEL_107;
            }
            break;
          }
          LODWORD(v1) = (unsigned __int16)v59;
          if ( (unsigned __int16)v59 > 0x1Bu || !_bittest(&v44, (unsigned __int16)v59) )
            goto LABEL_54;
          if ( v4 )
            v54 = *(_QWORD *)v4;
          else
            LODWORD(v54) = 0;
          xxxInternalGetMessage(v58, 0LL, v58[1], v58[1], 1, 0);
          v4 = (struct tagWND *)HMValidateHandleNoSecure(v54, 1);
          if ( !v4 )
          {
            v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
            ThreadLockExchange((__int64)v4, (__int64)v57);
          }
          if ( (_DWORD)v1 == 9 )
            goto LABEL_20;
        }
        if ( v4 )
          v55 = *(_QWORD *)v4;
        else
          LODWORD(v55) = 0;
        xxxInternalGetMessage(v58, 0LL, v58[1], v58[1], 1, 0);
        v4 = (struct tagWND *)HMValidateHandleNoSecure(v55, 1);
        if ( !v4 )
        {
          v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
          ThreadLockExchange((__int64)v4, (__int64)v57);
        }
        if ( ((LODWORD(v58[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v58[1]) == 256 )
          goto LABEL_52;
      }
      if ( (_WORD)v59 != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_53;
    }
  }
  while ( (_WORD)v59 != 27 );
  if ( gspwndAltTab )
  {
LABEL_52:
    v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
    ThreadLockExchange((__int64)v4, (__int64)v57);
LABEL_53:
    v2 = 0;
    goto LABEL_54;
  }
  v2 = 1;
LABEL_54:
  xxxReleaseCapture();
  v45 = gspwndAltTab != 0LL;
  if ( v2 == 1 )
  {
    if ( gpqForeground )
    {
      v46 = *(struct tagWND **)(gpqForeground + 128LL);
      if ( v46 )
      {
        if ( v46 != v4 )
        {
          *(_QWORD *)&v63 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v63;
          *((_QWORD *)&v63 + 1) = v46;
          HMLockObject(v46);
          xxxSetWindowPos(v46, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v48, v47, v49);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindowWithOptions((__int64)v4, 2u, 0, 0);
    if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL) & 0x20) != 0 && !v2 )
    {
      if ( v45 )
        PostMessage((unsigned __int64)v4, 0x112u, 0xF120uLL, 0LL);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v51, v50, v52);
}
