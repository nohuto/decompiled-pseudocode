/*
 * XREFs of xxxSysCommand @ 0x1C0130364
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020C900 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     IsWindowDestroyed @ 0x1C0038878 (IsWindowDestroyed.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003A9E8 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0047234 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     _PostThreadMessage @ 0x1C00DA3F8 (_PostThreadMessage.c)
 *     GetThreadDesktopWindow @ 0x1C0103DD0 (GetThreadDesktopWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _GetMessagePos @ 0x1C010F9A0 (_GetMessagePos.c)
 *     xxxPlayEventSound @ 0x1C011E880 (xxxPlayEventSound.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0125E1C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DF974 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F43B0 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C02122B4 (xxxMoveSize.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0221234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C0221C40 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C02224D0 (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0223170 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02234C8 (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02234F4 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0223520 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     StartScreenSaver @ 0x1C0223650 (StartScreenSaver.c)
 *     xxxMNLoop @ 0x1C0234488 (xxxMNLoop.c)
 *     xxxSBTrackInit @ 0x1C0245640 (xxxSBTrackInit.c)
 *     xxxIsDragging @ 0x1C02487D8 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C024FBDC (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C025046C (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // r14d
  unsigned int v5; // esi
  __int64 v6; // r15
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // esi
  int v17; // esi
  __int64 v18; // rcx
  int MessagePos; // eax
  char v20; // cl
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  struct tagMENUSTATE *v25; // rax
  struct tagMENUSTATE *v26; // rdi
  __int64 *v27; // rdx
  __int64 v28; // rsi
  _QWORD *v29; // rax
  struct tagMENUSTATE *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  struct tagWND *v37; // rax
  int v38; // r8d
  int v39; // ecx
  int v40; // edx
  int v41; // r9d
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rsi
  __int64 v45; // r8
  char v46; // cl
  struct tagMENUSTATE *v47; // rax
  struct tagMENUSTATE *v48; // rsi
  _DWORD **v49; // rdx
  __int64 ThreadDesktopWindow; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdi
  _QWORD *v55; // rax
  int v56; // [rsp+50h] [rbp-69h] BYREF
  struct tagMENUSTATE *v57; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v58[2]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v59[2]; // [rsp+70h] [rbp-49h] BYREF
  struct tagMENUSTATE *v60; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v61[3]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v62[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v64; // [rsp+C0h] [rbp+7h]
  _QWORD v65[2]; // [rsp+C8h] [rbp+Fh] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v56 = 0;
  v4 = a2 & 0xF;
  v5 = a2 - v4;
  v6 = a3;
  if ( a3 == 0x10000 )
    v6 = 0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 432) + 104LL) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0)
    && a1 != gspwndFullScreen
    && (((v5 - 61744) & 0xFFFFFFAF) != 0 || v5 == 61824)
    || (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(8, v5, (unsigned int)v6, 5)
    || (unsigned int)IsWindowDestroyed((__int64)a1) )
  {
    return;
  }
  if ( v5 <= 0xF090 )
  {
    if ( v5 != 61584 )
    {
      v9 = v5 - 61440;
      if ( v9 )
      {
        v10 = v9 - 16;
        if ( v10 )
        {
          v11 = v10 - 16;
          if ( v11 )
          {
            v12 = v11 - 16;
            if ( v12 )
            {
              v13 = v12 - 16;
              if ( v13 && (v14 = v13 - 16) != 0 )
              {
                v15 = v14 - 16;
                if ( v15 )
                {
                  v16 = v15 - 16;
                  if ( !v16 || v16 == 16 )
                  {
                    _GetKeyState(16LL);
                    xxxSBTrackInit(a1, v6);
                  }
                }
                else
                {
                  xxxSendMessage(v8, 0x10u, 0LL, 0LL);
                }
              }
              else
              {
                xxxOldNextWindow((unsigned int)v6);
              }
              return;
            }
            v17 = 3;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
              return;
            v18 = 12LL;
          }
          else
          {
            v17 = 6;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
              return;
            v18 = 11LL;
          }
LABEL_106:
          xxxPlayEventSound(v18);
          xxxShowWindow(a1, v17 | gdwPUDFlags & 0x10000);
          return;
        }
        MessagePos = GetMessagePos(v8);
        LODWORD(v57) = (__int16)MessagePos;
        HIDWORD(v57) = SHIWORD(MessagePos);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x20) == 0
          && v4
          && (!word_1C0339BB0 || qword_1C0339BB8 != v3)
          && !(unsigned int)xxxIsDragging(a1, v57) )
        {
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
          v20 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
          if ( (v20 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(
              (unsigned __int64)a1,
              0x112u,
              0xF100uLL,
              (struct _LARGE_STRING *)((v20 & 0x40) != 0 ? 45LL : 32LL),
              0,
              0,
              0LL,
              1,
              0);
          }
          goto LABEL_48;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61456) )
        {
          v21 = 10 - (v4 != 0);
LABEL_45:
          DelegateMoveSizeToShell(a1, v21);
          goto LABEL_48;
        }
        v22 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v22 + 30) & 4) != 0
          && (*(_BYTE *)(v22 + 31) & 1) != 0
          && !DragOperationFromMaximizedAllowed(a1) )
        {
          goto LABEL_48;
        }
      }
      else
      {
        if ( v4 > 0xA )
        {
LABEL_48:
          xxxDeliverRestoreFocusMessage(a1);
          return;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61440) )
        {
          v21 = v4;
          goto LABEL_45;
        }
        GetMessagePos(v23);
      }
      xxxMoveSize(a1);
      goto LABEL_48;
    }
    goto LABEL_66;
  }
  switch ( v5 )
  {
    case 0xF100u:
      v47 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, 61696LL, v6);
      v48 = v47;
      if ( !v47 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v60, v47);
      **v49 |= 0x80000000;
      if ( gspwndFullScreen == a1 )
      {
        v62[2] = 0LL;
        ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v62[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v62;
        v62[1] = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          HMLockObject(ThreadDesktopWindow);
        xxxMakeWindowForegroundWithState(ThreadDesktopWindow, 2);
        ThreadUnlock1(v52);
      }
      v53 = *(_QWORD *)v48;
      *((_DWORD *)v48 + 2) |= 0x20u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v59, v53);
      xxxMNKeyFilter(v59, v48, (unsigned int)v6);
      v54 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( v59[0] != gSmartObjNullRef && !--*(_DWORD *)(v59[0] + 8LL) )
      {
        if ( *(_BYTE *)(v59[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v59[0]);
      }
      v55 = *(_QWORD **)(v54 + 1472);
      if ( v55 )
        *(_QWORD *)(v54 + 1472) = *v55;
      if ( (*((_DWORD *)v48 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v48);
      v30 = v60;
LABEL_121:
      if ( v30 )
        xxxUnlockMenuStateInternal(v30, 0);
      return;
    case 0xF120u:
      v17 = 9;
      v46 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
      if ( (v46 & 0x20) != 0 || (v46 & 1) == 0 )
      {
        v18 = 9LL;
      }
      else
      {
        MoveWithArrangementAllowed(a1);
        v18 = 10LL;
      }
      goto LABEL_106;
    case 0xF130u:
      if ( (*(_DWORD *)(gpsi + 2120LL) & 8) == 0
        || (v42 = **(_QWORD **)(gptiCurrent + 464LL),
            v43 = *(_DWORD *)(gptiCurrent + 680LL),
            (((unsigned __int16)v43 | (unsigned __int16)*(_DWORD *)(v42 + 16)) & 0x800) == 0)
        && !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
      {
        if ( gptiTasklist )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, gptiTasklist, 0);
          PostThreadMessage(gptiTasklist, 0x112u, 61744LL, 0LL);
        }
        return;
      }
      if ( (((unsigned __int16)v43 | (unsigned __int16)*(_DWORD *)(v42 + 16)) & 0x800) != 0 )
        xxxCallHook(7, *(_QWORD *)a1, 0LL, 10);
      v44 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL);
      if ( !v44 )
        return;
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v44 + 16), 0);
      if ( v6 == 0xFFFFFFFFLL )
        LODWORD(v45) = -1;
      else
        v45 = *(_QWORD *)a1;
      v41 = v45;
      v38 = 7;
      v39 = v44;
      v40 = *(_DWORD *)(gpsi + 928LL);
LABEL_88:
      PostMessage(v39, v40, v38, v41);
      return;
    case 0xF140u:
      v37 = (struct tagWND *)HMValidateHandleNoSecure(ghwndSwitch, 1);
      if ( !v37 || a1 == v37 )
      {
        StartScreenSaver(0LL);
        return;
      }
      v38 = 61760;
      v39 = (int)v37;
      v40 = 274;
      v41 = (*gpsi >> 9) & 1;
      goto LABEL_88;
    case 0xF150u:
      v31 = ValidateHwnd(v6);
      v32 = v31;
      if ( v31 )
      {
        v33 = *(_QWORD *)(v31 + 200);
        v61[2] = 0LL;
        CurrentThread = KeGetCurrentThread();
        if ( !v33 )
          v33 = v32;
        if ( v33 )
          v32 = v33;
        v35 = W32GetThreadWin32Thread((__int64)CurrentThread);
        v61[0] = *(_QWORD *)(v35 + 416);
        *(_QWORD *)(v35 + 416) = v61;
        v61[1] = v32;
        HMLockObject(v32);
        xxxSetForegroundWindowWithOptions(v32, 2LL, 0LL, 0LL);
        if ( (*(_BYTE *)(*(_QWORD *)(v32 + 40) + 31LL) & 0x20) != 0 )
          PostMessage(v32, 274, 61728, 0);
        ThreadUnlock1(v36);
      }
      break;
    case 0xF160u:
LABEL_66:
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground )
        return;
      v25 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, v5, v6);
      v26 = v25;
      if ( !v25 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v57, v25);
      *(_DWORD *)*v27 |= 0x80000000;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v58, *v27);
      xxxMNLoop(v58, v26, v6, v5 == 61792);
      v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( v58[0] != gSmartObjNullRef && !--*(_DWORD *)(v58[0] + 8LL) )
      {
        if ( *(_BYTE *)(v58[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v58[0]);
      }
      v29 = *(_QWORD **)(v28 + 1472);
      if ( v29 )
        *(_QWORD *)(v28 + 1472) = *v29;
      if ( (*((_DWORD *)v26 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v26);
      v30 = v57;
      goto LABEL_121;
    case 0xF170u:
      if ( v6 == -1 )
      {
        v65[0] = 4LL;
        v24 = v65;
        v65[1] = 3LL;
      }
      else
      {
        if ( v6 != 2 )
          return;
        v63 = 5LL;
        if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v56) )
          v64 = v56;
        else
          v64 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
        v24 = &v63;
      }
      QueuePowerRequest(v24, 0LL);
      break;
    case 0xF180u:
      xxxHelpLoop(a1);
      break;
  }
}
