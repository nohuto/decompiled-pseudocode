// write access to const memory has been detected, the output may be wrong!
void __fastcall TerminateDesktopThreads(__int64 a1)
{
  ULONG v1; // esi
  int v2; // edx
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rax
  void *v6; // rcx
  int v7; // edx
  int v8; // r8d
  char v9; // di
  PDEVICE_OBJECT v10; // rcx
  NTSTATUS v11; // ebx
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  char v18; // [rsp+80h] [rbp+8h]
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp+10h] BYREF

  *(_OWORD *)Object = 0LL;
  v1 = 0;
  v18 = 0;
  if ( *(_QWORD *)(SGDGetUserSessionState(a1) + 3424) )
  {
    v5 = SGDGetUserSessionState(v3);
    CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(*(CTouchProcessor **)(v5 + 3424));
  }
  v6 = (void *)gTermIO[8];
  if ( v6 )
  {
    Object[0] = (PVOID)gTermIO[8];
    ObfReferenceObject(v6);
    v1 = 1;
    if ( gTermIO[7] )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          (unsigned int)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
          4,
          7,
          10,
          (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
      }
      LODWORD(gTermIO[0]) |= 8u;
      KeSetEvent((PRKEVENT)gTermIO[7], 1, 0);
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          (unsigned int)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
          4,
          7,
          11,
          (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
      }
      IPostQuitMessage(gTermIO[2], 0LL);
      v18 = 1;
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
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v15,
      (unsigned int)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
      4,
      7,
      12,
      (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
  }
  if ( Event )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        v16,
        4,
        7,
        13,
        (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
    }
    gTermNOIO |= 8u;
    KeSetEvent(Event, 1, 0);
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v15,
      (unsigned int)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
      4,
      7,
      14,
      (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
  }
  IPostQuitMessage(qword_1C03617C0, 0LL);
  v9 = 1;
LABEL_15:
  if ( v1 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
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
        (unsigned int)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
        4,
        7,
        15,
        (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
    }
    Timeout.QuadPart = -100000000LL;
    while ( 1 )
    {
      UserSessionSwitchLeaveCrit(v10);
      v11 = KeWaitForMultipleObjects(v1, Object, WaitAll, WrUserRequest, 0, 0, &Timeout, 0LL);
      EnterCrit(1LL, 0LL);
      if ( v11 != 258 )
        break;
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          (unsigned int)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
          2,
          7,
          16,
          (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
      }
      gdwHydraHint |= 0x800000u;
      if ( v18 == 1 && gTermIO[2] )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v12) = 0;
        }
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v13,
            (unsigned int)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
            2,
            7,
            17,
            (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
        }
        IPostQuitMessage(gTermIO[2], 0LL);
      }
      if ( v9 == 1 && qword_1C03617C0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v12) = 0;
        }
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v13,
            (unsigned int)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
            2,
            7,
            18,
            (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
        }
        IPostQuitMessage(qword_1C03617C0, 0LL);
      }
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        (unsigned int)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
        4,
        7,
        19,
        (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
    }
    ObfDereferenceObject(Object[0]);
    if ( v1 > 1 )
      ObfDereferenceObject(Object[1]);
  }
  gdwHydraHint |= 0x800u;
}
