/*
 * XREFs of ACPIThermalWorker @ 0x1C00962E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     ACPIThermalLoop @ 0x1C00410D8 (ACPIThermalLoop.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0041F9C (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalUpdateConstraints @ 0x1C004221C (ACPIThermalUpdateConstraints.c)
 *     WPP_RECORDER_SF_Dddqssdddd @ 0x1C0042658 (WPP_RECORDER_SF_Dddqssdddd.c)
 *     WPP_RECORDER_SF_Dqssdddd @ 0x1C004292C (WPP_RECORDER_SF_Dqssdddd.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C0042BA0 (WPP_RECORDER_SF_ddqssdddd.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     ACPIAmliEvaluateDsm @ 0x1C007C65C (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalBuildConstraints @ 0x1C0095638 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1C00957B8 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalCheckPolicySupport @ 0x1C0095848 (ACPIThermalCheckPolicySupport.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00958FC (ACPIThermalGetOverrideHandle.c)
 *     ACPIThermalGetParameter @ 0x1C00959A4 (ACPIThermalGetParameter.c)
 *     ACPIThermalReadTemperature @ 0x1C0095B94 (ACPIThermalReadTemperature.c)
 */

LONG __fastcall ACPIThermalWorker(union _LARGE_INTEGER *a1, int a2)
{
  int v2; // r12d
  LONG result; // eax
  union _LARGE_INTEGER v5; // r14
  _QWORD *QuadPart; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // r15
  __int64 v11; // rdx
  __int64 *v12; // rax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rdx
  __int64 *v15; // rax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rdx
  _WORD *v18; // rcx
  _WORD *v19; // rax
  __int64 v20; // r9
  __int16 v21; // dx
  void *v22; // r13
  union _LARGE_INTEGER v23; // rax
  union _LARGE_INTEGER v24; // rax
  union _LARGE_INTEGER v25; // rax
  void *v26; // r13
  int Parameter; // eax
  unsigned __int64 v28; // rcx
  int v29; // eax
  union _LARGE_INTEGER v30; // rax
  union _LARGE_INTEGER v31; // rax
  union _LARGE_INTEGER v32; // rax
  union _LARGE_INTEGER v33; // rax
  void *v34; // r12
  __int64 v35; // rdi
  union _LARGE_INTEGER v36; // rax
  __int64 v37; // r8
  int v38; // eax
  _QWORD *v39; // rcx
  unsigned __int64 v40; // rbx
  union _LARGE_INTEGER v41; // r13
  int v42; // eax
  unsigned __int64 v43; // rbx
  _QWORD *v44; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  union _LARGE_INTEGER Time; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER v48; // [rsp+90h] [rbp-70h]
  void *OverrideHandle; // [rsp+98h] [rbp-68h]
  unsigned int v50; // [rsp+A0h] [rbp-60h] BYREF
  int v51; // [rsp+A4h] [rbp-5Ch]
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  int v54; // [rsp+B8h] [rbp-48h]
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp-40h] BYREF
  struct _TIME_FIELDS v56; // [rsp+D0h] [rbp-30h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v58; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v59; // [rsp+100h] [rbp+0h]
  __int128 v60; // [rsp+110h] [rbp+10h]
  _DWORD v61[10]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v62[10]; // [rsp+148h] [rbp+48h] BYREF

  v51 = a2;
  Interval.QuadPart = 0LL;
  *(_QWORD *)&v60 = 0LL;
  DWORD2(v60) = 0;
  P = 0LL;
  v2 = a2;
  v50 = 0;
  v53 = 0LL;
  v46 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  result = MEMORY[0xFFFFF78000000008];
  v48.QuadPart = MEMORY[0xFFFFF78000000008];
  if ( (a2 & 0x2000) != 0 )
    result = ACPIThermalStopZoneWorker((__int64)a1);
  if ( (a1[24].LowPart & 0x8000000) == 0 )
  {
    v5 = a1[25];
    QuadPart = (_QWORD *)a1[95].QuadPart;
    v54 = v2 & 0x202;
    if ( (v2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5.QuadPart + 208));
    if ( (v2 & 0x10) == 0 )
      goto LABEL_30;
    qmemcpy(v61, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v61));
    *(_BYTE *)(v5.QuadPart + 273) = (int)ACPIThermalCheckPolicySupport((__int64)a1) >= 0;
    v7 = ACPIThermalCheckNativeTemperatureSupport((__int64)a1);
    *(_DWORD *)(v5.QuadPart + 100) = 1;
    v8 = 0;
    *(_BYTE *)(v5.QuadPart + 274) = v7 >= 0;
    do
    {
      v9 = AMLIGetNamedChild(QuadPart, v61[v8]);
      v10 = (volatile signed __int32 *)v9;
      if ( !v9 )
        break;
      ACPIThermalBuildConstraints(v9, (__int64)a1, 0, v8);
      AMLIDereferenceHandleEx(v10, v11);
      ++v8;
    }
    while ( v8 < 0xA );
    v12 = AMLIGetNamedChild(QuadPart, 1280528479);
    v13 = (volatile signed __int32 *)v12;
    if ( v12 )
    {
      ACPIThermalBuildConstraints(v12, (__int64)a1, 1, 1u);
      AMLIDereferenceHandleEx(v13, v14);
      *(_BYTE *)(v5.QuadPart + 33) = 1;
    }
    v15 = AMLIGetNamedChild(QuadPart, 1146770527);
    v2 = v51;
    v16 = (volatile signed __int32 *)v15;
    if ( v15 )
    {
      ACPIThermalBuildConstraints(v15, (__int64)a1, 1, 0);
      AMLIDereferenceHandleEx(v16, v17);
      *(_BYTE *)(v5.QuadPart + 33) = 1;
    }
    *(_QWORD *)(v5.QuadPart + 120) = AMLIGetNamedChild(QuadPart, 1230259295);
    if ( (int)ACPIGet((__int64)a1, 0x5254535Fu, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v50) < 0 )
      goto LABEL_30;
    if ( v50 <= 2 || (v50 & 1) != 0 )
      goto LABEL_27;
    v18 = P;
    if ( *((_WORD *)P + ((unsigned __int64)v50 >> 1) - 1) )
      goto LABEL_28;
    *(_OWORD *)(v5.QuadPart + 304) = 0LL;
    if ( !v18 )
      goto LABEL_26;
    v19 = v18;
    v20 = 0x7FFFLL;
    do
    {
      if ( !*v19 )
        break;
      ++v19;
      --v20;
    }
    while ( v20 );
    if ( v20 )
    {
      if ( v5.QuadPart == -304 )
        goto LABEL_27;
      v21 = 2 * (0x7FFF - v20);
      *(_QWORD *)(v5.QuadPart + 312) = v18;
      *(_WORD *)(v5.QuadPart + 304) = v21;
      *(_WORD *)(v5.QuadPart + 306) = v21 + 2;
    }
    if ( v20 )
    {
LABEL_26:
      v18 = 0LL;
      P = 0LL;
      goto LABEL_28;
    }
LABEL_27:
    v18 = P;
LABEL_28:
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
LABEL_30:
    if ( (v2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints((__int64)a1);
    if ( (v2 & 4) != 0 )
    {
      qmemcpy(v62, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v62));
      OverrideHandle = ACPIThermalGetOverrideHandle((__int64)a1);
      v22 = OverrideHandle;
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x3143545Fu, &v46);
      v23 = v48;
      *(_DWORD *)(v5.QuadPart + 4) = v46;
      Time = v23;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          TimeFields.Minute,
          TimeFields.Hour,
          0x17u,
          (__int64)Timeout);
      ACPIThermalGetParameter((__int64)a1, v22, 0x3243545Fu, &v46);
      *(_DWORD *)(v5.QuadPart + 8) = v46;
      Time = v48;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          TimeFields.Minute,
          TimeFields.Hour,
          0x18u,
          (__int64)Timeout);
      ACPIThermalGetParameter((__int64)a1, v22, 0x5653505Fu, &v46);
      *(_DWORD *)(v5.QuadPart + 20) = v46;
      *(union _LARGE_INTEGER *)&TimeFields.Year = v48;
      Time.QuadPart = (__int64)byte_1C00622D0;
      v56 = 0LL;
      RtlTimeToTimeFields((PLARGE_INTEGER)&TimeFields, &v56);
      v24 = a1[1];
      if ( (v24.QuadPart & 0x200000000000LL) != 0 )
        Time = a1[76];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5.QuadPart + 20) / 0xAu,
          *(_DWORD *)(v5.QuadPart + 20),
          0x19u,
          (__int64)Timeout);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x5452435Fu, &v46);
      *(_DWORD *)(v5.QuadPart + 28) = v46;
      *(union _LARGE_INTEGER *)&TimeFields.Year = v48;
      Time.QuadPart = (__int64)byte_1C00622D0;
      v56 = 0LL;
      RtlTimeToTimeFields((PLARGE_INTEGER)&TimeFields, &v56);
      v25 = a1[1];
      if ( (v25.QuadPart & 0x200000000000LL) != 0 )
        Time = a1[76];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5.QuadPart + 28) / 0xAu,
          *(_DWORD *)(v5.QuadPart + 28),
          0x1Au,
          (__int64)Timeout);
      v26 = OverrideHandle;
      Parameter = ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x5046545Fu, &v46);
      LODWORD(v28) = v46;
      *(_DWORD *)(v5.QuadPart + 332) = v46;
      if ( Parameter < 0 )
      {
        v29 = ACPIThermalGetParameter((__int64)a1, v26, 0x5053545Fu, &v46);
        v28 = v46;
        *(_DWORD *)(v5.QuadPart + 336) = v46;
        if ( v29 >= 0 )
        {
          v28 *= 100LL;
          v46 = v28;
        }
      }
      v30 = v48;
      *(_DWORD *)(v5.QuadPart + 12) = v28;
      *(union _LARGE_INTEGER *)&TimeFields.Year = v30;
      v56 = 0LL;
      RtlTimeToTimeFields((PLARGE_INTEGER)&TimeFields, &v56);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v56.Minute,
          v56.Hour,
          0x1Bu,
          (__int64)Timeout);
      ACPIThermalGetParameter((__int64)a1, v26, 0x3352435Fu, &v46);
      *(_DWORD *)(v5.QuadPart + 24) = v46;
      *(union _LARGE_INTEGER *)&TimeFields.Year = v48;
      Time.QuadPart = (__int64)byte_1C00622D0;
      v56 = 0LL;
      RtlTimeToTimeFields((PLARGE_INTEGER)&TimeFields, &v56);
      v31 = a1[1];
      if ( (v31.QuadPart & 0x200000000000LL) != 0 )
        Time = a1[76];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5.QuadPart + 24) / 0xAu,
          *(_DWORD *)(v5.QuadPart + 24),
          0x1Cu,
          (__int64)Timeout);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x544F485Fu, &v46);
      *(_DWORD *)(v5.QuadPart + 76) = v46;
      *(union _LARGE_INTEGER *)&TimeFields.Year = v48;
      Time.QuadPart = (__int64)byte_1C00622D0;
      v56 = 0LL;
      RtlTimeToTimeFields((PLARGE_INTEGER)&TimeFields, &v56);
      v32 = a1[1];
      if ( (v32.QuadPart & 0x200000000000LL) != 0 )
        Time = a1[76];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5.QuadPart + 76) / 0xAu,
          *(_DWORD *)(v5.QuadPart + 76),
          0x1Du,
          (__int64)Timeout);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x54544E5Fu, &v46);
      *(_DWORD *)(v5.QuadPart + 104) = v46;
      *(union _LARGE_INTEGER *)&TimeFields.Year = v48;
      Time.QuadPart = (__int64)byte_1C00622D0;
      v56 = 0LL;
      RtlTimeToTimeFields((PLARGE_INTEGER)&TimeFields, &v56);
      v33 = a1[1];
      if ( (v33.QuadPart & 0x200000000000LL) != 0 )
        Time = a1[76];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5.QuadPart + 104) / 0xAu,
          *(_DWORD *)(v5.QuadPart + 104),
          0x1Eu,
          (__int64)Timeout);
      v34 = OverrideHandle;
      v35 = 0LL;
      do
      {
        if ( (int)ACPIThermalGetParameter((__int64)a1, v34, v62[v35], &v46) < 0 )
          break;
        *(_DWORD *)(v5.QuadPart + 4 * v35 + 36) = v46;
        *(union _LARGE_INTEGER *)&TimeFields.Year = v48;
        Time.QuadPart = (__int64)byte_1C00622D0;
        v56 = 0LL;
        RtlTimeToTimeFields((PLARGE_INTEGER)&TimeFields, &v56);
        v36 = a1[1];
        if ( (v36.QuadPart & 0x200000000000LL) != 0 )
          Time = a1[76];
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v37 = *(unsigned int *)(v5.QuadPart + 4 * v35 + 36);
          WPP_RECORDER_SF_Dddqssdddd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            (unsigned int)v37 / 0xA,
            v37,
            (unsigned int)v56.Milliseconds,
            (int)Timeout);
        }
        v35 = (unsigned int)(v35 + 1);
      }
      while ( (unsigned int)v35 < 0xA );
      *(_BYTE *)(v5.QuadPart + 32) = v35;
      v38 = ACPIThermalGetParameter((__int64)a1, v34, 0x4C544D5Fu, &v46);
      v2 = v51;
      if ( v38 < 0
        && (*(_DWORD *)(v5.QuadPart + 128) & 2) != 0
        && (v39 = (_QWORD *)a1[95].QuadPart,
            v58 = 0LL,
            v59 = 0LL,
            v60 = 0LL,
            v56 = (struct _TIME_FIELDS)THRM_EXTENSIONS_DSM_UUID,
            (int)ACPIAmliEvaluateDsm(v39, (__int64)&v56, 0, 1u, &v58, &v53) >= 0) )
      {
        if ( *(_WORD *)(v53 + 2) == 1 )
          v40 = *(unsigned int *)(v53 + 16);
        else
          v40 = v46;
        AMLIFreeDataBuffs(v53);
      }
      else
      {
        v40 = v46;
      }
      v41 = v48;
      *(union _LARGE_INTEGER *)&TimeFields.Year = v48;
      if ( v40 > 0x64 )
        LODWORD(v40) = 100;
      *(_DWORD *)(v5.QuadPart + 80) = v40;
      v56 = 0LL;
      RtlTimeToTimeFields((PLARGE_INTEGER)&TimeFields, &v56);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v56.Minute,
          v56.Hour,
          0x20u,
          (__int64)Timeout);
      v42 = *(_DWORD *)(v5.QuadPart + 128);
      v43 = 0LL;
      v46 = 0LL;
      if ( (v42 & 8) != 0 )
      {
        v44 = (_QWORD *)a1[95].QuadPart;
        v58 = 0LL;
        v59 = 0LL;
        v60 = 0LL;
        v56 = (struct _TIME_FIELDS)THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v44, (__int64)&v56, 0, 3u, &v58, &v53) >= 0 )
        {
          if ( *(_WORD *)(v53 + 2) == 1 )
            v43 = *(unsigned int *)(v53 + 16);
          AMLIFreeDataBuffs(v53);
          if ( v43 > 0x64 )
            v43 = 100LL;
          v46 = v43;
        }
      }
      *(_DWORD *)(v5.QuadPart + 84) = v43;
      *(union _LARGE_INTEGER *)&TimeFields.Year = v41;
      v56 = 0LL;
      RtlTimeToTimeFields((PLARGE_INTEGER)&TimeFields, &v56);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v56.Minute,
          v56.Hour,
          0x21u,
          (__int64)Timeout);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x505A545Fu, &v46);
      *(_DWORD *)(v5.QuadPart + 88) = v46;
      *(union _LARGE_INTEGER *)&TimeFields.Year = v48;
      v56 = 0LL;
      RtlTimeToTimeFields((PLARGE_INTEGER)&TimeFields, &v56);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5.QuadPart + 88) / 0xAu,
          *(_DWORD *)(v5.QuadPart + 88) % 0xAu,
          0x22u,
          (__int64)Timeout);
    }
    if ( v54 )
    {
      if ( *(_BYTE *)(v5.QuadPart + 272) )
      {
        Interval.QuadPart = -10000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      KeWaitForSingleObject((PVOID)(v5.QuadPart + 248), Executive, 0, 0, 0LL);
      ACPIThermalLoop((__int64)a1, 0x4000000LL);
      if ( (v2 & 2) != 0 )
        ACPIThermalReadTemperature((__int64)a1, 1);
      if ( (v2 & 0x200) != 0 )
        ACPIThermalReadTemperature((__int64)a1, 0);
    }
    return ACPIThermalLoop((__int64)a1, (v2 & 0xFFFFFDFD) != 0 ? 1073742338 : 0x40000000);
  }
  return result;
}
