/*
 * XREFs of rimDispatchAutoRepeatCompleteFrame @ 0x1C0174214
 * Callers:
 *     RIMOnTimerNotification @ 0x1C0157890 (RIMOnTimerNotification.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0057C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C01717E0 (RIMFixUpAutoRepeatCompleteFrameTimeStamps.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C01739B4 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0174D2C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C0175F28 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C01761B4 (rimStackAttachAndProcessInput.c)
 */

LONG_PTR __fastcall rimDispatchAutoRepeatCompleteFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2)
{
  LONG_PTR result; // rax
  LARGE_INTEGER *v5; // rdi
  char *QuadPart; // rcx
  KPROCESSOR_MODE v7; // r8
  unsigned __int64 v8; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  bool v10; // zf
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  result = *((unsigned int *)a2 + 50);
  if ( (result & 0x80u) == 0LL )
    result = MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 642);
  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
    result = MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 643);
  if ( *((_QWORD *)a1 + 43) == -1LL )
    result = MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 644);
  if ( *((_BYTE *)a1 + 584) )
  {
    result = (LONG_PTR)a1 + 552;
    if ( *(_QWORD *)result == result )
    {
      v5 = (LARGE_INTEGER *)*((_QWORD *)a2 + 51);
      if ( v5 )
      {
        QuadPart = (char *)v5[4].QuadPart;
        v7 = *(_DWORD *)(*((_QWORD *)a2 + 51) + 80LL) == 0;
        Object = 0LL;
        result = RawInputManagerDeviceObjectResolveHandle(QuadPart, 3u, v7, &Object);
        if ( (int)result >= 0 )
        {
          if ( *((PVOID *)a2 + 4) == Object )
          {
            if ( !v5[3].LowPart )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 674);
            v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            if ( PerformanceCounter.QuadPart - v5[12].QuadPart >= *((_QWORD *)a1 + 45) )
            {
              v5[11].HighPart = v8;
              v5[12] = PerformanceCounter;
              v5[5] = PerformanceCounter;
              v5[9].QuadPart = 0LL;
              *((_BYTE *)a1 + 584) = 0;
              RIMFixUpAutoRepeatCompleteFrameTimeStamps((__int64)a1, (__int64)a2, (__int64)v5);
              InputTraceLogging::RIM::DispatchFrame((__int64)a2, (__int64)v5, 1);
              v10 = (*((_DWORD *)a2 + 46) & 0x2000) == 0;
              v11[1] = v5->LowPart;
              v11[0] = 0LL;
              if ( !v10 )
              {
                if ( v5[4].QuadPart != *((_QWORD *)a2 + 3) )
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 735);
                if ( !v5[10].LowPart )
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 736);
              }
              rimStackAttachAndProcessInput((_DWORD)a1, (_DWORD)a2, (_DWORD)v5, (unsigned int)v11, 1);
              rimSignalReadComplete(a1, a2);
            }
          }
          return ObfDereferenceObject(Object);
        }
      }
    }
    else
    {
      return rimProcessAnyQueuedCompleteFrames(a1);
    }
  }
  return result;
}
