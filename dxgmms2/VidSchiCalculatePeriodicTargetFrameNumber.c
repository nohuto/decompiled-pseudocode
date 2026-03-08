/*
 * XREFs of VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C003A394
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C003B0C4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C003D700 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0017488 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 */

__int64 __fastcall VidSchiCalculatePeriodicTargetFrameNumber(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        struct _VIDSCH_GLOBAL *a5,
        __int64 a6)
{
  __int64 v7; // rdi
  LARGE_INTEGER v11; // r9
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r14
  struct _VIDSCH_GLOBAL *v14; // rbx
  unsigned __int64 CurrentVSyncPeriodQpc; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  unsigned __int128 v18; // rax
  unsigned __int64 v19; // kr10_8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( is_mul_ok(v11.QuadPart, 0x989680uLL) )
    v12 = (unsigned __int64)v11.QuadPart
        * (unsigned __int128)0x989680uLL
        / (unsigned __int64)PerformanceFrequency.QuadPart;
  else
    v12 = 10000000 * (v11.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
        + 10000000 * (v11.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  if ( is_mul_ok(a2, 0x989680uLL) )
    v13 = a2 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
  else
    v13 = 10000000 * (a2 / PerformanceFrequency.QuadPart)
        + 10000000 * (a2 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  v14 = a5;
  CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a5, *(_DWORD *)(a6 + 24), 0);
  v16 = *((_QWORD *)v14 + 328);
  v17 = CurrentVSyncPeriodQpc;
  v19 = CurrentVSyncPeriodQpc;
  v18 = CurrentVSyncPeriodQpc * (unsigned __int128)0x989680uLL;
  if ( is_mul_ok(v19, 0x989680uLL) )
    v20 = v18 / v16;
  else
    v20 = 10000000 * (v17 / v16) + 10000000 * (v17 % v16) / v16;
  v21 = v13 + (v20 >> 1) - *(_QWORD *)(a1 + 16);
  if ( v12 > v21 )
  {
    if ( v12 > v20 + v21 )
    {
      *a4 = 1;
      v7 = 2LL;
    }
    else
    {
      *a4 = 0;
      v7 = 1LL;
    }
  }
  else
  {
    *a4 = -1;
  }
  return v7 + a3;
}
