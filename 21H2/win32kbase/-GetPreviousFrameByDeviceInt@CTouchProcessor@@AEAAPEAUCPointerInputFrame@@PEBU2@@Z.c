/*
 * XREFs of ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C00E8234
 * Callers:
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C01CD608 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01D39D4 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01BE95C (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::GetPreviousFrameByDeviceInt(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  CTouchProcessor *v7; // rax
  CTouchProcessor *v8; // rcx
  __int64 v9; // rdx
  char *v10; // rbx
  unsigned int v12; // eax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rcx

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v7 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v8 = (CTouchProcessor *)((char *)this + 48);
  if ( v7 == (CTouchProcessor *)((char *)this + 48) )
    return 0LL;
  v9 = *((_QWORD *)a2 + 8);
  while ( 1 )
  {
    v10 = (char *)v7 - 8;
    if ( *((_QWORD *)v7 + 7) == v9 )
      break;
    v7 = *(CTouchProcessor **)v7;
    if ( v7 == v8 )
      return 0LL;
  }
  v12 = *((_DWORD *)v10 + 13);
  v13 = *((unsigned int *)v10 + 12);
  v14 = v12 == (_DWORD)v13;
  if ( v12 > (unsigned int)v13 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v9, v6);
    v14 = *((_DWORD *)v10 + 13) == *((_DWORD *)v10 + 12);
  }
  if ( v14 )
    return 0LL;
  v15 = *((_QWORD *)a2 + 8);
  if ( *((_QWORD *)v10 + 8) != v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v9, v6);
  return (struct CPointerInputFrame *)v10;
}
