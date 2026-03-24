/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039E68
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034370 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039AC8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D1EC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120084 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D2320 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00346D4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     GetNonChildAncestor @ 0x1C0038928 (GetNonChildAncestor.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003A690 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C003A7E4 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C003A9BC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003A9E8 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C003AD48 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ??0?$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ @ 0x1C003ADDC (--0-$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C003AE18 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C003C880 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     LockW32Thread @ 0x1C003D9CC (LockW32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C00402D0 (xxxSendNotifyMessage.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     IsVisible @ 0x1C00680C4 (IsVisible.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     SetForegroundPriority @ 0x1C0223110 (SetForegroundPriority.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(struct tagWND *a1, unsigned int a2, char a3)
{
  unsigned __int64 v3; // rbx
  int v5; // r12d
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagWND *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r14
  struct tagWND *v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // r15
  __int64 i; // r9
  int v20; // ebx
  int v21; // ecx
  char v22; // r12
  unsigned int v23; // r14d
  __int64 v24; // rcx
  struct tagWND *j; // rdx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v36; // r15
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  struct tagWND *v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int ThreadId; // [rsp+48h] [rbp-B8h]
  unsigned int v47; // [rsp+4Ch] [rbp-B4h]
  __int64 v48[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v49; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h]
  __int128 v51; // [rsp+78h] [rbp-88h] BYREF
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int128 v53; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h]
  _QWORD v55[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v56[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v57[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v58; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-10h]
  _QWORD v60[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v61; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v62[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v63[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v64[80]; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v65; // [rsp+1A0h] [rbp+A0h]
  int v67; // [rsp+1B0h] [rbp+B0h]
  int v68; // [rsp+1B8h] [rbp+B8h]

  v3 = *(_QWORD *)a1;
  v52 = 0LL;
  v54 = 0LL;
  v50 = 0LL;
  v65 = a3 & 1;
  v51 = 0LL;
  v68 = a3 & 0x80;
  v5 = a3 & 2;
  v67 = a3 & 4;
  v53 = 0LL;
  v49 = 0LL;
  if ( a1 == (struct tagWND *)GetDesktopWindow(a1) )
    return 0;
  v7 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v7 + 19) < 0 )
    return 0;
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != v8 )
    return 0;
  v9 = *(struct tagWND **)(v8 + 120);
  if ( a1 == v9 || (*(_BYTE *)(v7 + 18) & 0x10) != 0 )
  {
    *(_DWORD *)(v8 + 388) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
    {
      if ( !v3 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 829LL);
      xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
    }
    return *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) == (_QWORD)a1;
  }
  v10 = *(_QWORD *)(gptiCurrent + 464LL);
  v48[0] = v6;
  v48[1] = v3;
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(*(_QWORD *)v10 + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5, v3, (__int64)v48, 5) )
  {
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x8000u;
  v11 = *(_QWORD *)(gptiCurrent + 432LL);
  v12 = *(_QWORD *)(v11 + 120);
  if ( v12 && *(char *)(*(_QWORD *)(v12 + 40) + 19LL) < 0 )
  {
    CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>(v62);
    v43 = *(_QWORD *)(gptiCurrent + 432LL);
    v13 = v55;
    v55[1] = 0LL;
    v55[0] = v43 + 120;
  }
  else
  {
    v56[1] = *(_QWORD *)(v11 + 120);
    v56[0] = v11 + 128;
    v13 = v56;
  }
  HMAssignmentLock(v13);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v15 = *(_QWORD *)(v14 + 120);
  if ( v15 )
  {
    if ( v14 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 432LL);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v51 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v51;
    *((_QWORD *)&v51 + 1) = v15;
    HMLockObject(v15);
    v36 = (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 0x20) << 16;
    if ( !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v15) )
    {
      ThreadUnlock1(v37);
      return 0;
    }
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v3, &v49, lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
    xxxSendMessage(v15, 6LL, v36, v3);
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    v38 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v39 = v49;
    *(_QWORD *)(v38 + 16) = v49;
    ThreadUnlock1(v39);
    v14 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v16 = *(struct tagWND **)(v14 + 120);
  if ( *(struct tagWND **)(v14 + 128) == v16
    && v9 == v16
    && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == v14 )
  {
    if ( !v16 )
      *(_DWORD *)(v14 + 388) &= ~0x800u;
    CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>(v63);
    v17 = *(_QWORD *)(gptiCurrent + 432LL) + 120LL;
    v57[1] = a1;
    v57[0] = v17;
    HMAssignmentLock(v57);
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v3, &v49, lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
    xxxWindowEvent(3u, 1u);
    anonymous_namespace_::RemoveEventMessage(*(_QWORD *)(gptiCurrent + 432LL), 6LL, 5LL);
    xxxMakeWindowForegroundWithState(0LL, 0LL);
    v18 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
    *(_QWORD *)&v53 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v53;
    *((_QWORD *)&v53 + 1) = v18;
    if ( v18 )
      HMLockObject(v18);
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
      xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
    if ( !v5 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      for ( i = *(_QWORD *)(GetDesktopWindow(a1) + 112);
            i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x10) == 0;
            i = *(_QWORD *)(i + 88) )
      {
        ;
      }
      if ( (a1 != (struct tagWND *)i || v18 && !(unsigned int)IsVisible(v18))
        && (!v67 || gpqForeground == *(_QWORD *)(gptiCurrent + 432LL)) )
      {
        v20 = 19;
        if ( a1 != (struct tagWND *)i )
          v20 = 3;
        xxxSetWindowPos(a1, 0, 0, v20);
        if ( (v20 & 0x10) == 0 )
          TraceLoggingProcessUsageDataAggregationHelper(a1);
      }
    }
    v21 = *(_DWORD *)(gptiCurrent + 488LL);
    v22 = 0;
    if ( (v21 & 0x200) == 0 && (!v18 || v18[2] != *((_QWORD *)a1 + 2)) )
    {
      v23 = 0;
      if ( v18 )
      {
        v42 = v18[2];
        v45 = v42;
        v58 = 0LL;
        v59 = 0LL;
        *(_DWORD *)(v42 + 488) |= 0x200u;
        ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
        v47 = 0;
        LockW32Thread(v42, &v58);
        xxxSendActivateAppMessage((const struct tagAAS *)&v45);
        *(_DWORD *)(v42 + 488) &= ~0x200u;
        PopAndFreeW32ThreadLock(&v58);
        v21 = *(_DWORD *)(gptiCurrent + 488LL);
        v23 = v47;
      }
      *(_DWORD *)(gptiCurrent + 488LL) = v21 | 0x200;
      v45 = *((_QWORD *)a1 + 2);
      v22 = 1;
      ThreadId = a2;
      v47 = v23 & 0xFFFFFFFC | 1;
      xxxSendActivateAppMessage((const struct tagAAS *)&v45);
    }
    v24 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v24 + 16) & 0x40) != 0 )
    {
      SetOrClrWF(1LL, a1, 257LL, 1LL);
      v24 = *((_QWORD *)a1 + 5);
    }
    if ( *(char *)(v24 + 19) >= 0 )
    {
      for ( j = a1; *((_QWORD *)j + 15); j = (struct tagWND *)*((_QWORD *)j + 15) )
        ;
      v61 = *(_OWORD *)LockPointer(v64, (char *)j + 200, a1);
      HMAssignmentLock(&v61);
    }
    v26 = 0LL;
    if ( v18 )
      v26 = *v18;
    anonymous_namespace_::xxxSendNCActivateMessage(a1);
    v27 = v65 + 1LL;
    v28 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
    if ( v28 )
      v27 |= (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v28 + 40) + 31LL) & 0x20) << 16;
    xxxSendMessage(a1, 6LL, v27, v26);
    xxxUpdateTray(a1);
    ThreadUnlock1(v29);
    SetOrClrWF(0LL, a1, 257LL, 1LL);
    if ( v68 )
    {
      v30 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( (*(_DWORD *)(v30 + 388) & 0x800) == 0 )
      {
        NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v30 + 112));
        if ( v32 != NonChildAncestor )
        {
          v40 = 0LL;
          if ( v32 && (*(_BYTE *)(*(_QWORD *)(v32 + 40) + 31LL) & 0x20) == 0 )
            v40 = (struct tagWND *)v32;
          v60[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v60;
          v60[2] = 0LL;
          v60[1] = v32;
          if ( v32 )
            HMLockObject(v32);
          anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, v40);
          ThreadUnlock1(v41);
        }
      }
    }
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) |= 0x40u;
    if ( gppiScreenSaver )
    {
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gppiScreenSaver )
      {
        CInputGlobals::UpdateLastInputTime(
          gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          8LL);
        *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
        v44 = *(_QWORD *)(gppiScreenSaver + 328LL);
        if ( v44 )
          SetForegroundPriority(v44, 1LL);
      }
    }
    else if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && !gbBlockSendInputResets )
    {
      CInputGlobals::UpdateLastInputTime(
        gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        8LL);
    }
    if ( v22 )
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200u;
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    v33 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v33 + 16) = v49;
    return *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) == (_QWORD)a1;
  }
  return 0;
}
