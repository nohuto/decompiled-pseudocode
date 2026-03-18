/*
 * XREFs of ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DE46C
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DD4F8 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DD650 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     CreatePTPEngine @ 0x1C0204F3C (CreatePTPEngine.c)
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C0205304 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C02055B0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::InitState(
        struct PTPEngineTraceProducer **this,
        struct tagHID_POINTER_DEVICE_INFO *a2)
{
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  PTPEngineTraceProducer **v6; // rdi
  struct IPTPEngine *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  result = CreatePTPEngine(&v7);
  if ( (int)result >= 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v6 = this + 67;
    result = PTPEngineTraceProducer::Create(v7, PerformanceCounter.QuadPart, this + 67);
    if ( (int)result >= 0 )
    {
      *((_QWORD *)*v6 + 4) = (unsigned __int64)(this + 19) & -(__int64)(this != 0LL);
      CPTPProcessor::BuildEnvironment((CPTPProcessor *)this, a2);
      PTPEngineTraceProducer::SetEnvironment(*v6, (const struct PTPEnvironment *)(this + 68));
      return 0LL;
    }
  }
  return result;
}
