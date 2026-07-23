/*
 * XREFs of PpmEventStaticPolicyRundown @ 0x1408F2E14
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407D5560 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PpmEventStaticPolicyRundown()
{
  REGHANDLE v0; // rbx
  int v1; // r8d
  int v2; // [rsp+30h] [rbp-69h] BYREF
  int v3; // [rsp+34h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-59h] BYREF
  char *v5; // [rsp+50h] [rbp-49h]
  __int64 v6; // [rsp+58h] [rbp-41h]
  int *v7; // [rsp+60h] [rbp-39h]
  __int64 v8; // [rsp+68h] [rbp-31h]
  int *v9; // [rsp+70h] [rbp-29h]
  __int64 v10; // [rsp+78h] [rbp-21h]
  int *v11; // [rsp+80h] [rbp-19h]
  __int64 v12; // [rsp+88h] [rbp-11h]
  int *v13; // [rsp+90h] [rbp-9h]
  __int64 v14; // [rsp+98h] [rbp-1h]
  int *v15; // [rsp+A0h] [rbp+7h]
  __int64 v16; // [rsp+A8h] [rbp+Fh]
  int *v17; // [rsp+B0h] [rbp+17h]
  __int64 v18; // [rsp+B8h] [rbp+1Fh]
  int *v19; // [rsp+C0h] [rbp+27h]
  __int64 v20; // [rsp+C8h] [rbp+2Fh]
  int *v21; // [rsp+D0h] [rbp+37h]
  __int64 v22; // [rsp+D8h] [rbp+3Fh]

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_STATIC_POLICY_RUNDOWN) )
    {
      v1 = PpmPerfQosTransitionHysteresisOverride;
      UserData.Ptr = (ULONGLONG)&PpmPerfBoostAtGuaranteed;
      v2 = 0;
      *(_QWORD *)&UserData.Size = 4LL;
      if ( PpmPerfQosTransitionHysteresisOverride == -1 )
        v1 = PpmPerfQosTransitionHysteresis;
      v5 = &PpmPerfIdealAggressiveIncreaseThreshold;
      v3 = v1;
      v7 = &PpmPerfSingleStepSize;
      v6 = 4LL;
      v9 = &PpmPerfCalculateActualUtilization;
      v11 = &PpmPerfArtificialDomainEnabled;
      v13 = &v2;
      v15 = &PpmParkUseCoreGranularity;
      v17 = &PpmParkMultiparkGranularity;
      v19 = &PpmPerfQosManageIdleProcessors;
      v21 = &v3;
      v8 = 4LL;
      v10 = 4LL;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      EtwWrite(v0, &PPM_ETW_STATIC_POLICY_RUNDOWN, 0LL, 0xAu, &UserData);
    }
  }
}
