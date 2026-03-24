/*
 * XREFs of EtwShutdown @ 0x140774A14
 * Callers:
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 *     PspDeleteExternalServerSiloState @ 0x140906288 (PspDeleteExternalServerSiloState.c)
 *     PopGracefulShutdown @ 0x1409B10A0 (PopGracefulShutdown.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x1406BC818 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BC864 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStopTrace @ 0x14071185C (EtwpStopTrace.c)
 *     EtwpFlushCoverage @ 0x140774B24 (EtwpFlushCoverage.c)
 *     EtwpTraceSystemShutdown @ 0x140937AD4 (EtwpTraceSystemShutdown.c)
 */

void __fastcall EtwShutdown(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool IsCurrentThreadInServerSilo; // al
  bool v7; // si
  __int16 v8; // bx
  unsigned int *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v12[22]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = a1;
  v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 108);
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo(v5, v4);
  v7 = IsCurrentThreadInServerSilo;
  if ( !v2 )
  {
    if ( !IsCurrentThreadInServerSilo )
      EtwpTraceSystemShutdown();
    *(_DWORD *)(v3 + 4068) = 1;
  }
  if ( !v7 )
    EtwpFlushCoverage();
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[0]) = 176;
  v8 = *(_WORD *)(v3 + 16);
  HIDWORD(v12[5]) = 0x20000;
  while ( --v8 >= 0 )
  {
    v9 = EtwpAcquireLoggerContextByLoggerId(v3, v8, 0);
    if ( v9 )
    {
      if ( v7 )
        goto LABEL_19;
      if ( v2 )
      {
        if ( (v9[3] & 0x400000) == 0 )
          goto LABEL_8;
LABEL_19:
        if ( v8 )
          LOWORD(v12[1]) = v8;
        else
          LOWORD(v12[1]) = -1;
        *(_OWORD *)&v12[3] = *(_OWORD *)(v9 + 73);
        EtwpReleaseLoggerContext(v9, 0);
        if ( !v2 )
          ++EtwpStopTraceCount;
        LOBYTE(v10) = 1;
        EtwpStopTrace(v3, (__int64)v12, v10, v11);
      }
      else
      {
        if ( (v9[3] & 0x400) == 0 )
          goto LABEL_19;
LABEL_8:
        EtwpReleaseLoggerContext(v9, 0);
      }
    }
  }
  if ( !v2 )
    EtwpStopTraceCount = 0;
}
