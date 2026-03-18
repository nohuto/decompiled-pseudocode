/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C01A9638
 * Callers:
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     rimCompleteReads @ 0x1C0044C40 (rimCompleteReads.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C00E6BB8 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimDispatchCompleteFrames @ 0x1C00E6CDC (rimDispatchCompleteFrames.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x1C01A9144 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 *     rimFindOtherQueuedFrames @ 0x1C01A9290 (rimFindOtherQueuedFrames.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall rimProcessAnyQueuedCompleteFrames(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r8
  _UNKNOWN **result; // rax
  int v7; // r9d
  unsigned int *v8; // rsi
  _UNKNOWN **v9; // rdx
  _UNKNOWN **v10; // rcx
  _DWORD *v11; // rbp
  int v12; // r10d
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int OtherQueuedFrames; // eax
  LARGE_INTEGER *v18; // rdx
  char *v19; // rsi
  int v20; // [rsp+70h] [rbp+8h] BYREF
  void *v21; // [rsp+78h] [rbp+10h] BYREF
  unsigned int *v22; // [rsp+80h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = (_QWORD *)((char *)a1 + 776);
  result = (_UNKNOWN **)*((_QWORD *)a1 + 97);
  if ( result != (_UNKNOWN **)((char *)a1 + 776) && *((_BYTE *)a1 + 808) )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = (unsigned int *)(result - 1);
      v9 = result;
      v10 = result;
      result = (_UNKNOWN **)*result;
      v11 = v9[4];
      if ( !*((_QWORD *)a1 + 108) && !*((_DWORD *)a1 + 272) )
        break;
      v12 = v11[68];
      if ( (v12 & 0x2000) == 0 || (v12 & 0x1000000) != 0 )
        break;
      v7 = -1073741823;
      if ( result == v5 )
        goto LABEL_13;
    }
    if ( result[1] != (_UNKNOWN *)v9 || (v5 = v9[1], (_UNKNOWN **)*v5 != v9) )
      __fastfail(3u);
    *v5 = result;
    result[1] = v5;
    v10[1] = v10;
    *v10 = v10;
    v10[4] = 0LL;
    if ( v7 < 0 )
    {
LABEL_13:
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      result = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                              WPP_GLOBAL_Control->AttachedDevice,
                              (_DWORD)v9,
                              (_DWORD)v5,
                              (_DWORD)gRimLog,
                              4,
                              1,
                              20,
                              (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids);
      }
      return result;
    }
    v13 = *((_QWORD *)v11 + 35) - 1LL;
    *((_QWORD *)v11 + 35) = v13;
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qi(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v9, (_DWORD)v5, v13);
    }
    if ( ((unsigned int)RimDeviceTypeToRimInputType((unsigned __int64)(v11 + 22) & -(__int64)(v11 != 0LL), 2) & *((_DWORD *)a1 + 21)) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    if ( (*(_DWORD *)(((unsigned __int64)(v11 + 22) & -(__int64)(v11 != 0LL)) + 0xC8) & 0x80u) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    *((_BYTE *)a1 + 808) = 0;
    InputTraceLogging::RIM::DispatchFrame((unsigned __int64)(v11 + 22) & -(__int64)(v11 != 0LL));
    v22 = 0LL;
    v21 = 0LL;
    v20 = 0;
    OtherQueuedFrames = rimFindOtherQueuedFrames(
                          (__int64)a1,
                          (unsigned __int64)(v11 + 22) & -(__int64)(v11 != 0LL),
                          v8,
                          &v22,
                          (__int64 *)&v21,
                          (unsigned int *)&v20);
    v18 = (LARGE_INTEGER *)((unsigned __int64)(v11 + 22) & -(__int64)(v11 != 0LL));
    if ( OtherQueuedFrames )
    {
      v19 = (char *)v21;
      rimDispatchCompleteFrames(a1, v18, (__int64)v22, (unsigned __int64)v21, v20);
      if ( v19 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v19);
    }
    else
    {
      rimDispatchCompleteFrames(a1, v18, (__int64)v8, (unsigned __int64)v8, *v8);
    }
    return (_UNKNOWN **)ObfDereferenceObject(v11);
  }
  return result;
}
