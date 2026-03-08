/*
 * XREFs of ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0204E10
 * Callers:
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C01FC460 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C01FC600 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 *     ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C0204EF0 (-SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01F14E0 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01F173C (-FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C0207468 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::SetPointerInfoNodeFlag(
        struct _KTHREAD **this,
        unsigned int a2,
        __int16 a3,
        int a4)
{
  unsigned int v4; // ebx
  const struct CPointerInputFrame *result; // rax
  const struct CPointerInputFrame *v10; // rdi
  struct CPointerInfoNode *NodeInFrame; // rax

  v4 = 0;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15012);
  if ( a4 != 0x200000 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15017);
  result = (const struct CPointerInputFrame *)CTouchProcessor::FindAndReferenceFrameById((__int64)this, a2, 4u);
  v10 = result;
  if ( result )
  {
    NodeInFrame = CTouchProcessor::FindNodeInFrame(this, result, a3, 0LL);
    if ( NodeInFrame )
    {
      *((_DWORD *)NodeInFrame + 45) |= a4;
      v4 = 1;
    }
    CTouchProcessor::UnreferenceFrameInt(this, v10);
    return (const struct CPointerInputFrame *)v4;
  }
  return result;
}
