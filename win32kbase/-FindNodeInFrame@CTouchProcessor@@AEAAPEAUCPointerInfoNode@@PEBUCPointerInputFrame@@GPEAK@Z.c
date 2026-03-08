/*
 * XREFs of ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01F173C
 * Callers:
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C01E9F94 (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01F1B40 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0204E10 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C00F22BE (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01FB918 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeInFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int16 a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  bool v12; // zf

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9552);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v7, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9554);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9555);
  v8 = *((unsigned int *)a2 + 12);
  v9 = 0;
  v10 = *((_QWORD *)a2 + 30);
  if ( (_DWORD)v8 )
  {
    v11 = *((_QWORD *)a2 + 30);
    do
    {
      if ( v10 >= v11 + 480 * v8 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9565);
        v11 = *((_QWORD *)a2 + 30);
      }
      if ( *(_WORD *)(v10 + 172) == a3 )
        break;
      v8 = *((unsigned int *)a2 + 12);
      v10 += 480LL;
      ++v9;
    }
    while ( v9 < (unsigned int)v8 );
  }
  v12 = v9 == *((_DWORD *)a2 + 12);
  if ( v9 > *((_DWORD *)a2 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9573);
    v12 = v9 == *((_DWORD *)a2 + 12);
  }
  if ( v12 )
    return 0LL;
  if ( a4 )
    *a4 = v9;
  return (struct CPointerInfoNode *)v10;
}
