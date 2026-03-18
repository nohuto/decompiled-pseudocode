/*
 * XREFs of ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1C0001A68
 * Callers:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C0001180 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     HandleDeferredInput @ 0x1C0001240 (HandleDeferredInput.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C0168CB0 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardInputTelemetry::GetKeyboardInputLatency(__int64 a1)
{
  return 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - a1) / gliQpcFreq.QuadPart;
}
