/*
 * XREFs of EtwpSetCompressionSettings @ 0x140600778
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpSetCompressionSettings(unsigned int *a1)
{
  unsigned int v2; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v4; // rax
  _DWORD *v5; // rsi
  volatile signed __int64 *v6; // rdi

  v2 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[54].Flink, *a1, 0LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = (volatile signed __int64 *)(v4 + 1144);
    ExAcquirePushLockExclusiveEx(v4 + 1144, 0LL);
    v5[294] = a1[1];
    v5[293] = a1[2];
    v5[295] = a1[3];
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    EtwpReleaseLoggerContext(v5, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
