/*
 * XREFs of EtwShutdown @ 0x1409DFD2C
 * Callers:
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PspDeleteExternalServerSiloState @ 0x1409A9DE8 (PspDeleteExternalServerSiloState.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 *     EtwpTraceSystemShutdown @ 0x1409E40C4 (EtwpTraceSystemShutdown.c)
 *     EtwpFlushCoverage @ 0x1409E5BAC (EtwpFlushCoverage.c)
 */

void __fastcall EtwShutdown(char a1)
{
  struct _LIST_ENTRY *Flink; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool IsCurrentThreadInServerSilo; // al
  bool v6; // bp
  unsigned __int16 v7; // bx
  unsigned int *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v11[22]; // [rsp+20h] [rbp-D8h] BYREF

  Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo(v4, v3);
  v6 = IsCurrentThreadInServerSilo;
  if ( !a1 )
  {
    if ( !IsCurrentThreadInServerSilo )
      EtwpTraceSystemShutdown();
    HIDWORD(Flink[254].Flink) = 1;
  }
  if ( !v6 )
    EtwpFlushCoverage();
  memset(v11, 0, sizeof(v11));
  LODWORD(v11[0]) = 176;
  v7 = (unsigned __int16)Flink[1].Flink;
  HIDWORD(v11[5]) = 0x20000;
  while ( (--v7 & 0x8000u) == 0 )
  {
    v8 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v7, 0);
    if ( v8 )
    {
      if ( v6 )
        goto LABEL_12;
      if ( a1 )
      {
        if ( (v8[3] & 0x400000) == 0 )
          goto LABEL_15;
LABEL_12:
        if ( v7 )
          LOWORD(v11[1]) = v7;
        else
          LOWORD(v11[1]) = -1;
        *(_OWORD *)&v11[3] = *(_OWORD *)(v8 + 69);
        EtwpReleaseLoggerContext(v8, 0);
        if ( !a1 )
          ++EtwpStopTraceCount;
        LOBYTE(v9) = 1;
        EtwpStopTrace((__int64)Flink, (__int64)v11, v9, v10);
      }
      else
      {
        if ( (v8[3] & 0x400) == 0 )
          goto LABEL_12;
LABEL_15:
        EtwpReleaseLoggerContext(v8, 0);
      }
    }
  }
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
