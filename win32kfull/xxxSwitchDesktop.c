__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v6; // r13
  PDEVICE_OBJECT *v8; // r8
  char v9; // si
  char v10; // bl
  _UNKNOWN **v11; // r9
  char v12; // r15
  __int64 v13; // r9
  __int64 NameInfo; // rax
  const char *v15; // rcx
  char v16; // bl
  char v17; // r14
  __int64 v18; // r9
  __int64 v19; // rax
  const char *v20; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  void *v22; // rdx
  struct tagEDGY_DATA *v23; // rdx
  __int64 v24; // r12
  struct tagWND *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // r15
  _QWORD *v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // rcx
  int v34; // r14d
  Edgy *v35; // rcx
  struct tagWND **v36; // rcx
  int v37; // r13d
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rbx
  void *v41; // rax
  int v42; // r8d
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // ebx
  _QWORD *v46; // rdx
  __int64 v47; // r12
  const struct tagWND *v48; // rbx
  __int64 v49; // r14
  __int64 v50; // r15
  int v51; // r8d
  unsigned int WindowCloakState; // eax
  int v53; // r8d
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r14
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rcx
  _QWORD *i; // rbx
  __int64 v64; // rcx
  int v65; // eax
  __m128i si128; // xmm0
  __int64 v67; // rdx
  __int64 v68; // rcx
  HANDLE ThreadProcessId; // rax
  int v70; // eax
  int ObjectType; // [rsp+20h] [rbp-B9h]
  int ObjectTypea; // [rsp+20h] [rbp-B9h]
  int AccessMode; // [rsp+28h] [rbp-B1h]
  int Handle; // [rsp+30h] [rbp-A9h]
  int v75; // [rsp+38h] [rbp-A1h]
  int v76[2]; // [rsp+40h] [rbp-99h]
  void *v77; // [rsp+50h] [rbp-89h] BYREF
  __int64 v78; // [rsp+58h] [rbp-81h]
  __int64 v79; // [rsp+60h] [rbp-79h]
  PETHREAD Thread; // [rsp+68h] [rbp-71h]
  __int128 v81; // [rsp+70h] [rbp-69h] BYREF
  __int64 v82; // [rsp+80h] [rbp-59h]
  __int128 v83; // [rsp+88h] [rbp-51h] BYREF
  __int64 v84; // [rsp+98h] [rbp-41h]
  _QWORD v85[2]; // [rsp+A0h] [rbp-39h] BYREF
  _QWORD v86[3]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v87; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-1h]
  __int128 v89; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v90; // [rsp+F0h] [rbp+17h]

  v84 = 0LL;
  v82 = 0LL;
  v90 = 0LL;
  v6 = a1;
  v83 = 0LL;
  v81 = 0LL;
  v78 = gptiCurrent;
  v77 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v87 = 0LL;
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
  v79 = *(_QWORD *)(v6 + 56);
  v8 = &WPP_GLOBAL_Control;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v10 = 0;
  }
  v11 = &WPP_RECORDER_INITIALIZED;
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( !ObQueryNameInfo(a2) || ObQueryNameInfo(a2) == -8 )
    {
      v15 = 0LL;
    }
    else
    {
      NameInfo = ObQueryNameInfo(a2);
      if ( NameInfo )
        NameInfo = ObQueryNameInfo(a2) + 8;
      v15 = *(const char **)(NameInfo + 8);
    }
    WPP_RECORDER_AND_TRACE_SF_SL(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v12,
      v13,
      ObjectType,
      AccessMode,
      Handle,
      v75,
      v15);
    v8 = &WPP_GLOBAL_Control;
    v11 = &WPP_RECORDER_INITIALIZED;
  }
  if ( grpdeskRitInput )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( !ObQueryNameInfo(a2) || ObQueryNameInfo(a2) == -8 )
      {
        v20 = 0LL;
      }
      else
      {
        v19 = ObQueryNameInfo(a2);
        if ( v19 )
          v19 = ObQueryNameInfo(a2) + 8;
        v20 = *(const char **)(v19 + 8);
      }
      WPP_RECORDER_AND_TRACE_SF_S(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        v18,
        4u,
        3u,
        0x1Bu,
        (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids,
        v20);
    }
  }
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  if ( (PVOID)a2 != gspdeskDisconnect
    && !PsIsSystemThread(CurrentThread)
    && (PVOID)a2 != grpdeskLogon
    && (*(_DWORD *)(v6 + 64) & 1) != 0
    && (a3 & 2) == 0
    && PsGetThreadProcessId(CurrentThread) != (HANDLE)gpidLogon )
  {
    return 3221225506LL;
  }
  if ( gbDesktopLocked && (!gspdeskDisconnect || (PVOID)a2 != gspdeskDisconnect) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = &WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids;
      LOBYTE(v22) = v9;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v22,
        (_DWORD)v8,
        (_DWORD)v11,
        4,
        8,
        28,
        (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids);
    }
    LockObjectAssignment(gspdeskShouldBeForeground, a2);
    return 0LL;
  }
  PushW32ThreadLock(a2, &v89, UserDereferenceObject);
  ObfReferenceObject((PVOID)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &v77);
  PushW32ThreadLock(v77, &v87, AllowDesktopDestruction);
  v24 = v78;
  if ( *(_QWORD *)(v78 + 456) )
  {
    zzzCancelJournalling();
    if ( (unsigned int)Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage() )
      SuppressPointerDeviceContacts();
    else
      ResetPointerDevicesOld();
  }
  v25 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v86[0] = *(_QWORD *)(v24 + 416);
    *(_QWORD *)(v24 + 416) = v86;
    v86[2] = 0LL;
    v86[1] = v25;
    HMLockObject(v25);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(gspwndAltTab, 0x10u, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v27, v26, v28);
  }
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) )
    {
      v23 = (struct tagEDGY_DATA *)gpqForeground;
      if ( gpqForeground )
      {
        v85[0] = grpdeskRitInput + 88LL;
        v85[1] = *(_QWORD *)(gpqForeground + 128LL);
        HMAssignmentLock(v85, 0LL);
        xxxSetForegroundWindow2(0LL, v24, 32LL);
      }
    }
  }
  if ( grpdeskRitInput )
  {
    v29 = (_QWORD *)(grpdeskRitInput + 168LL);
    v30 = *(_QWORD **)(grpdeskRitInput + 168LL);
    if ( (_QWORD *)*v29 != v29 )
    {
      do
      {
        v31 = *(v30 - 39);
        if ( (*(_DWORD *)(v31 + 396) & 1) != 0 )
          PostUpdateKeyStateEvent(*(v30 - 39));
        *(_DWORD *)(v31 + 396) &= ~0x100u;
        v30 = (_QWORD *)*v30;
      }
      while ( v30 != v29 );
    }
  }
  if ( grpdeskRitInput && (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0 )
  {
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
    ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL));
    v32 = *(_QWORD *)(gpDispInfo + 40LL);
    GreLockDynamicModeChange(v32);
    GreUnlockDynamicModeChange(v32);
    v33 = *(_QWORD *)(v6 + 120);
    if ( v33 )
      EraseBitmap(v33);
    v34 = 1;
  }
  else
  {
    v34 = 0;
  }
  if ( grpdeskRitInput )
  {
    v35 = *(Edgy **)(grpdeskRitInput + 240LL);
    if ( v35 )
      Edgy::FreeEdgyFrameData(v35, v23);
  }
  LockObjectAssignment(grpdeskRitInput, a2);
  gdwRitInputDesktopId = ***(_QWORD ***)(grpdeskRitInput + 8LL);
  SynchronizeContext();
  UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch();
  CitDesktopSwitch();
  v36 = *(struct tagWND ***)(a2 + 8);
  if ( (*((_DWORD *)*v36 + 16) & 1) != 0 )
    ComposeWindow(v36[3]);
  FreeAllSpbs();
  v37 = zzzSetDesktop(gptiRit);
  if ( v37 >= 0 )
  {
    v38 = v79;
    if ( *(_QWORD *)(*(_QWORD *)(v79 + 16) + 432LL) != *(_QWORD *)(v79 + 24) )
    {
      AllocQueue(0LL);
      tagQ::zzzAttachToQueue(*(tagQ **)(v38 + 24), *(struct tagTHREADINFO **)(v38 + 16), 0LL, 0);
    }
    v37 = zzzSetDesktop(*(struct tagTHREADINFO **)(v38 + 16));
    if ( v37 >= 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v38 + 16) + 456LL) != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4150LL);
      if ( a2 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4151LL);
      v39 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v39 + 64) & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v39);
        v40 = ***(_QWORD ***)(a2 + 8);
        v41 = (void *)UserReferenceDwmApiPort();
        DwmSyncDesktopSwitch(v41, v40, a4);
        EnterCrit(1LL, 0LL);
      }
      if ( !gbIgnoreStressedOutStuff && a2 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4165LL);
      if ( !v34 || (v42 = 1, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v42 = 0;
      GreDesktopSwitch(
        *(_QWORD *)(gpDispInfo + 40LL),
        *(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1,
        v42,
        ***(_QWORD ***)(a2 + 8),
        ObjectTypea);
      if ( v34 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) )
      {
        SetPointer(0LL);
        SetPointer(1LL);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1, 0LL);
      }
      v43 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
      *(_QWORD *)&v81 = *(_QWORD *)(v24 + 416);
      *(_QWORD *)(v24 + 416) = &v81;
      *((_QWORD *)&v81 + 1) = v43;
      if ( v43 )
        HMLockObject(v43);
      GreLddmProcessDesktopSwitch();
      if ( !v34 || (v44 = 9, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v44 = 1;
      v45 = v44 | (4 * (*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1));
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v45);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 24LL), 0, 0, 323);
      if ( !gbIgnoreStressedOutStuff && a2 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4219LL);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v45);
      v47 = a2 + 88;
      v48 = *(const struct tagWND **)(a2 + 88);
      if ( !v48
        || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(a2 + 88)) + 25) & 1) != 0
        || (*(_BYTE *)(*((_QWORD *)v48 + 5) + 232LL) & 0x40) != 0 && (GetWindowCloakState(v48) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(a2 + 8) + 176LL) == *(_QWORD *)(*((_QWORD *)v48 + 2) + 424LL)
        && (GetWindowCloakState(v48) & 1) != 0 )
      {
        v48 = *(const struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 112LL);
        if ( v48 )
        {
          do
          {
            v49 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 176LL);
            v50 = *(_QWORD *)(*((_QWORD *)v48 + 2) + 424LL);
            if ( !(unsigned int)IsNonImmersiveBand(v48, v46, 0LL)
              || v49 == v50
              || (v46 = (_QWORD *)((char *)v48 + 40), (*(_BYTE *)(*((_QWORD *)v48 + 5) + 232LL) & 0x40) != 0) )
            {
              WindowCloakState = GetWindowCloakState(v48);
              if ( v49 != v50 || (v53 = 1, (WindowCloakState & 1) == 0) )
                v53 = 0;
              v46 = (_QWORD *)((char *)v48 + 40);
              if ( WindowCloakState || (v54 = 0, (*(_BYTE *)(*v46 + 27LL) & 8) != 0) )
                v54 = 1;
              if ( v53 || (v51 = 0, v54) )
                v51 = 1;
            }
            LOBYTE(v46) = *(_BYTE *)(*v46 + 31LL) & 0x18;
            if ( (_BYTE)v46 == 16 && !v51 )
              break;
            v48 = (const struct tagWND *)*((_QWORD *)v48 + 11);
          }
          while ( v48 );
          v47 = a2 + 88;
        }
      }
      HMAssignmentUnlock(v47);
      if ( v48 )
      {
        if ( !gbIgnoreStressedOutStuff && *(_QWORD *)(*((_QWORD *)v48 + 2) + 456LL) != grpdeskRitInput )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4327LL);
        v58 = v78;
        *(_QWORD *)&v83 = *(_QWORD *)(v78 + 416);
        *(_QWORD *)(v78 + 416) = &v83;
        *((_QWORD *)&v83 + 1) = v48;
        HMLockObject(v48);
        xxxSetForegroundWindow2(v48, v58, 32LL);
        ThreadUnlock1(v60, v59, v61);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 32LL);
      }
      ThreadUnlock1(v56, v55, v57);
      ClearKeyboardStates(v62);
      for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
      {
        v64 = *(i - 39);
        v65 = *(_DWORD *)(v64 + 396);
        if ( (v65 & 0x100) == 0 )
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
          *(_DWORD *)(v64 + 396) = v65 | 0x101;
          *(__m128i *)(v64 + 204) = si128;
          *(__m128i *)(v64 + 220) = si128;
          PostUpdateKeyStateEvent(v64);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0LL);
      KePulseEvent(gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 6);
      if ( (PVOID)a2 == grpdeskLogon )
      {
        ThreadProcessId = PsGetThreadProcessId(Thread);
        v68 = gpidLogon;
        if ( ThreadProcessId == (HANDLE)gpidLogon )
        {
          v68 = *(unsigned int *)(*(_QWORD *)(a2 + 40) + 64LL);
          if ( (v68 & 1) != 0 )
            SetTimerCoalescingTolerance(3LL);
        }
      }
      v70 = *(_DWORD *)(a2 + 48);
      if ( (v70 & 0x20) != 0 )
      {
        v68 = *(_QWORD *)(a2 + 8);
        if ( v68 )
        {
          if ( *(_QWORD *)(v68 + 24) )
          {
            *(_DWORD *)(a2 + 48) = v70 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1LL, 0LL, 0LL);
          }
        }
      }
      DrvOcclusionStateChangeNotify(v68, v67);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
    }
  }
  PopAndFreeAlwaysW32ThreadLock(&v87);
  PopAndFreeW32ThreadLock(&v89);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v76[0] = v37;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      3u,
      0x1Du,
      (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids,
      *(_QWORD *)v76);
  }
  return (unsigned int)v37;
}
