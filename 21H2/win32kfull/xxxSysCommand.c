/*
 * XREFs of xxxSysCommand @ 0x1C011BA1C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C020BB18 (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     _PostThreadMessage @ 0x1C00AB08C (_PostThreadMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _GetMessagePos @ 0x1C0101D84 (_GetMessagePos.c)
 *     xxxPlayEventSound @ 0x1C01088E0 (xxxPlayEventSound.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C01095CC (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C010C53C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DB7A8 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C021B934 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C021BF30 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C021C5F4 (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C021CF44 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C021D188 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     StartScreenSaver @ 0x1C021D230 (StartScreenSaver.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CA38 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CAA8 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSBTrackInit @ 0x1C0241B74 (xxxSBTrackInit.c)
 *     xxxIsDragging @ 0x1C0244970 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C024A384 (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C024D9FC (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // r14d
  unsigned int v5; // esi
  __int64 v6; // r15
  unsigned int v8; // r12d
  char *v9; // rdx
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // esi
  __int64 v17; // rsi
  __int64 v18; // r9
  int v19; // r8d
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // esi
  int v23; // esi
  __int64 v24; // rcx
  unsigned int MessagePos; // esi
  char v26; // cl
  const struct tagWND *v27; // rdx
  unsigned int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // r8d
  unsigned int v31; // edx
  struct tagMENUSTATE *v32; // rax
  struct tagMENUSTATE *v33; // rdi
  __int64 *v34; // rdx
  __int64 v35; // rax
  _QWORD *v36; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct tagWND *v42; // rax
  struct tagMENUSTATE *v43; // rax
  __int64 v44; // rdx
  int v45; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v46[3]; // [rsp+58h] [rbp-11h] BYREF
  struct tagMENUSTATE *v47; // [rsp+70h] [rbp+7h] BYREF
  __int64 v48; // [rsp+78h] [rbp+Fh]

  v3 = *((_QWORD *)a1 + 2);
  v45 = 0;
  v4 = a2 & 0xF;
  v5 = a2 - v4;
  v6 = a3;
  if ( a3 == 0x10000 )
    v6 = 0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 432) + 104LL) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0)
    && (((v5 - 61744) & 0xFFFFFFAF) != 0 || v5 == 61824) )
  {
    return;
  }
  if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0 )
  {
    v8 = v6;
    if ( (unsigned int)xxxCallHook(8, v5, (unsigned int)v6, 5) )
      return;
  }
  else
  {
    v8 = v6;
  }
  v9 = (char *)*((_QWORD *)a1 + 5);
  if ( v9[19] < 0 )
    return;
  if ( v5 <= 0xF090 )
  {
    if ( v5 != 61584 )
    {
      v10 = v5 - 61440;
      if ( v10 )
      {
        v11 = v10 - 16;
        if ( v11 )
        {
          v12 = v11 - 16;
          if ( v12 )
          {
            v13 = v12 - 16;
            if ( v13 )
            {
              v14 = v13 - 16;
              if ( v14 && (v15 = v14 - 16) != 0 )
              {
                v16 = v15 - 16;
                if ( v16 )
                {
                  v22 = v16 - 16;
                  if ( !v22 || v22 == 16 )
                  {
                    _GetKeyState(16LL);
                    xxxSBTrackInit(a1, v6);
                  }
                }
                else
                {
                  xxxSendMessage((ULONG_PTR)a1);
                }
              }
              else
              {
                xxxOldNextWindow((unsigned int)v6);
              }
              return;
            }
            v23 = 3;
            if ( (v9[31] & 1) != 0 )
              return;
            v24 = 12LL;
          }
          else
          {
            v23 = 6;
            if ( (v9[31] & 0x20) != 0 )
              return;
            v24 = 11LL;
          }
LABEL_96:
          xxxPlayEventSound(v24);
          xxxShowWindow(a1, v23 | gdwPUDFlags & 0x10000);
          return;
        }
        MessagePos = GetMessagePos();
        LODWORD(v47) = (__int16)MessagePos;
        HIDWORD(v47) = SHIWORD(MessagePos);
        if ( v4 && (!word_1C0335D70 || qword_1C0335D78 != v3) && !(unsigned int)xxxIsDragging(a1, v47) )
        {
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
          v26 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
          if ( (v26 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(
              (unsigned __int64 *)a1,
              0x112u,
              0xF100uLL,
              (v26 & 0x40) != 0 ? 45LL : 32LL,
              0,
              0,
              0LL,
              1,
              0);
          }
          goto LABEL_72;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61456) )
        {
          v28 = 10 - (v4 != 0);
LABEL_69:
          DelegateMoveSizeToShell(a1, v28);
          goto LABEL_72;
        }
        v29 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v29 + 30) & 4) != 0
          && (*(_BYTE *)(v29 + 31) & 1) != 0
          && !WindowArrangement::DragOperationFromMaximizedAllowed(a1, v27) )
        {
          goto LABEL_72;
        }
        v30 = MessagePos;
        v31 = 10 - (v4 != 0);
      }
      else
      {
        if ( v4 > 0xA )
        {
LABEL_72:
          xxxDeliverRestoreFocusMessage(a1);
          return;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61440) )
        {
          v28 = v4;
          goto LABEL_69;
        }
        v30 = GetMessagePos();
        v31 = v4;
      }
      xxxMoveSize(a1, v31, v30);
      goto LABEL_72;
    }
    goto LABEL_76;
  }
  switch ( v5 )
  {
    case 0xF100u:
      v43 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, 61696LL, v6);
      v33 = v43;
      if ( !v43 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v47, v43);
      **(_DWORD **)v44 |= 0x80000000;
      *(_DWORD *)(v44 + 8) |= 0x20u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v46, *(_QWORD *)v44);
      xxxMNKeyFilter(v46, v33, v8);
LABEL_99:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v46);
      if ( (*((_DWORD *)v33 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v33);
      if ( v47 )
        xxxUnlockMenuStateInternal(v47, 0);
      return;
    case 0xF120u:
      v24 = 9LL;
      v23 = 9;
      if ( (v9[31] & 0x21) == 1 )
      {
        if ( WindowArrangement::MoveWithArrangementAllowed(a1, (const struct tagWND *)v9) )
          IsSemiMaximized(a1);
        v24 = 10LL;
      }
      goto LABEL_96;
    case 0xF130u:
      if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
      {
        if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
        {
          xxxCallHook(7, *(_QWORD *)a1, 0LL, 10);
          goto LABEL_35;
        }
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
        {
LABEL_35:
          v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL);
          if ( !v17 )
            return;
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v17 + 16), 0);
          if ( v6 == 0xFFFFFFFFLL )
            LODWORD(v18) = -1;
          else
            v18 = *(_QWORD *)a1;
          v19 = 7;
          v20 = v17;
          v21 = *(_DWORD *)(gpsi + 928LL);
LABEL_39:
          PostMessage(v20, v21, v19, v18);
          return;
        }
      }
      if ( gptiTasklist )
      {
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, gptiTasklist, 0);
        PostThreadMessage(gptiTasklist, 0x112u, 61744LL, 0LL);
      }
      return;
    case 0xF140u:
      v42 = (struct tagWND *)HMValidateHandleNoSecure(WPP_MAIN_CB.AlignmentRequirement, 1);
      if ( !v42 || a1 == v42 )
      {
        StartScreenSaver(0LL);
        return;
      }
      v19 = 61760;
      v20 = (int)v42;
      v21 = 274;
      LODWORD(v18) = (*gpsi >> 9) & 1;
      goto LABEL_39;
    case 0xF150u:
      v35 = ValidateHwnd(v6);
      if ( v35 )
      {
        v36 = *(_QWORD **)(v35 + 200);
        v46[2] = 0LL;
        CurrentThread = KeGetCurrentThread();
        if ( !v36 )
          v36 = (_QWORD *)v35;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
        v46[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v46;
        v46[1] = v36;
        HMLockObject(v36);
        xxxSetForegroundWindowWithOptions(v36, 2LL, 0LL, 0);
        if ( (*(_BYTE *)(v36[5] + 31LL) & 0x20) != 0 )
          PostMessage((int)v36, 274, 61728, 0);
        ThreadUnlock1(v40, v39, v41);
      }
      break;
    case 0xF160u:
LABEL_76:
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground )
        return;
      v32 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, v5, v6);
      v33 = v32;
      if ( !v32 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v47, v32);
      *(_DWORD *)*v34 |= 0x80000000;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v46, *v34);
      xxxMNLoop(v46, v33, v6, v5 == 61792);
      goto LABEL_99;
    case 0xF170u:
      if ( v6 == -1 )
      {
        v47 = (struct tagMENUSTATE *)4;
        v48 = 3LL;
      }
      else
      {
        if ( v6 != 2 )
          return;
        v47 = (struct tagMENUSTATE *)5;
        if ( (unsigned int)PowerIsDisplayIdleExpired(v5 - 61808, &v45) )
          v48 = v45;
        else
          v48 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
      }
      QueuePowerRequest(&v47, 0LL);
      return;
    case 0xF180u:
      xxxHelpLoop(a1);
      break;
  }
}
