/*
 * XREFs of xxxSwitchDesktop @ 0x1C0029864
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 *     NtUserSwitchDesktop @ 0x1C00283B0 (NtUserSwitchDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D84E8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSwitchDesktopWithFade @ 0x1C011D7D0 (xxxSwitchDesktopWithFade.c)
 *     RemoteDisableScreen @ 0x1C01286A0 (RemoteDisableScreen.c)
 *     RemoteRedrawScreen @ 0x1C0162DB4 (RemoteRedrawScreen.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C000AD64 (IPostQuitMessage.c)
 *     zzzAttachToQueue @ 0x1C0011EF4 (zzzAttachToQueue.c)
 *     WPP_RECORDER_SF_S @ 0x1C002922C (WPP_RECORDER_SF_S.c)
 *     zzzCancelJournalling @ 0x1C00292F8 (zzzCancelJournalling.c)
 *     ResetPointerDevices @ 0x1C0029408 (ResetPointerDevices.c)
 *     bSetDevDragRect @ 0x1C0029460 (bSetDevDragRect.c)
 *     EraseBitmap @ 0x1C0029604 (EraseBitmap.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00296FC (zzzEnableDwmPointerSupport.c)
 *     SetPointer @ 0x1C002A420 (SetPointer.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C002A7D8 (DrvOcclusionStateChangeNotify.c)
 *     ClearKeyboardStates @ 0x1C002A81C (ClearKeyboardStates.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C002A89C (GreLddmProcessDesktopSwitch.c)
 *     GreDesktopSwitch @ 0x1C002A9C8 (GreDesktopSwitch.c)
 *     FreeAllSpbs @ 0x1C002AA90 (FreeAllSpbs.c)
 *     WPP_RECORDER_SF_SL @ 0x1C002AAC0 (WPP_RECORDER_SF_SL.c)
 *     DwmSyncDesktopSwitch @ 0x1C002AD90 (DwmSyncDesktopSwitch.c)
 *     ComposeWindow @ 0x1C003531C (ComposeWindow.c)
 *     IsNonImmersiveBand @ 0x1C00372D4 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_SF_d @ 0x1C003AC94 (WPP_RECORDER_SF_d.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D1EC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     GetWindowCloakState @ 0x1C004DB6C (GetWindowCloakState.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C004E944 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     zzzSetDesktop @ 0x1C0065E20 (zzzSetDesktop.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00FF6F0 (xxxBroadcastDisplaySettingsChange.c)
 *     SetTimerCoalescingTolerance @ 0x1C0111E00 (SetTimerCoalescingTolerance.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     StopFade @ 0x1C01E7A90 (StopFade.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C02071A4 (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3)
{
  int v3; // r12d
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  _UNKNOWN **v9; // rcx
  __int64 NameInfo; // rax
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  const char *v21; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  struct tagWND *v23; // rcx
  __int128 *v24; // rdx
  _QWORD *i; // rsi
  __int128 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int128 *v29; // rcx
  int v30; // eax
  __int64 v31; // rbx
  HSURF v32; // rcx
  Edgy *v33; // rcx
  struct tagWND **v34; // rdx
  int v35; // r15d
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  BOOL v41; // r8d
  __int64 v42; // rcx
  int v43; // ebx
  unsigned int v44; // ebx
  _QWORD *v45; // rbx
  __int64 v46; // rsi
  __int64 v47; // r14
  BOOL v48; // r8d
  int WindowCloakState; // eax
  BOOL v50; // edx
  BOOL v51; // eax
  __int64 v52; // rcx
  _QWORD *j; // rbx
  __int128 *v54; // rcx
  __int128 *v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  __int128 *v58; // rdx
  int v59; // eax
  __m128i si128; // xmm0
  int v61; // eax
  int v62; // edx
  int v63; // ecx
  __int64 v65; // rcx
  __int64 v66; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  int ObjectType; // [rsp+20h] [rbp-E0h]
  int ObjectTypea; // [rsp+20h] [rbp-E0h]
  void *Handle; // [rsp+50h] [rbp-B0h] BYREF
  PETHREAD Thread; // [rsp+58h] [rbp-A8h]
  __int128 v74; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+70h] [rbp-90h]
  __int128 v76; // [rsp+80h] [rbp-80h] BYREF
  __int64 v77; // [rsp+90h] [rbp-70h]
  __int128 v78; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h]
  __int128 v80; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v81; // [rsp+C8h] [rbp-38h]
  __int128 v82; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v83; // [rsp+E0h] [rbp-20h]
  __int128 v84; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-8h]
  __int128 v86; // [rsp+100h] [rbp+0h]
  __int64 v87; // [rsp+110h] [rbp+10h]
  __int128 v88; // [rsp+118h] [rbp+18h]
  __int64 v89; // [rsp+128h] [rbp+28h]
  __int128 v90; // [rsp+130h] [rbp+30h]
  __int64 v91; // [rsp+140h] [rbp+40h]
  _BYTE v92[56]; // [rsp+148h] [rbp+48h] BYREF

  v81 = 0LL;
  v3 = 0;
  Handle = 0LL;
  v79 = 0LL;
  v85 = 0LL;
  v5 = a2;
  v6 = a1;
  v80 = 0LL;
  v78 = 0LL;
  v7 = gptiCurrent;
  v83 = 0LL;
  v84 = 0LL;
  v82 = 0LL;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !a1 )
    v6 = *(_QWORD *)(a2 + 40);
  if ( (*(_DWORD *)(v6 + 64) & 4) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(v6 + 56);
  v9 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    NameInfo = ObQueryNameInfo(a2);
    if ( NameInfo )
      NameInfo = ObQueryNameInfo(v5) + 8;
    if ( NameInfo )
    {
      v14 = ObQueryNameInfo(v5);
      if ( v14 )
        v14 = ObQueryNameInfo(v5) + 8;
      v15 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      LODWORD(v15) = 0;
    }
    WPP_RECORDER_SF_SL(v15, v11, v12, v13);
    v9 = &WPP_RECORDER_INITIALIZED;
  }
  if ( grpdeskRitInput && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = ObQueryNameInfo(v5);
    if ( v16 )
      v16 = ObQueryNameInfo(v5) + 8;
    if ( v16 )
    {
      v20 = ObQueryNameInfo(v5);
      if ( v20 )
        v20 = ObQueryNameInfo(v5) + 8;
      v21 = *(const char **)(v20 + 8);
    }
    else
    {
      v21 = 0LL;
    }
    WPP_RECORDER_SF_S((__int64)v21, v17, v18, v19, ObjectType, v21);
  }
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  if ( (PVOID)v5 != gspdeskDisconnect && !PsIsSystemThread(CurrentThread) && (PVOID)v5 != grpdeskLogon )
  {
    LOBYTE(v9) = (*(_BYTE *)(v6 + 64) & 1) != 0;
    if ( ((unsigned __int8)v9 & ((a3 & 2) == 0)) != 0 )
    {
      ThreadProcessId = PsGetThreadProcessId(CurrentThread);
      LODWORD(v9) = gpidLogon;
      if ( ThreadProcessId != (HANDLE)gpidLogon )
        return 3221225506LL;
    }
  }
  if ( gbDesktopLocked && (!gspdeskDisconnect || (PVOID)v5 != gspdeskDisconnect) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_((_DWORD)v9, a2, 8, 28, (__int64)&WPP_4cc55f0eccd63a8558931143e45fab5e_Traceguids);
    }
    LockObjectAssignment(gspdeskShouldBeForeground, v5);
    return 0LL;
  }
  PushW32ThreadLock(v5, &v84, UserDereferenceObject);
  ObfReferenceObject((PVOID)v5);
  ObOpenObjectByPointer((PVOID)v5, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  PushW32ThreadLock(Handle, &v82, AllowDesktopDestruction);
  if ( *(_QWORD *)(gptiCurrent + 456LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v23 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v68 = *(_QWORD *)(gptiCurrent + 416LL);
    v75 = 0LL;
    *(_QWORD *)&v74 = v68;
    *(_QWORD *)(gptiCurrent + 416LL) = &v74;
    *((_QWORD *)&v74 + 1) = v23;
    HMLockObject(v23);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((int)gspwndAltTab, 16, 0, 0, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v69);
  }
  v24 = (__int128 *)grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) && gpqForeground )
    {
      *((_QWORD *)&v76 + 1) = *(_QWORD *)(gpqForeground + 120LL);
      *(_QWORD *)&v76 = grpdeskRitInput + 88LL;
      HMAssignmentLock(&v76);
      xxxSetForegroundWindow2(0LL, gptiCurrent, 32LL);
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
      {
        v26 = (__int128 *)*(i - 39);
        v24 = (__int128 *)gObjDummyLock;
        v27 = *((_QWORD *)v26 + 12);
        if ( v27 )
          v24 = (__int128 *)(v27 + 392);
        v28 = *((_QWORD *)v26 + 11);
        v29 = (__int128 *)gObjDummyLock;
        if ( v28 )
          v29 = (__int128 *)(v28 + 392);
        v30 = *((_DWORD *)v26 + 97);
        v77 = *((_QWORD *)&gpsiLock + 2);
        v87 = *((_QWORD *)v26 + 2);
        v89 = *((_QWORD *)v29 + 2);
        v91 = *((_QWORD *)v24 + 2);
        v76 = gpsiLock;
        v86 = *v26;
        v88 = *v29;
        v90 = *v24;
        if ( (v30 & 1) != 0 )
        {
          PostUpdateKeyStateEvent(v26);
          v30 = *((_DWORD *)v26 + 97);
        }
        *((_DWORD *)v26 + 97) = v30 & 0xFFFFFEFF;
      }
      if ( grpdeskRitInput )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0 )
        {
          if ( gfade[2] )
            StopFade();
          bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
          ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL));
          v31 = *(_QWORD *)(gpDispInfo + 40LL);
          GreLockDynamicModeChange(v31);
          GreUnlockDynamicModeChange(v31);
          v32 = *(HSURF *)(v6 + 120);
          if ( v32 )
            EraseBitmap(v32);
          v3 = 1;
        }
        if ( grpdeskRitInput )
        {
          v33 = *(Edgy **)(grpdeskRitInput + 240LL);
          if ( v33 )
            Edgy::FreeEdgyFrameData(v33, (struct tagEDGY_DATA *)v24);
        }
      }
      v7 = gptiCurrent;
    }
  }
  CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(v92);
  LockObjectAssignment(grpdeskRitInput, v5);
  gdwRitInputDesktopId = ***(_QWORD ***)(grpdeskRitInput + 8LL);
  CitDesktopSwitch();
  v34 = *(struct tagWND ***)(v5 + 8);
  if ( (*((_DWORD *)*v34 + 16) & 1) != 0 )
    ComposeWindow(v34[3]);
  FreeAllSpbs();
  v35 = zzzSetDesktop(gptiRit);
  if ( v35 >= 0 )
  {
    v36 = *(_QWORD *)(v8 + 16);
    v37 = *(_QWORD *)(v8 + 24);
    if ( *(_QWORD *)(v36 + 432) != v37 )
    {
      AllocQueue(0LL, v37);
      ++*(_DWORD *)(*(_QWORD *)(v8 + 24) + 392LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v8 + 16), *(struct tagQ **)(v8 + 24), 0LL, 0);
      v36 = *(_QWORD *)(v8 + 16);
    }
    v35 = zzzSetDesktop((struct tagTHREADINFO *)v36);
    if ( v35 >= 0 )
    {
      v38 = *(_QWORD *)(v5 + 8);
      v39 = *(unsigned int *)(*(_QWORD *)v38 + 64LL);
      if ( (v39 & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v39);
        v40 = (void *)UserReferenceDwmApiPort();
        DwmSyncDesktopSwitch(v40);
        EnterCrit(0LL, 1LL);
        v38 = *(_QWORD *)(v5 + 8);
      }
      v41 = v3 && (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0;
      GreDesktopSwitch(
        *(_QWORD *)(gpDispInfo + 40LL),
        *(_DWORD *)(*(_QWORD *)v38 + 64LL) & 1,
        v41,
        **(_QWORD **)v38,
        ObjectTypea);
      if ( v3 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) )
      {
        SetPointer(0LL);
        SetPointer(1LL);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(v5 + 8) + 64LL) & 1, 0);
      }
      v42 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL);
      *(_QWORD *)&v78 = *(_QWORD *)(v7 + 416);
      *(_QWORD *)(v7 + 416) = &v78;
      *((_QWORD *)&v78 + 1) = v42;
      if ( v42 )
        HMLockObject(v42);
      GreLddmProcessDesktopSwitch();
      if ( !v3 || (v43 = 9, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v43 = 1;
      v44 = (4 * (*(_DWORD *)(**(_QWORD **)(v5 + 8) + 64LL) & 1)) | v43;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v44);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(v5 + 8) + 24LL), 0, 0, 323);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v44);
      v45 = *(_QWORD **)(v5 + 88);
      if ( !v45
        || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v5 + 88)) + 25) & 1) != 0
        || (*(_BYTE *)(v45[5] + 234LL) & 0x20) != 0 && (GetWindowCloakState(v45) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(v5 + 8) + 176LL) == *(_QWORD *)(v45[2] + 424LL)
        && (GetWindowCloakState(v45) & 1) != 0 )
      {
        v45 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL) + 112LL);
        if ( v45 )
        {
          do
          {
            v46 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 176LL);
            v47 = *(_QWORD *)(v45[2] + 424LL);
            if ( !(unsigned int)IsNonImmersiveBand(v45) || v46 == v47 || (*(_BYTE *)(v45[5] + 234LL) & 0x20) != 0 )
            {
              WindowCloakState = GetWindowCloakState(v45);
              v50 = v46 == v47 && (WindowCloakState & 1) != 0;
              v51 = WindowCloakState || (*(_BYTE *)(v45[5] + 27LL) & 8) != 0;
              v48 = v50 || v51;
            }
            if ( (*(_BYTE *)(v45[5] + 31LL) & 0x18) == 0x10 && !v48 )
              break;
            v45 = (_QWORD *)v45[11];
          }
          while ( v45 );
          v7 = gptiCurrent;
        }
      }
      HMAssignmentUnlock(v5 + 88);
      if ( v45 )
      {
        if ( (*(_BYTE *)(v45[5] + 23LL) & 7) == 4 )
        {
          SetOrClrWF(0LL, v45, 1799LL, 1LL);
          SetOrClrWF(1LL, v45, 1793LL, 1LL);
        }
        *(_QWORD *)&v80 = *(_QWORD *)(v7 + 416);
        *(_QWORD *)(v7 + 416) = &v80;
        *((_QWORD *)&v80 + 1) = v45;
        HMLockObject(v45);
        xxxSetForegroundWindow2(v45, v7, 32LL);
        ThreadUnlock1(v65);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 32LL);
      }
      ThreadUnlock1(v52);
      ClearKeyboardStates();
      for ( j = *(_QWORD **)(grpdeskRitInput + 168LL); j != (_QWORD *)(grpdeskRitInput + 168LL); j = (_QWORD *)*j )
      {
        v54 = (__int128 *)*(j - 39);
        v55 = (__int128 *)gObjDummyLock;
        v56 = *((_QWORD *)v54 + 12);
        if ( v56 )
          v55 = (__int128 *)(v56 + 392);
        v57 = *((_QWORD *)v54 + 11);
        v58 = (__int128 *)gObjDummyLock;
        if ( v57 )
          v58 = (__int128 *)(v57 + 392);
        v59 = *((_DWORD *)v54 + 97);
        v91 = *((_QWORD *)&gpsiLock + 2);
        v89 = *((_QWORD *)v54 + 2);
        v87 = *((_QWORD *)v58 + 2);
        v75 = *((_QWORD *)v55 + 2);
        v90 = gpsiLock;
        v88 = *v54;
        v86 = *v58;
        v74 = *v55;
        if ( (v59 & 0x100) == 0 )
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
          *((_DWORD *)v54 + 97) = v59 | 0x101;
          *(__int128 *)((char *)v54 + 196) = (__int128)si128;
          *(__int128 *)((char *)v54 + 212) = (__int128)si128;
          PostUpdateKeyStateEvent(v54);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0);
      KePulseEvent((PRKEVENT)gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 6u);
      if ( (PVOID)v5 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(v5 + 40) + 64LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v61 = *(_DWORD *)(v5 + 48);
      if ( (v61 & 0x20) != 0 )
      {
        v66 = *(_QWORD *)(v5 + 8);
        if ( v66 )
        {
          if ( *(_QWORD *)(v66 + 24) )
          {
            *(_DWORD *)(v5 + 48) = v61 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(v5, 1LL, 0LL);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
    }
  }
  PopAndFreeAlwaysW32ThreadLock(&v82);
  PopAndFreeW32ThreadLock(&v84);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v62) = 4;
    WPP_RECORDER_SF_d(v63, v62, 3, 29, (__int64)&WPP_4cc55f0eccd63a8558931143e45fab5e_Traceguids, v35);
  }
  return (unsigned int)v35;
}
