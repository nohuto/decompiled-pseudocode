/*
 * XREFs of EtwpGetCompressionSettings @ 0x140600518
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetCompressionSettings(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v6; // rax
  _DWORD *v7; // rsi
  signed __int64 *v8; // rdi

  v2 = *a1;
  v4 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v6 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[54].Flink, v2, 0LL);
  v7 = (_DWORD *)v6;
  if ( v6 )
  {
    *a2 = v2;
    v8 = (signed __int64 *)(v6 + 1144);
    ExAcquirePushLockSharedEx(v6 + 1144, 0LL);
    a2[1] = v7[294];
    a2[2] = v7[293];
    a2[3] = v7[295];
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    EtwpReleaseLoggerContext(v7, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
