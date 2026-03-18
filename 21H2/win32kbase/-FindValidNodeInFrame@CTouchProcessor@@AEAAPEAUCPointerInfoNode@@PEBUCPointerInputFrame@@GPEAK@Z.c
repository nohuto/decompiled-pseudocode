/*
 * XREFs of ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01C59E8
 * Callers:
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1C00DC800 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01BEA8C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C01C0B70 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C01CD4C0 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01D0D94 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7A4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01BE95C (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01C5758 (-FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::FindValidNodeInFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int16 a3,
        unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  CPointerInfoNode *NodeInFrame; // rax
  CPointerInfoNode *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v20[6]; // [rsp+20h] [rbp-18h] BYREF

  v20[0] = 0;
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, (__int64)a2, v10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  NodeInFrame = CTouchProcessor::FindNodeInFrame(this, a2, a3, v20);
  v15 = NodeInFrame;
  if ( !NodeInFrame || !(unsigned int)CPointerInfoNode::IsValid(NodeInFrame) )
    return 0LL;
  if ( *(_WORD *)(v17 + 172) != a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  if ( a4 )
    *a4 = v20[0];
  return v15;
}
