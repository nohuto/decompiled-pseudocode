/*
 * XREFs of xxxSysCommand @ 0x1C00DE67C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C01EC8EC (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C002990C (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     _PostThreadMessage @ 0x1C009575C (_PostThreadMessage.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0099940 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     xxxPlayEventSound @ 0x1C00DE8D0 (xxxPlayEventSound.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _GetMessagePos @ 0x1C00E6844 (_GetMessagePos.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01432F0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01CBDC8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C01F9090 (-HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0201C0C (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C0202580 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C0202C44 (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C020311C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0203380 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     ?StartScreenSaver@@YAXH@Z @ 0x1C0203424 (-StartScreenSaver@@YAXH@Z.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 *     xxxSBTrackInit @ 0x1C022D18C (xxxSBTrackInit.c)
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C0230B84 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C0230BEC (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     xxxIsDragging @ 0x1C0232C4C (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C0241E88 (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  PointerPromotion *v3; // r13
  char *v4; // r12
  unsigned int v5; // r14d
  __int64 v6; // r15
  unsigned int v7; // edi
  const struct tagWND *v9; // rdx
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  int v17; // edi
  unsigned int v18; // ecx
  char v19; // al
  unsigned int v20; // edi
  unsigned int MessagePos; // edi
  char v22; // cl
  const struct tagWND *v23; // rdx
  unsigned int v24; // edx
  unsigned int v25; // r8d
  unsigned int v26; // edx
  struct tagMENUSTATE *v27; // rax
  struct tagMENUSTATE *v28; // rsi
  _QWORD *v29; // rdx
  struct tagMENUSTATE *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct tagWND *v36; // rax
  __int64 v37; // r8
  struct tagWND *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r9
  struct tagTHREADINFO **v41; // rdi
  struct tagMENUSTATE *v42; // rax
  struct tagMENUSTATE *v43; // rdi
  __int64 v44; // rdx
  int v45; // [rsp+50h] [rbp-19h] BYREF
  __int128 v46; // [rsp+58h] [rbp-11h] BYREF
  __int64 v47; // [rsp+68h] [rbp-1h]
  struct tagMENUSTATE *v48; // [rsp+70h] [rbp+7h] BYREF
  __int64 v49; // [rsp+78h] [rbp+Fh]

  v3 = (PointerPromotion *)*((_QWORD *)a1 + 2);
  v4 = (char *)a1 + 40;
  v5 = a2 & 0xF;
  v45 = 0;
  v6 = a3;
  v7 = a2 - v5;
  if ( a3 == 0x10000 )
    v6 = 0LL;
  if ( (*(_QWORD *)(*((_QWORD *)v3 + 54) + 112LL) || (*(_BYTE *)(*(_QWORD *)v4 + 31LL) & 8) != 0)
    && v7 != 61760
    && v7 != 61808
    && v7 != 61744 )
  {
    return;
  }
  if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(8, v7, (unsigned int)v6, 5) )
  {
    return;
  }
  v9 = *(const struct tagWND **)v4;
  if ( *(char *)(*(_QWORD *)v4 + 19LL) < 0 )
    return;
  if ( v7 <= 0xF090 )
  {
    if ( v7 != 61584 )
    {
      v10 = v7 - 61440;
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
                  v20 = v16 - 16;
                  if ( !v20 || v20 == 16 )
                  {
                    _GetKeyState(16LL);
                    xxxSBTrackInit(a1);
                  }
                }
                else
                {
                  xxxSendMessage(a1, 0x10u);
                }
              }
              else
              {
                xxxOldNextWindow((unsigned int)v6);
              }
              return;
            }
            v17 = 3;
            if ( (*((_BYTE *)v9 + 31) & 1) != 0 )
              return;
            v18 = 12;
          }
          else
          {
            v17 = 6;
            if ( (*((_BYTE *)v9 + 31) & 0x20) != 0 )
              return;
            v18 = 11;
          }
LABEL_32:
          xxxPlayEventSound(v18);
          xxxShowWindow(a1, v17 | gdwPUDFlags & 0x10000u);
          return;
        }
        MessagePos = GetMessagePos();
        LODWORD(v48) = (__int16)MessagePos;
        HIDWORD(v48) = SHIWORD(MessagePos);
        if ( v5
          && !(unsigned int)PointerPromotion::HasPendingPromotion(
                              v3,
                              (struct tagTHREADINFO *)(unsigned int)SHIWORD(MessagePos))
          && !(unsigned int)xxxIsDragging(a1, v48) )
        {
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
          v22 = *(_BYTE *)(*(_QWORD *)v4 + 31LL);
          if ( (v22 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(
              a1,
              0x112u,
              0xF100uLL,
              (__int128 *)((v22 & 0x40) != 0 ? 45LL : 32LL),
              0,
              0,
              0LL,
              1,
              0);
          }
          goto LABEL_65;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61456) )
        {
          v24 = 10 - (v5 != 0);
LABEL_62:
          DelegateMoveSizeToShell(a1, v24);
          goto LABEL_65;
        }
        if ( (*(_BYTE *)(*(_QWORD *)v4 + 30LL) & 4) != 0
          && (*(_BYTE *)(*(_QWORD *)v4 + 31LL) & 1) != 0
          && !WindowArrangement::DragOperationFromMaximizedAllowed(a1, v23) )
        {
          goto LABEL_65;
        }
        v25 = MessagePos;
        v26 = 10 - (v5 != 0);
      }
      else
      {
        if ( v5 > 0xA )
        {
LABEL_65:
          xxxDeliverRestoreFocusMessage(a1);
          return;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61440) )
        {
          v24 = v5;
          goto LABEL_62;
        }
        v25 = GetMessagePos();
        v26 = v5;
      }
      xxxMoveSize(a1, v26, v25);
      goto LABEL_65;
    }
    goto LABEL_69;
  }
  switch ( v7 )
  {
    case 0xF100u:
      v42 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, 61696LL, v6);
      v43 = v42;
      if ( !v42 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v48, v42);
      **(_DWORD **)v44 |= 0x80000000;
      *(_DWORD *)(v44 + 8) |= 0x20u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v46, *(_QWORD *)v44);
      xxxMNKeyFilter(&v46, v43, (unsigned int)v6);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v46);
      if ( (*((_DWORD *)v43 + 2) & 0x100) != 0 )
        goto LABEL_103;
      v30 = v43;
LABEL_102:
      xxxMNEndMenuState(v30);
LABEL_103:
      if ( v48 )
        xxxUnlockMenuStateInternal(v48, 0);
      return;
    case 0xF120u:
      v19 = *((_BYTE *)v9 + 31);
      v18 = 9;
      v17 = 9;
      if ( (v19 & 0x20) == 0 && (v19 & 1) != 0 )
      {
        if ( WindowArrangement::MoveWithArrangementAllowed(a1, v9) )
          IsSemiMaximized(a1);
        v18 = 10;
      }
      goto LABEL_32;
    case 0xF130u:
      if ( (*(_DWORD *)(gpsi + 2120LL) & 8) == 0 )
        goto LABEL_89;
      if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
      {
        xxxCallHook(7, *(_QWORD *)a1, 0LL, 10);
      }
      else if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
      {
LABEL_89:
        if ( gptiTasklist )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, gptiTasklist, 0);
          PostThreadMessage(gptiTasklist, 0x112u, 0xF130uLL, 0LL);
        }
        return;
      }
      v41 = *(struct tagTHREADINFO ***)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL);
      if ( !v41 )
        return;
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v41[2], 0);
      if ( v6 == 0xFFFFFFFFLL )
        v40 = -1LL;
      else
        v40 = *(_QWORD *)a1;
      v37 = 7LL;
      v38 = (struct tagWND *)v41;
      v39 = *(unsigned int *)(gpsi + 928LL);
LABEL_84:
      PostMessage(v38, v39, v37, v40);
      return;
    case 0xF140u:
      v36 = (struct tagWND *)HMValidateHandleNoSecure(ghwndSwitch, 1);
      if ( !v36 || a1 == v36 )
      {
        StartScreenSaver(0);
        return;
      }
      v37 = 61760LL;
      v38 = v36;
      v39 = 274LL;
      v40 = (*gpsi >> 9) & 1;
      goto LABEL_84;
    case 0xF150u:
      v31 = ValidateHwnd(v6);
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 200);
        v47 = 0LL;
        v46 = 0LL;
        if ( !v32 )
          v32 = v31;
        ThreadLockAlways(v32, &v46);
        xxxSetForegroundWindowWithOptions(v32, 2u, 0, 0);
        if ( (*(_BYTE *)(*(_QWORD *)(v32 + 40) + 31LL) & 0x20) != 0 )
          PostMessage(v32, 274LL, 61728LL, 0LL);
        ThreadUnlock1(v34, v33, v35);
      }
      break;
    case 0xF160u:
LABEL_69:
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground )
        return;
      v27 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, v7, v6);
      v28 = v27;
      if ( !v27 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v48, v27);
      *(_DWORD *)*v29 |= 0x80000000;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v46, *v29);
      xxxMNLoop(&v46, v28, v6, v7 == 61792);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v46);
      if ( (*((_DWORD *)v28 + 2) & 0x100) != 0 )
        goto LABEL_103;
      v30 = v28;
      goto LABEL_102;
    case 0xF170u:
      if ( v6 == -1 )
      {
        v48 = (struct tagMENUSTATE *)4;
        v49 = 3LL;
      }
      else
      {
        if ( v6 != 2 )
          return;
        v48 = (struct tagMENUSTATE *)5;
        if ( (unsigned int)PowerIsDisplayIdleExpired(v7 - 61808, &v45) )
          v49 = v45;
        else
          v49 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
      }
      QueuePowerRequest(&v48, 0LL);
      return;
    case 0xF180u:
      xxxHelpLoop(a1);
      break;
  }
}
