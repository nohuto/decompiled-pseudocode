/*
 * XREFs of PopInitializeHeteroProcessors @ 0x1407BB39C
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1407BAE90 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     PpmHeteroDetectHgsCores @ 0x1403C2568 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C25C4 (PpmHeteroUpdateHgsConfiguration.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x140566C38 (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PsEnumProcesses @ 0x1406A5350 (PsEnumProcesses.c)
 *     PpmEventHeteroPolicy @ 0x1407BB808 (PpmEventHeteroPolicy.c)
 *     PopConfigureHeteroPolicies @ 0x1407BB88C (PopConfigureHeteroPolicies.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407BBF98 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1407BC0C8 (PpmHeteroComputeRelativePerformance.c)
 *     KeConfigureHeteroProcessors @ 0x1408BA4B8 (KeConfigureHeteroProcessors.c)
 */

char __fastcall PopInitializeHeteroProcessors(__int64 a1, signed __int64 a2)
{
  char v2; // r12
  char v3; // bl
  char v4; // r14
  char v5; // r15
  unsigned __int8 v6; // si
  char *v7; // rbx
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  unsigned int v10; // edi
  unsigned __int8 v11; // al
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // r8
  char v15; // al
  ULONG ActiveProcessorCount; // eax
  _BYTE *v17; // rcx
  __int64 v18; // r8
  char v19; // al
  _WORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 Prcb; // rax
  __int16 v24; // cx
  char result; // al
  int v26; // [rsp+38h] [rbp-69h] BYREF
  __int16 v27; // [rsp+3Ch] [rbp-65h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-5Dh] BYREF
  unsigned __int16 *v30[2]; // [rsp+48h] [rbp-59h] BYREF
  __int16 v31; // [rsp+58h] [rbp-49h]
  int v32; // [rsp+5Ah] [rbp-47h]
  __int16 v33; // [rsp+5Eh] [rbp-43h]
  unsigned __int16 *v34[2]; // [rsp+60h] [rbp-41h] BYREF
  __int16 v35; // [rsp+70h] [rbp-31h]
  int v36; // [rsp+72h] [rbp-2Fh]
  __int16 v37; // [rsp+76h] [rbp-2Bh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  __int64 v39; // [rsp+88h] [rbp-19h]
  __int64 v40; // [rsp+90h] [rbp-11h]
  __int64 v41; // [rsp+98h] [rbp-9h]
  __int64 v42; // [rsp+A0h] [rbp-1h]
  __int64 v43; // [rsp+A8h] [rbp+7h]
  __int64 v44; // [rsp+B0h] [rbp+Fh]
  __int64 v45; // [rsp+B8h] [rbp+17h]
  __int64 v46; // [rsp+C0h] [rbp+1Fh]

  v2 = a1;
  v3 = 0;
  v4 = 1;
  if ( (PpmBackgroundProfile || PpmEntryLevelPerfProfile || PpmMultimediaQosProfile)
    && PpmPerfSchedulerDirectedPerfStatesSupported
    && KeQueryActiveProcessorCountEx(0) >= 2 )
  {
    v3 = 1;
  }
  v5 = v3;
  if ( PpmPerfVmQosSupported )
    v5 = 1;
  if ( !v5 || (v6 = 1, PpmPerfQosGroupPolicyDisable) )
    v6 = 0;
  if ( v2 )
  {
    v7 = (char *)PpmHeteroCapabilityTest;
    v8 = 0LL;
    if ( *(_DWORD *)PpmHeteroCapabilityTest )
    {
      do
      {
        a1 = (unsigned int)v8;
        v8 = (unsigned int)(v8 + 1);
        *(_WORD *)&v7[2 * a1 + 7 + a1] = 0;
      }
      while ( (unsigned int)v8 < *(_DWORD *)v7 );
    }
    PpmHeteroComputeRelativePerformance(a1, v8);
    PpmHeteroUpdateHgsConfiguration();
    v9 = PopDetectSimulatedHeteroProcessors(v7);
    v26 = v9;
    v10 = v9 != 0;
    if ( !v9 )
    {
      v11 = PpmHeteroDetectHgsCores((__int64)v7);
      v26 = v11;
      if ( v11 )
      {
        v10 = 5;
      }
      else
      {
        v32 = 0;
        v33 = 0;
        v28 = 0;
        if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses > 1u
          || (unsigned __int8)PpmHeteroHighestPerformanceClasses > 1u )
        {
          v30[1] = (unsigned __int16 *)qword_140C116A8;
          v31 = 0;
          v30[0] = (unsigned __int16 *)&PpmPerfStatesRegistered;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v28, v30) )
          {
            do
            {
              v13 = v28;
              v14 = *(_QWORD *)(KeGetPrcb(v28) + 33128);
              if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses <= 1u )
                v15 = *(_BYTE *)(v14 + 206);
              else
                v15 = *(_BYTE *)(v14 + 205);
              v7[2 * v13 + 8 + v13] = v15;
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v28, v30) );
            v4 = 1;
          }
          v7[5] = 1;
          v12 = 1;
        }
        else
        {
          v12 = 0;
        }
        v26 = v12;
        if ( v12 )
        {
          v10 = 3;
        }
        else if ( v6 )
        {
          v26 = 1;
          v10 = 4;
        }
      }
    }
    if ( v10 == PopHeteroSystem )
    {
      v4 = 0;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount )
      {
        v17 = v7 + 7;
        a2 = (_BYTE *)PpmHeteroCapability - v7;
        v18 = ActiveProcessorCount;
        do
        {
          if ( v17[a2] != *v17 || v17[a2 + 1] != v17[1] )
            v4 = 1;
          v17 += 3;
          --v18;
        }
        while ( v18 );
      }
    }
  }
  else
  {
    v10 = PopHeteroSystem;
    v7 = (char *)PpmHeteroCapability;
    v4 = 0;
    v26 = PopHeteroSystem != 0;
  }
  LOBYTE(a2) = v2;
  v19 = PopConfigureHeteroPolicies(v10, a2);
  if ( (v4 || v10 && v19 || PpmPerfQosSupportedAndAllowed != v6)
    && (unsigned int)KeConfigureHeteroProcessors(v7, v6, &v26) )
  {
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  }
  if ( v26 )
  {
    PopHeteroSystem = v10;
    if ( v7 != PpmHeteroCapability )
      memmove(PpmHeteroCapability, v7, 3 * (*(_DWORD *)v7 + 2));
    if ( v6 )
      PpmIdleEnableIdleDurationExpirationTimeout();
    goto LABEL_56;
  }
  v20 = PpmHeteroCapability;
  v21 = 0LL;
  PopHeteroSystem = 0;
  if ( *(_DWORD *)PpmHeteroCapability )
  {
    do
    {
      v22 = (unsigned int)v21;
      v21 = (unsigned int)(v21 + 1);
      *(_WORD *)((char *)&v20[v22 + 3] + v22 + 1) = 0;
      *((_BYTE *)&v20[v22 + 3] + v22) = 0;
      v20[2] = 0;
    }
    while ( (unsigned int)v21 < *(_DWORD *)v20 );
  }
  if ( v5 )
LABEL_56:
    PpmPerfQosSupportedAndConfigured = 1;
  if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 || PopHeteroSystem == 6 )
    PpmHeteroPolicy = 0;
  else
    PpmHeteroPolicy = PpmHeteroDesiredPolicy;
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = PopHeteroSystem != 0;
  v36 = 0;
  v37 = 0;
  v29 = 0;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE) )
  {
    v34[1] = (unsigned __int16 *)qword_140C113C8[0];
    v34[0] = (unsigned __int16 *)PpmCheckRegistered;
    v35 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v29, v34) )
    {
      Prcb = KeGetPrcb(v29);
      v24 = *(unsigned __int8 *)(Prcb + 208);
      UserData.Ptr = (ULONGLONG)&v27;
      v27 = v24;
      v43 = Prcb + 33209;
      v39 = Prcb + 209;
      v45 = Prcb + 33210;
      v41 = Prcb + 33208;
      *(_QWORD *)&UserData.Size = 2LL;
      v40 = 1LL;
      v42 = 1LL;
      v44 = 1LL;
      v46 = 1LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE, 0LL, 5u, &UserData);
    }
  }
  PpmEventHeteroPolicy(0LL, v20, v21);
  result = v4;
  PpmPerfQosSupportedAndAllowed = v6;
  return result;
}
