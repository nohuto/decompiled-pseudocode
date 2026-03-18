/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x1407E5CC4
 * Callers:
 *     WdipSemGetLoggerIds @ 0x1407E5C34 (WdipSemGetLoggerIds.c)
 *     WmiQueryTraceInformation @ 0x140833A30 (WmiQueryTraceInformation.c)
 *     IopErrorLogThread @ 0x140872A00 (IopErrorLogThread.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD7EC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE208 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwQueryTraceHandleByLoggerName(__int64 a1, _QWORD *a2)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  const UNICODE_STRING *v4; // rdx
  unsigned int *v5; // rax
  __int16 v6; // cx

  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 || !a2 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = (unsigned int *)EtwpAcquireLoggerContextByLoggerName(CurrentServerSiloGlobals[108], v4, 0);
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
