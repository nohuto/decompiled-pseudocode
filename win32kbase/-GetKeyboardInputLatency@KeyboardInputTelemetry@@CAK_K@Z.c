/*
 * XREFs of ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1C0006668
 * Callers:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C0005824 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     HandleDeferredInput @ 0x1C0006160 (HandleDeferredInput.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@SAXPEAUtagQMSG@@_N@Z @ 0x1C00065D8 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@SAXPEAUtagQMSG@@_N@Z.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C017DAEC (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardInputTelemetry::GetKeyboardInputLatency(__int64 a1)
{
  return 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - a1) / gliQpcFreq.QuadPart;
}
