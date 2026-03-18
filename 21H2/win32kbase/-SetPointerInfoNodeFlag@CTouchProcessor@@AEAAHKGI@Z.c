/*
 * XREFs of ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C01D696C
 * Callers:
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C01CEBB0 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C01CED50 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 *     ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C01D6A20 (-SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z.c)
 * Callees:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC990 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01C562C (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01C5758 (-FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::SetPointerInfoNodeFlag(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int16 v5; // r14
  unsigned int v6; // ebx
  struct CPointerInputFrame *result; // rax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  struct CPointerInfoNode *NodeInFrame; // rax
  __int64 v12; // r8

  v5 = a3;
  v6 = a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( a4 != 0x200000 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  result = CTouchProcessor::FindAndReferenceFrameById(this, v6, a3);
  v9 = 0;
  v10 = (__int64)result;
  if ( result )
  {
    NodeInFrame = CTouchProcessor::FindNodeInFrame(this, result, v5, 0LL);
    if ( NodeInFrame )
    {
      *((_DWORD *)NodeInFrame + 45) |= a4;
      v9 = 1;
    }
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v10, v12);
    return (struct CPointerInputFrame *)v9;
  }
  return result;
}
