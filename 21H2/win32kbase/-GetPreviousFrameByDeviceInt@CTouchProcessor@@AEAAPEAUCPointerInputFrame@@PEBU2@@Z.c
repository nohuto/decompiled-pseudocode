/*
 * XREFs of ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0195970
 * Callers:
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C019591C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C019B180 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C018894C (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::GetPreviousFrameByDeviceInt(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2)
{
  CTouchProcessor *v4; // rax
  CTouchProcessor *v5; // rcx
  char *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  bool v9; // zf

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7850);
  v4 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v5 = (CTouchProcessor *)(this + 7);
  if ( v4 == (CTouchProcessor *)(this + 7) )
    return 0LL;
  do
  {
    v6 = (char *)v4 - 8;
    if ( *((_QWORD *)v4 + 7) == *((_QWORD *)a2 + 8) )
      break;
    v4 = *(CTouchProcessor **)v4;
  }
  while ( v4 != v5 );
  if ( v4 == v5 )
    return 0LL;
  v7 = *((_DWORD *)v6 + 13);
  v8 = *((_DWORD *)v6 + 12);
  v9 = v7 == v8;
  if ( v7 > v8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7872);
    v9 = *((_DWORD *)v6 + 13) == *((_DWORD *)v6 + 12);
  }
  if ( v9 )
    return 0LL;
  if ( *((_QWORD *)v6 + 8) != *((_QWORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7880);
  return (struct CPointerInputFrame *)v6;
}
