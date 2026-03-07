char __fastcall xxxSetForegroundWindowWithOptions(__int64 a1, unsigned int a2, __int16 a3, char a4)
{
  __int64 v4; // r10
  char v5; // si
  __int64 v6; // r14
  __int64 v7; // rdi
  bool v8; // r12
  __int64 v9; // r13
  int v10; // ebx
  char v11; // bp
  bool v12; // r15
  int v13; // r8d
  int v14; // edx
  struct tagWND *v15; // rax
  PDEVICE_OBJECT *v16; // rdx
  _UNKNOWN **v17; // r8
  int v18; // r9d
  char v19; // bp
  struct tagWND *v20; // r15
  __int64 v21; // rdi
  bool v22; // bp
  _UNKNOWN **v23; // r9
  PDEVICE_OBJECT v24; // rcx
  const char *v25; // rax
  int v26; // edi
  int v27; // edx
  int v28; // r8d
  int CanSetForegroundWindow; // r13d
  const char *v30; // rax
  __int64 v31; // rax
  __int64 NonChildAncestor; // rax
  _QWORD *TopLevelCreatorWindow; // rax
  char v34; // r15
  __int64 v35; // rax
  struct tagWND *v36; // rbx
  _DWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v42; // [rsp+20h] [rbp-E8h]
  int v43; // [rsp+28h] [rbp-E0h]
  int v44; // [rsp+30h] [rbp-D8h]
  int v45; // [rsp+38h] [rbp-D0h]
  char v46; // [rsp+71h] [rbp-97h]
  struct tagWND *v47; // [rsp+88h] [rbp-80h]
  __int128 v48; // [rsp+90h] [rbp-78h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-68h]
  __int128 v50; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-50h]
  bool v52; // [rsp+110h] [rbp+8h]
  unsigned __int8 v54; // [rsp+120h] [rbp+18h]

  v54 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 1;
  v6 = a1;
  v46 = 1;
  v7 = gpqForeground;
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 432);
  v52 = v9 == gpqForeground;
  v10 = a3 & 0x1000;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId(*(PETHREAD *)v4);
    PsGetThreadId((PETHREAD)*gptiCurrent);
    LOBYTE(v13) = v12;
    LOBYTE(v14) = v11;
    WPP_RECORDER_AND_TRACE_SF_DqDDD(WPP_GLOBAL_Control->AttachedDevice, v14, v13, (_DWORD)gFullLog);
    v7 = gpqForeground;
  }
  v49 = 0LL;
  v48 = 0LL;
  v15 = _GhostWindowFromHungWindow((const struct tagWND *)v6);
  v19 = 0;
  v47 = v15;
  v20 = v15;
  if ( v15 )
  {
    ThreadLockAlways(v15, &v48);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v16,
        (_DWORD)v17,
        (_DWORD)gFullLog,
        4,
        2,
        72,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
        *(_QWORD *)v20,
        *(_QWORD *)v6);
    v6 = (__int64)v20;
  }
  if ( v9 == v7 )
  {
    v21 = *(_QWORD *)(gptiCurrent + 432LL);
    v22 = gpqForeground == v21;
    LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v23 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v16,
        (_DWORD)v17,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        4,
        2,
        73,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
      v23 = &WPP_RECORDER_INITIALIZED;
    }
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = "Synchronously";
      if ( gpqForeground != v21 )
        v25 = "Async";
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v16,
        (_DWORD)v17,
        (_DWORD)gFullLog,
        4,
        2,
        74,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
        (__int64)v25);
    }
  }
  else
  {
    v26 = 2;
    CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow(v6, a2, (__int64)v17, v18);
    if ( CanSetForegroundWindow == 2 )
    {
      LOBYTE(v27) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = "Remove";
        if ( v10 )
          v30 = "Preserve";
        LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_s(
          WPP_GLOBAL_Control->AttachedDevice,
          v27,
          v28,
          (_DWORD)gFullLog,
          4,
          2,
          75,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
          (__int64)v30);
      }
      if ( !v10 )
        anonymous_namespace_::RemoveForegroundActivate();
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v27) = 0;
      }
      if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v27,
          v28,
          (_DWORD)v23,
          4,
          2,
          76,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
      }
      if ( (unsigned int)xxxSetForegroundWindow2(v6, gptiCurrent, v54) )
      {
        v8 = 1;
      }
      else
      {
        v8 = 0;
        v24 = (PDEVICE_OBJECT)grpdeskRitInput;
        if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
        {
          v31 = *(_QWORD *)(v6 + 40);
          if ( *(char *)(v31 + 19) >= 0
            && *(_DWORD *)(v31 + 236) != 15
            && (unsigned int)IsImmersiveBandOrShellManaged(v6, (__int64)v16) )
          {
            if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2453LL);
            NonChildAncestor = GetNonChildAncestor(v6);
            TopLevelCreatorWindow = (_QWORD *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
            PostIAMShellHookMessage(34LL, *TopLevelCreatorWindow);
          }
        }
      }
      v22 = 0;
    }
    else
    {
      v46 = 0;
      v24 = WPP_GLOBAL_Control;
      v16 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        v19 = 1;
      }
      v17 = &WPP_RECORDER_INITIALIZED;
      v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        PsGetThreadId(**(PETHREAD **)(v6 + 16));
        PsGetThreadId((PETHREAD)*gptiCurrent);
        WPP_RECORDER_AND_TRACE_SF_DqD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v34,
          (__int64)gFullLog,
          v42,
          v43,
          v44,
          v45);
        v16 = &WPP_GLOBAL_Control;
        v26 = 2;
        v17 = &WPP_RECORDER_INITIALIZED;
      }
      if ( (a4 & 1) != 0 )
      {
        LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v16,
            (_DWORD)v17,
            (unsigned int)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
            4,
            2,
            78,
            (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
        }
        v35 = GetNonChildAncestor(v6);
        v36 = (struct tagWND *)DSW_GetTopLevelCreatorWindow(v35);
        if ( !(unsigned __int8)IsTrayWindow(v36, 1LL) )
        {
          v36 = (struct tagWND *)v6;
          v26 = 3;
        }
        if ( *(_DWORD *)(*((_QWORD *)v36 + 5) + 236LL) != 15 )
        {
          if ( (unsigned int)IsImmersiveBandOrShellManaged((__int64)v36, (__int64)v16) )
          {
            PostIAMShellHookMessage(34LL, *(_QWORD *)v36);
          }
          else
          {
            v50 = 0LL;
            v51 = 0LL;
            ThreadLockAlways(v36, &v50);
            v37 = (_DWORD *)UPDWORDPointer(8196LL);
            xxxFlashWindow(v36, v26 | ((unsigned __int16)*v37 << 16) | 0xC, 0);
            ThreadUnlock1(v39, v38, v40);
          }
        }
      }
      if ( CanSetForegroundWindow != 1 )
      {
        v22 = *(_QWORD *)(gptiCurrent + 432LL) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 432LL);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v16) = 0;
        }
        if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v16,
            (_DWORD)v17,
            (unsigned int)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
            4,
            2,
            79,
            (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
        }
        goto LABEL_98;
      }
      v22 = 0;
    }
  }
  if ( !v52 )
    goto LABEL_133;
LABEL_98:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v16,
      (_DWORD)v17,
      (_DWORD)v23,
      4,
      2,
      80,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
  }
  if ( v22 )
  {
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v16,
        (_DWORD)v17,
        (_DWORD)v23,
        4,
        2,
        81,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
    LOBYTE(v24) = *(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0xC0;
    if ( (_BYTE)v24 == 64 || !(unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v6) )
    {
      v8 = 0;
      goto LABEL_133;
    }
    goto LABEL_124;
  }
  if ( v6 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 432LL) + 128LL) )
  {
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v16,
        (_DWORD)v17,
        (_DWORD)v23,
        4,
        2,
        82,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
LABEL_124:
    v8 = 1;
    goto LABEL_133;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v16,
      (_DWORD)v17,
      (_DWORD)v23,
      4,
      2,
      83,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
  }
  v8 = (unsigned int)PostEventMessageEx(
                       *(struct tagTHREADINFO **)(v6 + 16),
                       *(struct tagQ **)(*(_QWORD *)(v6 + 16) + 432LL),
                       6u,
                       0LL,
                       0,
                       0LL,
                       *(_QWORD *)v6,
                       0LL) != 0;
LABEL_133:
  if ( v47 )
    ThreadUnlock1(v24, v16, v17);
  if ( !v46 || !v8 )
    return 0;
  return v5;
}
