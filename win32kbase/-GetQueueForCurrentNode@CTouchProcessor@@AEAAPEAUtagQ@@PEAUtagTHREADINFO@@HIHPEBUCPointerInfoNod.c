/*
 * XREFs of ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00F295E
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01FB1D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C02038B0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C007D3C0 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00ABD88 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01FAD6C (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C01FBA30 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 */

struct tagQ *__fastcall CTouchProcessor::GetQueueForCurrentNode(
        struct _KTHREAD **this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const struct CPointerInfoNode *a6)
{
  unsigned int v6; // ebp
  int v7; // edi
  CPointerInfoNode *v9; // rbx
  CInputDest *Queue; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagTHREADINFO *ThreadInfo; // rax
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v6 = a4;
  v7 = a3;
  if ( this[5] != KeGetCurrentThread() )
  {
    v16 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11674);
  }
  v9 = a6;
  if ( (*(_DWORD *)a6 & 0x2000) != 0
    || !*((_QWORD *)a6 + 2)
    || a5 && !(unsigned int)CPointerInfoNode::IsMessageDelegated(a6, v6) )
  {
    return 0LL;
  }
  if ( !v7
    || (v16 = 0,
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&a6, (__int64)a2, a3, a4),
        Queue = CPointerInfoNode::GetQueue(v9, &v16),
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&a6, v11, v12, v13),
        !Queue)
    || (ThreadInfo = CInputDest::GetThreadInfo(Queue)) == 0LL )
  {
    ThreadInfo = a2;
  }
  return (struct tagQ *)*((_QWORD *)ThreadInfo + 54);
}
