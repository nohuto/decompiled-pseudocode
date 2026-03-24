/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018E9D0
 * Callers:
 *     ?ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C018EB40 (-ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0190000 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     SendMessageTo @ 0x1C004CEC0 (SendMessageTo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C0188590 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C018887C (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C01888B0 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C018C2E4 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1C019B658 (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_.c)
 */

void __fastcall CTouchProcessor::ForwardInputToManipulationThread(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // rax
  unsigned int v6; // edi
  CTouchProcessor *v7; // rcx
  char *v8; // rsi
  CTouchProcessor *v9; // rcx
  unsigned int v10; // r14d

  v4 = CTouchProcessor::CountMTNodesReadyForRouting(this, a2);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2890);
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked((struct _KTHREAD **)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2891);
  v5 = 240LL * (v4 - 1);
  if ( v5 > 0xFFFFFFFF || (v6 = v5 + 304, (unsigned int)(v5 + 304) < 0x130) )
  {
    v6 = 0;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2903);
  }
  v8 = (char *)Win32AllocPoolZInit(v6, 1835624789LL);
  if ( !v8 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2906);
  *(_DWORD *)v8 = 0;
  v10 = CTouchProcessor::CalcManipulationInputInfoSize(v7, v4);
  if ( v6 <= v10 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2911);
  CTouchProcessor::BuildManipulationInputInfo(v9, (struct tagMANIPULATION_INPUT_INFO *)(v8 + 8), v10, a2);
  InputTraceLogging::Pointer::SendFrameToUserMode(a2, v4, (const struct tagMANIPULATION_INPUT_INFO *)(v8 + 8));
  SendMessageTo(8LL, (__int64)v8);
  Win32FreePool((__int64)v8);
}
