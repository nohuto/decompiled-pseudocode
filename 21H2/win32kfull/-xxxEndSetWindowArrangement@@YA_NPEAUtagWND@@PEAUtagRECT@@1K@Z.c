/*
 * XREFs of ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C0049690 (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C002C560 (GetMonitorWorkRectForWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003B09C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042200 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0042310 (_MonitorFromRect.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C004B5EC (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     IntersectRect @ 0x1C0075160 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C016974C (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C01697D8 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C020A774 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C020A85C (-ArrangementStyleFromOverlap@@YAKK@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C020AE2C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C020AF40 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C020B708 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C020B7A8 (-IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C020C65C (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CEC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D62C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020ECE4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C023D56C (-ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023D6C8 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

bool __fastcall xxxEndSetWindowArrangement(struct tagWND *a1, struct tagRECT *a2, struct tagRECT *a3, char a4)
{
  unsigned int v4; // r12d
  const struct tagWND *v8; // rax
  bool v9; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  struct tagRECT *MonitorWorkRectForWindow; // rax
  char OverlapCoordinatesForArrangement; // al
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  struct tagMONITOR *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // rbx
  unsigned int v30; // r8d
  struct tagRECT *Prop; // rax
  struct tagWND *v32; // rdx
  bool v33; // r8
  bool v35; // [rsp+40h] [rbp-C0h]
  char v36; // [rsp+41h] [rbp-BFh]
  unsigned int v37; // [rsp+44h] [rbp-BCh]
  int v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  const struct tagWND *v42; // [rsp+60h] [rbp-A0h]
  _BYTE v43[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h]
  struct tagRECT *v45; // [rsp+78h] [rbp-88h]
  struct tagRECT v46; // [rsp+80h] [rbp-80h] BYREF
  __int128 v47; // [rsp+90h] [rbp-70h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-60h]
  __int128 v49; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-48h]
  _QWORD v51[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v52; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v53[44]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v54; // [rsp+250h] [rbp+150h] BYREF
  __int128 v55; // [rsp+260h] [rbp+160h] BYREF
  __int128 v56; // [rsp+270h] [rbp+170h] BYREF

  v4 = 2;
  v45 = a2;
  v41 = gptiCurrent;
  v8 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL);
  v42 = v8;
  if ( (a4 & 4) != 0 )
  {
    v9 = 0;
    v36 = 1;
    v35 = 0;
  }
  else
  {
    v36 = 0;
    v9 = !(a4 & 1);
    v35 = (a4 & 2) == 0;
  }
  v51[2] = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  if ( !v8 )
    return (char)v8;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v51[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v51;
  v51[1] = v42;
  HMLockObject(v42);
  if ( !*(_QWORD *)(v41 + 672) )
  {
    if ( v36 )
    {
      LOBYTE(v11) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3;
      if ( (_BYTE)v11 )
      {
        if ( (_BYTE)v11 != 3 )
        {
LABEL_12:
          v4 = 0;
          goto LABEL_58;
        }
        v12 = 19;
      }
      else
      {
        v12 = 18;
      }
      xxxArrangeWindow((__int64)a1, v12);
      goto LABEL_12;
    }
    v13 = MonitorFromRect(a2, 0, 0x12u);
    v41 = v13;
    if ( !v13 )
      goto LABEL_58;
    MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(&v52, v13, v42);
    v55 = 0LL;
    v46 = *MonitorWorkRectForWindow;
    if ( !(unsigned int)IntersectRect(&v55, &a2->left, &v46.left) )
      goto LABEL_58;
    v11 = v55 - *(_QWORD *)&a2->left;
    if ( (_QWORD)v55 == *(_QWORD *)&a2->left )
      v11 = *((_QWORD *)&v55 + 1) - *(_QWORD *)&a2->right;
    if ( v11 )
      goto LABEL_58;
    OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(&v46, a2, 1);
    v16 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
    v38 = v16;
    v17 = v16;
    if ( !v16 )
      goto LABEL_58;
    if ( v16 == 55555 )
      goto LABEL_58;
    v40 = (v16 != 55553) + 4;
    if ( !(unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v40) )
      goto LABEL_58;
    v37 = EvaluateArrangeState((__int64)a1);
    if ( v37 == 6 )
      goto LABEL_58;
    v11 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v11 + 31) & 0x10) == 0 )
      goto LABEL_58;
    if ( a3 )
    {
      v56 = 0LL;
      if ( !(unsigned int)IntersectRect(&v56, &a3->left, &v46.left) )
        goto LABEL_58;
      v11 = v56 - *(_QWORD *)&a3->left;
      if ( (_QWORD)v56 == *(_QWORD *)&a3->left )
        v11 = *((_QWORD *)&v56 + 1) - *(_QWORD *)&a3->right;
      if ( v11 )
        goto LABEL_58;
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v18 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v18 + 224) & 0x20) == 0 )
        {
          v19 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (((unsigned __int16)(v19 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v18) >> 8)) & 0x1FF) != 0
            || ((v20 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL),
                 (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2)
             || (v20 & 0x20000000) == 0
              ? (v21 = 0)
              : (v21 = 1),
                (W32GetCurrentThreadDpiAwarenessContext(v20) & 0xF) != 2
             || (W32GetCurrentThreadDpiAwarenessContext(v22) & 0x20000000) == 0
              ? (v23 = 0)
              : (v23 = 1),
                v21 != v23) )
          {
            if ( !(unsigned int)TransformRectBetweenCoordinateSpaces(a3, a3, a1, v42) )
              goto LABEL_58;
          }
          v17 = v38;
        }
      }
    }
    v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v49 = *(_QWORD *)(v24 + 416);
    *(_QWORD *)(v24 + 416) = &v49;
    *((_QWORD *)&v49 + 1) = v41;
    HMLockObject(v41);
    memset(&v53[2], 0, 0x148uLL);
    v39 = 0;
    v44 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v43[0] = 0;
    CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)v43);
    if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
      __fastfail(3u);
    v53[1] = &gActiveMoveSizeDataList;
    v53[0] = gActiveMoveSizeDataList;
    *(_QWORD *)(gActiveMoveSizeDataList + 8) = v53;
    gActiveMoveSizeDataList = (__int64)v53;
    PushW32ThreadLock((__int64)v53, &v47, (__int64)EditionRemoveFromMsdList);
    xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v40, v37, 1LL, v53, &v39);
    v54 = *v45;
    TransformShellProvidedRectangles((__int64)v53, v41, (v17 != 55553) + 1, &v54, 0LL, (__int64)v42, &v54.left, 0LL);
    v25 = _MonitorFromWindowInternal(a1, 2, 0);
    if ( (struct tagMONITOR *)v41 == v25 )
    {
      if ( v37 == 2 && v17 == 55553 || v37 == 3 && v17 != 55553 )
      {
        if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v54) )
          xxxSetWindowPos(
            a1,
            0LL,
            (unsigned int)v54.left,
            (unsigned int)v54.top,
            v54.right - v54.left,
            v54.bottom - v54.top,
            16 * !v9 + 3146244);
        goto LABEL_49;
      }
    }
    else
    {
      v53[29] = v41;
    }
    *(struct tagRECT *)&v53[31] = v54;
    if ( !v9 )
      HIDWORD(v53[42]) |= 0x20u;
    xxxApplyArrangeAction(a1, v37, v40, v39, (struct _MOVESIZEDATA *)v53);
LABEL_49:
    ThreadUnlock1(v26);
    v27 = *((_QWORD *)a1 + 5);
    if ( *(char *)(v27 + 20) >= 0 )
    {
      v28 = *(_BYTE *)(v27 + 233) & 3;
      if ( v28 != 3 )
      {
        if ( v28 )
        {
          if ( v9 )
            xxxSetForegroundWindowWithOptions((__int64)a1, 6LL, 0LL, 1LL);
          if ( IsLeftOrRightArranged(a1) )
          {
            SetOrClrWF(1, (__int64)a1, 0xDA80u, 1);
            v4 = 0;
          }
        }
      }
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v47);
    if ( v44 )
      CKernelStackSwap::TryEnableStackSwap((CKernelStackSwap *)v43);
  }
LABEL_58:
  v29 = ThreadUnlock1(v11);
  if ( v29 )
  {
    if ( v35 )
      NotifyShell::ArrangementCompleted(*(_QWORD *)a1, v4);
    if ( v9 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v29 + 16), 0);
    if ( !v4 )
    {
      if ( a3 )
      {
        Prop = (struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
        if ( Prop )
          *Prop = *a3;
      }
    }
    if ( ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement **)a1, (struct tagWND *)0x10, v30) )
    {
      LOBYTE(v32) = 1;
      NotifyShell::TrackedWindowPosChanged(a1, v32, v33);
    }
  }
  LOBYTE(v8) = v4 == 0;
  return (char)v8;
}
