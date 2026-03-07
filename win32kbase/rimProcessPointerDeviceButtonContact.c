_UNKNOWN **__fastcall rimProcessPointerDeviceButtonContact(__int64 a1, LARGE_INTEGER *a2, __int64 a3, int a4, DWORD a5)
{
  __int64 QuadPart; // rdi
  __int64 v10; // r15
  LARGE_INTEGER *ButtonContact; // rbx
  int v12; // edx
  int v13; // r8d
  LARGE_INTEGER PerformanceCounter; // r13
  int v15; // edx
  int v16; // r8d
  LONG v17; // ebp
  LARGE_INTEGER v18; // rax
  _UNKNOWN **result; // rax
  LONG v20[4]; // [rsp+40h] [rbp-38h] BYREF

  QuadPart = a2[59].QuadPart;
  v10 = *(_QWORD *)(a2[57].QuadPart + 16);
  ButtonContact = (LARGE_INTEGER *)RIMCmGetButtonContact(QuadPart);
  v20[0] = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      (_DWORD)gRimLog,
      4,
      1,
      32,
      (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
  }
  if ( *(_DWORD *)(QuadPart + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 668);
  if ( !ButtonContact )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 669);
  if ( (int)rimExtractButtonPageButtonUsages(QuadPart, v10, a3, a4, v20) >= 0 )
  {
    v17 = v20[0];
    if ( (v20[0] & 4) != 0 )
    {
      if ( !__CFSHR__(ButtonContact[4].LowPart, 2) )
      {
        RIMCmActivateButtonContact(QuadPart);
        if ( *(_DWORD *)(QuadPart + 1008) == 1 )
          RIMAddToActiveDevices(a1, QuadPart);
      }
    }
    else if ( __CFSHR__(ButtonContact[4].LowPart, 2) )
    {
      ButtonContact[295].HighPart |= 4u;
    }
    if ( (ButtonContact[4].LowPart & 2) != 0
      && (!(unsigned int)RIMCmIsContactSuppressed((__int64)ButtonContact)
       || (unsigned int)RIMCmIsContactDeliveringPointerData(ButtonContact)
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly((__int64)ButtonContact)) )
    {
      ButtonContact[302].LowPart = a5;
      ButtonContact[6] = PerformanceCounter;
      ButtonContact[304].LowPart = RIMGetPointerInputType(QuadPart);
      ButtonContact[305].HighPart = v17;
      ButtonContact[312].LowPart = *(_DWORD *)(QuadPart + 836);
      ButtonContact[314] = *(LARGE_INTEGER *)(QuadPart + 864);
      if ( (a2[23].LowPart & 0x2000) != 0 )
        v18 = a2[3];
      else
        v18 = a2[2];
      ButtonContact[295].HighPart |= 1u;
      ButtonContact[306] = v18;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v15) = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v15,
                          v16,
                          (_DWORD)gRimLog,
                          4,
                          1,
                          33,
                          (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
  }
  return result;
}
