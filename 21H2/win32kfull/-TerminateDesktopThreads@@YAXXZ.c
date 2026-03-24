/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x1C000AA2C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000ADD4 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C000AD64 (IPostQuitMessage.c)
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
void TerminateDesktopThreads(void)
{
  ULONG v0; // ebx
  void *v1; // rcx
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  __int128 Object; // [rsp+40h] [rbp-18h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  Object = 0LL;
  if ( gpTouchProcessor )
    CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(gpTouchProcessor);
  v1 = (void *)*((_QWORD *)&gTermIO + 8);
  if ( v1 )
  {
    *(_QWORD *)&Object = *((_QWORD *)&gTermIO + 8);
    ObfReferenceObject(v1);
    v0 = 1;
    if ( *((_QWORD *)&gTermIO + 7) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v2) = 4;
        WPP_RECORDER_SF_(v3, v2, 8, 10, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      }
      gTermIO |= 8u;
      KeSetEvent(*((PRKEVENT *)&gTermIO + 7), 1, 0);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v2) = 4;
        WPP_RECORDER_SF_(v3, v2, 8, 11, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      }
      IPostQuitMessage(*((_QWORD *)&gTermIO + 2), 0LL);
    }
    gdwHydraHint |= 0x80000u;
  }
  else if ( *((_QWORD *)&gTermIO + 1) )
  {
    HMAssignmentUnlock((char *)&gTermIO + 8);
  }
  if ( ::Object )
  {
    *((_QWORD *)&Object + 1) = ::Object;
    ObfReferenceObject(::Object);
    ++v0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(v5, v4, 7, 12, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    if ( Event )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_(v5, v4, 8, 13, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      }
      gTermNOIO |= 8u;
      KeSetEvent(Event, 1, 0);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_(v5, v4, 8, 14, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      }
      IPostQuitMessage(qword_1C0339FE0, 0LL);
    }
  }
  if ( v0 )
  {
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(v7, v6, 7, 15, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    Timeout.QuadPart = -3000000000LL;
    while ( KeWaitForMultipleObjects(v0, (PVOID *)&Object, WaitAll, WrUserRequest, 0, 0, &Timeout, 0LL) == 258 )
      gdwHydraHint |= 0x800000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(v9, v8, 7, 16, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    ObfDereferenceObject((PVOID)Object);
    if ( v0 > 1 )
      ObfDereferenceObject(*((PVOID *)&Object + 1));
    EnterCrit(0LL, 1LL);
  }
  gdwHydraHint |= 0x800u;
}
