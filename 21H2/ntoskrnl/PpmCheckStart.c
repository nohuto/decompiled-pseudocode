/*
 * XREFs of PpmCheckStart @ 0x140224A24
 * Callers:
 *     PpmCheckCustomRun @ 0x14022475C (PpmCheckCustomRun.c)
 *     PpmCheckPeriodicStart @ 0x140224980 (PpmCheckPeriodicStart.c)
 * Callees:
 *     PpmCheckRun @ 0x140224B50 (PpmCheckRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x140224EDC (PpmPerfSetAllDomainsToUpdate.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall PpmCheckStart(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  REGHANDLE v3; // rsi
  int v5; // edx
  int v6; // [rsp+48h] [rbp+7h] BYREF
  __int64 v7; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+17h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+27h]
  __int64 v10; // [rsp+70h] [rbp+2Fh]
  int *v11; // [rsp+78h] [rbp+37h]
  __int64 v12; // [rsp+80h] [rbp+3Fh]

  v1 = a1;
  PpmCheckCurrentPipelineId = a1;
  PpmCheckTime = RtlGetInterruptTimePrecise(&v7);
  v2 = 0;
  v7 = PpmCheckLastEffectiveExecutionTime;
  v6 = v1;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_START) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v10 = 8LL;
      v9 = &v7;
      v12 = 4LL;
      v11 = &v6;
      EtwWriteEx(v3, &PPM_ETW_PERF_CHECK_START, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8 * v1);
  if ( !PpmCheckPipeline )
    PpmCheckPipeline = *(_QWORD *)PpmCheckPipelines;
  PpmCheckPipelineIndex = 0;
  LOBYTE(v2) = (unsigned __int64)PpmPerfDeadlineBoostExpiration >= MEMORY[0xFFFFF78000000008];
  if ( PpmCheckLatencyBoostActive != (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008]
    || PpmCheckDeadlineBoostActive != v2 )
  {
    PpmPerfSetAllDomainsToUpdate();
    PpmCheckLatencyBoostActive = v5;
    PpmCheckDeadlineBoostActive = v2;
  }
  return PpmCheckRun(0LL, 0LL, 0LL, 0LL);
}
