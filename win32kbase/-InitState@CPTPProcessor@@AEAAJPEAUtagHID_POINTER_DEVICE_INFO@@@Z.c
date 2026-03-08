/*
 * XREFs of ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020DF74
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020CD14 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020CEEC (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     CreatePTPEngine @ 0x1C023B230 (CreatePTPEngine.c)
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C023B684 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C023B910 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
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
    v6 = this + 68;
    result = PTPEngineTraceProducer::Create(v7, PerformanceCounter.QuadPart, this + 68);
    if ( (int)result >= 0 )
    {
      *((_QWORD *)*v6 + 4) = (unsigned __int64)(this + 20) & -(__int64)(this != 0LL);
      CPTPProcessor::BuildEnvironment((CPTPProcessor *)this, a2);
      PTPEngineTraceProducer::SetEnvironment(*v6, (const struct PTPEnvironment *)(this + 69));
      return 0LL;
    }
  }
  return result;
}
