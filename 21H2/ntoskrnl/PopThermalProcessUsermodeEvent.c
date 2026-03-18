/*
 * XREFs of PopThermalProcessUsermodeEvent @ 0x140990548
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x1405D04CC (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1405D0870 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceUsermodeThermalEvent @ 0x1409936AC (PopDiagTraceUsermodeThermalEvent.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x140993798 (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopSqmThermalUsermodeEvent @ 0x1409A0450 (PopSqmThermalUsermodeEvent.c)
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
      HIBYTE(word_140C22211) = 1;
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
