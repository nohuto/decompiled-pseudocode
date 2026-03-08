/*
 * XREFs of PpmCheckStart @ 0x1402D1D84
 * Callers:
 *     PpmCheckCustomRun @ 0x1402D1B4C (PpmCheckCustomRun.c)
 *     PpmCheckPeriodicStart @ 0x1402D1CE0 (PpmCheckPeriodicStart.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x1402D1B24 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmCheckRun @ 0x1402D1EB0 (PpmCheckRun.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PpmCheckStart(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  REGHANDLE v3; // rsi
  int v5; // edx
  int v6; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v7; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  LARGE_INTEGER *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  int *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]

  v1 = a1;
  PpmCheckCurrentPipelineId = a1;
  PpmCheckTime = RtlGetInterruptTimePrecise(&v7);
  v2 = 0;
  v7.QuadPart = PpmCheckLastEffectiveExecutionTime;
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
      EtwWrite(v3, &PPM_ETW_PERF_CHECK_START, 0LL, 3u, &UserData);
    }
  }
  PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8 * v1);
  if ( !PpmCheckPipeline )
    PpmCheckPipeline = *(_QWORD *)PpmCheckPipelines;
  PpmCheckPipelineIndex = 0;
  LOBYTE(v2) = (unsigned __int64)PpmPerfDeadlineBoostExpiration >= MEMORY[0xFFFFF78000000008];
  if ( __PAIR64__(PpmCheckLatencyBoostActive, PpmCheckDeadlineBoostActive) != __PAIR64__(
                                                                                (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008],
                                                                                v2) )
  {
    PpmPerfSetAllDomainsToUpdate();
    PpmCheckLatencyBoostActive = v5;
    PpmCheckDeadlineBoostActive = v2;
  }
  return PpmCheckRun(0LL, 0LL, 0LL, 0LL);
}
