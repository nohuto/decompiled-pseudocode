/*
 * XREFs of ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C01D7110
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C01BDF70 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInputCapture(struct _KTHREAD **a1, __int64 a2, CInputDest *a3)
{
  unsigned __int16 v4; // bp
  unsigned int v6; // ebx
  struct CInputPointerNode *NodeById; // rax
  struct CInputPointerNode *v8; // rsi

  v4 = a2;
  if ( a1[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = 0;
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, v4, 0, 0);
  v8 = NodeById;
  if ( NodeById )
  {
    CInputDest::operator=((__int64)NodeById + 72, (__int64)a3);
    v6 = 1;
    *((_DWORD *)v8 + 75) = *((_DWORD *)v8 + 75) & 0xFFFFFF8F | 0x10;
  }
  CInputDest::SetEmpty(a3);
  return v6;
}
