/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x1407968F8
 * Callers:
 *     WdipSemGetLoggerIds @ 0x140796868 (WdipSemGetLoggerIds.c)
 *     WmiQueryTraceInformation @ 0x140833D80 (WmiQueryTraceInformation.c)
 *     IopErrorLogThread @ 0x1408704E0 (IopErrorLogThread.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140692AB4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwQueryTraceHandleByLoggerName(__int64 a1, _QWORD *a2)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  const UNICODE_STRING *v4; // rdx
  unsigned int *v5; // rax
  __int16 v6; // cx

  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 || !a2 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = (unsigned int *)EtwpAcquireLoggerContextByLoggerName((__int64)CurrentServerSiloGlobals[54].Flink, v4, 0);
  if ( !v5 )
    return 3221226134LL;
  *a2 = 0LL;
  if ( *v5 )
    v6 = *(_WORD *)v5;
  else
    v6 = -1;
  *(_WORD *)a2 = v6;
  EtwpReleaseLoggerContext(v5, 0);
  return 0LL;
}
