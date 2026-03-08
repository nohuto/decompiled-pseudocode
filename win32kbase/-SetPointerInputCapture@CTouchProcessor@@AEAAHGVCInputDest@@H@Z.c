/*
 * XREFs of ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C020575C
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C01E9300 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00F2348 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01E364C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInputCapture(struct _KTHREAD **a1, unsigned __int16 a2, CInputDest *a3)
{
  unsigned int v3; // ebx
  struct CInputPointerNode *NodeById; // rax
  struct CInputPointerNode *v8; // rdi

  v3 = 0;
  if ( a1[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15047);
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15051);
  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  v8 = NodeById;
  if ( NodeById )
  {
    CInputDest::operator=((__int64)NodeById + 72, (__int64)a3);
    v3 = 1;
    *((_DWORD *)v8 + 75) = *((_DWORD *)v8 + 75) & 0xFFFFFF8F | 0x10;
  }
  CInputDest::SetEmpty(a3);
  return v3;
}
