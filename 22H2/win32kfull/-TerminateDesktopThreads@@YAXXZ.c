/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x1C003B28C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C003B554 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C003C308 (IPostQuitMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall TerminateDesktopThreads(__int64 a1)
{
  ULONG v1; // esi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  void *v7; // rcx
  int v8; // edx
  __int64 v9; // r8
  char v10; // di
  PDEVICE_OBJECT v11; // rcx
  NTSTATUS v12; // ebx
  int v13; // edx
  __int64 v14; // r8
  int v15; // r9d
  PVOID Object[9]; // [rsp+40h] [rbp-48h] BYREF
  char v17; // [rsp+90h] [rbp+8h]
  union _LARGE_INTEGER Timeout; // [rsp+98h] [rbp+10h] BYREF

  *(_OWORD *)Object = 0LL;
  v1 = 0;
  v17 = 0;
  if ( *(_QWORD *)(SGDGetUserSessionState(a1) + 3424) )
  {
    v6 = SGDGetUserSessionState(v3);
    CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(*(CTouchProcessor **)(v6 + 3424));
  }
  v7 = (void *)gTermIO[8];
  if ( v7 )
  {
    Object[0] = (PVOID)gTermIO[8];
    ObfReferenceObject(v7);
    v1 = 1;
    if ( gTermIO[7] )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          (unsigned int)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
          4,
          20,
          10,
          (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
      }
      LODWORD(gTermIO[0]) |= 8u;
      KeSetEvent((PRKEVENT)gTermIO[7], 1, 0);
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          (unsigned int)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
          4,
          20,
          11,
          (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
      IPostQuitMessage(gTermIO[2], 0LL, v9);
      v17 = 1;
    }
    gdwHydraHint |= 0x80000u;
  }
  else if ( gTermIO[1] )
  {
    HMAssignmentUnlock(&gTermIO[1]);
  }
  if ( !::Object )
    goto LABEL_14;
  Object[1] = ::Object;
  ObfReferenceObject(::Object);
  ++v1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v14,
      (unsigned int)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
      4,
      20,
      12,
      (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
  }
  if ( Event )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        v15,
        4,
        20,
        13,
        (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
    }
    gTermNOIO |= 8u;
    KeSetEvent(Event, 1, 0);
LABEL_14:
    v10 = 0;
    goto LABEL_15;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v13) = 0;
  }
  LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v14,
      (unsigned int)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
      4,
      20,
      14,
      (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
  IPostQuitMessage(qword_1C035E790, 0LL, v14);
  v10 = 1;
LABEL_15:
  if ( v1 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v2) = 0;
    }
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v4,
        (unsigned int)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
        4,
        20,
        15,
        (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
    Timeout.QuadPart = -100000000LL;
    while ( 1 )
    {
      UserSessionSwitchLeaveCrit(v11, v2, v4, v5);
      v12 = KeWaitForMultipleObjects(v1, Object, WaitAll, WrUserRequest, 0, 0, &Timeout, 0LL);
      EnterCrit(1LL, 0LL);
      if ( v12 != 258 )
        break;
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v2) = 0;
      }
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v2,
          v4,
          (unsigned int)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
          2,
          20,
          16,
          (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
      gdwHydraHint |= 0x800000u;
      if ( v17 == 1 && gTermIO[2] )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v2) = 0;
        }
        LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v2,
            v4,
            (unsigned int)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
            2,
            20,
            17,
            (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
        IPostQuitMessage(gTermIO[2], 0LL, v4);
      }
      if ( v10 == 1 && qword_1C035E790 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v2) = 0;
        }
        LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v2,
            v4,
            (unsigned int)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
            2,
            20,
            18,
            (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
        IPostQuitMessage(qword_1C035E790, 0LL, v4);
      }
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v2) = 0;
    }
    if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v4,
        (unsigned int)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
        4,
        20,
        19,
        (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
    }
    ObfDereferenceObject(Object[0]);
    if ( v1 > 1 )
      ObfDereferenceObject(Object[1]);
  }
  gdwHydraHint |= 0x800u;
}
