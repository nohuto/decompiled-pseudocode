/*
 * XREFs of ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020FAF8
 * Callers:
 *     _lambda_41edca9c29f3f67839559e5a2032aaa2_::_lambda_invoker_cdecl_ @ 0x1C00E0290 (_lambda_41edca9c29f3f67839559e5a2032aaa2_--_lambda_invoker_cdecl_.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00E0308 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CPTPProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00E0830 (-ProcessInputOld@CPTPProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020CEEC (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C023B910 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::UpdateEnvironment(__int64 a1, char a2, struct tagHID_POINTER_DEVICE_INFO *a3)
{
  if ( (a2 & 1) != 0 )
    CPTPProcessor::BuildEnvironment((CPTPProcessor *)a1, a3);
  return PTPEngineTraceProducer::SetEnvironment(
           *(PTPEngineTraceProducer **)(a1 + 544),
           (const struct PTPEnvironment *)(a1 + 552));
}
