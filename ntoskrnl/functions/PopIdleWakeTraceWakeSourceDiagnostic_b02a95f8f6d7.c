void __fastcall PopIdleWakeTraceWakeSourceDiagnostic(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // ecx
  ULONGLONG v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  REGHANDLE v12; // rcx
  REGHANDLE v13; // rbx
  unsigned int v14; // r8d
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v16[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v17[384]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE *v19; // [rsp+1D0h] [rbp+D0h]
  __int64 v20; // [rsp+1D8h] [rbp+D8h]
  _BYTE *v21; // [rsp+1E0h] [rbp+E0h]
  __int64 v22; // [rsp+1E8h] [rbp+E8h]
  _BYTE *v23; // [rsp+1F0h] [rbp+F0h]
  __int64 v24; // [rsp+1F8h] [rbp+F8h]
  _BYTE *v25; // [rsp+200h] [rbp+100h]
  __int64 v26; // [rsp+208h] [rbp+108h]
  _DWORD *v27; // [rsp+210h] [rbp+110h]
  __int64 v28; // [rsp+218h] [rbp+118h]
  __int64 v29; // [rsp+220h] [rbp+120h]
  unsigned int v30; // [rsp+228h] [rbp+128h]
  int v31; // [rsp+22Ch] [rbp+12Ch]
  __int64 v32; // [rsp+230h] [rbp+130h]
  __int64 v33; // [rsp+238h] [rbp+138h]

  v16[0] = 0;
  memset(v17, 0, 0x174uLL);
  v15 = 0;
  PopIdleWakeSendDripsWakeSourceTelemetry(a1, a2, 0);
  PopIdleWakeSendDripsWakeSourceTelemetry(a1, a2, 1);
  if ( PopDiagSleepStudyHandleRegistered
    && EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_DRIPS_WAKE_ACCOUNTING) )
  {
    PopIdleWakeCalculateConvergedBuckets(a2, (__int64)v17);
    v4 = *(unsigned __int16 *)(a2 + 768);
    v15 = PopWnfCsEnterScenarioId;
    v5 = 8;
    v30 = v4;
    UserData.Ptr = (ULONGLONG)&v15;
    v19 = v17;
    v21 = &v17[8];
    v23 = &v17[16];
    v25 = &v17[24];
    v16[0] = v4 >> 1;
    v27 = v16;
    v29 = *(_QWORD *)(a2 + 776);
    v6 = *(unsigned __int16 *)(a2 + 840);
    *(_QWORD *)&UserData.Size = 1LL;
    v20 = 4LL;
    v22 = 8LL;
    v24 = 8LL;
    v26 = 8LL;
    v28 = 4LL;
    v31 = 0;
    v32 = a2 + 840;
    v33 = 2LL;
    if ( (_WORD)v6 )
    {
      v7 = a2 + 844;
      v8 = v6;
      do
      {
        v9 = 2LL * v5;
        *(&UserData.Ptr + v9) = v7 - 2;
        *((_QWORD *)&UserData.Size + v9) = 2LL;
        v10 = 2LL * (v5 + 1);
        v5 += 2;
        *(&UserData.Ptr + v10) = v7;
        v7 += 10LL;
        *((_QWORD *)&UserData.Size + v10) = 8LL;
        --v8;
      }
      while ( v8 );
    }
    v11 = 2LL * v5;
    *(&UserData.Ptr + v11) = (ULONGLONG)&PopWnfCsEnterScenarioId;
    v12 = PopDiagSleepStudyHandle;
    *((_QWORD *)&UserData.Size + v11) = 8LL;
    EtwWrite(v12, &SLEEPSTUDY_EVT_SCENARIO_DRIPS_WAKE_ACCOUNTING, 0LL, v5 + 1, &UserData);
  }
  if ( PopDiagHandleRegistered )
  {
    v13 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DRIPS_WAKE_SOURCE_MAPPING) )
    {
      v14 = *(unsigned __int16 *)(a2 + 768);
      UserData.Ptr = a2 + 4;
      v22 = v14;
      v16[0] = v14 >> 1;
      *(_QWORD *)&UserData.Size = 4LL;
      v19 = v16;
      v21 = *(_BYTE **)(a2 + 776);
      v20 = 4LL;
      EtwWrite(v13, &POP_ETW_EVENT_DRIPS_WAKE_SOURCE_MAPPING, 0LL, 3u, &UserData);
    }
  }
}
