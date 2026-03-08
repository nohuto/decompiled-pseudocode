/*
 * XREFs of PpmEventStaticPolicyRundown @ 0x140995A14
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PpmEventStaticPolicyRundown()
{
  REGHANDLE v0; // rbx
  int v1; // ecx
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  int v3; // [rsp+34h] [rbp-CCh] BYREF
  int v4; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v6; // [rsp+50h] [rbp-B0h]
  __int64 v7; // [rsp+58h] [rbp-A8h]
  int *v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  int *v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  int *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  int *v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  int *v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  int *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  int *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  int *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  int *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  char *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  int *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  int *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_STATIC_POLICY_RUNDOWN) )
    {
      v1 = PpmPerfQosTransitionHysteresisOverride;
      UserData.Ptr = (ULONGLONG)&PpmPerfBoostAtGuaranteed;
      v2 = 0;
      v6 = &PpmPerfIdealAggressiveIncreaseThreshold;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = &PpmPerfSingleStepSize;
      v7 = 4LL;
      if ( PpmPerfQosTransitionHysteresisOverride == -1 )
        v1 = PpmPerfQosTransitionHysteresis;
      v10 = &PpmPerfCalculateActualUtilization;
      v12 = &PpmPerfArtificialDomainEnabled;
      v14 = &v2;
      v16 = &PpmParkSmtUnparkingPolicy;
      v18 = &PpmParkMultiparkGranularity;
      v20 = &PpmPerfQosManageIdleProcessors;
      v22 = &v3;
      v24 = &PpmHeteroFavoredCoreRotationTimeoutMs;
      v26 = &PpmParkGranularity;
      v4 = (unsigned __int8)PpmParkUnparkCores;
      v28 = &v4;
      v30 = &PpmHeteroMultiCoreClassesEnabled;
      v32 = &PpmHeteroMultiClassParkingEnabled;
      v3 = v1;
      v9 = 4LL;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 1LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      EtwWrite(v0, &PPM_ETW_STATIC_POLICY_RUNDOWN, 0LL, 0xFu, &UserData);
    }
  }
}
