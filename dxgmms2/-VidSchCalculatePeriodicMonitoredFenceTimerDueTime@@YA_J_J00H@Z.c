/*
 * XREFs of ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C003D654
 * Callers:
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C003D700 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C003EA40 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchCalculatePeriodicMonitoredFenceTimerDueTime(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  LARGE_INTEGER v7; // r10
  unsigned __int64 v8; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v4 = a4;
  v7.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - a1;
  if ( is_mul_ok(v7.QuadPart, 0x989680uLL) )
    v8 = (unsigned __int64)v7.QuadPart
       * (unsigned __int128)0x989680uLL
       / (unsigned __int64)PerformanceFrequency.QuadPart;
  else
    v8 = 10000000 * (v7.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
       + 10000000 * (v7.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  return a3 + v8 - a2 * (v4 + 2);
}
