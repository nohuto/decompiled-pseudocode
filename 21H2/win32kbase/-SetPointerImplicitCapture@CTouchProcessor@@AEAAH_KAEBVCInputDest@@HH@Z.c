/*
 * XREFs of ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01D6698
 * Callers:
 *     ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C01BDE40 (-AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01CD840 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C01D54BC (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerImplicitCapture(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        const struct CInputDest *a3,
        int a4,
        int a5)
{
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  return CTouchProcessor::SetPointerCapture(this, a2, (__int64)a3, 1, a4, a5);
}
