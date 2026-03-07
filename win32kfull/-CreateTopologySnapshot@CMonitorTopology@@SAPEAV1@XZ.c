struct CMonitorTopology *CMonitorTopology::CreateTopologySnapshot(void)
{
  char v0; // bl
  _DWORD *v1; // rax
  __int64 v2; // rcx
  _DWORD *v3; // rdi
  unsigned int v4; // r9d
  __int64 v5; // r8
  char v6; // dl
  _DWORD *v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  char v13; // dl
  __int64 v14; // r15
  _DWORD *v16; // r12
  int v17; // [rsp+20h] [rbp-D8h]
  int v18; // [rsp+28h] [rbp-D0h]
  int v19; // [rsp+30h] [rbp-C8h]
  int v20; // [rsp+38h] [rbp-C0h]
  _DWORD *v21; // [rsp+A0h] [rbp-58h]

  v0 = 1;
  if ( (unsigned int)(*(_DWORD *)*gpDispInfo - 1) > 0xFFFD )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 306LL);
  v1 = (_DWORD *)Win32AllocPoolZInit((unsigned int)(72 * (*(_DWORD *)*gpDispInfo - 1) + 88), 1919775573LL);
  v21 = v1;
  v3 = v1;
  if ( v1 )
  {
    *v1 = 1;
    v4 = dword_1C035C168 + 100 * (*(_DWORD *)SGDGetUserSessionState(v2) - dword_1C035C168 / 0x64u);
    v5 = (unsigned int)(dword_1C035C168 + 1);
    v3[1] = v4;
    dword_1C035C168 = v5;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v6 = 0;
    }
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v5,
        (__int64)gFullLog,
        4u,
        0x17u,
        0x10u,
        (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids,
        v4);
    v7 = v3 + 4;
    v8 = 0;
    v3[2] = *(_DWORD *)*gpDispInfo;
    v9 = *(_QWORD *)(gpDispInfo + 104LL);
    while ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 40);
      if ( (*(_DWORD *)(v10 + 24) & 1) != 0 )
      {
        *(_OWORD *)(v7 + 2) = *(_OWORD *)(v10 + 28);
        *(_OWORD *)(v7 + 6) = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 44LL);
        *((_WORD *)v7 + 20) = *(_WORD *)(*(_QWORD *)(v9 + 40) + 60LL);
        v7[17] = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(gpDispInfo + 104LL) + 40LL) + 62LL);
        if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(gpDispInfo + 104LL) + 40LL) + 62LL) != *(_WORD *)(*(_QWORD *)(v9 + 40)
                                                                                                + 62LL) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 358LL);
        v11 = *(_QWORD *)(*(_QWORD *)(gpDispInfo + 104LL) + 40LL);
        if ( *(_WORD *)(v11 + 62) > *(_WORD *)(*(_QWORD *)(v9 + 40) + 60LL) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 360LL);
        if ( (unsigned int)HdevFromMonitor(v9, v11, v5) != -1 )
          *(_QWORD *)v7 = *(_QWORD *)v9;
        CMonitorTopology::GetMonitorId((struct tagMONITOR *)v9, (struct CMonitorTopology::MonitorId *)(v7 + 11));
        v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dqddddddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v5,
            v12,
            v17,
            v18,
            v19,
            v20);
        v14 = v8;
        if ( BYTE1(v3[18 * v8 + 20]) && v8 )
        {
          v16 = v3 + 15;
          do
          {
            if ( (unsigned __int8)AreHashesEqual(v16, &v3[18 * v8 + 15], v5) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 392LL);
            v16 += 18;
            --v14;
          }
          while ( v14 );
          v3 = v21;
        }
        ++v8;
      }
      v9 = *(_QWORD *)(v9 + 56);
      v7 += 18;
    }
    if ( v3[2] != v8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 399LL);
    if ( !v3[2] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 400LL);
    return (struct CMonitorTopology *)v3;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v0 = 0;
    }
    if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v0,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        2u,
        0x17u,
        0xFu,
        (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids,
        *(_DWORD *)*gpDispInfo);
    return 0LL;
  }
}
