/*
 * XREFs of ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018E568
 * Callers:
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C01889EC (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018E998 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C019DD60 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CCF60 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C018894C (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeInFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int16 a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdi
  unsigned int v11; // ecx
  unsigned int v12; // edx
  bool v13; // zf

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8858);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v7, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8860);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8861);
  v8 = *((_DWORD *)a2 + 12);
  v9 = 0;
  v10 = *((_QWORD *)a2 + 17);
  if ( v8 )
  {
    v11 = *((_DWORD *)a2 + 12);
    do
    {
      v12 = v11;
      if ( v10 >= *((_QWORD *)a2 + 17) + 480 * (unsigned __int64)v11 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8871);
        v12 = *((_DWORD *)a2 + 12);
      }
      v8 = v12;
      if ( *(_WORD *)(v10 + 172) == a3 )
        break;
      v10 += 480LL;
      ++v9;
      v11 = v12;
    }
    while ( v9 < v12 );
  }
  v13 = v9 == v8;
  if ( v9 > v8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8879);
    v13 = v9 == *((_DWORD *)a2 + 12);
  }
  if ( v13 )
    return 0LL;
  if ( a4 )
    *a4 = v9;
  return (struct CPointerInfoNode *)v10;
}
