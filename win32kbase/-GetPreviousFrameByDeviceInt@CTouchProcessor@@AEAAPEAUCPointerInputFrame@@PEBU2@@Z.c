/*
 * XREFs of ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C00F287E
 * Callers:
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C01FAD18 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0201654 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C00F22BE (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::GetPreviousFrameByDeviceInt(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2)
{
  CTouchProcessor *v4; // rax
  CTouchProcessor *v5; // rcx
  char *v6; // rbx

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8540);
  v4 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v5 = (CTouchProcessor *)(this + 7);
  if ( v4 == (CTouchProcessor *)(this + 7) )
    return 0LL;
  while ( 1 )
  {
    v6 = (char *)v4 - 8;
    if ( *((_QWORD *)v4 + 7) == *((_QWORD *)a2 + 8) )
      break;
    v4 = *(CTouchProcessor **)v4;
    if ( v4 == v5 )
      return 0LL;
  }
  if ( *((_DWORD *)v6 + 13) > *((_DWORD *)v6 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8562);
  if ( *((_DWORD *)v6 + 13) == *((_DWORD *)v6 + 12) )
    return 0LL;
  if ( *((_QWORD *)v6 + 8) != *((_QWORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8570);
  return (struct CPointerInputFrame *)v6;
}
