/*
 * XREFs of ?InitializeInputSensors@@YAJXZ @ 0x1C01B1B88
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x1C01B1D90 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0088DB0 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00A2F70 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sd @ 0x1C01ADEF0 (WPP_RECORDER_SF_sd.c)
 */

__int64 InitializeInputSensors(void)
{
  CMouseSensor **v0; // rsi
  unsigned int v1; // edi
  CBaseInput **v2; // rbx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int16 v7; // r9
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+30h] [rbp-38h]

  v0 = &qword_1C0245018;
  v1 = 0;
  v2 = &qword_1C0245018;
  while ( 1 )
  {
    v3 = *((_DWORD *)v2 - 2);
    if ( v3 != 2 )
    {
      if ( v3 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 289);
      goto LABEL_7;
    }
    v4 = CBaseInput::InitializeSensor(*v2);
    v5 = (unsigned int)v4;
    if ( v4 < 0 )
      break;
    v6 = CBaseInput::RegisterDispatcherObject(*v2, gpIOCPDispatcher);
    v5 = (unsigned int)v6;
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v7 = 21;
      goto LABEL_13;
    }
LABEL_7:
    ++v1;
    v2 += 6;
    if ( v1 >= 3 )
      goto LABEL_14;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_14;
  v7 = 20;
LABEL_13:
  v14 = v5;
  WPP_RECORDER_SF_sd(
    v5,
    2u,
    3u,
    v7,
    (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids,
    (const char *)s_rgSensorMap[6 * v1 + 5],
    v14);
LABEL_14:
  v8 = 0;
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)*v0 + 16LL))(*v0);
    v11 = v9;
    if ( v9 < 0 )
      break;
    ++v8;
    v0 += 6;
    if ( v8 >= 3 )
      return v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v9;
    WPP_RECORDER_SF_sd(
      v10,
      2u,
      3u,
      0x16u,
      (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids,
      (const char *)s_rgSensorMap[6 * v8 + 5],
      v13);
  }
  return v11;
}
