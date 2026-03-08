/*
 * XREFs of PopThermalProcessUsermodeEvent @ 0x140987DC8
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x14058D4A8 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopThermalWriteShutdownToRegistry @ 0x14058DC80 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceUsermodeThermalEvent @ 0x14098F074 (PopDiagTraceUsermodeThermalEvent.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x14098F160 (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopSqmThermalUsermodeEvent @ 0x14099DE7C (PopSqmThermalUsermodeEvent.c)
 */

__int64 __fastcall PopThermalProcessUsermodeEvent(__int64 a1)
{
  __int64 v2; // r9
  __int16 v3; // ax
  _WORD v5[2]; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+34h] [rbp-14h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v6 = 0;
  PopDiagTraceUsermodeThermalEvent();
  PopThermalEventTransitionDisableDeepSleep(*(_DWORD *)a1);
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      PopDiagTraceUsermodeTripPointExceeded(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), 0LL);
      PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 0);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
      byte_140C3C432 = 1;
      PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
    }
  }
  else
  {
    LOBYTE(v2) = 1;
    PopDiagTraceUsermodeTripPointExceeded(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), v2);
    PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 1);
    v3 = 2 * *(_WORD *)(a1 + 12);
    v7 = a1 + 14;
    v5[0] = v3;
    v5[1] = v3;
    PopThermalWriteShutdownToRegistry((__int64)v5, (void *)(a1 + 4));
  }
  return 0LL;
}
