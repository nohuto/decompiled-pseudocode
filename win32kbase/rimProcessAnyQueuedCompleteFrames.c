/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C01D2AB4
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 *     rimCompleteReads @ 0x1C0039B74 (rimCompleteReads.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C00F0A58 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimDispatchCompleteFrames @ 0x1C00F0B7C (rimDispatchCompleteFrames.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x1C01D2494 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 *     rimFindOtherQueuedFrames @ 0x1C01D25F8 (rimFindOtherQueuedFrames.c)
 */

_UNKNOWN **__fastcall rimProcessAnyQueuedCompleteFrames(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v2; // rdi
  _UNKNOWN **result; // rax
  struct RawInputManagerObject *v5; // rcx
  LARGE_INTEGER *v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  struct RawInputManagerObject **v10; // rax
  __int64 v11; // r9
  int OtherQueuedFrames; // eax
  LARGE_INTEGER *v13; // rdx
  char *v14; // rsi
  int v15; // [rsp+80h] [rbp+8h] BYREF
  void *v16; // [rsp+88h] [rbp+10h] BYREF
  unsigned int *v17; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2;
  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
  {
    v15 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 855);
  }
  if ( (*(_DWORD *)(v2 + 184) & 0x200) != 0 )
  {
    v15 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 856);
  }
  result = (_UNKNOWN **)((char *)a1 + 744);
  v5 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 93);
  if ( v5 != (struct RawInputManagerObject *)((char *)a1 + 744) && *((_BYTE *)a1 + 776) )
  {
    v6 = (LARGE_INTEGER *)((char *)v5 - 8);
    v7 = *((_QWORD *)v5 + 4);
    if ( (*((_QWORD *)a1 + 104) || *((_DWORD *)a1 + 264))
      && (v8 = *(_DWORD *)(v7 + 256), (v8 & 0x2000) != 0)
      && (v8 & 0x1000000) == 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      result = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                              WPP_GLOBAL_Control->AttachedDevice,
                              a2,
                              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                              (_DWORD)gRimLog,
                              4,
                              1,
                              20,
                              (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids);
    }
    else
    {
      v9 = *(_QWORD *)v5;
      if ( *(struct RawInputManagerObject **)(*(_QWORD *)v5 + 8LL) != v5
        || (v10 = (struct RawInputManagerObject **)*((_QWORD *)v5 + 1), *v10 != v5) )
      {
        __fastfail(3u);
      }
      *v10 = (struct RawInputManagerObject *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      *((_QWORD *)v5 + 1) = v5;
      *(_QWORD *)v5 = v5;
      v6[5].QuadPart = 0LL;
      v11 = *(_QWORD *)(v7 + 264) - 1LL;
      *(_QWORD *)(v7 + 264) = v11;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qi(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v11);
      if ( ((unsigned int)RimDeviceTypeToRimInputType((v7 + 72) & -(__int64)(v7 != 0), 2) & *((_DWORD *)a1 + 21)) == 0 )
      {
        v15 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 915);
      }
      if ( (*(_DWORD *)(((v7 + 72) & -(__int64)(v7 != 0)) + 0xC8) & 0x80u) == 0 )
      {
        v15 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 916);
      }
      *((_BYTE *)a1 + 776) = 0;
      InputTraceLogging::RIM::DispatchFrame((v7 + 72) & -(__int64)(v7 != 0));
      v17 = 0LL;
      v16 = 0LL;
      v15 = 0;
      OtherQueuedFrames = rimFindOtherQueuedFrames(
                            (__int64)a1,
                            (v7 + 72) & -(__int64)(v7 != 0),
                            (unsigned int *)v6,
                            &v17,
                            (__int64 *)&v16,
                            (unsigned int *)&v15);
      v13 = (LARGE_INTEGER *)((v7 + 72) & -(__int64)(v7 != 0));
      if ( OtherQueuedFrames )
      {
        v14 = (char *)v16;
        rimDispatchCompleteFrames(a1, v13, (__int64)v17, (LARGE_INTEGER *)v16, v15);
        if ( v14 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
      }
      else
      {
        rimDispatchCompleteFrames(a1, v13, (__int64)v6, v6, v6->LowPart);
      }
      return (_UNKNOWN **)ObfDereferenceObject((PVOID)v7);
    }
  }
  return result;
}
