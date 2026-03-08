/*
 * XREFs of ?CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z @ 0x1C0225DD4
 * Callers:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C0225CB4 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CSpatialProcessor::CheckAndUpdateLastPointerPositionEffectsTimestamp(
        CSpatialProcessor *this,
        __int64 a2)
{
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( a2 - *((_QWORD *)this + 2) <= PerformanceFrequency.QuadPart / 0x1EuLL )
    return 0;
  *((_QWORD *)this + 2) = a2;
  return 1;
}
